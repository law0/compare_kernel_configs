#include <iostream>
#include <fstream>
#include <map>
#include <utility>
#include <vector>

#include <assert.h>
#include <errno.h>


using namespace std;
static const string kConfig("CONFIG");
static const string kHashtagConfig("# CONFIG");
static const string kYes("=y");
static const string kModule("=m");
static const string kNotSet(" is not set");

void parseFileInner(map<string, pair<int, vector<string>>>& configs, ifstream& file, int file_flag_number, size_t& longest_line) {
    string line;
    size_t pos(0);
    bool is_commented(false);

    while (!file.eof()) {
        getline(file, line);
        is_commented = line.compare(0, 8, kHashtagConfig) == 0;
        if (!line.compare(0, 6, kConfig) == 0 && !is_commented) {
            continue;
        }

        longest_line = max(longest_line, line.size());
      
        // magic of operator[] for map
        // if key is not found, it initialize it like it would call:
        // *((this->insert(make_pair(k,mapped_type()))).first)).second
        // Here our value field is a pair, that is default initialized (again via make_pair)
        // which auto initialize the "first" member (int) to zero and not garbage
        // which authorize us to do p.first |= file_flag_number
        if (is_commented) {
            pos = line.rfind(kNotSet);
            if (pos != string::npos)
                pos -= 2; // "# "
            auto& p = configs[line.substr(2, pos)];
            p.first |= file_flag_number;
            p.second.push_back(kNotSet);

        } else if ((pos = line.rfind(kYes)) != string::npos) {
            auto& p = configs[line.substr(0, pos)];
            p.first |= file_flag_number;
            p.second.push_back(kYes);

        } else if ((pos = line.rfind(kModule)) != string::npos) {
            auto& p = configs[line.substr(0, pos)];
            p.first |= file_flag_number;
            p.second.push_back(kModule);

        } else { //start by CONFIG, not =y, not =m, not is_commented
            pos = line.find("=");
            auto& p = configs[line.substr(0, pos)];
            p.first |= file_flag_number;
            if (pos != string::npos)
                p.second.push_back(line.substr(pos));
            else
                p.second.push_back("");
        }
    }
}

//configs["CONFIG_TRUC"] = ({1=file1, 2=file2, 3=both}, vector_of_strings)
map<string, pair<int, vector<string>>> toHashMap(ifstream& file_1, ifstream& file_2, size_t& longest_line) {
    map<string, pair<int, vector<string>>> configs;

    parseFileInner(configs, file_1, 1, longest_line);
    parseFileInner(configs, file_2, 2, longest_line);

    return configs;
}

int main(int argc, char** argv) {
    if (argc < 3) {
        return EINVAL;
    }

    string filename_1(argv[1]);
    string filename_2(argv[2]);
    ifstream file_1(filename_1, ios_base::in);
    ifstream file_2(filename_2, ios_base::in);

    if (!file_1.good()) return ENOENT;
    if (!file_2.good()) return ENOENT;

    size_t longest_line = 0;
    auto configs = toHashMap(file_1, file_2, longest_line);
    longest_line += kNotSet.size();
    string config;
    size_t len = 0;
    for (auto p : configs) {
        config = p.first;
        auto status = p.second;

        switch (status.first) {
            case 1: //file 1
                assert(status.second.size() == 1);

                len = config.size() + status.second[0].size();
                cout << config << status.second[0] << string(longest_line - len, ' ') << " :" << endl;
                break;

            case 2: //file 2
                assert(status.second.size() == 1);

                cout << string(longest_line + 1, ' ') << ": " << config << status.second[0] << endl;
                break;

            case 3: // both
                assert(status.second.size() == 2);

                if (status.second[0] != status.second[1]) {
                    len = config.size() + status.second[0].size();
                    cout << config << status.second[0] << string(longest_line - len, ' ') << " : " << config << status.second[1] << endl;
                } 
                break;

            default:
                //silent error
                break;
        }
    } 

    return 0;
}

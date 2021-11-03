# Compare two kernel configs
-------
Compare two kernel configs, printing only different configs
<details>
<summary>Example, click to expand !</summary>

```
$ ./diffconfigs collie_defconfig corgi_defconfig 
                                                     : CONFIG_ARCH_PXA=y
CONFIG_ARCH_SA1100=y                                 :
                                                     : CONFIG_BACKLIGHT_CLASS_DEVICE=y
CONFIG_BASE_FULL is not set                          :
                                                     : CONFIG_BINFMT_AOUT=m
                                                     : CONFIG_BINFMT_MISC=m
                                                     : CONFIG_BLK_DEV_BSG is not set
CONFIG_BLK_DEV_INITRD=y                              :
CONFIG_BLK_DEV_RAM=y                                 :
CONFIG_BLK_DEV_RAM_SIZE=1024                         :
                                                     : CONFIG_BLK_DEV_SR=m
                                                     : CONFIG_BSD_PROCESS_ACCT=y
                                                     : CONFIG_BT=m
                                                     : CONFIG_BT_BNEP=m
                                                     : CONFIG_BT_BNEP_MC_FILTER=y
                                                     : CONFIG_BT_BNEP_PROTO_FILTER=y
                                                     : CONFIG_BT_HCIBCM203X=m
                                                     : CONFIG_BT_HCIBFUSB=m
                                                     : CONFIG_BT_HCIBLUECARD=m
                                                     : CONFIG_BT_HCIBPA10X=m
                                                     : CONFIG_BT_HCIBT3C=m
                                                     : CONFIG_BT_HCIBTUART=m
                                                     : CONFIG_BT_HCIDTL1=m
                                                     : CONFIG_BT_HCIUART=m
                                                     : CONFIG_BT_HCIUART_BCSP=y
                                                     : CONFIG_BT_HCIUART_H4=y
                                                     : CONFIG_BT_HCIVHCI=m
                                                     : CONFIG_BT_HIDP=m
                                                     : CONFIG_BT_RFCOMM=m
                                                     : CONFIG_BT_RFCOMM_TTY=y
                                                     : CONFIG_CHR_DEV_OSST=m
                                                     : CONFIG_CHR_DEV_SG=m
                                                     : CONFIG_CHR_DEV_ST=m
                                                     : CONFIG_CRAMFS=m
                                                     : CONFIG_CRYPTO_AES=m
                                                     : CONFIG_CRYPTO_ANSI_CPRNG is not set
                                                     : CONFIG_CRYPTO_ANUBIS=m
                                                     : CONFIG_CRYPTO_ARC4=m
                                                     : CONFIG_CRYPTO_BLOWFISH=m
                                                     : CONFIG_CRYPTO_CAST5=m
                                                     : CONFIG_CRYPTO_CAST6=m
                                                     : CONFIG_CRYPTO_ECB=m
                                                     : CONFIG_CRYPTO_HMAC=y
                                                     : CONFIG_CRYPTO_KHAZAD=m
                                                     : CONFIG_CRYPTO_MD4=m
                                                     : CONFIG_CRYPTO_MICHAEL_MIC=m
                                                     : CONFIG_CRYPTO_NULL=m
                                                     : CONFIG_CRYPTO_SERPENT=m
                                                     : CONFIG_CRYPTO_SHA256=m
                                                     : CONFIG_CRYPTO_SHA512=m
                                                     : CONFIG_CRYPTO_TEA=m
                                                     : CONFIG_CRYPTO_TEST=m
                                                     : CONFIG_CRYPTO_TWOFISH=m
                                                     : CONFIG_CRYPTO_WP512=m
CONFIG_DEBUG_BUGVERBOSE is not set                   :
                                                     : CONFIG_DEBUG_LL=y
CONFIG_DEBUG_MUTEXES=y                               :
                                                     : CONFIG_DEBUG_PREEMPT is not set
CONFIG_DETECT_SOFTLOCKUP is not set                  :
CONFIG_DNOTIFY is not set                            :
CONFIG_EPOLL is not set                              :
                                                     : CONFIG_EXT2_FS=y
CONFIG_FB_MODE_HELPERS=y                             :
CONFIG_FB_SA1100=y                                   :
                                                     : CONFIG_FB_W100=y
                                                     : CONFIG_FONT_8x16=y
                                                     : CONFIG_FONT_8x8=y
CONFIG_FONT_MINI_4x6=y                               :
CONFIG_FRAMEBUFFER_CONSOLE_ROTATION=y                :
                                                     : CONFIG_FTRACE is not set
                                                     : CONFIG_HID_A4TECH=m
                                                     : CONFIG_HID_APPLE=m
                                                     : CONFIG_HID_BELKIN=m
                                                     : CONFIG_HID_CHERRY=m
                                                     : CONFIG_HID_CHICONY=m
                                                     : CONFIG_HID_CYPRESS=m
                                                     : CONFIG_HID_EZKEY=m
                                                     : CONFIG_HID_GYRATION=m
                                                     : CONFIG_HID_LOGITECH=m
                                                     : CONFIG_HID_MICROSOFT=m
                                                     : CONFIG_HID_MONTEREY=m
                                                     : CONFIG_HID_PANTHERLORD=m
                                                     : CONFIG_HID_PETALYNX=m
                                                     : CONFIG_HID_SAMSUNG=m
                                                     : CONFIG_HID_SONY=m
                                                     : CONFIG_HID_SUNPLUS=m
CONFIG_HWMON is not set                              :
                                                     : CONFIG_I2C=y
                                                     : CONFIG_I2C_PXA=y
                                                     : CONFIG_INET6_AH=m
                                                     : CONFIG_INET6_ESP=m
                                                     : CONFIG_INET6_IPCOMP=m
                                                     : CONFIG_INPUT_FF_MEMLESS=m
                                                     : CONFIG_INPUT_MISC=y
                                                     : CONFIG_INPUT_UINPUT=m
CONFIG_IOSCHED_CFQ is not set                        :
CONFIG_IOSCHED_DEADLINE is not set                   :
                                                     : CONFIG_IP6_NF_FILTER=m
                                                     : CONFIG_IP6_NF_IPTABLES=m
                                                     : CONFIG_IP6_NF_MANGLE=m
                                                     : CONFIG_IP6_NF_MATCH_EUI64=m
                                                     : CONFIG_IP6_NF_MATCH_FRAG=m
                                                     : CONFIG_IP6_NF_MATCH_HL=m
                                                     : CONFIG_IP6_NF_MATCH_IPV6HEADER=m
                                                     : CONFIG_IP6_NF_MATCH_OPTS=m
                                                     : CONFIG_IP6_NF_MATCH_RT=m
                                                     : CONFIG_IP6_NF_RAW=m
CONFIG_IPV6 is not set                               :
                                                     : CONFIG_IPV6_TUNNEL=m
                                                     : CONFIG_IP_NF_ARPFILTER=m
                                                     : CONFIG_IP_NF_ARPTABLES=m
                                                     : CONFIG_IP_NF_ARP_MANGLE=m
                                                     : CONFIG_IP_NF_FILTER=m
                                                     : CONFIG_IP_NF_IPTABLES=m
                                                     : CONFIG_IP_NF_MANGLE=m
                                                     : CONFIG_IP_NF_MATCH_ADDRTYPE=m
                                                     : CONFIG_IP_NF_MATCH_ECN=m
                                                     : CONFIG_IP_NF_MATCH_TTL=m
                                                     : CONFIG_IP_NF_RAW=m
                                                     : CONFIG_IP_NF_TARGET_LOG=m
                                                     : CONFIG_IRCOMM=m
                                                     : CONFIG_IRDA=m
                                                     : CONFIG_IRLAN=m
                                                     : CONFIG_IRNET=m
                                                     : CONFIG_JFFS2_COMPRESSION_OPTIONS=y
                                                     : CONFIG_JFFS2_RUBIN=y
                                                     : CONFIG_JFFS2_SUMMARY=y
CONFIG_KEYBOARD_LOCOMO=y                             :
                                                     : CONFIG_LCD_CLASS_DEVICE=y
                                                     : CONFIG_LCD_CORGI=y
CONFIG_LEDS_CLASS=y                                  :
CONFIG_LEDS_LOCOMO=y                                 :
CONFIG_LEDS_TRIGGERS=y                               :
CONFIG_LEDS_TRIGGER_DISK=y                           :
CONFIG_LEDS_TRIGGER_TIMER=y                          :
                                                     : CONFIG_LIBCRC32C=m
                                                     : CONFIG_MACH_CORGI=y
                                                     : CONFIG_MACH_HUSKY=y
                                                     : CONFIG_MACH_POODLE=y
                                                     : CONFIG_MACH_SHEPHERD=y
CONFIG_MCP_SA11X0=y                                  :
CONFIG_MCP_UCB1200=y                                 :
CONFIG_MCP_UCB1200_TS=y                              :
                                                     : CONFIG_MMC=y
                                                     : CONFIG_MMC_PXA=y
                                                     : CONFIG_MODULES=y
                                                     : CONFIG_MODULE_FORCE_UNLOAD=y
                                                     : CONFIG_MODULE_UNLOAD=y
                                                     : CONFIG_MSDOS_FS=y
CONFIG_MTD_CFI=y                                     :
CONFIG_MTD_CFI_ADV_OPTIONS=y                         :
CONFIG_MTD_CFI_GEOMETRY=y                            :
CONFIG_MTD_CFI_I1 is not set                         :
CONFIG_MTD_CFI_I2 is not set                         :
CONFIG_MTD_CFI_I4=y                                  :
CONFIG_MTD_CFI_INTELEXT=y                            :
                                                     : CONFIG_MTD_CMDLINE_PARTS=y
                                                     : CONFIG_MTD_COMPLEX_MAPPINGS=y
CONFIG_MTD_JEDECPROBE=y                              :
CONFIG_MTD_MAP_BANK_WIDTH_1 is not set               :
CONFIG_MTD_MAP_BANK_WIDTH_2 is not set               :
                                                     : CONFIG_MTD_NAND=y
                                                     : CONFIG_MTD_NAND_SHARPSL=y
                                                     : CONFIG_MTD_ROM=y
CONFIG_MTD_SA1100=y                                  :
                                                     : CONFIG_NETDEVICES=y
                                                     : CONFIG_NETFILTER=y
                                                     : CONFIG_NET_ETHERNET=y
                                                     : CONFIG_NET_PCMCIA=y
CONFIG_NEW_LEDS=y                                    :
                                                     : CONFIG_NFS_FS=m
                                                     : CONFIG_NFS_V3=y
                                                     : CONFIG_NFS_V4=y
                                                     : CONFIG_NLS_UTF8=y
                                                     : CONFIG_OPROFILE=m
                                                     : CONFIG_PARTITION_ADVANCED=y
CONFIG_PCMCIA_DEBUG=y                                :
                                                     : CONFIG_PCMCIA_PCNET=m
                                                     : CONFIG_PCMCIA_PXA2XX=y
CONFIG_PCMCIA_SA1100=y                               :
                                                     : CONFIG_PPP=m
                                                     : CONFIG_PPP_ASYNC=m
                                                     : CONFIG_PPP_BSDCOMP=m
                                                     : CONFIG_PREEMPT=y
                                                     : CONFIG_PROFILING=y
                                                     : CONFIG_PXA_FICP=m
                                                     : CONFIG_PXA_SHARPSL=y
CONFIG_ROMFS_FS=y                                    :
CONFIG_SA1100_COLLIE=y                               :
                                                     : CONFIG_SCSI_MULTI_LUN=y
CONFIG_SERIAL_8250=y                                 : CONFIG_SERIAL_8250=m
CONFIG_SERIAL_8250_CS=y                              : CONFIG_SERIAL_8250_CS=m
CONFIG_SERIAL_8250_EXTENDED=y                        :
                                                     : CONFIG_SERIAL_PXA=y
                                                     : CONFIG_SERIAL_PXA_CONSOLE=y
CONFIG_SERIAL_SA1100=y                               :
CONFIG_SERIAL_SA1100_CONSOLE=y                       :
                                                     : CONFIG_SERIO is not set
CONFIG_SERIO_SERPORT is not set                      :
CONFIG_SLOB=y                                        :
                                                     : CONFIG_SMB_FS=m
                                                     : CONFIG_SMB_NLS_DEFAULT=y
                                                     : CONFIG_SOUND=y
                                                     : CONFIG_SOUND_PRIME=y
                                                     : CONFIG_SPI=y
                                                     : CONFIG_SPI_PXA2XX=y
CONFIG_SWAP is not set                               :
                                                     : CONFIG_SYN_COOKIES=y
                                                     : CONFIG_SYSFS_DEPRECATED_V2=y
                                                     : CONFIG_TOUCHSCREEN_ADS7846=y
                                                     : CONFIG_UEVENT_HELPER_PATH="/sbin/hotplug"
                                                     : CONFIG_USB=m
                                                     : CONFIG_USB_ACM=m
                                                     : CONFIG_USB_CATC=m
                                                     : CONFIG_USB_CYTHERM=m
                                                     : CONFIG_USB_EMI26=m
                                                     : CONFIG_USB_EMI62=m
                                                     : CONFIG_USB_ETH=m
```
(NOTE : above is truncated)
</details>

## Build
```
g++ diffconfigs.cpp -o diffconfigs
```
## Run
```
./diffconfigs CONFIG_A CONFIG_B
```


/opt/SDK-PD17.2-rc2/environment-setup-cortexa7hf-neon-vfpv4-phytec-linux-gnueabi

Prolific Technology, Inc. PL2303 Serial Port adapter

sudo microcom --port=/dev/ttyUSB0 --speed=115200

/home/lyzv/work/dist/STLab-USB-to-2serial/mcs7840/Linux/MCS7810_7820_7840_LINUX_Driver_v2.3.0_Source

EXTRA_IMAGE_FEATURES
EXTRA_IMAGE_FEATURES

Hello,

I am using PD17.1.2 version of the distribution for the phyboard-segin-imx6ul-2 board. This version does not support Qt widgets. Tell me how to add Qt widgets to the image phytec-qt5demo-image?


http://download.phytec.de/Products/KPB-02013_phyBOARD_Segin/v2/SDK/phytec-yogurt-vendor-glibc-x86_64-phytec-qt5demo-image-cortexa7hf-neon-vfpv4-toolchain-BSP-Yocto-phyBOARD-Segin-PD17.

bitbake -s | grep qtbase*

/home/lyzv/work/programs/Qt5.7.1/Tools/QtCreator/bin/qtcreator-17.1.0.sh

sudo adduser $USER vboxusers


./meta-yogurt/recipes-qt/qt5/qtbase_%.bbappend

/////////////////////////////////////////////////////////////////////////////////////
# POKY_BBLAYERS_CONF_VERSION is increased each time build/conf/bblayers.conf
# changes incompatibly
POKY_BBLAYERS_CONF_VERSION = "2"

BBPATH = "${TOPDIR}"
BBFILES ?= ""

OEROOT := "/home/lyzv/work/bsp/pd17.1.2/sources/poky"
BBLAYERS  ?= " \
  ${OEROOT}/meta \
  ${OEROOT}/meta-poky \
  ${OEROOT}/../meta-openembedded/meta-oe \
  ${OEROOT}/../meta-openembedded/meta-networking \
  ${OEROOT}/../meta-openembedded/meta-python \
  ${OEROOT}/../meta-openembedded/meta-multimedia \
  "
BBLAYERS += "\
  ${OEROOT}/../meta-gstreamer1.0 \
  ${OEROOT}/../meta-nodejs \
  ${OEROOT}/../meta-phytec \
  ${OEROOT}/../meta-qt5 \
  ${OEROOT}/../meta-yogurt \


  ////////////// sources/meta-phytec/conf/layer.conf ///////////////////////////////////////////////////////////////////
  # We have a conf and classes directory, add to BBPATH
BBPATH .= ":${LAYERDIR}"

# We have a recipes directory, add to BBFILES
BBFILES += "${LAYERDIR}/recipes-*/*/*.bb \
            ${LAYERDIR}/recipes-*/*/*.bbappend"


BBFILE_COLLECTIONS += "phytec"
BBFILE_PATTERN_phytec = "^${LAYERDIR}/"
BBFILE_PRIORITY_phytec = "20"
LAYERVERSION_phytec = "2"
LAYERDEPENDS_phytec = "core"

# Additional license directories.
LICENSE_PATH += "${LAYERDIR}/licenses"

# Let us add layer-specific bbappends which are only applied when that
# layer is included in our configuration
BBFILES += "${@' '.join('${LAYERDIR}/dynamic-layers/%s/recipes*/*/*.bbappend' % layer \
               for layer in BBFILE_COLLECTIONS.split())}"
BBFILES += "${@' '.join('${LAYERDIR}/dynamic-layers/%s/recipes*/*/*.bb' % layer \
               for layer in BBFILE_COLLECTIONS.split())}"

/////////////////////////////////////////////////////////////////////////////////////////////

| NOTE: Running ../configure  --build=x86_64-linux 		  --host=x86_64-linux 		  --target=x86_64-yogurt-vendorsdk-linux 		  --prefix=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr 		  --exec_prefix=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr 		  --bindir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/bin/x86_64-yogurt-vendorsdk-linux 		  --sbindir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/bin/x86_64-yogurt-vendorsdk-linux 		  --libexecdir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/libexec/x86_64-yogurt-vendorsdk-linux 		  --datadir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/share 	  --sysconfdir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/etc 		  --sharedstatedir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/com 		  --localstatedir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/var 	  --libdir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/lib/x86_64-yogurt-vendorsdk-linux 		  --includedir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/include 		  --oldincludedir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/include 		  --infodir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/share/info 		  --mandir=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux/usr/share/man 		  --disable-silent-rules 		  --disable-dependency-tracking 		  --with-libtool-sysroot=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-linux --program-prefix=x86_64-yogurt-vendorsdk-linux-                 --disable-werror                 --enable-deterministic-archives                 --enable-plugins                                  --enable-64-bit-bfd --with-sysroot=/home/lyzv/work/bsp/pd17.1.0/build/tmp/sysroots/x86_64-nativesdk-yogurt-vendorsdk-linux                 --disable-install-libbfd                 --enable-poison-system-directories                  --disable-static  --disable-nls
| NOTE: The following config.log files may provide further information.
| NOTE: /home/lyzv/work/bsp/pd17.1.0/build/tmp/work/x86_64-linux/binutils-crosssdk-x86_64-yogurt-vendorsdk-linux/2.27-r0/git/build.x86_64-linux.x86_64-yogurt-vendorsdk-linux/config.log
| ERROR: configure failed
| configure.ac:33: error: Please use exactly Autoconf 2.64 instead of 2.69.
| config/override.m4:12: _GCC_AUTOCONF_VERSION_CHECK is expanded from...
| configure.ac:33: the top level
| autom4te: m4 failed with exit status: 1
| checking build system type... x86_64-pc-linux-gnu
| checking host system type... x86_64-pc-linux-gnu
| checking target system type... Invalid configuration `x86_64-yogurt-vendorsdk-linux': machine `x86_64-yogurt-vendorsdk' not recognized
| configure: error: /bin/bash ../config.sub x86_64-yogurt-vendorsdk-linux failed
| ERROR: Function failed: do_configure (log file is located at /home/lyzv/work/bsp/pd17.1.0/build/tmp/work/x86_64-linux/binutils-crosssdk-x86_64-yogurt-vendorsdk-linux/2.27-r0/temp/log.do_configure.10297)


set sysroot /opt/SDK-PD17.1.2/sysroots/cortexa7hf-neon-vfpv4-phytec-linux-gnueabi
set solib-absolute-prefix /opt/SDK-PD17.1.2/sysroots/cortexa7hf-neon-vfpv4-phytec-linux-gnueabi


wget http://download.qt.io/official_releases/qt/5.7/5.7.1/qt-opensource-linux-x64-5.7.1.run
wget http://download.qt.io/official_releases/qt/5.7/5.7.1/qt-opensource-linux-x64-5.7.1.run

255852544
 95521342
245667291

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/dev/root / ext4 rw,relatime,nodelalloc,data=journal 0 0
devtmpfs /dev devtmpfs rw,relatime,size=253608k,nr_inodes=63402,mode=755 0 0
/dev/root / ext4 rw,relatime,nodelalloc,data=journal 0 0
devtmpfs /dev devtmpfs rw,relatime,size=253608k,nr_inodes=63402,mode=755 0 0
/dev/root / ext4 rw,relatime,nodelalloc,data=journal 0 0
devtmpfs /dev devtmpfs rw,relatime,size=253608k,nr_inodes=63402,mode=755 0 0
sysfs /sys sysfs rw,nosuid,nodev,noexec,relatime 0 0
proc /proc proc rw,relatime 0 0
securityfs /sys/kernel/security securityfs rw,nosuid,nodev,noexec,relatime 0 0
tmpfs /dev/shm tmpfs rw,nosuid,nodev 0 0
devpts /dev/pts devpts rw,relatime,gid=5,mode=620 0 0
tmpfs /run tmpfs rw,nosuid,nodev,mode=755 0 0
tmpfs /sys/fs/cgroup tmpfs ro,nosuid,nodev,noexec,mode=755 0 0
cgroup /sys/fs/cgroup/systemd cgroup rw,nosuid,nodev,noexec,relatime,xattr,release_agent=/lib/systemd/systemd-cgroups-agent,name=systemd 0 0
fusectl /sys/fs/fuse/connections fusectl rw,relatime 0 0
debugfs /sys/kernel/debug debugfs rw,relatime 0 0
tmpfs /tmp tmpfs rw 0 0
tmpfs /var/volatile tmpfs rw,relatime 0 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/dev/root / ext4 rw,relatime,nodelalloc,data=journal 0 0
devtmpfs /dev devtmpfs rw,relatime,size=253608k,nr_inodes=63402,mode=755 0 0
sysfs /sys sysfs rw,nosuid,nodev,noexec,relatime 0 0
proc /proc proc rw,relatime 0 0
securityfs /sys/kernel/security securityfs rw,nosuid,nodev,noexec,relatime 0 0
tmpfs /dev/shm tmpfs rw,nosuid,nodev 0 0
devpts /dev/pts devpts rw,relatime,gid=5,mode=620 0 0
tmpfs /run tmpfs rw,nosuid,nodev,mode=755 0 0
tmpfs /sys/fs/cgroup tmpfs ro,nosuid,nodev,noexec,mode=755 0 0
cgroup /sys/fs/cgroup/systemd cgroup rw,nosuid,nodev,noexec,relatime,xattr,release_agent=/lib/systemd/systemd-cgroups-agent,name=systemd 0 0
fusectl /sys/fs/fuse/connections fusectl rw,relatime 0 0
debugfs /sys/kernel/debug debugfs rw,relatime 0 0
tmpfs /tmp tmpfs rw 0 0
tmpfs /var/volatile tmpfs rw,relatime 0 0

//////////////////////////////////////////////////////
IMAGE_INSTALL_append = " liberation-fonts"
IMAGE_INSTALL_append = " qtserialport"

////////////////////////////////////////////////////////
А лучше вот так:
1) Удалить строку монтирования из /etc/fstab
2) Все действия выполнять в правилах файла /etc/udev/rules.d/10-usb.rules

SUBSYSTEM=="block", KERNEL=="sd[a-z][0-9]", ACTION=="add", RUN+="/bin/mkdir -p /media/usb-%k"
SUBSYSTEM=="block", KERNEL=="sd[a-z][0-9]", ACTION=="add", RUN+="/bin/mount -t vfat -o ro,sync /dev/%k /media/usb-%k"
SUBSYSTEM=="block", KERNEL=="sd[a-z][0-9]", ACTION=="remove", RUN+="/bin/umount /media/usb-%k/"
SUBSYSTEM=="block", KERNEL=="sd[a-z][0-9]", ACTION=="remove", RUN+="/bin/rm -r /media/usb-%k/"


Ну и для отладки подключения флешки можно использовать монитор событий udev:
$ udevadm monitor --property --kernel --udev

логин: vladimir.lyz
пароль: IntelCoreI27
пароль: IntelCoreI28
пароль: IntelCoreI29
пароль: IntelCoreI30
///////////////////////////////////////////////////////////////

Отчёт за 2-6 сентября 2019г
1. Восстановление рабочего окружения linux - 100%. Затрачено 2*8=16 часов.
2. Восстановление рабочего окружения windows - 10%. -
3. Разработка скриптов "восстановления/установки системного ПО на внутреннюю память SoM" - 90%.
   Затрачено 3*8=24 часа.

Замечания к ПО КСУ:
1. При аварии по высокому напряжению сети (в КИ) в аварийный контекст укладываются 3 фазных напряжения.
   Римера показывает напряжения Uab, Ubc, Uca.
2. Режим роснефти "прокачка газа". Нужно сделать Fmin и Fmax настраиваемыми относительно текущей заданной частоты.
3. Срабатывает перевод часов лето/зима. Надо проверить правильность.
4. Алгоритм встряхивания. Если во время встряхивания изменить частоту, то алгоритм зависает в ожидании 
   перехода на частоту встряхивания. Необходимо блокировать во время действия алгоритма пропускание команды
   изменения частоты.
5. Ручной режим. При срабатывании защиты не входит в блокировку. Нужно в ручной режим подставить состояние ПЭД.



////////////////////////////////////////////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////////////////////
Директории

echo "FORMAT NAND-memory ..."
ubiformat /dev/nand0.root
ubiattach /dev/nand0.root
echo "MAKE PARTITIONS ..."
ubimkvol -t static /dev/nand0.root.ubi kernel 8M
ubimkvol -t static /dev/nand0.root.ubi oftree 1M
ubimkvol -t dynamic /dev/nand0.root.ubi root 0

echo "COPY KERNEL & OFFTREE ..."
cp /mnt/tftp/zImage .
cp /mnt/tftp/oftree .
ubiupdatevol /dev/nand0.root.ubi.kernel zImage
ubiupdatevol /dev/nand0.root.ubi.oftree oftree

echo "COPY ROOTFS ..."
bootloader$ cp -v /mnt/tftp/root.ubifs /dev/nand0.root.ubi.root

echo "THAT IS ALL!"

////////////////////////////////////////////////////////////////////////////
barebox@Phytec phyCORE-i.MX6 Ultra Lite SOM:/ sh /mnt/mmc/script  
FORMAT NAND-memory ...
ubi0: detaching mtd0 from ubi0
ubi0: removing nand0.root.ubi
ubi0: mtd0 is detached
ubiformat: nand0.root (nand), size 531628032 bytes (507 MiB), 4056 eraseblocks of 131072 bytes (128 KiB), min. I/O size 2048 bytes
libscan: scanning eraseblock 4055 -- 100 % complete  
ubiformat: 4052 eraseblocks have valid erase counter, mean value is 12
ubiformat: 4 bad eraseblocks found, numbers: 4052, 4053, 4054, 4055
ubiformat: formatting eraseblock 4055 -- 100 % complete  
ubi0: scanning is finished
ubi0: registering /dev/nand0.root.ubi
ubi0: attached mtd0 (name "nand0.root", size 507 MiB) to ubi0
ubi0: PEB size: 131072 bytes (128 KiB), LEB size: 126976 bytes
ubi0: min./max. I/O unit sizes: 2048/2048, sub-page size 2048
ubi0: VID header offset: 2048 (aligned 2048), data offset: 4096
ubi0: good PEBs: 4052, bad PEBs: 4, corrupted PEBs: 0
ubi0: user volume: 0, internal volumes: 1, max. volumes count: 128
ubi0: max/mean erase counter: 23/13, WL threshold: 4096, image sequence number: 8765
ubi0: available PEBs: 3970, total reserved PEBs: 82, PEBs reserved for bad PEB handling: 76
failed to attach: File exists
MAKE PARTITIONS ...
ubi0: registering kernel as /dev/nand0.root.ubi.kernel
ubi0: registering oftree as /dev/nand0.root.ubi.oftree
ubi0: registering root as /dev/nand0.root.ubi.root
COPY KERNEL & OFFTREE ...
COPY ROOTFS ...
bootloader$: No such file or directory
THAT IS ALL!
barebox@Phytec phyCORE-i.MX6 Ultra Lite SOM:/

/home/lyzv/work/bsp/pd17.1.2/build/tmp/work/phyboard_segin_imx6ul_2-phytec-linux-gnueabi/barebox/2017.04.0-phy3-r7.0/git/.env-extra/config-expansions


///////////////////////////// */

Добрый день.

В ходе тестирования СУ, выявлена ошибка ПО по приему данных с имитатора погружного блока на КСУ по 
протоколу обмена «MODBUS». Протокол обмена «TRANSFER» работает исправно.

При выбранной единице измерения «Атм», КСУ отображает «МПа», при переводе единиц измерения в «МПа», 
КСУ пересчитывает текущие параметры в «МПа».  Прошу исправить параметр «Р масла пэд», на «Р приема»

Архив во вложении.
О принятом решении прошу сообщить.

 

С Уважением,

Дмитрий Протопопов

Инженер ОГЭ

СФ ООО "РН-Ремонт НПО"

тел.: гор. (84661)4-11-78 (доб.265)

моб. 8-937-072-85-85

моб. 8-927-687-04-62

e-mail: ProtopopovDA@samng.ru

-------------------------------------------------------------------------------------------
Здравствуйте, Дмитрий, Андрей.


Для версии ПО КСУ 11.3.25 (она у вас в зачитке) проверил отображение показаний телеметрии 
TRANSFER - всё верно. Поменял единицы давления - тоже верно. Показания наблюдал в окнах:
- ТЕКУЩИЕ ПАРАМЕТРЫ / ПОГРУЖНОЕ ОБОРУДОВАНИЕ
- ТЕКУЩИЕ ПАРАМЕТРЫ / ПОГРУЖНОЕ ОБОРУДОВАНИЕ / ВСЕ ТЕЛЕМЕТРИИ / TRANSFER

Не понятно в чём заключается ошибка? Прошу ответить на уточняющие вопросы:
1) В каком окне наблюдаете показания?
2) При каких единицах измерения давления наблюдается ошибка? Каковы показания КСУ и какие они выставлены 
   на эммитаторе?

------------------------------------------------------------------------------------------   


Добавить пользователя в группу доступа к последовательным портам:
$ sudo adduser lyzv dialout

---------------------------------
Борец
1-й режим. эммитатор передаёт 225 атмосфер, КСУ видит 250
2-й режим. эммиратор передаёт 265.2 атмосфер, КСУ видит 250

Эммитатор
1 -й режим. эммитатора 168Атм КСУ показывает правильно.
2-й режим. эммитатора 203Атм КСУ показывает 2.1Атм

ИРЗ-2 работает правильно


xterm -e 'microcom --port=/dev/ttyS4 --speed=19200' &

-------------------------------------------------------------------------------------

ProtopopovDA@samng.ru

/opt/SDK-PD17.1.2

/opt/SDK-PD17.1.2/sysroots/cortexa7hf-neon-vfpv4-phytec-linux-gnueabi/usr/lib/qt5/mkspecs/linux-oe-g++

/usr/src/linux-headers-4.15.0-64-generic/

/*------------------------------------------------*/
Добрый день.
Отсутствует передаваемый параметр Тобмотки=125.5 С. Некорректно отображен параметр Вибрации Y.
Перепутаны показания по Тпласта и Тпэд. Завышены показания по Ржид на 10атм.

/***********************************************************************************/
Здравствуйте, Дмитрий.

Готовил версию программы Rimera-3.4.10.
Теперь по порядку.
1) "Отсутствует передаваемый параметр Тобмотки=125.5 С". В документации этот параметр называется "Температура масла ПЭД/ температура обмотки ПЭД".
   Посмотрите внимательно, у нас в КСУ в окне "ПАРАМЕТРЫ ПОГРУЖНОГО ОБОРУДОВАНИЯ" этот параметр называтеся "Т ПЭД", в окне телемертрии "АЛМАЗ" параметр 
   называтеся "ТЕМПЕРАТУРА МАСЛА", а в программе Rimera - "Тпэд". Возможно вас вводит в заблуждение шильдик на иммитаторе, на котором этот параметр 
   называтеся "Тобм"? Шильдик не соответсвует их документации.
2) "Некорректно отображен параметр Вибрации Y". Исправил ошибку в программе Rimera. Версию прилагаю. Замечу, что на КСУ показывает верно.
3) "Перепутаны показания по Тпласта и Тпэд". Вовсе нет. У нас всё верно. "Температуру ОЖ" (Тжид) мы показываем в КСУ как "Т ПЛАСТ ЖИДКОСТИ", 
   в Rimera как "Тпласт". Про "Температура масла ПЭД / температура обмотки ПЭД" смотри выше.
4) "Завышены показания по Ржид на 10атм". Здесь опять ошибка на шильдике! Обратите внимание, что в документации Алмаз использует единицы измерения
   давления - физические атмосферы (Атм). КСУ так и принимает, потом конвертирует в технические (Ат). 320Атм => 330.6Ат. В любом случае, мы готовы 
   исправить приём на технические атмосферы. Уточните у производителя этого иммитатора в каких единицах работают 1) их иммитатор, 2) их телеметрия? 


*/
*/
/***********************************************************************************/
Ошибка в режиме по программе!
При включенном управлении недогрузом алгоритм по факту не управляет.

/*****************************************************************************************/
1) Предусмотрена стабилизация выходного напряжения при эксплуатации от нестабильной питающей сети.
2) Кроме того должна быть обеспечена возможность считывания информации портативным компьютером, 
   блоком съема информации или передаче в стандарте RS-232 или RS-485. ????
3) Другая MODBUS-карата телемеханики. Непонятные параметры: "Цифровые входа" (адр. 499-496), "Релейные 
   выхода" (адр. 344-347).


   GKI_Flag=MNT_CREATED;
   GKI_Flag=MNT_TICK;//Задача жива

_PARAM_VIEW_(Index_RtcDate, SysDateSetView),
_PARAM_VIEW_(Index_RtcTime, SysTimeSetView),

FRM_DATE_TIME
FRM_RTC
FRM_DATE_TIME_CALIBRATE


PowerWorker


reg_can1_en


speed 115200 baud;
stty: /dev/ttymxc5
 line = 0;
intr = ^C; 
quit = ^\; 
erase = ^?; 
kill = ^U; 
eof = ^D; 
eol = <undef>; 
eol2 = <undef>; 
swtch = <undef>; 
start = ^Q; 
stop = ^S; 
susp = ^Z; 
rprnt = ^R; 
werase = ^W; 
lnext = ^V; 
flush = ^O; 
min = 1; 
time = 0;

-parenb -parodd cs8 hupcl -cstopb cread clocal -crtscts
-ignbrk -brkint -ignpar -parmrk -inpck -istrip -inlcr -igncr icrnl ixon ixoff -iuclc -ixany -imaxbel iutf8
opost -olcuc -ocrnl onlcr -onocr -onlret -ofill -ofdel nl0 cr0 tab0 bs0 vt0 ff0
isig icanon -iexten echo echoe echok -echonl -noflsh -xcase -tostop -echoprt echoctl echoke


speed 115200 baud;
stty: /dev/ttymxc2
 line = 0;
intr = ^C; 
quit = ^\; 
erase = ^?; 
kill = ^U; 
eof = ^D; 
eol = <undef>; 
eol2 = <undef>; 
swtch = <undef>; 
start = ^Q; 
stop = ^S; 
susp = ^Z; 
rprnt = ^R; 
werase = ^W; 
lnext = ^V; 
flush = ^O; 
min = 1; 
time = 0;

-parenb -parodd cs8 hupcl -cstopb cread clocal -crtscts
-ignbrk -brkint -ignpar -parmrk -inpck -istrip -inlcr -igncr icrnl ixon ixoff -iuclc -ixany -imaxbel iutf8
opost -olcuc -ocrnl onlcr -onocr -onlret -ofill -ofdel nl0 cr0 tab0 bs0 vt0 ff0
isig icanon -iexten echo echoe echok -echonl -noflsh -xcase -tostop -echoprt echoctl echoke


ProtopopovDA@samng.ru


///////////////////////////////////////////////////////////////////////////////////////////////

Замечания к ТЗ:
1. Пункт 2.2.2. Прошу точно указать что будет входить в "журнал событий"! Здесь, возможно, путающее использование
   понятия журнала событий. Так как в ЕТТ6.0 есть отдельдные требования на кол-во событий и количество измерений то 
   у нас реализованы отлельные журналы. Кроме измерений и событий есть ещё другие журналы: ГДИ; электроэнергии.
2. Пункт "Чтение журнала событий системой телемеханики". Вся зачитка нашей СУ подвергается сжатию в процессе записи 
   в файл на USB-носитель. До окончания сжатия всей зачитки не известен её сжатый размер и соответственно не известно 
   "количество блоков журнала событий". Это вынуждает нас обновить аппаратное обеспечение - необходимо где-то 
   разместить зачитку. Это приведёт к тому, что старое оборудование не будет поддерживать данное ТЗ!
3. Пункт "Описание загрузки файла ПО в контроллер СУ". Не возможно реализовать обновление на нашем оборудовании -
   нет памяти, где можно было-бы разместить прошивку. Это приведёт к тому, что старое оборудование не будет 
   поддерживать данное ТЗ!








#define MX6UL_PAD_JTAG_TMS__GPIO1_IO11                            0x0048 0x02D4 0x0000 0x5 0x0

Howto remove getty@tty1.service from my custom build
cat ./meta-yogurt/recipes-qt/examples/phytec-qtdemo/mx6ul/phytec-qtdemo.service

Disable systemD services at compile time


Составить перечень проектов Дмитрия.
Составить перечень мероприятий для приёма работы от Дмитрия.
Обсудить архитектуру проектов:
0. КИ-Ч3 в части управления;
1. КИ-ВД-COS;
2. КИ-ВД-BLDC;
3. КПТ-ЕТТ6.0, БПТ.
Архитектура со ссылками на 
- файлы/модули;
- научный материал.


//////////////////////////////////////////////////////////////////////

   StartupWnd.Progress=InitState;
   StartupWnd.Update(SUP_MOVIE|SUP_PROGRESS);
   screen->SUpdate();
   QThread::yieldCurrentThread();

    while(true)
    {
        QThread::msleep(100);
    }



cat /sys/kernel/debug/gpio

cat /sys/kernel/debug/pinctrl/20e0000.iomuxc/pinconf-groups | grep GPIO1

0x1 f0          59
1   1111 0000   0101 1001
|   |||| |      |||  |  |
|   |||| |      |||  |  +-- 1    - PAD_CTL_SRE_FAST
|   |||| |      ||+--+----- 011  - PAD_CTL_DSE_80ohm
|   |||| |      ++--------- 01   - PAD_CTL_SPEED_LOW
|   |||| +----------------- 0    - нет PAD_CTL_ODE (открытый коллектор)
|   |||+------------------- 1    - PAD_CTL_PKE
|   ||+-------------------- 1    - PAD_CTL_PUE
|   ++--------------------- 11   - PAD_CTL_PUS_22K_UP  
+-------------------------- 1    - PAD_CTL_HYS

0xB0
0   0000 0000   1011 0000
|   |||| |      |||  |  |
|   |||| |      |||  |  +-- 0    - PAD_CTL_SRE_FAST
|   |||| |      ||+--+----- 110  - PAD_CTL_DSE_80ohm
|   |||| |      ++--------- 01   - PAD_CTL_SPEED_LOW
|   |||| +----------------- 0    - нет PAD_CTL_ODE (открытый коллектор)
|   |||+------------------- 1    - PAD_CTL_PKE
|   ||+-------------------- 1    - PAD_CTL_PUE
|   ++--------------------- 11   - PAD_CTL_PUS_22K_UP  
+-------------------------- 1    - PAD_CTL_HYS

~/work/bsp/pd17.1.2/build/tmp/work-shared/phyboard-segin-imx6ul-2/kernel-source

      0 00  0 0 0 000 00 000 00 0
         |  | | |      |  |
         |  | | |      |  +--------- DSE   
         |  | | |      +------------ SPEED
         |  | | +------------------- OD
         |  | +--------------------- PKE
         |  +----------------------- PUE 
         +-------------------------- PUS

~/work/bsp/pd17.1.2/build/tmp/work-shared/phyboard-segin-imx6ul-2/kernel-source


alias gks='cd ~/work/bsp/pd17.1.2/build/tmp/work-shared/phyboard-segin-imx6ul-2/kernel-source'
alias grfs='cd ~/work/bsp/pd17.1.2/build/tmp/work/phyboard_segin_imx6ul_2-phytec-linux-gnueabi/phytec-qt5demo-image/1.0-r0/rootfs'


1) Отпайка.
2)          Разрещение защиты - Нет.
3)          Уставки защиты по умолчанию отсутствуют.
4)          Уставки номиналов ВД по умолчанию отсутствуют.
5)          По умолчанию заданная частота должна быть 100Гц. 
6)          Скорость разгона/торможения установить 5Гц/с
7)          По умолчанию U/F до 100Гц.
8)          Вид ПЭД.
9) 


/*********************************************************************/
/////////////////////////////////////////////////////////////////////
0. Сделано.   Доделать USB-зачитку
1. Сделано.   Не перерисовывает экран начальной загрузки
2. Сделано.   Загрузка 99% на этапе инициализации
3. Сделано.   Проблема с дискретными входами
4. Сделано.   Замена интерфейса Ethernet
5. Добавить пусковые графики
6. Сделано.   Добавить спец.алгоритмы.
7. Сделано.   Слить последние изменения с текущего проекта
8. Форматирование.

disable 0x7b0400
0111 1011 0000 0100 0000 0000
1000 0100 1111 1011 1111 1111
 enable 0x 4fbff
        0x84fbff


///////////////////////////////////////////////////////////////////////////////

lyzv@lyzv-pc:/opt/SDK-PD17.1.2$ ./sysroots/x86_64-phytecsdk-linux/usr/libexec/arm-phytec-linux-gnueabi/gcc/arm-phytec-linux-gnueabi/6.2.0/strip --help

git clone https://gitlab.com/LyzV/bootstrap.git

#! /bin/bash
cd /home/root
./bootstrap.strip -f /home/root/ksu_boot1 -s /home/root/ksu_boot2 -d /home/root &

# INHIBIT_PACKAGE_STRIP = "1"
# INHIBIT_PACKAGE_STRIP = "1"

RDEPENDS_ksuboot libc.so.6 /bin/bash



https://github.com/joaocfernandes/Learn-Yocto/blob/master/develop/Recipe-qt5.md

https://stackoverflow.com/questions/52247180/inserting-my-qt-application-to-yocto-image-and-runing-it-after-startup
https://www.toradex.com/community/questions/26009/integrate-qt-application-into-image-build-process.html
https://wiki.yoctoproject.org/wiki/Creating_a_recipe_for_a_Qt_application

#PR = "r0"

git clone git@gitlab.com:LyzV/bootstrap.git

# SRC_URI = "git://github.com/vpapadopou/qt-simple-calculator;branch=master"
# SRCREV = "1af09d43f9a41ad3136a4fac9db63b9542692f91"

install -m 0755 bootstrap ${D}/home/root


DEPENDS = "flex-native bison-native iptables"
+RDEPENDS_${PN} = "bash"

do_strip(){
  strip ksu_boot
  md5sum ksu_boot > ${WORKDIR}/ksu_boot.md5
}


SRC_URI  = "file://ksu_boot.pro"
SRC_URI += "file://entry_dialog.ui"
SRC_URI += "file://ctrl_form.ui"
SRC_URI += "file://main.cpp"
SRC_URI += "file://vtypes.h"
SRC_URI += "file://bash_cmd.h"
SRC_URI += "file://bash_cmd.cpp"
SRC_URI += "file://qctrlform.h"
SRC_URI += "file://qctrlform.cpp"
SRC_URI += "file://qentrydialog.h"
SRC_URI += "file://qentrydialog.cpp"  
SRC_URI += "file://qksutreeview.h"
SRC_URI += "file://qksutreeview.cpp"  
SRC_URI += "file://qusbnotifier.h"
SRC_URI += "file://qusbnotifier.cpp"  
SRC_URI += "file://task.hpp"
SRC_URI += "file://task.cpp"
SRC_URI += "file://treeitem.h"
SRC_URI += "file://treeitem.cpp"
SRC_URI += "file://treemodel.h"
SRC_URI += "file://treemodel.cpp"


QString fullFileName=filePath+"/"+fileName;

=====================================================================

1.      Выяснить почему не грузится?
2.      Проверить успешное обновление ПО:
          - рабочего КСУ
          - загрузчика КСУ
3.      Если не могу обновить ПО, то выдать внятное объяснение.
4.      Сделать принудительный переход в рабочее ПО.
5. Сделать информацию об:
  - версии аппаратного обеспечени
  - версии загрузчика
  - версии дистрибутива
  - версии PD...
6. Сделать копирование прошивок во внутреннее хранилище.
7. Сделать программирование КИ

=====================================================================================

/******************************************************
   ПЕРЕЧЕНЬ АВТОМАТОВ
*******************************************************/
#define AUTO_NO ((uint64_t)0)//0
//Автоматы защит ПЧ
#define AUTO_BADFREQIN  SPM_DEF_BADFREQIN     //(1<<0 )Отклонение частоты питающей сети 
#define AUTO_HIVLTGIN   SPM_DEF_HIVLTGIN        //(1<<1 )Повышение напряжения питающей сети
#define AUTO_LOWVLTGIN  SPM_DEF_LOWVLTGIN       //(1<<2 )Понижение напряжения питающей сети
#define AUTO_HICURRIN SPM_DEF_HICURRIN        //(1<<3 )Повышение тока питающей сети
#define AUTO_HIDCVLTG SPM_DEF_HIDCVLTG        //(1<<4 )Повышение напряжения цепи постоянного звена
#define AUTO_HIDCPULSE  SPM_DEF_HIDCPULSE       //(1<<5 )Повышение пульсаций напряжения цепи постоянного звена
#define AUTO_HIIGBTTEMP SPM_DEF_HIIGBTTEMP     //(1<<6 )Повышение температуры радиатора силовых ключей инвертора
#define AUTO_HITHYRTEMP SPM_DEF_HITHYRTEMP     //(1<<7 )Повышение температуры радиатора силовых ключей выпрямителя
#define AUTO_HICURROUT  SPM_DEF_HICURROUT       //(1<<8 )Повышение тока ПЧ
#define AUTO_LOWINSULNC SPM_DEF_LOWINSULNC     //(1<<9 )Понижение сопротивления изоляции
#define AUTO_DOOROPENED SPM_DEF_DOOROPENED     //(1<<10)Открытие двери
#define AUTO_IGBTAFAULT SPM_DEF_IGBTAFAULT     //(1<<11)Ошибки по IGBT по фазе U
#define AUTO_IGBTBFAULT SPM_DEF_IGBTBFAULT     //(1<<12)Ошибки по IGBT по фазе V
#define AUTO_IGBTCFAULT SPM_DEF_IGBTCFAULT     //(1<<13)Ошибки по IGBT по фазе W
#define AUTO_UNKNOWNCFG SPM_DEF_UNKNOWNCFG     //(1<<14)Не верная конфигурация СУ
#define AUTO_FLTOVRHEAT SPM_DEF_FLTOVRHEAT     //(1<<15)Повышение температуры внешнего фильтра
#define AUTO_EMIRESET SPM_DEF_EMIRESET        //(1<<16)Сброс КИ либо от выключения питания либо от помехи
#define AUTO_WDTRESET SPM_DEF_WDTRESET        //(1<<17)Сброс КИ от сторожевой собаки
#define AUTO_MTZ      SPM_DEF_MTZ           //(1<<18)Максимальная токовая защита ПЭД
#define AUTO_POWERBAD SPM_DEF_POWERBAD        //(1<<19)Раннее предупреждение о пропадании питания
#define AUTO_DI2U       SPM_DEF_DI2U           //(1<<20)Не готова плата ДИ-2 по фазе U
#define AUTO_DI2V       SPM_DEF_DI2V           //(1<<21)Не готова плата ДИ-2 по фазе V
#define AUTO_DI2W       SPM_DEF_DI2W           //(1<<22)Не готова плата ДИ-2 по фазе W

#define AUTO_SYNCH      SPM_DEF_SYNCH           //(1<<30)Ошибка взаимодействия с блоком КИ (таймаут или рассинхронизация)
#define AUTO_UNKNOWN    SPM_DEF_UNKNOWN         //(1<<31)Неизвестная ошибка

//Автоматы защит погружного оборудоавния
#define AUTO_KILINK   SPM_DEF_KILINK          //(1<<32)Потеря связи с блоком КИ
#define AUTO_ILOW     SPM_DEF_ILOW            //(1<<33)Недогруз
#define AUTO_ULOW     SPM_DEF_ULOW            //(1<<34)Понижение сетевого напряжения
#define AUTO_UHI      SPM_DEF_UHI             //(1<<35)Повышение сетевого напряжения
#define AUTO_IHI      SPM_DEF_IHI             //(1<<36)Перегруз
#define AUTO_IUNBL    SPM_DEF_IUNBL           //(1<<37)Дисбаланс тока
#define AUTO_UUNBL    SPM_DEF_UUNBL           //(1<<38)Дисбаланс сетевого напряжения
#define AUTO_RIZ      SPM_DEF_RIZ             //(1<<39)Сопротивление изоляции
#define AUTO_TURB     SPM_DEF_TURB            //(1<<40)Турбинное вращение
#define AUTO_SEQ      SPM_DEF_SEQ             //(1<<41)Чередование фаз
#define AUTO_F        SPM_DEF_F               //(1<<42)Отклонение частоты сети
#define AUTO_TMT_T    SPM_DEF_TMT_T           //(1<<43)Погружная телеметрия. Повышение температуры ПЭД
#define AUTO_TMT_P    SPM_DEF_TMT_P           //(1<<44)Погружная телеметрия. Понижение давления столба жидкости
#define AUTO_TMT_V    SPM_DEF_TMT_V           //(1<<45)Погружная телеметрия. Повышение вибрации ПЭД
#define AUTO_TMT_Q    SPM_DEF_TMT_Q           //(1<<46)Погружная телеметрия. Понижение расхода насоса

#define AUTO_C1       SPM_DEF_C1              //(1<<48Контакт 1 манометра (Понижение давления)
#define AUTO_C2       SPM_DEF_C2              //(1<<49)Контакт 2 манометра (Повышение давления)
#define AUTO_MHI      SPM_DEF_MHI             //(1<<50)Превышение момента на валу ПЭД
#define AUTO_ILIM     SPM_DEF_ILIM            //(1<<51)Понижение частоты при ограничении тока ПЭД
#define AUTO_SPEC_IHI   ((uint64_t)1<<52)       //(1<<52)Защита для спец.алгоритма роснефти. Задержка отключения - 5 секунд


#define AUTO_DTIME    ((uint64_t)1<<54)//Автомат разновремённых пусков
#define AUTO_PICKUP   ((uint64_t)1<<55)//Автомат подхвата и разворота ротора при турбинном вращении ПЭД (роснефть)
=======================================================================================


//AUTO_LOWINSULNC
//AUTO_DOOROPENED
//AUTO_UNKNOWNCFG
//AUTO_MTZ
//AUTO_RIZ
//AUTO_SEQ
//AUTO_PICKUP

SPM_State   MonitorState;
uint64_t    AlarmReason ;

Index_MbServer0

======================================================================================
Что нужно ещё сделать:
0.    Убрать зебру.
1. Аппаратную версию железа КСУ.
2.    Выпустить bootstrap.
3.    Выпустить ksuboot
4. Выпустить ksu
5. Выпустить версию дистрибутива линукс.
6. Переход на загрузчик.

======================================================================================

Методика проверки качелей загрузчика ПО КСУ:

1.      Нет загрузочной директории.
2.      Загрузочная директория пуста.
3.      Одна корректная загрузочная директория.
4.      Две корректных загрузочных директорий.
5.      Нет файла контрольной суммы.
6.      Нет стартового файла.
7.      Нет файла счётчика.
8.      Не верный формат файла контрольной суммы.
9. Не верный формат файла счётчика.
10. Не соответствует имя стартового файла файлу контрольной суммы.

--- комбинаторика счётчиков -----------
11.   0 1
12.   2 1  
13.   2 3
14.   4 3
15.   4 5
16.   6 5
17.   6 7
18.   0 7
19.   0 1



Index_RegP_Fmin
Index_RegP_Fmax



Замечания к ПО КСУ:
1. Регуляторы
2. Время работы ПЭД за предыдущие сутки: IndexPrevWorkTime
3. Перевыпустить Rimera.
4. В режиме по программе в выключенном состоянии если моргнуть питанием (без выкл. КСУ) то 
   ПЭД больше не пускается.
5. Архив измерений. Если задать 1 минуту. Реальные срезы идут то 1 минуту, то 30 секунд.



1. clear_all_nand
2. sd-to-nand
3. barebox.bin
4. oftree
5. root.ubifs
6. zImage


MX6UL_PAD_CSI_MCLK__UART6_DTE_RX  0x1b0b1         MX6UL_PAD_CSI_MCLK__GPIO4_IO17
MX6UL_PAD_CSI_PIXCLK__UART6_DTE_TX  0x1b0b1       MX6UL_PAD_CSI_PIXCLK__GPIO4_IO18


https://www.digitalcitizen.life/how-access-windows-7-shared-folders-ubuntu
https://www.digitalcitizen.life/how-change-workgroup-ubuntu-linux-work-windows


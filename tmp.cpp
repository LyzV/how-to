логин: vladimir.lyz
пароль: IntelCoreI27
пароль: IntelCoreI28
пароль: IntelCoreI29
пароль: IntelCoreI30
IntelCoreI31
IntelCoreI32
IntelCoreI33

///////////////////////////////////////////////////////////////
SoM
 PCL-063-23300CI.A4
 PCL_063_KSP_RIMERA_A0
пароль: IntelCoreI31

///////////////////////////////////////////////////////////////
Алексей Хомутов
Антон Ильин
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

Отчёт за 6-10 апреля 2020г
1. Рефакторинг журнала событий. 
Затрачено - 5*8=40 часов.
Выполнено ~ 90%

Отчёт за 13-17 апреля 2020г
1. Рефакторинг журнала событий. Выпуск универсальной версии 13.1.18 ПО КСУ.
Затрачено - 5*8=40 часов.
Выполнено - 100%

Отчёт за 20-24 апреля 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. Без удалённого обновления ПО. 
а) Объединение стеков протоколов MODBUS/RTU и MODBUS/TCP.
    Затрачено - 5*8=40 часов.
    Выполнено - 90%
Общих ход выполнения работы: 
    Выполнено - 15%


Отчёт за 27 апреля - 1 мая 2020г
1) Сопровождение. Отказы в работе с электросчётчиком Меркурий.
  Затрачено - 1*8=8 часов.
  Выполнено - 100%.

2) Разработка системы удалённого чтения архива по ТЗ роснефти. Без удалённого обновления ПО. 
  Общий ход выполнения работы - 30%
а) Объединение стеков протоколов MODBUS/RTU и MODBUS/TCP.
    Затрачено - 1*8=8 часов.
    Выполнено - 100%
б) Кодирование/тестирование дополнительных MEI14
  Затрачено - 1*8=8 часов 
  Выполнено - 80%
в) Кодирование/тестирование функции 20 чтения файловой записи.
  Затрачено - 2*8=16 часов
  Выполнено - 80%


Отчёт за 4-8 мая 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. 
  Затрачено - 2*8=16 часов
  Выполнено - 40%
2) Разработка системы удалённого обновления ПО по ТЗ роснефти.
  Затрачено - 3-8=24 часа
  Выполнено - 10%

Отчёт за 11-15 мая 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. 
  Затрачено - 3*8=24 часа
  Выполнено - 50%
2) Разработка системы удалённого обновления ПО по ТЗ роснефти.
  Затрачено - 2*8=16 часов
  Выполнено - 20%

Отчёт за 21-22 мая 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. 
  Затрачено - 3*8=24 часа
  Выполнено - 60%
2) Разработка системы удалённого обновления ПО по ТЗ роснефти.
  Затрачено - 2*8=16 часов
  Выполнено - 30%

Отчёт за 25-29 мая 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. 
  Затрачено - 5*8=40 часов
  Выполнено - 80%

Отчёт за 1-5 июня 2020г
1) Разработка системы удалённого чтения архива по ТЗ роснефти. 
  Затрачено - 4*8=32 часов
  Выполнено - 95%

2) Разработка MODBUS-карты памяти Газпромнефть-Хантос.
  Затрачено - 1*8=8 часов.
  Выполнено - 5%

///////////////////////////////////////////////////////////////////////////////////////////
Тактические очки:
https://www.voentorg.ru/catalog/snaryazhenie/ochki/4519.html  - с возможностью диоптрических линз
Хорошие фирмы очков: Окли, Ревижн, Сминт, Вилейкс

Комплект противоосколочных очков ESS:
https://www.voentorg.ru/catalog/snaryazhenie/ochki/6148.html
https://www.voentorg.ru/catalog/snaryazhenie/ochki/1039.html
crowwbow


//////////////////////////////////////////////////////////////////////////////////////////
Индия, релакс:
https://www.youtube.com/watch?v=CM7f_5xY4w8


////////////////////////////////////////////////////////////////////////////////////////////
КИ

.\hex2000.exe --w olength 8 -o .\Output\Release.dat .\Output\Release\Release.out 
.\hex2000.exe --intel --swapbytes --romwidth=16 --outfile=.\Output\Release\Release.hex .\Output\Release\Release.out 

--w
--intel           Select Intel.               Выбор Intel формата: IntelMSC Object Format 
--swapbytes
--romwidth=value  Specify the ROM device width (default depends on format used). Указывает ширину шины данных ROM-устройства.
--outfile -o      Specify an output filename. Указывает имя выходного файла.


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
6. Отрицательная энергия показаний электросчётчика Меркурий.



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


https://adayinthelifeof.nl/2011/10/11/creating-partitioned-virtual-disk-images/

https://www.barebox.org/doc/latest/commands/file/md5sum.html

status = "disabled";

IndexNumContr
IndexTypeContr
IndexProdDateContr
IndexProdDateContr,  KT_VAR,    FL_PSWRD|FL_NOMOD|FL_INTERFACE|FL_NOCRC,   STRING_T,    6, FLASH_NO_FORMAT_DISK, FORMAT_DMY,            "Д:М:Г",  "ДАТА ИЗГОТОВЛ КСУ",     "ДАТА ИЗГОТОВЛЕНИЯ КСУ",                   NotifyTableNULL,


1 f0 59

00000001 00110000  01011001
1 30 59

barebox:
AREA: https://barebox.org/doc/latest/user/memory-areas.html?highlight=area
md5sum: https://www.barebox.org/doc/latest/commands/file/md5sum.html

deploy/images/phyboard-segin-imx6ul-2/barebox.bin
deploy/images/phyboard-segin-imx6ul-2/zImage-phyboard-segin-imx6ul-2.bin
deploy/images/phyboard-segin-imx6ul-2/zImage-imx6ul-phytec-phyboard-segin-ff-rdk.dtb
deploy/images/phyboard-segin-imx6ul-2/phytec-qt5demo-image-phyboard-segin-imx6ul-2.ubifs

0x00, 0x00,  TI
0x00, 0x00,  PI
0x00, 0x06,  Length
0x01,        Device address
0x04, Func
0x01, 0x00,  Starting address = 0x100
0x00, 0x01   Qnty registers = 1

00 00
rpcinfo -p

5c:e0:c5:13:ce:0a
5C:E0:C5:13:CE:0A - notebook
DC:A6:32:1F:AA:D1 - raspbarry


sudo mount -t nfs -o rw,user lyzv-pc.local:/home/lyzv/work/share /home/lyzv/share

https://www.youtube.com/watch?v=CaZCcaChfag

https://opencentr.ru/article/rusifikaciya-xubuntu-1604/

http://webdevelopment.in.ua/linux/ubuntu/ustanovka-xfce-v-ubuntu-16-04/

https://xubuntu-ru.net/how-to/37-ustanovka-xfce-v-ubuntu-ili-kak-iz-ubuntu-sdelat-xubuntu.html
              0,        uint8_t (*f_view)(uint8_t, FORM &); 
              0         FormClbT *i_clb;//Интерфейс обратных вызовов



uint16_t FindFormRecord(uint16_t id, uint16_t sid, uint16_t from)



FORM_RECORD *FindFormRecordPtr(uint16_t id, uint16_t sid, FORM_RECORD *pFrom)

Жарков - ?
Иванов
Овчинников - ?
Самохина
0100
1000




Асинхр:
const char str_FOUT[]         = "ВЫХОДНАЯ F (ГЦ)                       ";
const char str_Fset[]         = "УСТАВКА F (ГЦ)



Универсал:
const char str_FOUT[]         = "F ВЫХОД.(ГЦ / ОБ/С)                   ";
const char str_Fset[]         = "F ЗАДАН.(ГЦ / ОБ/С)  


BuildVFLinCharacteristic

Заводское значение установленной частоты:
Index_KI_Fset

Заводское значение шага изменения частоты: 
Index_Drive_KeyboardSensitivity_FLASH

Заводское значение таблицы U/F

Заводское значение режимов пуска и работы:
Index_FC_StartMode
Index_FC_WorkMode

Заводское значение режима по программе:
Index_PrgMode

_PARAM_(Index_NumPole,     0),
  _PARAM_(IndexIMotorNom,   0), 
  _PARAM_(IndexCosNom,    0), 
  _PARAM_(IndexUMotorNom,   0), 
  _PARAM_(IndexPwrMotorNom,   0),
  _PARAM_(Index_Wped_nom_min, 0),
    _PARAM_(Index_Wped_nom_cek, 0),
    _PARAM_(Index_MotorFnom,  0),

//////////////////////////////////////////////////////////////////////////////////////////

1.      Проверить сокрытие окон для синхронного ПЭД. 
2.      Проверить восстановление окон для асинхронного ПЭД.
3.      Проверить ограничения параметров для синхронного ПЭД.
4.      Проверить снятие ограничений для параметров асинхроннного ПЭД.
5.      Проверить заводские уставки для синхронного ПЭД.
6.      Проверить заводские уставки для асинхронного ПЭД.

Ошибки:
1.      Характеристика U/F. Убрать задание ломаной характеристики.
2. После программирования КИ универсальной версией параметры управления ВД не корректные.
3.      Параметры ПЭД для асинхронного. НОМ. ЧАСТОТА ПЭД. Надо убрать редактирование этого параметра.
4. Rimera. Во вкладку параметров ПЧ добавить параметры режима оптимизации U/F.
5.      При включении вентильного ПЭД заданная частота устанавливается в 60Гц.
6.      Поправить работу с индексом перевода часов на летнее время.
7.      Тип контроллера убрать.
8.      Исправить работу с версией железа.
9.      Не отображаются а) заводской номер б) версия ПО блока КИ.

10. Заменил индекс IndexKiSerialVersion на Index_KI_SN



/////////////////////////////////////////////////////////////////////////////////////////
Index_ContactorB2

   DefenceCFG  CfgDef      ;//Авария неизвестной конфигурации
   DefenceKIS  KisDef      ;//Авария не соответствия ПО КИ конфигурации СУ
   DefencePT   PedTypeDef  ;//Авария не соответствия типа ПЭД конфигурации СУ

STOP_CFG    
STOP_KISOFT 
STOP_PEDTYPE

ALARM_CFG    
ALARM_KISOFT 
ALARM_PEDTYPE

IndexCurrWorkTime

2.4.13. Название файла журнала система АСУТП формирует согласно ЕТТ 
(считывание параметров работы из архива событий контроллера СУ должно 
  осуществляться одним файлом с названием, состоящего из номера скважины, 
  даты снятия информации или интервала времени, за который считана информация. 
  Например: 111_01.01.2014 или 111_01.01.2014_15.01.2014)

.\hex2000.exe -w olength 8 -o .\Output\Release.dat .\Output\Release\Release.out 
.\hex2000.exe -intel --swapbytes --romwidth=16 --outfile=.\Output\Release\Release.hex .\Output\Release\Release.out 



///////////////////////////////////////////////////////////////////////
_IOverCtrl      IndexOverIEnable                CProtEna
_IUnderCtrl     IndexUnderIPercentNomSetpoint

Mode0_Y.CtrlParams.IprotEna

Index_EnaSpec

FN_IndexOverIEnable_forAD


FRM_STATIONSET
FRM_DRIVE
  FRM_FC_GRAB_START
  FRM_FC_SHAKE_MODE
  FRM_FC_ANTIGAS_MODE


Index_IUnderCtrl    FN_Index_IUnderCtrl   prg.IUnderCtrl
IndexUnderIEnable
IndexStoreUnderIEnable

_OnChangeState

PRG_EVENT_DEFOFF
PRG_EVENT_DEFRESTORE

Index_ShakeIprotEna
Index_AntiGasIprotEna

//////////////////////////////////////////////////////////////////////////////////////
Были затронуты следующие подсистемы:
1) Режим по программе.
2) Защита по перегрузу.
3) Защита по недогрузу.
4) Заменил подсистему регистрации отключения/подключения блока КИ, подсистему регистрации обновления ПО.
6) Переделал механизм определения времени отключения питания СУ.
7) Изменил механизмы управления разрешения защитами по перегрузу и недогрузу в режимах:
  - по программе;
  - пуск с подхватом;
  - встряхивание;
  - дегазации;
  - спец.алгоритм по перегрузу. 


////////////////////////////////////////////////////////////////////////
  _StartStopBkg. EventCode= "40971"


power:  "1024"
[  118.669536] Archive (283): drop_caches: 3
Stop PED. Code= "0" Who= "1" Num= "4"
KI in blocked state. reasons= "4"
spm. _reasons= "4" monitor.AlarmReason= "4"
_StartStopBkg. EventCode= "45476"
[  119.594992] PowerMonitor (271): drop_caches: 3
[  120.780670] PowerMonitor (271): drop_caches: 3
[  121.838215] PowerMonitor (271): drop_caches: 3
CAN_ERR_CRTL
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
CAN_ERR_BUSOFF


power:  "1029"
Stop PED. Code= "0" Who= "1" Num= "4"
[  110.427219] Archive (278): drop_caches: 3
KI in blocked state. reasons= "4"
spm. _reasons= "4" monitor.AlarmReason= "4"
_StartStopBkg. EventCode= "45476"
[  111.337317] PowerMonitor (266): drop_caches: 3
_frame_recv. Can't read from socket: Timeout
[  112.357276] PowerMonitor (266): drop_caches: 3
[  113.347332] PowerMonitor (266): drop_caches: 3
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
CAN_ERR_CRTL
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
_frame_recv. Can't read from socket: Timeout
[  114.384586] PowerMonitor (266): drop_caches: 3
_frame_recv. Can't read from socket: Timeout
CAN_ERR_BUSOFF

//////////////////////////////////////////////////////////
printLogbook

type=CT_SINGLE label= "1566816992" time= "1566816992" event= "a002" dataQnty= "0"//Включение питания СУ

type=CT_FIRST label=  "1566817003" time= "1566817003" event= "a170" dataQnty= "4"//Обновлено ПО КСУ
type=CT_LAST dataQnty= "10"

type=CT_FIRST label=  "1566817003" time= "1566817003" event= "b103" dataQnty= "4"////ПЛАТА ДИ-2 ПО ФАЗЕ W НЕ ГОТОВА

type=CT_SINGLE label= "1566817181" time= "1566817181" event= "a002" dataQnty= "0"//Включение питания СУ

type=CT_FIRST label=  "1566817192" time= "1566817192" event= "b1b6" dataQnty= "4"//СБОЙ БЛОКА КИ
type=CT_LAST dataQnty= "4"

type=CT_SINGLE label= "1566817947" time= "1566817947" event= "a034" dataQnty= "0"//Очистка архива
type=CT_SINGLE label= "1566817955" time= "1566817955" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE label= "1566817988" time= "1566817988" event= "a002" dataQnty= "0"//Включение питания СУ

type=CT_FIRST label=  "1566817999" time= "1566817999" event= "b1b6" dataQnty= "4"//СБОЙ БЛОКА КИ

type=CT_SINGLE label= "1566818031" time= "1566818031" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE label= "1566818031" time= "1566818031" event= "a001" dataQnty= "0"//Отключение питания СУ



type=CT_SINGLE label="1566817945" time= "1566817945" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE label="1566819254" time= "1566819254" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_FIRST label= "1566819264" time= "1566819264" event= "a170" dataQnty= "4"//Обновлено ПО КСУ
type=CT_FIRST label= "1566819265" time= "1566819265" event= "b1b6" dataQnty= "4"//СБОЙ БЛОКА КИ


type=CT_SINGLE label= "1566816979" time= "1566816979" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE label= "1566819632" time= "1566819632" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST label=  "1566819639" time= "1566819639" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE label= "1566819643" time= "1566819643" event= "a001" dataQnty= "0"//Отключение питания СУ

type=CT_SINGLE label= "1566816979" time= "1566816979" event= "a002" dataQnty= "0"
type=CT_SINGLE label= "1566819632" time= "1566819632" event= "a034" dataQnty= "0"
type=CT_FIRST label=  "1566819639" time= "1566819639" event= "b1a4" dataQnty= "4"
type=CT_SINGLE label= "1566819643" time= "1566819643" event= "a001" dataQnty= "0"

type=CT_SINGLE label= "1566816970" time= "1566816970" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE label= "1566816985" time= "1566816985" event= "a00e" dataQnty= "2"//Изменение режима СУ
type=CT_SINGLE label= "1566817650" time= "1566817650" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST  label= "1566817657" time= "1566817657" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE label= "1566817661" time= "1566817661" event= "a001" dataQnty= "0"//Отключение питания СУ

type=CT_SINGLE number= "3" label= "1566817049" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "4" label= "1566817091" event= "a00e" dataQnty= "2"//Изменение режима СУ
type=CT_SINGLE number= "0" label= "1566817776" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST  number= "1" label= "1566817785" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" label= "1566817787" event= "a001" dataQnty= "0"//Отключение питания СУ



type=CT_SINGLE number= "0" label= "1566817776" event= "a034" dataQnty= "0"//Очистка архива
type=CT_SINGLE number= "2" label= "1566817787" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "3" label= "1566817049" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "4" label= "1566817091" event= "a00e" dataQnty= "2"//Изменение режима СУ
type=CT_FIRST  number= "1" label= "1566817785" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ



//#include <sched.h>
//volatile int _vshed_code;

//    qint64 pid=a.applicationPid();
//    int shed_code=sched_getscheduler((pid_t)pid);
//    _vshed_code=shed_code;

//    int policy=SCHED_OTHER;
//    int max = sched_get_priority_max(policy);
//    _vshed_code=max;
//    int min = sched_get_priority_min(policy);
//    _vshed_code=min;

//    struct sched_param sparam;
//    sparam.__sched_priority=min;
//    int set_code=sched_setscheduler((pid_t)pid, policy, &sparam);
//    _vshed_code=set_code;

_COMMAND_("ПЕЧАТЬ ЖРУРНАЛА", "ПЕЧАТЬ ЖРУРНАЛА", printLogbook),

САЛН.00138-90.7z

//////////////////////////////////////////////////////////////////////////////
IndexMajorVersion
IndexMinorVersion
IndexRelease

Index_DevList_KsuMajor
Index_DevList_KsuMinor
Index_DevList_KsuRelease

/////////////////////////////////////////////
Ярлыки на столе

ksu-usb:
/home/lyzv/bin/ksu_usb

ksu-ssh:
/home/lyzv/bin/ksu-ssh

matlab:


serial-ttyS4:
/home/lyzv/bin/serial-ttyS4

serial-ttyS5:
/home/lyzv/bin/serial-ttyS5

QtCreator:
/home/lyzv/bin/creator

PyCharm:
/home/lyzv/bin/pycharm
Launch PyCharm

WinMerge:
env WINEPREFIX="/home/lyzv/.wine" wine C:\\windows\\command\\start.exe /Unix /home/lyzv/.wine/dosdevices/c:/users/Public/Desktop/WinMerge.lnk


Modbus Poll:
env WINEPREFIX="/home/lyzv/.wine" wine C:\\windows\\command\\start.exe /Unix /home/lyzv/.wine/dosdevices/c:/users/Public/Desktop/Modbus\ Poll.lnk


Modbus Slave:
env WINEPREFIX="/home/lyzv/.wine" wine C:\\windows\\command\\start.exe /Unix /home/lyzv/.wine/dosdevices/c:/users/Public/Desktop/Modbus\ Slave.lnk

dmitry@sent.com


"Пункт 2.3.2. Пункт 2.3.2. Перед запросом данных файла журнала событий СУ система телемеханики
запрашивает идентификационную информацию (ID 0x80 – 0x84). Если значение
поля «ID 0x84» содержит информацию отличную от нуля, то файл журнала
событий готов к считыванию системой телемеханики. При нулевом значении поля
«ID 0x84» система телемеханики продолжает запрос идентификационной
информации (ID 0x80 – 0x84) до изменения значения поля «ID 0x84»."



>><<--------------------------------------------------------------------------->><<
11:02:43  
11:02:43  Начало процесса ReadDeviceIdentification - чтение идентификационной информации устройства.
11:02:43  
11:02:43  Ожидается получение следюущих объектов от устройства:
11:02:43  0x00 (ASCII)
11:02:43  
11:02:43  Обращение к устройству.
11:02:43  
11:02:43  Обращение к устройству, попытка=1
11:02:43  
11:02:43  Попытка подключения к устройству с COM-портом=COM3,9600,8,None,One
11:02:44  Попытка подключения, результат=True
11:02:44  
11:02:44  Попытка опроса устройства командой=43 (0x2B), таймаут Request=3000мс., таймаут Response=3000мс.
11:02:44  
11:02:44  Итоговый результат попытки обращения к устройству:
11:02:44  Запрос:
11:02:44  >>> 


Запрос:
01.
2B.Function code
0E.MEI Type
01.Read Device ID code - request to get the basic device identification (stream access) Потоковый доступ!
00.Object Id - потоковый доступ к базовым идентификационным объектам, начиная с объекта №0 (VendorName)

70.77 CRC16 

Ответ:
01.
2B.Function code
0E.MEI Type
01.Read Device ID code
81.Conformity level
00.More Follows
00.Next Object Id
03.Number of objects

00.Object ID -   VendorName - "INM"
03.Object length
49. 'I'
4E. 'N'
4D. 'M'

01.Object ID -   ProductCode - "INM-3"
05.Object length
49. 'I'
4E. 'N'
4D. 'M'
2D. '-'
33. '3'

02.Object ID - MajorMinorRevision - "13.1.1911"
09.Object length
31. '1'
33. '3'
2E. '.'
31. '1'
2E. '.'
31. '1'
39. '9'
31. '1'
31. '1'

00.7E CRC16 



(Response 33 байт, Timestamp 11:02:44.315/637279885643158422)
11:02:44  Результат: Successful=True, NumberTry=1, TicksRequestResponse=1406250
11:02:44  Попытка опроса устройства командой=43 (0x2B) завершена успешно.
11:02:44  В ответе обнаружено объектов=3
11:02:44  Все ожидаемые объекты были обнаружены в ответе.
11:02:44  
11:02:44  Отключение от устройства с COM-портом=COM3
11:02:44  
11:02:44  Обращение к устройству завершено.
11:02:44  
11:02:44  Значения полученных объектов:
11:02:44  ControllerSoftVersion=INMINM-313.1.1911
11:02:44  
11:02:44  За весь процесс было совершено неудачных попыток обращений к устройству=0
11:02:44  Процесс ReadDeviceIdentification - чтение идентификационной информации устройства завершен, затрачено=0,51 секунд.


extern IMBSHoldingRegister *MBS_GSuState                ;//0x00. Состояние СУ
extern IMBSHoldingRegister *MBS_GReasonsForStart1       ;//0x01. Причины мешающие запуску СУ. Регистр 1
extern IMBSHoldingRegister *MBS_GReasonsForStart2       ;//0x02. Причины мешающие запуску СУ. Регистр 2
extern IMBSHoldingRegister *MBS_GReasonsForStart3       ;//0x03. Причины мешающие запуску СУ. Регистр 3
extern IMBSHoldingRegister *MBS_GReasonsForStart4       ;//0x04. Причины мешающие запуску СУ. Регистр 4
extern IMBSHoldingRegister *MBS_GUab                    ;//0x05. Напряжение сети AB
extern IMBSHoldingRegister *MBS_GUbc                    ;//0x06. Напряжение сети BC
extern IMBSHoldingRegister *MBS_GUca                    ;//0x07. Напряжение сети CA
extern IMBSHoldingRegister *MBS_GUUnb                   ;//0x08. Дисбаланс напряжения сети
extern IMBSHoldingRegister *MBS_GIa_motor               ;//0x09. Ток двигателя, фаза A
extern IMBSHoldingRegister *MBS_GIb_motor               ;//0x0A. Ток двигателя, фаза B
extern IMBSHoldingRegister *MBS_GIc_motor               ;//0x0B. Ток двигателя, фаза C
extern IMBSHoldingRegister *MBS_GIUnb                   ;//0x0C. Дисбаланс тока двигателя
extern IMBSHoldingRegister *MBS_GPwr                    ;//0x0D. Активная мощность
extern IMBSHoldingRegister *MBS_GSPwr                   ;//0x0E. Полная мощность
extern IMBSHoldingRegister *MBS_GCos                    ;//0x0F. Коэффициент мощности
extern IMBSHoldingRegister *MBS_GMotorLoading           ;//0x10. Загрузка
extern IMBSHoldingRegister *MBS_GRiz                    ;//0x11. Сопротивление изоляции

extern IMBSHoldingRegister *MBS_GReversAvers            ;//0x50. Направление вращения
extern IMBSHoldingRegister *MBS_GWpedRpm                ;//0x51. Частота вращения об/мин.
extern IMBSHoldingRegister *MBS_GFout                   ;//0x52. Выходная частота ПЧ

extern IMBSHoldingRegister *MBS_GWorkMode               ;//0x80. Режим работы: 0 - откл; 1 - ручной; 2 - автоматический
extern IMBSHoldingRegister *MBS_GUPowerNom              ;//0x81. Номинальное напряжение сети


01 Device Address 
03 Function code
24 Byte count

50 00 
00 00 
00 00 
00 00 
00 00 
00 D3 
00 01 
00 D3 
00 25 
00 00 
00 00 
00 00 
00 00 
00 00 
00 00 
00 00 
00 00 
00 00 - 36 байт 

5A 15

_SeqPhaseEnable

Cross compile rasperrypi:
https://www.raspberrypi.org/documentation/linux/kernel/building.md


git clone git://code.qt.io/qt/qt5.git Qt57Sources

 Заявление измени гл. бух на Козявину Т.П.
Приложи чек
Приложи банковскую выписку
Всё это отправь ГБ, копия Гайнуллиной А.Р.

Алексей Сергеевич, здравствуйте.


Мой отпуск выпал на "период короновируса". Прошу согласовать перенос отпуска на сентябрь.

make-ksu-firmware ksu -d 2 -v 13.1.18 -z 1 -f 200 -q 1000

Удалённые:

IndexUFreqNom
NT_IndexLenCable
IndexDI4
IndexKTM_DI4
FN_IndexOverIBypassDelay_forML
FN_IndexOverIOffDelay_forML
FN_IndexOverUEnable_forML
FN_IndexOverUOffDelay_forML
FN_IndexUnderUEnable_forML
FN_IndexUnderUOffDelay_forML
FN_IndexUnbUEnable_forML
FN_IndexUnbUBypassDelay_forML
FN_IndexFreqUEnable_forML
IndexUbat
IndexTOil
IndexPSht
IndexProtectContactEnable
FN_IndexTMotorProtectEnable_forML
FN_IndexTMotorOffDelay_forML
FN_IndexPPumpProtectEnable_forML
FN_IndexPPumpOffDelay_forML
FN_IndexVibrProtectEnable_forML1
FN_IndexVibrProtectEnable_forML2
FN_IndexVibrOffDelay_forML1
FN_IndexVibrOffDelay_forML2
FN_IndexVibrBypassDelay_forML1
IndexMaxIOffDelay
IndexKSUAbort
IndexGrafikStartTime
FN_IndexTimeOn
IndexIBypassDelay
IndexUBypassDelay
IndexAnalogBypassDelay

Index_StkStart...


IndexContrastGki

_ContrastGki

IndexUinTran
IndexUoutTran


Gislaved Nord*Frost 200
Toyo Observ Ice Freeser

////////////////////////////////////
1) Дылда
2) 

/home/lyzv/.wine/drive_c/Program Files (x86)/WinMerge/WinMergeU.exe
WinMergeU.exe

wine "/home/lyzv/.wine/drive_c/Program Files (x86)/WinMerge/WinMergeU.exe"


 jpegoptim -o Заявление3.jpg -S 500 Заявление2_оригинал.jpg


/home/lyzv/.bash_aliases
/media/lyzv/Seagate\ Backup\ Plus\ Drive/TREE/Документы/Копия_компьютера_на_27_марта_2020г/.bash_aliases

////////////////////////////////////

type=CT_SINGLE number= "0" label= "1585306743" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "1" label= "1585326703" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "8" label= "1585326713" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_SINGLE number= "9" label= "1585327826" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "10" label= "1585565987" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "11" label= "1585565998" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_SINGLE number= "12" label= "1585566041" event= "a00c" dataQnty= "0"//Пуск ПЭД. Ручной
type=CT_SINGLE number= "13" label= "1585566047" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "14" label= "1585574820" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "15" label= "1585574830" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_SINGLE number= "16" label= "1585575614" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "17" label= "1585575968" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_FIRST number= "18" label= "1585575978" event= "a170" dataQnty= "4"//Обновлено ПО КСУ
type=CT_SINGLE number= "22" label= "1585575996" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "23" label= "1585576827" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "24" label= "1585576838" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_SINGLE number= "27" label= "1585576871" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_FIRST number= "28" label= "1585576887" event= "a003" dataQnty= "4"//Изменение параметра
type=CT_SINGLE number= "30" label= "1585576895" event= "a00c" dataQnty= "0"//Пуск ПЭД. Ручной
type=CT_SINGLE number= "31" label= "1585576954" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "32" label= "1585577020" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "33" label= "1585577031" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ
type=CT_SINGLE number= "34" label= "1585577163" event= "a00c" dataQnty= "0"//Пуск ПЭД. Ручной


type=CT_SINGLE number= "0" label= "1585577580" event= "a034" dataQnty= "0"//Очистка архива

type=CT_SINGLE number= "0" label= "1585578829" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "1" label= "1585578987" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "2" label= "1585578997" event= "b1dd" dataQnty= "0"

//В момент отключения питания
type=CT_FIRST number= "0" label= "1585586285" event= "b1a4" dataQnty= "0"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_FIRST number= "0" label= "1585586285" event= "a117" dataQnty= "0"//Блокировка СУ

//В момент включения питания
type=CT_SINGLE number="0" label= "1585586271" event= "a034" dataQnty= "0"
type=CT_FIRST number= "0" label= "1585586285" event= "b1a4" dataQnty= "4"
type=CT_FIRST number= "0" label= "1585586288" event= "a001" dataQnty= "0"
type=CT_FIRST number= "0" label= "1585586476" event= "a002" dataQnty= "0"
type=CT_FIRST number= "0" label= "1585586487" event= "b1dd" dataQnty= "0"

//Печать журнала
type=CT_SINGLE number= "0" label= "1585586271" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number=  "1" label= "1585586285" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "3" label= "1585586288" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "4" label= "1585586476" event= "a002" dataQnty= "0"//Включение питания СУ
type=CT_SINGLE number= "5" label= "1585586487" event= "b1dd" dataQnty= "0"//АВАРИЯ. НЕ СООТВЕТСТВИЕ ТИПА ПЭД КОНФИГУРАЦИИ СУ

type=CT_SINGLE number= "0" label= "1585590761" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number=  "1" label= "1585590779" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" label= "1585590782" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "3" label= "1585590863" event= "a002" dataQnty= "0"//Включение питания СУ


type=CT_SINGLE number= "0" label= "1585590761" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number = "1" label= "1585590779" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" label= "1585590782" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "4" label= "1585590863" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "5" label= "1585664136" event= "a002" dataQnty= "0"//Включение питания СУ

1585675485 45494 B1B6//СБОЙ БЛОКА КИ
1585675485 45494 B1B6//СБОЙ БЛОКА КИ
1585675474 40962 A002//Включение питания СУ
1585664136 40961 A001//Отключение питания СУ
1585664136 40962 A002//Включение питания СУ

1585590863 40961 A001//Отключение питания СУ
1585590863 40962 A002//Включение питания СУ
1585590782 40961 A001//Отключение питания СУ
1585590761 41012 A034//Очистка архива
1585590761 41012 A034//Очистка архива

1585675485 45494 B1B6//СБОЙ БЛОКА КИ

type=CT_SINGLE number= "0"  label= "1585590761" event= "a034" dataQnty= "0"
type=CT_FIRST  number= "1"  label= "1585590779" event= "b1c2" dataQnty= "4"
type=CT_SINGLE number= "2"  label= "1585590782" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "4"  label= "1585590863" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "6"  label= "1585664136" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "7"  label= "1585675474" event= "a002" dataQnty= "0"
type=CT_FIRST  number= "8"  label= "1585675485" event= "b1b6" dataQnty= "4"
type=CT_SINGLE number= "10" label= "1585675785" event= "a18f" dataQnty= "2"
type=CT_SINGLE number= "11" label= "1585677162" event= "a18d" dataQnty= "2"




type=CT_SINGLE number= "0" label= "1585685053" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number = "1" label= "1585685084" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" label= "1585685090" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "3" label= "1585685199" event= "a002" dataQnty= "0"//Включение питания СУ

1585685199 40962 A002//Включение питания СУ
1585685199 40962 A002//Включение питания СУ

1585685090 40961 A001//Отключение питания СУ
1585685053 41012 A034//Очистка архива
1585685053 41012 A034//Очистка архива

1585685199 40962 A002//Включение питания СУ

type=CT_SINGLE number= "0" address= "4"  label= "1585686610" event= "a034" dataQnty= "0"//Очистка архива
type=CT_SINGLE number= "1" address= "20" label= "1585686620" event= "a118" dataQnty= "0"//Снятие блокировки СУ
type=CT_FIRST number = "2" address= "36" label= "1585686626" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "3" address= "52" label= "1585686629" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "4" address= "68" label= "1585686699" event= "a002" dataQnty= "0"//Включение питания СУ

4 1585686699 40962

4 1585686699 40962 A002//Включение питания СУ
3 1585686629 40961 A001//Отключение питания СУ
1 1585686620 41240 A118//Снятие блокировки СУ
0 1585686610 41012 A034//Очистка архива


type=CT_SINGLE number= "0" address= "4"  label= "1585740525" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number = "1" address= "20" label= "1585740539" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" address= "36" label= "1585740543" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "3" address= "52" label= "1585740612" event= "a002" dataQnty= "0"//Включение питания СУ

3 1585740612 40962 A002//Включение питания СУ
2 1585740543 40961 A001//Отключение питания СУ

ReadAbsPos - позиция (номер начального кластера), которую будет читать ReadCurrent
             функция ReadNext уменьшит на 1 этот номер и прочтёт.
             функция ReadBack увеличит на 1 этот номер и прочтёт.

ALARM_LOWVLTGIN
  <Event EventId="0xb1c2" EventName="ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ" Define="ALARM_LOWVLTGIN">
    <ExData Num="1" Size="2" Type="INT16U"  Name="U СЕТИ ФАЗЫ А" Ed="В"  VFormat="FORMAT_U"></ExData>
    <ExData Num="2" Size="2" Type="INT16U"  Name="U СЕТИ ФАЗЫ B" Ed="В"  VFormat="FORMAT_U"></ExData>
    <ExData Num="3" Size="2" Type="INT16U"  Name="U СЕТИ ФАЗЫ C" Ed="В"  VFormat="FORMAT_U"></ExData>
  </Event>

type=CT_SINGLE number= "0" address= "4"  label= "1585741440" event= "a034" dataQnty= "0"//Очистка архива
type=CT_FIRST number = "1" address= "20" label= "1585741446" event= "b1c2" dataQnty= "4"//ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
type=CT_SINGLE number= "2" address= "36" label= "1585741450" event= "a001" dataQnty= "0"//Отключение питания СУ
type=CT_SINGLE number= "3" address= "52" label= "1585741564" event= "a002" dataQnty= "0"//Включение питания СУ

3 1585741564 40962 A002//Включение питания СУ
2 1585741450 40961 A001//Отключение питания СУ

41359 A18F

1585742788 45506 B1C2 size=6

type=CT_FIRST number= "0"          address= "2320096" label= "1585744428" event= "b1c2" dataQnty= "0"
type=CT_FIRST number= "1840244696" address= "2" label= "1585744428" event= "b1c2" dataQnty= "4"
type=CT_LAST  number= "1840244696" address= "2" dataQnty= "2"



----------------------------------------------------------------------------------------------
Выключение питания:
type=CT_FIRST number= "0" address= "2320096" label= "1585746840" event= "b1c2" dataQnty= "0"
type=CT_FIRST number= "0" address= "20" label= "1585746840" event= "b1c2" dataQnty= "4"
type=CT_LAST  number= "0" address= "36" dataQnty= "2"


Включение питания:
type=CT_SINGLE number= "2130705064" address= "0" label= "1585746827" event= "a034" dataQnty= "0"
type=CT_FIRST number= "2130705064" address= "0" label= "1585746840" event= "b1c2" dataQnty= "4"
type=CT_FIRST number= "0" address= "1585746843" label= "1585746843" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "0" address= "36" label= "1585746843" event= "a001" dataQnty= "0"
type=CT_FIRST number= "0" address= "1585746843" label= "1585747645" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "0" address= "52" label= "1585747645" event= "a002" dataQnty= "0"

Печать вручную:
type=CT_SINGLE number= "0" address= "4"  label= "1585746827" event= "a034" dataQnty= "0"
type=CT_FIRST number = "1" address= "20" label= "1585746840" event= "b1c2" dataQnty= "4"
type=CT_SINGLE number= "2" address= "36" label= "1585746843" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1585747645" event= "a002" dataQnty= "0"


3 1585747645 40962
2 1585746843 40961
1 buf @0x6a2fe834 uint8_t[16]
      [0] 92  uint8_t 5С  0101 1100 = 2 = CT_FIRST

      [1] 152 uint8_t 98
      [2] 147 uint8_t 93
      [3] 132 uint8_t 84
      [4] 94  uint8_t 5E

      [5] 152 uint8_t 98
      [6] 147 uint8_t 93
      [7] 132 uint8_t 84
      [8] 94  uint8_t 5E

      [9] 194 uint8_t C2
      [10]  177 uint8_t B1
      [11]  1 uint8_t
      [12]  0 uint8_t
      [13]  1 uint8_t
      [14]  0 uint8_t
      [15]  235 uint8_t EB

2   buf @0x6a2fe834 uint8_t[16]
      [0] 52  uint8_t 34    0011 0100 = 1 = CT_SINGLE
      [1] 155 uint8_t
      [2] 147 uint8_t
      [3] 132 uint8_t
      [4] 94  uint8_t
      [5] 155 uint8_t
      [6] 147 uint8_t
      [7] 132 uint8_t
      [8] 94  uint8_t
      [9] 1 uint8_t
      [10]  160 uint8_t
      [11]  0 uint8_t
      [12]  0 uint8_t
      [13]  0 uint8_t
      [14]  0 uint8_t
      [15]  245 uint8_t
    

Перед выключением:
type=CT_FIRST number= "0" address= "2320096" label= "1585756348" event= "b1c2" dataQnty= "0"
type=CT_FIRST number= "0" address= "20" label= "1585756348" event= "b1c2" dataQnty= "4"
type=CT_LAST number= "0" address= "36" dataQnty= "2"

Вручную:
Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4"  label= "1585756333" event= "a034" dataQnty= "0"
type=CT_FIRST  number= "1" address= "20" label= "1585756348" event= "b1c2" dataQnty= "4"
type=CT_SINGLE number= "2" address= "36" label= "1585756352" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1585756447" event= "a002" dataQnty= "0"

Print sorted by label clusters:
type=CT_SINGLE number= "0" address= "4" label= "1585756333" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1585756348" event= "b1c2" dataQnty= "4"
type=CT_SINGLE number= "2" address= "36" label= "1585756352" event= "a001" dataQnty= "0"
////////////////////////////////

Полёт на венеру:
https://www.youtube.com/watch?v=14Mk5ZuJVqU

///////////////////////////////




type=CT_SINGLE number= "0" address= "4" label= "1586122984" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586122987" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"
type=CT_SINGLE number= "3" address= "52" label= "1586122987" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "4" address= "68" label= "1586123400" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "5" address= "84" label= "1586123514" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "6" address= "100" label= "1586123520" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "7" address= "116" label= "1586123597" event= "a088" dataQnty= "0"
type=CT_FIRST number= "8" address= "132" label= "1586123859" event= "a003" dataQnty= "4"
type=CT_LAST number= "9" address= "148" dataQnty= "7"
type=CT_SINGLE number= "10" address= "164" label= "1586123931" event= "a118" dataQnty= "0"
type=CT_SINGLE number= "11" address= "180" label= "1586123933" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "12" address= "196" label= "1586123946" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "13" address= "212" label= "1586123954" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "14" address= "228" label= "1586123962" event= "a088" dataQnty= "0"
type=CT_SINGLE number= "15" address= "244" label= "1586124259" event= "a18f" dataQnty= "2"
type=CT_SINGLE number= "16" address= "260" label= "1586124309" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "17" address= "276" label= "1586124309" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "18" address= "292" label= "1586124315" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "19" address= "308" label= "1586124321" event= "a088" dataQnty= "0"
type=CT_SINGLE number= "20" address= "324" label= "1586124372" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "21" address= "340" label= "1586124379" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "22" address= "356" label= "1586124387" event= "a088" dataQnty= "0"

record.value.append((const char *)cluster.u.next.value, cluster.u.next.size);


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1586281383" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1586281389" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1586281391" event= "b01b" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1586281396" event= "a00c" dataQnty= "0"
type=CT_FIRST number= "4" address= "68" label= "1586281406" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "5" address= "84" dataQnty= "2"
type=CT_SINGLE number= "6" address= "100" label= "1586281407" event= "a117" dataQnty= "0"
type=CT_SINGLE number= "7" address= "116" label= "1586281427" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "8" address= "132" label= "1586281432" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "9" address= "148" label= "1586281436" event= "a088" dataQnty= "0"
type=CT_SINGLE number= "10" address= "164" label= "1586281520" event= "a118" dataQnty= "0"
type=CT_SINGLE number= "11" address= "180" label= "1586281552" event= "a00c" dataQnty= "0"
type=CT_FIRST number= "12" address= "196" label= "1586281557" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "13" address= "212" dataQnty= "2"
type=CT_SINGLE number= "14" address= "228" label= "1586281557" event= "a117" dataQnty= "0"
type=CT_SINGLE number= "15" address= "244" label= "1586281615" event= "a18e" dataQnty= "2"
type=CT_SINGLE number= "16" address= "260" label= "1586281619" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "17" address= "276" label= "1586281621" event= "a118" dataQnty= "0"
type=CT_SINGLE number= "18" address= "292" label= "1586281967" event= "a18f" dataQnty= "2"
type=CT_SINGLE number= "19" address= "308" label= "1586283115" event= "a18d" dataQnty= "2"

#define Index_EventSubsystemVersion                        16370 // "ВЕРСИЯ ПОДСИСТЕМЫ СОБЫТИЙ"

 http://download.qt.io/official_releases/qt/5.7/5.7.1/qt-opensource-linux-x64-5.7.1.run

 САЛН.00138-90

 Добрый день!
Направляю извещение о введение в действие версии рабочего ПО КСУ-6.05 ("нового"). Версия должна записываться во все станции, и обычные, и универсальные.
В обычной станции нужно задавать тип двигателя -асинхронный, при попытке установить тип двигателя - вентильный будет выдаваться аварийное сообщение о несовпадении типа двигателя с конфигурацией СУ.
Версий ПО КИ остаётся пока две, для обычной станции и для настройки КИ - 11.1.53, для универсальной СУ - 11.3.3.


Здравсвтвуйте, все.


Вот актуальное ПО для наших СУ.
Мы выпускаем "асинхронную СУ" и "универсальную СУ". Первая может управлять только асинхонными ПЭД. Универсальная может управлять как асинхронными так и вентильными ПЭД. 
Мы выпускаем типа блоков КСУ. Старый КСУ-6. Новый КСУ-6.05. Новый КСУ-6.05 предназначен для замены старого КСУ-6. Новый совместим по разъёмам со старым.


Рабочее ПО для КСУ-6 выпускается только под асинхронные СУ. Последняя версия 11-03-27.
Рабочее ПО для КСУ-6.05 выпускается универсальное. Единственная версия 13.1.16. Поставляется как для асинхронных, так и для универсальных СУ.

-----------------------------------------------------------------------------------------------
Для СУ с новым контроллером КСУ-6.05.
Асинхронная СУ:  рабочее ПО КСУ версия 13.1.16; рабочее ПО КИ версия 11.3.3.
Универсальная СУ: рабочее ПО КСУ версия 13.1.16; рабочее ПО КИ версия 11.3.3; версия 1.0.8 загрузчика КСУ.

4 
1899552083

  Locals    
    j 0 int
    maxLabel  1885051349  uint32_t
    maxPosition 12  int32_t
    position  0 uint16_t
    ramDisk @0x736a450c CRamDisk<228>
    record  @0x736a44f0 logbook::record_t
    stream  @0x736a4500 ChunkStream
    this  @0x736a44bc logbook::CLogbook
  Inspector   
  Expressions   
  Return Value    
  Tooltip   





///////////////////////////////////////
    Locals    
    buffer  @0x736a448c uint8_t[16]
    i 1 uint16_t
    maxLabel  103023956 uint32_t &
    maxPosition -1  int32_t
    record  @0x736a447c logbook::record_t
    stream  @0x736a4500 ChunkStream &
    this  @0x736a4474 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
  Return Value    
  Tooltip  

    Locals    
    buffer  @0x736a448c uint8_t[16]
    i 4 uint16_t
    maxLabel  103023956 uint32_t &
    maxPosition 1 int32_t
    record  @0x736a447c logbook::record_t
    stream  @0x736a4500 ChunkStream &
    this  @0x736a4474 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
  Return Value    
  Tooltip   
 

  Locals    
    buffer  @0x736a448c uint8_t[16]
    i 7 uint16_t
    maxLabel  1161520777  uint32_t &
    maxPosition 4 int32_t
    record  @0x736a447c logbook::record_t
    stream  @0x736a4500 ChunkStream &
    this  @0x736a4474 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
  Return Value    
  Tooltip   

  Locals    
    buffer  @0x736a448c uint8_t[16]
    i 10  uint16_t
    maxLabel  1344938132  uint32_t &
    maxPosition 7 int32_t
    record  @0x736a447c logbook::record_t
    stream  @0x736a4500 ChunkStream &
    this  @0x736a4474 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
  Return Value    
  Tooltip   


  Locals    
    buffer  @0x736a448c uint8_t[16]
    i 12  uint16_t
    maxLabel  1885051349  uint32_t &
    maxPosition 12  int32_t
    record  @0x736a447c logbook::record_t
    stream  @0x736a4500 ChunkStream &
    this  @0x736a4474 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
  Return Value    
  Tooltip 


type=CT_SINGLE number= "0"  address= "4"   label= "1586281383" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1"  address= "20"  label= "1586281389" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "2"  address= "36"  label= "1586281391" event= "b01b" dataQnty= "0"
type=CT_SINGLE number= "3"  address= "52"  label= "1586281396" event= "a00c" dataQnty= "0"
type=CT_FIRST number=  "4"  address= "68"  label= "1586281406" event= "b1a4" dataQnty= "4"
type=CT_LAST number=   "5"  address= "84" dataQnty= "2"
type=CT_SINGLE number= "6"  address= "100" label= "1586281407" event= "a117" dataQnty= "0"
type=CT_SINGLE number= "7"  address= "116" label= "1586281427" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "8"  address= "132" label= "1586281432" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "9"  address= "148" label= "1586281436" event= "a088" dataQnty= "0"
type=CT_SINGLE number= "10" address= "164" label= "1586281520" event= "a118" dataQnty= "0"
type=CT_SINGLE number= "11" address= "180" label= "1586281552" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "12" address= "196" label= "1936326657" event= "a001" dataQnty= "0"
type=CT_LAST number=   "13" address= "212" dataQnty= "2"
type=CT_SINGLE number= "14" address= "228" label= "1586281557" event= "a117" dataQnty= "0"
type=CT_SINGLE number= "15" address= "244" label= "1586281615" event= "a18e" dataQnty= "2"
type=CT_SINGLE number= "16" address= "260" label= "1586281619" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "17" address= "276" label= "1586281621" event= "a118" dataQnty= "0"
type=CT_SINGLE number= "18" address= "292" label= "1586281967" event= "a18f" dataQnty= "2"
type=CT_SINGLE number= "19" address= "308" label= "1586283115" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "20" address= "324" label= "1586283115" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "21" address= "340" label= "1586551107" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "22" address= "356" label= "1586551157" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "23" address= "372" label= "1586551160" event= "b01b" dataQnty= "0"  


//Следующее - тестировать readCurrent

Кластер №0
  Locals    
    buffer  @0x736a4608 uint8_t[16]
      [0] 84  uint8_t 0x54 1010100b -> 2-type, 10-size
      [1] 174 uint8_t
      [2] 144 uint8_t
      [3] 148 uint8_t
      [4] 94  uint8_t
      [5] 174 uint8_t
      [6] 144 uint8_t
      [7] 148 uint8_t
      [8] 94  uint8_t
      [9] 52  uint8_t 0x34    0xa034 //Очистка архива 
      [10]  160 uint8_t 0xA0
      [11]  0 uint8_t
      [12]  0 uint8_t
      [13]  0 uint8_t
      [14]  0 uint8_t
      [15]  136 uint8_t
    i 0 uint16_t
    idisk @0x219d8c CVirtualDisk &
    maxLabel  0 uint32_t
    maxPosition -1  int32_t
    number  0 uint16_t
    stream  @0x736a4618 logbook::stream_t
    this  @0x736a45ec logbook::CLogbook
    type  1 logbook::cluster_e
  Inspector   
  Expressions   
    clusterPosition @0x21e6ec logbook::Position
      ifront  0 uint16_t
      imax  0 uint16_t
      iread -1  int32_t
      irear 0 uint16_t
      qnty  0 uint16_t
  Return Value    
  Tooltip   
    CT_FIRST  2 enum {...}


Detaching from process 565
Detaching from process 566
Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "0" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1586799831" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1586799831" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1586800034" event= "a002" dataQnty= "0"
type=CT_FIRST number= "4" address= "68" label= "1586800050" event= "b1b6" dataQnty= "4"
type=CT_LAST number= "5" address= "84" dataQnty= "4"
Print sorted by label clusters:
type=CT_SINGLE number= "0" address= "4" label= "0" ev


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "0" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1586799831" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1586799831" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1586800034" event= "a002" dataQnty= "0"
type=CT_FIRST number= "4" address= "68" label= "1586800050" event= "b1b6" dataQnty= "4"
type=CT_LAST number= "5" address= "84" dataQnty= "4"
type=CT_SINGLE number= "6" address= "100" label= "1586800371" event= "a18f" dataQnty= "2"
type=CT_SINGLE number= "7" address= "116" label= "1586800717" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "8" address= "132" label= "1586800738" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "9" address= "148" label= "1586800740" event= "b01b" dataQnty= "0"
Print sorted by label clusters:


  Locals    
    buffer  @0x736a45c8 uint8_t[16]
      [0] 0 uint8_t
      [1] 79  uint8_t
      [2] 132 uint8_t
      [3] 149 uint8_t
      [4] 94  uint8_t
      [5] 79  uint8_t
      [6] 132 uint8_t
      [7] 149 uint8_t
      [8] 94  uint8_t
      [9] 2 uint8_t
      [10]  160 uint8_t
      [11]  0 uint8_t
      [12]  0 uint8_t
      [13]  0 uint8_t
      [14]  0 uint8_t
      [15]  130 uint8_t
    cluster @0x736a45ac logbook::cluster_t
    first false bool
    number  5 uint16_t
    record  @0x736a4608 logbook::record_t &
    recordNumber  4 int32_t &
    stopNumber  4 uint16_t
    stream  @0x736a4618 logbook::stream_t &
    this  @0x736a45a4 logbook::CLogbook
    vector  <1 items> QVector<logbook::cluster_t>
  Inspector   
  Expressions   
  Return Value    
  Tooltip   


  Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1586874208" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1586874219" event= "a089" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1586874226" event= "a18b" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1586874238" event= "a088" dataQnty= "0"
type=CT_SINGLE number= "4" address= "68" label= "1586874365" event= "a18e" dataQnty= "2"
type=CT_SINGLE number= "5" address= "84" label= "1586874369" event= "a18d" dataQnty= "2"
type=CT_SINGLE number= "6" address= "100" label= "1586874401" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "7" address= "116" label= "1586874403" event= "a00c" dataQnty= "0"
type=CT_FIRST number= "8" address= "132" label= "1586874450" event= "a003" dataQnty= "4"
type=CT_LAST number= "9" address= "148" dataQnty= "7"
type=CT_SINGLE number= "10" address= "164" label= "1586874450" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "11" address= "180" label= "1586874475" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "12" address= "196" label= "1586874508" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "13" address= "212" label= "1586874579" event= "a00b" dataQnty= "0"
type=CT_SINGLE number= "14" address= "228" label= "1586874694" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "15" address= "244" label= "1586874735" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "16" address= "260" label= "1586874805" event= "a00b" dataQnty= "0"
type=CT_SINGLE number= "17" address= "276" label= "1586874841" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "18" address= "292" label= "1586874926" event= "a002" dataQnty= "0"
Print sorted by label clusters:

////////////////////////////////////////
for()

  Locals    
    buffer  @0x736a45fc uint8_t[16]
      [0] 84  uint8_t
      [1] 16  uint8_t
      [2] 7 uint8_t
      [3] 150 uint8_t
      [4] 94  uint8_t
      [5] 16  uint8_t
      [6] 7 uint8_t
      [7] 150 uint8_t
      [8] 94  uint8_t
      [9] 12  uint8_t
      [10]  160 uint8_t
      [11]  0 uint8_t
      [12]  0 uint8_t
      [13]  0 uint8_t
      [14]  0 uint8_t
      [15]  22  uint8_t
    i 102 uint16_t
    idisk @0x21bea4 CVirtualDisk &
    maxLabel  1586890470  uint32_t
    maxPosition 101 int32_t
    next  103 int32_t
    nextPosition  102 int32_t &
    number  102 uint16_t
    record  @0x736a45e8 logbook::record_t
    stream  @0x736a460c logbook::stream_t
    this  @0x736a45e4 logbook::CLogbook
    type  2 logbook::cluster_e
  Inspector   
  Expressions   
    clusterPosition @0x220804 logbook::Position
  Return Value    
  Tooltip   


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1586893048" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586893064" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"

type=CT_SINGLE number= "0" address= "4" label= "1586893048" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586893064" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1586893266" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586893278" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"
_frame_recv. Can't read from socket: Timeout

type=CT_SINGLE number= "0" address= "4" label= "1586893266" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586893278" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"


type=CT_SINGLE number= "0" address= "4" label= "1586893583" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1586893594" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"


IndexOverIEnable
IndexOverISetpoint


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4 " label= "1587206833" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1587206847" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1587206959" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1587207049" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "4" address= "68" label= "1587207067" event= "a00b" dataQnty= "0"
type=CT_FIRST  number= "5" address= "84" label= "1587207089" event= "b1a4" dataQnty= "4"


Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1587206833" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1587206847" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1587206959" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1587207049" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "4" address= "68" label= "1587207067" event= "a00b" dataQnty= "0"
type=CT_SINGLE number= "5" address= "84" label= "1587207092" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "6" address= "100" label= "1587208825" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "7" address= "116" label= "1587209269" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "8" address= "132" label= "1587209320" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "9" address= "148" label= "1587209322" event= "a00e" dataQnty= "2"
type=CT_FIRST number= "10" address= "164" label= "1587209339" event= "b1a4" dataQnty= "4"




Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1587206833" event= "a034" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1587206847" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "2" address= "36" label= "1587206959" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "3" address= "52" label= "1587207049" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "4" address= "68" label= "1587207067" event= "a00b" dataQnty= "0"
type=CT_SINGLE number= "5" address= "84" label= "1587207092" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "6" address= "100" label= "1587208825" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "7" address= "116" label= "1587209269" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "8" address= "132" label= "1587209320" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "9" address= "148" label= "1587209322" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "10" address= "164" label= "1587209342" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "11" address= "180" label= "1587209405" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "12" address= "196" label= "1587209508" event= "a00b" dataQnty= "0"
type=CT_SINGLE number= "13" address= "212" label= "1587209661" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "14" address= "228" label= "1587209662" event= "b01b" dataQnty= "0"
type=CT_SINGLE number= "15" address= "244" label= "1587209667" event= "a00e" dataQnty= "2"
type=CT_SINGLE number= "16" address= "260" label= "1587209668" event= "a00c" dataQnty= "0"
type=CT_SINGLE number= "17" address= "276" label= "1587209682" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "18" address= "292" label= "1587209740" event= "a002" dataQnty= "0"
type=CT_SINGLE number= "19" address= "308" label= "1587209741" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "20" address= "324" label= "1587209865" event= "a002" dataQnty= "0"
type=CT_FIRST number= "21" address= "340" label= "1587209875" event= "b1b6" dataQnty= "4"
type=CT_LAST number= "22" address= "356" dataQnty= "4"
type=CT_SINGLE number= "23" address= "372" label= "1587209906" event= "a00b" dataQnty= "0"
type=CT_FIRST number= "24" address= "388" label= "1587209923" event= "b1a4" dataQnty= "4"


Префикс на версию - 4
Префикс на индекс - 2

//При выключении:
addr= "68" sz= "16"
addr= "84" sz= "16"
addr= "100" sz= "16"

При включении:
Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1587211292" event= "a001" dataQnty= "0"
type=CT_SINGLE number= "1" address= "20" label= "1587211694" event= "a002" dataQnty= "0"
type=CT_FIRST number= "2" address= "36" label= "1587211704" event= "b1b6" dataQnty= "4"
type=CT_LAST number= "3" address= "52" dataQnty= "4"
type=CT_SINGLE number= "4" address= "68" label= "1587211735" event= "a00b" dataQnty= "0"//Пуск ПЭД. Автоматический
type=CT_FIRST number= "5" address= "84" label= "1587211804" event= "b1a4" dataQnty= "4"//СТОП ПЭД.ПОНИЖЕНИЕ НАПРЯЖЕНИЯ СЕТИ
addr= "84" sz= "16"
addr= "100" sz= "16"



//При выключении:
addr= "20" sz= "16"
addr= "36" sz= "16"

При включении:
Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1587213797" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1587213828" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"
addr= "52" sz= "16"
addr= "68" sz= "16"


//При выключении:
addr= "22" sz= "16"
addr= "38" sz= "16"

При включении:
type=CT_SINGLE number= "0" address= "4" label= "1587214566" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1587214578" event= "b1a4" dataQnty= "4"
addr= "22" sz= "16"
addr= "38" sz= "16"


//При выключении:
addr= "22" sz= "16"
addr= "38" sz= "16"

Print unsorted clusters:
type=CT_SINGLE number= "0" address= "4" label= "1587215067" event= "a034" dataQnty= "0"
type=CT_FIRST number= "1" address= "20" label= "1587215073" event= "b1a4" dataQnty= "4"
type=CT_LAST number= "2" address= "36" dataQnty= "2"
type=CT_SINGLE number= "3" address= "52" label= "1587215073" event= "a117" dataQnty= "0"
addr= "70" sz= "16"
addr= "86" sz= "16"



https://code-live.ru/tag/cpp-manual/
http://cppstudio.com/cat/271/
https://ravesli.com/uroki-cpp/


<Event EventId="0xa147" Color="Maroon" EventName="Ошибка чтения FRAM" Define="ERROR_FRAM_READ"></Event>

<Event EventId="0xa570" Color="Red"  EventName="Ошибка чтения FRAM блока КИ" Define="KI_FRAM_ERROR"></Event>


Указание о внедрении:
В уточнение п.3  ТР №622 и 623, вновь вводимая версия ПО КСУ-6.05 должна 
записываться во все станции управления ИНМ-3-ЧР, и обычные, и универсальные. 
Настройка КСУ-6.05 также должна  проводиться с версией 13.01.16.

Указание о заделе:
Задел станций управления и КСУ-6.05 доработать обновлением ПО КСУ-6.05 на 
версию 13.01.16. Допускается не обновлять ПО  в станциях управления, прошедших ПСИ.
/////////////////////////////////////////////////////////////////////////////////////////////

Заместитель Генерального директора по перспективным разработкам Скорик Александр Григорьевич  
(49254) 3-51-14;
+7(915)756-14-57
skorik@elekton.ru



InputRegisters

Ошибка в сервере MODBUS/TCP для выбора карты используется индекс Index_MbServer. Нужно использовать Index_MbServer0


aduAnsver:  "\x01
             \x04+\x00\x10\x00\x00\x00\x00\x00\f\x14\x04\x14\b\x1F\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00
             \xD9\x00\x01\x00\xD9\x00&\x00\x00\x00\x00\x00\x00\x00\x00'\x0F\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01
             \xD8\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00
             \x00\x00\x00\x00\x00\x00\x00\x1A="
aduAnsver:  "\x01\x04+\x00\x10\x00\x00\x00\x00\x00\f\x14\x04\x14\b\x1F\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xD8\x00\x01\x00\xD9\x00&\x00\x00\x00\x00\x00\x00\x00\x00'\x0F\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xD8\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xE7\xFD"


aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
_frame_recv. Can't read from socket: Timeout
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
_frame_recv. Can't read from socket: Timeout
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d8 0 26 0 0 0 0 0 0 0 0 27 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d7 0 1 0 d7 0 25 0 0 0 0 0 0 0 0 27 "
_frame_recv. Can't read from socket: Timeout
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "43"

aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "86"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d8 0 1 0 d9 0 26 0 0 0 0 0 0 0 0 27 f 0 0 0 0 0 0 0 0 0 0 1 d8 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 "
aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "86"
"0 10 0 0 0 0 0 c 14 4 14 8 1f 6 0 0 0 0 0 0 0 0 0 0 0 d9 0 1 0 d9 0 26 0 0 0 0 0 0 0 0 27 f 0 0 0 0 0 0 0 0 0 0 1 d8 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 "





aduAnsver:  Device Address:  "1" Function Code:  "4" Byte Count:  "194"
"0  10 0  0  0  0  0  c  14 4  14 8  1f 6  0  0  0  0  0  0  0  0  0  0  0  da 0  1  0 
 da 0  26 0  0  0  0  0  0  0  0  27 f  0  0  0  0  0  0  0  0  0  0  1  d8 0  0  0  4 
 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 
 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 
 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 
 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 
 0  0  0  0  0  0  14 4  17 10 4  30 0  0  1a e6 10 0  ff fa "

 Index_NumPole      FLASH
 Index_Wped_nom_min FLASH
 Index_Wped_nom_cek
 Index_MotorFnom    RAM


 Index_KI_PWMFreq
 Index_KI_PWMMode

 https://www.youtube.com/watch?v=GdjcagKhhy0

 modbus/modbus_rtu.h

 ...........
https://gogov.ru/firearms-licence/obninsk
 
 http://profi-kaluga.ru/
 http://dvorkaluga.ru/kontakty.html
 http://status-kaluga.ru/index.php?page=svedeniya  - дозвонился

 dd if=test_func20.dsk of=test_func20_aligned.dsk bs=3872 count=11


 file:///home/lyzv/work/svn


 v1.5.0
 // Public functions of QuickLZ
size_t qlz_size_decompressed(const char *source);
size_t qlz_size_compressed(const char *source);
size_t qlz_compress(const void *source, char *destination, size_t size, qlz_state_compress *state);
size_t qlz_decompress(const char *source, void *destination, qlz_state_decompress *state);
int qlz_get_setting(int setting);


class WorkerThread : public QThread
{
    Q_OBJECT
    void run() override {
        QString result;
        /* ... here is the expensive or blocking operation ... */
        emit resultReady(result);
    }
signals:
    void resultReady(const QString &s);
};

void MyObject::startWorkInAThread()
{
    WorkerThread *workerThread = new WorkerThread(this);
    connect(workerThread, &WorkerThread::resultReady, this, &MyObject::handleResults);
    connect(workerThread, &WorkerThread::finished, workerThread, &QObject::deleteLater);
    workerThread->start();
}

QBlockingQueued


3.3 Функциональные возможности
– плавное торможение электродвигателя по предельному значению напряжения в звене
постоянного тока;
– работу в режиме компенсации скольжения при работе ПЭД на нагрузку с большим
моментом инерции;
– режим работы по программе (АПВ, КЭС, ПКВ);
– после остановки по аппаратной защите (IGBT и др.) должна присутствовать функция
самотестирования и запуска в автономном режиме;
– возможность автоматического выбора уставки недогрузки;

3.6 Требования к контроллеру ЧРП
При закрытии программы для чтения архивов событий должны сохраняться последние
настройки интерфейса.

– по запросу пользователя отображать/скрывать значения тех или иных регистрируемых
параметров;
– отображение уставок защит на момент снятия архива, в продвинутом варианте
возможность выбора даты и отображение уставок на определенную дату;

Подключение ПК к контроллеру ЧРП должно осуществляться через USB, а также по
беспроводному интерфейсу Bluetooth.

Уставки по умолчанию, в обязательном порядке должны быть
согласованы с ОГ.



Modbus Slave 7.3.0.1402
------------ Serial Keys ------------
QJTHXPXVT5J1
GBOYA5T5YVGP
2BISMACMZA7W
6NUD6LOOAYEQ
VHNC59E6F3VJ
-------------------------------------

void nvms_save_a108(uns16_t value) { self_save_u16(SELF_A108_PAGE, value); }
uns16_t nvms_load_a108(void) { return self_load_u16(SELF_A108_PAGE, 0x0004); }

stty -echo -F /dev/ttymxc2
/home/lyzv/.wine/drive_c/Program\ Files\ \(x86\)/HHD\ Software/Free\ Serial\ Port\ Monitor/Device\ Monitor.exe

wine "/home/lyzv/.wine/drive_c/Program Files (x86)/HHD Software/Free Serial Port Monitor/Device Monitor.exe"


You don't have required rights to launch the application. Ask your administrator to grant you corresponding rights.


wine "/home/lyzv/.wine/drive_c/Program Files (x86)/WitteCom/Modbus Poll/mbpoll.exe"
wine "/home/lyzv/.wine/drive_c/Program Files (x86)/WitteCom/Modbus Slave/mbslave.exe"

snarlistic/jpnevulator

jpnevulator

sudo apt-cache search jpnevulator

01 - Device Address
2B - Function code - 43 
0E - MEI type - 14 
03 - Read Device ID code - request to get the extended device identification (stream access)
83 - Object Id - 
00 00 05 80 0C 49 4E 4D 2D 4B 53 55 2D 36 2E 30 35

Byte Count
Reference Type

01 
2B 
0E 
03 
83 

00 00 05 80 0C 49 4E 4D 2D 4B 53
55 2D 36 2E 30 35 81 03 5A 41 4B 82 02 00 00 83
02 00 00 84 02 00 00 63 9B


////////////////////////////////////////
2020-05-29 15:03:25.121962:
01 
2B 
0E 
03 
83 80 
00 70
00 B7
05 
80 0C 49 4E 4D 2D 4B 53 55 2D 36 2E 30 35


	Locals		
		addr	1	uint8_t


		aduReq	"\001+\016\003\200p·"	QByteArray
				    	1    	0x01	char
				'+' 	43    	0x2b	char
				    	14    	0x0e	char
				    	3    	0x03	char
				'ﾀ' 	-128/128	0x80	char
				'p' 	112    	0x70	char
				'ﾷ' 	-73/183	    0xb7	char



		hdlc	@0x7fffffffbd90	QModbusHDLC
		pduAnsv	""	QByteArray &
		pduReq	"+\016\003\200"	QByteArray &
				'+' 	43    	0x2b	char
				    	14    	0x0e	char
				    	3    	0x03	char
				'ﾀ' 	-128/128	0x80	char
		rcvChunk	""	QByteArray
		this	"MainWindow"	MainWindow
		time	(invalid)	QTime
		timeout	1000	int
	Inspector		
	Expressions		
	Return Value		
	Tooltip		

///////////////////////////////////

01 
2B 
0E 
03 
83 
00 00 05 80 0C 49 4E 4D 2D 4B 53 55 2D 36 2E 30 35 81 03 5A 41 4B 82 02 00 00 83 02 00 00 84 02 00 00 63 9B

01 
2B Function code
0E MEI Type
03 Read Device ID code
83 Conformity level
00 More Follows
00 Next Object Id
05 Number of objects

80 Object ID
0C Object length - 12
49 Object Value
4E 
4D 
2D 
4B 
53 
55 
2D 
36 
2E 
30 
35




socat /dev/ttyUSB1,raw,echo=0 \
SYSTEM:'tee in.txt |socat - "PTY,link=/tmp/ttyV0,raw,echo=0,waitslave" |tee out.txt'

strace -s9999 -o modbus-poll.strace -eread,write,ioctl ./modbus-poll

geoffmeyers/interceptty




01 Device Address
2b Function code
0e MEI Type
03 Read Device ID code
83 Conformity level
00 More Follows
00 Next Object Id
05 Number of objects

80 Object ID
0c Object length - 12
49 4e 4d 2d 4b 53 55 2d 36 2e 30 35   Object Value  

81 Object ID
03 Object length 
5a 41 4b   Object Value

82 Object ID
02 Object length 
d0 07   Object Value

83 Object ID
02 Object length
90 07 

84 Object ID
02 Object length
00 00 

e9 92 CRC16 



01 Device Address
2b Function code
0e MEI Type
03 Read Device ID code
83 Conformity level
00 More Follows
00 Next Object Id
05 Number of objects

80 
0c 
49 4e 4d 2d 4b 53 55 2d 36 2e 30 35 

81
03 
5a 41 4b 

82 
02 
00 00

83 
02 
00 00 

84 
02 
00 00 

63 9b


///////////////////////////////////////////////////

minicom --device /dev/ttyUSB1 --baud 9600 --displayhex


displayhex
aduAnsver:  
Device Address: "1" 
Function Code:  "43" 
Byte Count:  "14"
3 
83 
0 
0 
5 

80 
c 49 4e 4d 2d 4b 53 55


01 
2B 
0E 
03 
80 
70 B7

01 2B 0E 03 80 70 B7


00000000 01 2B 0E 03 80 70 B7 01   2B 0E 03 83 00 00 05 80  .+...p..+.......
00000010 0C 49 4E 4D 2D 4B 53 55   2D 36 2E 30 35 81 03 5A  .INM-KSU-6.05..Z
00000020 41 4B 82 02 00 00 83 02   00 00 84 02 00 00 63 9B  AK............c.

//Прослушка COM-порта:
https://unix.stackexchange.com/questions/12359/how-can-i-monitor-serial-port-traffic


00000000 01 2B 0E 03 80 70 B7 01   2B 0E 03 83 00 00 05 80  .+...p..+.......
00000010 0C 49 4E 4D 2D 4B 53 55   2D 36 2E 30 35 81 03 5A  .INM-KSU-6.05..Z
00000020 41 4B 82 02 00 00 83 02   00 00 84 02 00 00 63 9B  AK............c.

Запрос
01 
2B 
0E 
03 
80 70 B7 

Ответ:
01 
2B 
0E 
03 
83 
00 
00 
05 

80
0C 
49 4E 4D 2D 4B 53 55 2D 36 2E 30 35 

81 
03 
5A 41 4B 

82 
02 
00 00 

83 
02 00 00 

84 
02 00 00 

63 9B

....................

01 2B 0E 03 80 70 B7 01 2B 0E 03 83 00 00 05 80
0C 49 4E 4D 2D 4B 53 55 2D 36 2E 30 35 81 03 5A
41 4B 

82 
02 
D0 07 - 2000

83 
02 
90 07 - 1936

84 
02 
BF 00 - 191

99 A2


1:0:8bd:0:0:0:0:0:0:1:1:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0:0


stty -F /dev/ttyS1 ispeed 9600 ospeed 9600 -ignpar cs8 -cstopb -echo
stty -F /dev/ttyUSB1 raw speed 9600

lyzv@lyzv-pc:~$ stty -F /dev/ttyUSB1 -a
speed 9600 baud; rows 0; columns 0; line = 0;
intr = ^C; quit = ^\; erase = ^?; kill = ^U; eof = ^D; eol = <undef>; eol2 = <undef>; swtch = <undef>; start = ^Q; stop = ^S; susp = ^Z; rprnt = ^R; werase = ^W; lnext = ^V; discard = ^O;
min = 1; time = 0;
-parenb -parodd -cmspar cs8 hupcl -cstopb cread clocal -crtscts
-ignbrk -brkint -ignpar -parmrk -inpck -istrip -inlcr -igncr -icrnl -ixon -ixoff -iuclc -ixany -imaxbel -iutf8
-opost -olcuc -ocrnl onlcr -onocr -onlret -ofill -ofdel nl0 cr0 tab0 bs0 vt0 ff0
-isig -icanon iexten -echo echoe echok -echonl -noflsh -xcase -tostop -echoprt echoctl echoke -flusho -extproc
lyzv@lyzv-pc:~$ 

Как программировать UART в linux:
https://blog.mbedded.ninja/programming/operating-systems/linux/linux-serial-ports-using-c-cpp/

stty -F /dev/ttyUSB1 raw speed 9600 -parenb -cstopb cs8 -echo cread clocal \
					 -icanon -echo -echoe -echol \
					 -ixon -ixoff -ixany \
					 -ignbrk -grkint -parmrk -istrip -inlcr -igncr -icrnl \
					 -opost -onlcr



https://www.gosuslugi.ru/16587/1

https://atombit.ru/p399864785-kabel-adapter-usb.html?_openstat=bWFya2V0LnlhbmRleC5ydTvQmtCw0LHQtdC70Ywt0LDQtNCw0L_RgtC10YAgVVNCID4gUlMyMzIgREI5IDEsNSDQvCBDYWJsZXhwZXJ0IFVBUy1EQjlNLTAyIFtQTDIzMDNUQV07b0dGeDF6V3liUC0xdm90dVNZRnJ5UTs&ymclid=15910216572759939732000001


git clone https://github.com/stephane/libmodbus.git

Ком порт
https://www.dns-shop.ru/product/7ec8d5177e593330/perehodnik-orient-usb-20-a---comrs232-9m/

Index_UART1_BaudRate

motorcontrol.ru/courses/courses_mc01
https://www.youtube.com/watch?list=PLlCGBQ6UMJidAwNSAXdtasKv2Sw5yiuvv&v=FmrlZA4tkOQ&feature=emb_logo


////////////////////////////////////////////////////////////////////


13:45:56
13:45:56  >><<--------------------------------------------------------------------------->><<
13:45:56
13:45:56  Начало процесса ReadDeviceIdentification - чтение идентификационной информации устройства.
13:45:56
13:45:56  Ожидается получение следюущих объектов от устройства:
13:45:56  0x00 (ASCII)
13:45:56
13:45:56  Обращение к устройству.
13:45:56
13:45:56  Обращение к устройству, попытка=1
13:45:56
13:45:56  Попытка подключения к устройству с IP-адресом=192.168.3.11, таймаут=3000мс.
13:45:56  Попытка подключения, результат=True
13:45:56
13:45:56  Попытка опроса устройства командой=43 (0x2B), таймаут Request=3000мс., таймаут Response=3000мс.
13:45:56
13:45:56  Итоговый результат попытки обращения к устройству:
13:45:56  Запрос:
13:45:56  >>> 00.00.00.00.00.06.01.2B.0E.01.00 (Request 11 байт, Timestamp 13:45:56.427/637274799564277343)
13:45:56  Ответ:
13:45:56  <<<  (Response 0 байт, Timestamp 13:45:56.429/637274799564296875)
13:45:56  Результат: Successful=False, NumberTry=1, Stage=CheckResponse, CustomError=ZeroCountBytesResponse
13:45:56  Попытка опроса устройства командой=43 (0x2B) завершилась неуспешно.
13:45:56  Ожидание следующей попытки=1000мс.
13:45:57
13:45:57  Обращение к устройству, попытка=2
13:45:57
13:45:57  Попытка опроса устройства командой=43 (0x2B), таймаут Request=3000мс., таймаут Response=3000мс.
13:45:57
13:45:57  Итоговый результат попытки обращения к устройству:
13:45:57  Запрос:
13:45:57  >>> 00.00.00.00.00.06.01.2B.0E.01.00 (Request 11 байт, Timestamp 13:45:57.435/637274799574355468)
13:45:57  Ответ:
13:45:57  <<<  (Response 0 байт, Timestamp 13:45:57.435/637274799574355468)
13:45:57  Результат: Successful=False, NumberTry=2, Stage=CheckResponse, CustomError=ZeroCountBytesResponse
13:45:57  Попытка опроса устройства командой=43 (0x2B) завершилась неуспешно.
13:45:57  Ожидание следующей попытки=1000мс.
13:45:58
13:45:58  Обращение к устройству, попытка=3
13:45:58
13:45:58  Попытка опроса устройства командой=43 (0x2B), таймаут Request=3000мс., таймаут Response=3000мс.
13:45:58
13:45:58  Итоговый результат попытки обращения к устройству:
13:45:58  Запрос:
13:45:58  >>> 00.00.00.00.00.06.01.2B.0E.01.00 (Request 11 байт, Timestamp 13:45:58.435/637274799584355468)
13:45:58  Ответ:
13:45:58  <<< EMPTY (Response)
13:45:58  Результат: Successful=False, NumberTry=3, Stage=StartRequest, ExceptionRequest=Программа на вашем хост-компьютере разорвала установленное подключение, SocketError=ConnectionAborted
13:45:58  Попытка опроса устройства командой=43 (0x2B) завершилась неуспешно.
13:45:58  Ожидание следующей попытки=1000мс.
13:45:59  Превышен лимит попыток обращения к устройству=3
13:45:59
13:45:59  Обращение к устройству завершено.
13:45:59
13:45:59  Значения полученных объектов:
13:45:59  ControllerSoftVersion=
13:45:59
13:45:59  За весь процесс было совершено неудачных попыток обращений к устройству=3
13:45:59  Процесс ReadDeviceIdentification - чтение идентификационной информации устройства завершен, затрачено=3,01 секунд.




TCP
00.00 - Transaction identification
00.00 - MODBUS
00.06 - Length
01    - Unit Identifier

2B    - Function Code
0E    - MEI14
01    - Read Device ID Code
00    - Object ID

RTU
01 - Device Address
2B - Function Code
0E - MEI14
01 - Read Device ID Code
00 - Object ID
70.77 - CRC16


///////////////////////
Попробовал обмен через MODBUS/TCP.
Запросил прочесть объект №0 "Версию ПО". Запрос не выполняется из-за ошибочного поля Length. Вы установили 6, а по факту там 5. Смотрите в документации на MODBUS/TCP:
"Length - The length field is a byte count of the following fields, including the Unit
Identifier and data fields."
Длина - поле длины есть количество в байтах последующих полей, включая поля Unit Identifier и поле данных.
У вас в запросе:
00.00 - Transaction identification
00.00 - MODBUS protocol
00.06 - Length
01    - Unit Identifier
2B    - Function Code
0E    - MEI14
01    - Read Device ID Code
00    - Object ID

Поле Length должно быть 5. 
Решил прослушать обмен по факту. Может на экран выводите с ошибкой а в интерфейс правильно? Установил программу Wireshark (прослушка всяких сетевых интерфейсов). В логе прослушки тоже 6 (смотри внизу картинки выделено синим). 

Результаты логов прилагаю.
Прошу помочь решить проблему с обменом.


ulasdikme.com/projects/raspberry/Qt_for_raspberrypi.php


sudo ip addr add 192.168.1.12/255.255.255.0 broadcast 192.168.1.255 dev enp2s0
sudo ip link set enp2s0 down
sudo ip link set enp2s0 up

apt-get install build-essential libfontconfig1-dev libdbus-1-dev libfreetype6-dev libicu-dev libinput-dev libxkbcommon-dev libsqlite3-dev libssl-dev libpng-dev libjpeg-dev libglib2.0-dev libraspberrypi-dev

sudo sshfs -o allow_other,transform_symlinks lyzv@192.168.0.20:/  /home/lyzv/work/programs/raspbian-Qt5/sysroot


sudo mount -o loop,offset=62914560 2020-02-13-raspbian-buster.img /mnt/rasp-pi-rootfs

sudo mount -t vfat -o loop,offset=62914560 2020-02-13-raspbian-buster.img /mnt/rasp-pi-rootfs

qt-everywhere-src-5.15.0
make install DESTDIR=../qt-everywhere-src-5.15.0

//////////////////////////////////
https://www.tal.org/tutorials/building-qt-512-raspberry-pi

dd bs=1M if=/home/lyzv/Downloads/2020-02-13-raspbian-buster.img of=/dev/sdc
/home/lyzv/Downloads/2020-02-13-raspbian-buster.img

sudo arp-scan --interface=wlan0 --localnet

Disk identifier: 0xb0358c95

                               Device Boot      Start         End         Blocks     Id  System
/home/elesar/pi_cross/raspberry-embed.iso1      8192          137215      64512      c   W95 FAT32 (LBA)
/home/elesar/pi_cross/raspberry-embed.iso2      137216        31291391    15577088   83  Linux

272629760

sudo mount -o loop,offset=272629760 ~/work/prj/raspberrypi/2020-02-13-raspbian-buster.img ~/work/prj/raspberrypi/raspbian-booster-rootfs

/home/lyzv/opt/
/home/lyzv/opt/rpi-rootfs

~/opt/2020-02-13-raspbian-buster.img

./configure -opengl es2 -device linux-rasp-pi-g++ -device-option CROSS_COMPILE=~/opt/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/arm-linux-gnueabihf- -sysroot ~/opt/rpi-rootfs/ -opensource -confirm-license -optimized-qmake -reduce-exports -release -make libs -prefix /usr/local/qt5pi -hostprefix /usr/local/qt5pi

~/opt/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
~/opt/rpi-rootfs/


!!! Для отладки в QtCreator-е
ubuntu-host# sudo apt-get install gdb-multiarch
refs/remotes/origin/master

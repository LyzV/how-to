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


//////////////////////////////////////////////////////////////////////////////////////////

Bus 001 Device 009: ID 058f:6366 Alcor Micro Corp. Multi Flash Reader
Couldn't open device, some information will be missing
Device Descriptor:
  bLength                18
  bDescriptorType         1
  bcdUSB               2.00
  bDeviceClass            0 (Defined at Interface level)
  bDeviceSubClass         0 
  bDeviceProtocol         0 
  bMaxPacketSize0        64
  idVendor           0x058f Alcor Micro Corp.
  idProduct          0x6366 Multi Flash Reader
  bcdDevice            1.00
  iManufacturer           1 
  iProduct                2 
  iSerial                 3 
  bNumConfigurations      1
  Configuration Descriptor:
    bLength                 9
    bDescriptorType         2
    wTotalLength           32
    bNumInterfaces          1
    bConfigurationValue     1
    iConfiguration          0 
    bmAttributes         0x80
      (Bus Powered)
    MaxPower              100mA
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        0
      bAlternateSetting       0
      bNumEndpoints           2
      bInterfaceClass         8 Mass Storage
      bInterfaceSubClass      6 SCSI
      bInterfaceProtocol     80 Bulk-Only
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x01  EP 1 OUT
        bmAttributes            2
          Transfer Type            Bulk
          Synch Type               None
          Usage Type               Data
        wMaxPacketSize     0x0200  1x 512 bytes
        bInterval               0
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x82  EP 2 IN
        bmAttributes            2
          Transfer Type            Bulk
          Synch Type               None
          Usage Type               Data
        wMaxPacketSize     0x0200  1x 512 bytes
        bInterval               0
///////////////////////////////
*/
*/
*/

[-+]? - один из списка или ничего
(?:   \d+  (?:  \.\d*)?   |\.\d+)

(?:[eE][-+]?\d+)?

Execute tasks from a specific .bb recipe directly.
WARNING: Does not handle any dependencies from other recipes

DESCOR
http://descor-m.ru/diler
http://descor-k.ru/

CLIPSO

/******************************************/
Спальня               
S= 21 м2
P=3X7 = 20 метров

Кладовка
S= 4 м2
P=2Х2 = 8 метров

Кладовка в коридоре
S= 4 м2
P=2Х2 = 8 метров

Зал
S= 18 м2
P=3.3Х5.3 = 20 метров

Прихожка
S= 17 м2
P=3,5Х5 = 17 метров

Прихожка 2
S= 4 м2
P=2Х2 = 8 метров

Кухня
S= 12 м2
P=3,5Х3,5 = 14 метров

Ванная
S= 4 м2
P=2Х2 = 8 метров

Туалет
S= 2 м2
P=2Х1 = 6 метров

Итого:
S= 86 м2
P=110 метров
/****************************************/
Спальня + кладовка
4.1м х 7.5м = 31 м2

Зал
4.1м х 6м = 25 м2

Прихожка + ванная + туалет
4.1м х 5.1м = 21 м2

Кухня 
4.1м х 4м = 17 м2

Прихожка 2 + кладовка
4.1м х 4.5 = 19 м2

Итого:
L = 30 метров
S = 30*4.1= 123м2
$ = 


У Дмитрия 
123 м2 - 42тр
110 м - 4тр

/***************************************************************/


CFlagNotify       return CFLAGNOTIFY;
[_a-zA-Z][_a-zA-Z0-9]*  return ID;
;           return SEMICOLON;
[ \t]         ;

 CFLAGNOTIFY ID SEMICOLON 


 int len=(yyleng>ID_NAME_LEN)? ID_NAME_LEN: yyleng;
              strncpy(id_name, yytext, len);
              id_name[len]='\0';


set auto-load safe-path /
handle SIGILL nostop


FN_KbdFplusEvent
FN_KbdFminusEvent
FN_IndexBoldFont

to |
from |
behind |
above |
below |
between |
below     printf("%s: is a preposition\n", yytext);



/* /////////////////// */


yystate - состояние парсера

yytext - строка текста связанная с токеном
yyleng - длина yytext
yylval - токен

Стеки
/* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;


  enum yytokentype
  {
    EXTERN = 258,
    CFLAGNOTIFY = 259,
    NAME = 260,
    SEMICOLON = 261
  };

  yyinput

  \+            return '+';
-           return '-';
\*            return '*';
\/            return '/';
\^            return '^';
n             return 'n';

{ printf("\t%.10g\n", $1); }

input:    /* empty */
        | input line
    ;

\+                  { lprintf("+ "  ); return '+'; }
\-                  { lprintf("- "  ); return '-'; }
\*                  { lprintf("* "  ); return '*'; }
\/                  { lprintf("/ "  ); return '/'; }
\^                  { lprintf("^ "  ); return '^'; }
n                   { lprintf("n "  ); return 'n'; }
.           ;

\n            { return '\n'; }
.           { return yytext[0]; }


{ strcpy(yylval.sval, yytext); return NAME; }

{ yylval=yytext; 


\/\*(.*\n)*.*\*\/         ; /* c-comments */


  <HR( +SIZE *= *[0-9]+)? *>
#define EV_SYN			0x00
#define EV_KEY			0x01
#define EV_REL			0x02
#define EV_ABS			0x03
#define EV_MSC			0x04
#define EV_SW			0x05
#define EV_LED			0x11
#define EV_SND			0x12
#define EV_REP			0x14
#define EV_FF			0x15
#define EV_PWR			0x16
#define EV_FF_STATUS		0x17
#define EV_MAX			0x1f

#define SYN_REPORT		0
#define SYN_CONFIG		1
#define SYN_MT_REPORT		2
#define SYN_DROPPED		3
#define SYN_MAX			0xf

keys["KEY_RESERVED"] = 0;
keys["KEY_ESC"] = 1;
keys["KEY_1"] = 2;
keys["KEY_2"] = 3;
keys["KEY_3"] = 4;
keys["KEY_4"] = 5;
keys["KEY_5"] = 6;
keys["KEY_6"] = 7;
keys["KEY_7"] = 8;
keys["KEY_8"] = 9;
keys["KEY_9"] = 10;
keys["KEY_0"] = 11;
keys["KEY_MINUS"] = 12;
keys["KEY_EQUAL"] = 13;
keys["KEY_BACKSPACE"] = 14;
keys["KEY_TAB"] = 15;
keys["KEY_Q"] = 16;
keys["KEY_W"] = 17;
keys["KEY_E"] = 18;
keys["KEY_R"] = 19;
keys["KEY_T"] = 20;
keys["KEY_Y"] = 21;
keys["KEY_U"] = 22;
keys["KEY_I"] = 23;
keys["KEY_O"] = 24;
keys["KEY_P"] = 25;
keys["KEY_LEFTBRACE"] = 26;
keys["KEY_RIGHTBRACE"] = 27;
keys["KEY_ENTER"] = 28;
keys["KEY_LEFTCTRL"] = 29;
keys["KEY_A"] = 30;
keys["KEY_S"] = 31;
keys["KEY_D"] = 32;
keys["KEY_F"] = 33;
keys["KEY_G"] = 34;
keys["KEY_H"] = 35;
keys["KEY_J"] = 36;
keys["KEY_K"] = 37;
keys["KEY_L"] = 38;
keys["KEY_SEMICOLON"] = 39;
keys["KEY_APOSTROPHE"] = 40;
keys["KEY_GRAVE"] = 41;
keys["KEY_LEFTSHIFT"] = 42;
keys["KEY_BACKSLASH"] = 43;
keys["KEY_Z"] = 44;
keys["KEY_X"] = 45;
keys["KEY_C"] = 46;
keys["KEY_V"] = 47;
keys["KEY_B"] = 48;
keys["KEY_N"] = 49;
keys["KEY_M"] = 50;
keys["KEY_COMMA"] = 51;
keys["KEY_DOT"] = 52;
keys["KEY_SLASH"] = 53;
keys["KEY_RIGHTSHIFT"] = 54;
keys["KEY_KPASTERISK"] = 55;
keys["KEY_LEFTALT"] = 56;
keys["KEY_SPACE"] = 57;
keys["KEY_CAPSLOCK"] = 58;
keys["KEY_F1"] = 59;
keys["KEY_F2"] = 60;
keys["KEY_F3"] = 61;
keys["KEY_F4"] = 62;
keys["KEY_F5"] = 63;
keys["KEY_F6"] = 64;
keys["KEY_F7"] = 65;
keys["KEY_F8"] = 66;
keys["KEY_F9"] = 67;
keys["KEY_F10"] = 68;
keys["KEY_NUMLOCK"] = 69;
keys["KEY_SCROLLLOCK"] = 70;
keys["KEY_KP7"] = 71;
keys["KEY_KP8"] = 72;
keys["KEY_KP9"] = 73;
keys["KEY_KPMINUS"] = 74;
keys["KEY_KP4"] = 75;
keys["KEY_KP5"] = 76;
keys["KEY_KP6"] = 77;
keys["KEY_KPPLUS"] = 78;
keys["KEY_KP1"] = 79;
keys["KEY_KP2"] = 80;
keys["KEY_KP3"] = 81;
keys["KEY_KP0"] = 82;
keys["KEY_KPDOT"] = 83;
keys["KEY_ZENKAKUHANKAKU"] = 85;
keys["KEY_102ND"] = 86;
keys["KEY_F11"] = 87;
keys["KEY_F12"] = 88;
keys["KEY_RO"] = 89;
keys["KEY_KATAKANA"] = 90;
keys["KEY_HIRAGANA"] = 91;
keys["KEY_HENKAN"] = 92;
keys["KEY_KATAKANAHIRAGANA"] = 93;
keys["KEY_MUHENKAN"] = 94;
keys["KEY_KPJPCOMMA"] = 95;
keys["KEY_KPENTER"] = 96;
keys["KEY_RIGHTCTRL"] = 97;
keys["KEY_KPSLASH"] = 98;
keys["KEY_SYSRQ"] = 99;
keys["KEY_RIGHTALT"] = 100;
keys["KEY_LINEFEED"] = 101;
keys["KEY_HOME"] = 102;
keys["KEY_UP"] = 103;
keys["KEY_PAGEUP"] = 104;
keys["KEY_LEFT"] = 105;
keys["KEY_RIGHT"] = 106;
keys["KEY_END"] = 107;
keys["KEY_DOWN"] = 108;
keys["KEY_PAGEDOWN"] = 109;
keys["KEY_INSERT"] = 110;
keys["KEY_DELETE"] = 111;
keys["KEY_MACRO"] = 112;
keys["KEY_MUTE"] = 113;
keys["KEY_VOLUMEDOWN"] = 114;
keys["KEY_VOLUMEUP"] = 115;
keys["KEY_POWER"] = 116;
keys["KEY_KPEQUAL"] = 117;
keys["KEY_KPPLUSMINUS"] = 118;
keys["KEY_PAUSE"] = 119;
keys["KEY_SCALE"] = 120;
keys["KEY_KPCOMMA"] = 121;
keys["KEY_HANGEUL"] = 122;
keys["KEY_HANJA"] = 123;
keys["KEY_YEN"] = 124;
keys["KEY_LEFTMETA"] = 125;
keys["KEY_RIGHTMETA"] = 126;
keys["KEY_COMPOSE"] = 127;
keys["KEY_STOP"] = 128;
keys["KEY_AGAIN"] = 129;
keys["KEY_PROPS"] = 130;
keys["KEY_UNDO"] = 131;
keys["KEY_FRONT"] = 132;
keys["KEY_COPY"] = 133;
keys["KEY_OPEN"] = 134;
keys["KEY_PASTE"] = 135;
keys["KEY_FIND"] = 136;
keys["KEY_CUT"] = 137;
keys["KEY_HELP"] = 138;
keys["KEY_MENU"] = 139;
keys["KEY_CALC"] = 140;
keys["KEY_SETUP"] = 141;
keys["KEY_SLEEP"] = 142;
keys["KEY_WAKEUP"] = 143;
keys["KEY_FILE"] = 144;
keys["KEY_SENDFILE"] = 145;
keys["KEY_DELETEFILE"] = 146;
keys["KEY_XFER"] = 147;
keys["KEY_PROG1"] = 148;
keys["KEY_PROG2"] = 149;
keys["KEY_WWW"] = 150;
keys["KEY_MSDOS"] = 151;
keys["KEY_COFFEE"] = 152;
keys["KEY_ROTATE_DISPLAY"] = 153;
keys["KEY_CYCLEWINDOWS"] = 154;
keys["KEY_MAIL"] = 155;
keys["KEY_BOOKMARKS"] = 156;
keys["KEY_COMPUTER"] = 157;
keys["KEY_BACK"] = 158;
keys["KEY_FORWARD"] = 159;
keys["KEY_CLOSECD"] = 160;
keys["KEY_EJECTCD"] = 161;
keys["KEY_EJECTCLOSECD"] = 162;
keys["KEY_NEXTSONG"] = 163;
keys["KEY_PLAYPAUSE"] = 164;
keys["KEY_PREVIOUSSONG"] = 165;
keys["KEY_STOPCD"] = 166;
keys["KEY_RECORD"] = 167;
keys["KEY_REWIND"] = 168;
keys["KEY_PHONE"] = 169;
keys["KEY_ISO"] = 170;
keys["KEY_CONFIG"] = 171;
keys["KEY_HOMEPAGE"] = 172;
keys["KEY_REFRESH"] = 173;
keys["KEY_EXIT"] = 174;
keys["KEY_MOVE"] = 175;
keys["KEY_EDIT"] = 176;
keys["KEY_SCROLLUP"] = 177;
keys["KEY_SCROLLDOWN"] = 178;
keys["KEY_KPLEFTPAREN"] = 179;
keys["KEY_KPRIGHTPAREN"] = 180;
keys["KEY_NEW"] = 181;
keys["KEY_REDO"] = 182;
keys["KEY_F13"] = 183;
keys["KEY_F14"] = 184;
keys["KEY_F15"] = 185;
keys["KEY_F16"] = 186;
keys["KEY_F17"] = 187;
keys["KEY_F18"] = 188;
keys["KEY_F19"] = 189;
keys["KEY_F20"] = 190;
keys["KEY_F21"] = 191;
keys["KEY_F22"] = 192;
keys["KEY_F23"] = 193;
keys["KEY_F24"] = 194;
keys["KEY_PLAYCD"] = 200;
keys["KEY_PAUSECD"] = 201;
keys["KEY_PROG3"] = 202;
keys["KEY_PROG4"] = 203;
keys["KEY_DASHBOARD"] = 204;
keys["KEY_SUSPEND"] = 205;
keys["KEY_CLOSE"] = 206;
keys["KEY_PLAY"] = 207;
keys["KEY_FASTFORWARD"] = 208;
keys["KEY_BASSBOOST"] = 209;
keys["KEY_PRINT"] = 210;
keys["KEY_HP"] = 211;
keys["KEY_CAMERA"] = 212;
keys["KEY_SOUND"] = 213;
keys["KEY_QUESTION"] = 214;
keys["KEY_EMAIL"] = 215;
keys["KEY_CHAT"] = 216;
keys["KEY_SEARCH"] = 217;
keys["KEY_CONNECT"] = 218;
keys["KEY_FINANCE"] = 219;
keys["KEY_SPORT"] = 220;
keys["KEY_SHOP"] = 221;
keys["KEY_ALTERASE"] = 222;
keys["KEY_CANCEL"] = 223;
keys["KEY_BRIGHTNESSDOWN"] = 224;
keys["KEY_BRIGHTNESSUP"] = 225;
keys["KEY_MEDIA"] = 226;
keys["KEY_SWITCHVIDEOMODE"] = 227;
keys["KEY_KBDILLUMTOGGLE"] = 228;
keys["KEY_KBDILLUMDOWN"] = 229;
keys["KEY_KBDILLUMUP"] = 230;
keys["KEY_SEND"] = 231;
keys["KEY_REPLY"] = 232;
keys["KEY_FORWARDMAIL"] = 233;
keys["KEY_SAVE"] = 234;
keys["KEY_DOCUMENTS"] = 235;
keys["KEY_BATTERY"] = 236;
keys["KEY_BLUETOOTH"] = 237;
keys["KEY_WLAN"] = 238;
keys["KEY_UWB"] = 239;
keys["KEY_UNKNOWN"] = 240;
keys["KEY_VIDEO_NEXT"] = 241;
keys["KEY_VIDEO_PREV"] = 242;
keys["KEY_BRIGHTNESS_CYCLE"] = 243;
keys["KEY_BRIGHTNESS_AUTO"] = 244;
keys["KEY_DISPLAY_OFF"] = 245;
keys["KEY_WWAN"] = 246;
keys["KEY_RFKILL"] = 247;
keys["KEY_MICMUTE"] = 248;
keys["BTN_MISC"] = 0x100;
keys["BTN_0"] = 0x100;
keys["BTN_1"] = 0x101;
keys["BTN_2"] = 0x102;
keys["BTN_3"] = 0x103;
keys["BTN_4"] = 0x104;
keys["BTN_5"] = 0x105;
keys["BTN_6"] = 0x106;
keys["BTN_7"] = 0x107;
keys["BTN_8"] = 0x108;
keys["BTN_9"] = 0x109;
keys["BTN_MOUSE"] = 0x110;
keys["BTN_LEFT"] = 0x110;
keys["BTN_RIGHT"] = 0x111;
keys["BTN_MIDDLE"] = 0x112;
keys["BTN_SIDE"] = 0x113;
keys["BTN_EXTRA"] = 0x114;
keys["BTN_FORWARD"] = 0x115;
keys["BTN_BACK"] = 0x116;
keys["BTN_TASK"] = 0x117;
keys["BTN_JOYSTICK"] = 0x120;
keys["BTN_TRIGGER"] = 0x120;
keys["BTN_THUMB"] = 0x121;
keys["BTN_THUMB2"] = 0x122;
keys["BTN_TOP"] = 0x123;
keys["BTN_TOP2"] = 0x124;
keys["BTN_PINKIE"] = 0x125;
keys["BTN_BASE"] = 0x126;
keys["BTN_BASE2"] = 0x127;
keys["BTN_BASE3"] = 0x128;
keys["BTN_BASE4"] = 0x129;
keys["BTN_BASE5"] = 0x12a;
keys["BTN_BASE6"] = 0x12b;
keys["BTN_DEAD"] = 0x12f;
keys["BTN_GAMEPAD"] = 0x130;
keys["BTN_SOUTH"] = 0x130;
keys["BTN_EAST"] = 0x131;
keys["BTN_C"] = 0x132;
keys["BTN_NORTH"] = 0x133;
keys["BTN_WEST"] = 0x134;
keys["BTN_Z"] = 0x135;
keys["BTN_TL"] = 0x136;
keys["BTN_TR"] = 0x137;
keys["BTN_TL2"] = 0x138;
keys["BTN_TR2"] = 0x139;
keys["BTN_SELECT"] = 0x13a;
keys["BTN_START"] = 0x13b;
keys["BTN_MODE"] = 0x13c;
keys["BTN_THUMBL"] = 0x13d;
keys["BTN_THUMBR"] = 0x13e;
keys["BTN_DIGI"] = 0x140;
keys["BTN_TOOL_PEN"] = 0x140;
keys["BTN_TOOL_RUBBER"] = 0x141;
keys["BTN_TOOL_BRUSH"] = 0x142;
keys["BTN_TOOL_PENCIL"] = 0x143;
keys["BTN_TOOL_AIRBRUSH"] = 0x144;
keys["BTN_TOOL_FINGER"] = 0x145;
keys["BTN_TOOL_MOUSE"] = 0x146;
keys["BTN_TOOL_LENS"] = 0x147;
keys["BTN_TOOL_QUINTTAP"] = 0x148;
keys["BTN_TOUCH"] = 0x14a;
keys["BTN_STYLUS"] = 0x14b;
keys["BTN_STYLUS2"] = 0x14c;
keys["BTN_TOOL_DOUBLETAP"] = 0x14d;
keys["BTN_TOOL_TRIPLETAP"] = 0x14e;
keys["BTN_TOOL_QUADTAP"] = 0x14f;
keys["BTN_WHEEL"] = 0x150;
keys["BTN_GEAR_DOWN"] = 0x150;
keys["BTN_GEAR_UP"] = 0x151;
keys["KEY_OK"] = 0x160;
keys["KEY_SELECT"] = 0x161;
keys["KEY_GOTO"] = 0x162;
keys["KEY_CLEAR"] = 0x163;
keys["KEY_POWER2"] = 0x164;
keys["KEY_OPTION"] = 0x165;
keys["KEY_INFO"] = 0x166;
keys["KEY_TIME"] = 0x167;
keys["KEY_VENDOR"] = 0x168;
keys["KEY_ARCHIVE"] = 0x169;
keys["KEY_PROGRAM"] = 0x16a;
keys["KEY_CHANNEL"] = 0x16b;
keys["KEY_FAVORITES"] = 0x16c;
keys["KEY_EPG"] = 0x16d;
keys["KEY_PVR"] = 0x16e;
keys["KEY_MHP"] = 0x16f;
keys["KEY_LANGUAGE"] = 0x170;
keys["KEY_TITLE"] = 0x171;
keys["KEY_SUBTITLE"] = 0x172;
keys["KEY_ANGLE"] = 0x173;
keys["KEY_ZOOM"] = 0x174;
keys["KEY_MODE"] = 0x175;
keys["KEY_KEYBOARD"] = 0x176;
keys["KEY_SCREEN"] = 0x177;
keys["KEY_PC"] = 0x178;
keys["KEY_TV"] = 0x179;
keys["KEY_TV2"] = 0x17a;
keys["KEY_VCR"] = 0x17b;
keys["KEY_VCR2"] = 0x17c;
keys["KEY_SAT"] = 0x17d;
keys["KEY_SAT2"] = 0x17e;
keys["KEY_CD"] = 0x17f;
keys["KEY_TAPE"] = 0x180;
keys["KEY_RADIO"] = 0x181;
keys["KEY_TUNER"] = 0x182;
keys["KEY_PLAYER"] = 0x183;
keys["KEY_TEXT"] = 0x184;
keys["KEY_DVD"] = 0x185;
keys["KEY_AUX"] = 0x186;
keys["KEY_MP3"] = 0x187;
keys["KEY_AUDIO"] = 0x188;
keys["KEY_VIDEO"] = 0x189;
keys["KEY_DIRECTORY"] = 0x18a;
keys["KEY_LIST"] = 0x18b;
keys["KEY_MEMO"] = 0x18c;
keys["KEY_CALENDAR"] = 0x18d;
keys["KEY_RED"] = 0x18e;
keys["KEY_GREEN"] = 0x18f;
keys["KEY_YELLOW"] = 0x190;
keys["KEY_BLUE"] = 0x191;
keys["KEY_CHANNELUP"] = 0x192;
keys["KEY_CHANNELDOWN"] = 0x193;
keys["KEY_FIRST"] = 0x194;
keys["KEY_LAST"] = 0x195;
keys["KEY_AB"] = 0x196;
keys["KEY_NEXT"] = 0x197;
keys["KEY_RESTART"] = 0x198;
keys["KEY_SLOW"] = 0x199;
keys["KEY_SHUFFLE"] = 0x19a;
keys["KEY_BREAK"] = 0x19b;
keys["KEY_PREVIOUS"] = 0x19c;
keys["KEY_DIGITS"] = 0x19d;
keys["KEY_TEEN"] = 0x19e;
keys["KEY_TWEN"] = 0x19f;
keys["KEY_VIDEOPHONE"] = 0x1a0;
keys["KEY_GAMES"] = 0x1a1;
keys["KEY_ZOOMIN"] = 0x1a2;
keys["KEY_ZOOMOUT"] = 0x1a3;
keys["KEY_ZOOMRESET"] = 0x1a4;
keys["KEY_WORDPROCESSOR"] = 0x1a5;
keys["KEY_EDITOR"] = 0x1a6;
keys["KEY_SPREADSHEET"] = 0x1a7;
keys["KEY_GRAPHICSEDITOR"] = 0x1a8;
keys["KEY_PRESENTATION"] = 0x1a9;
keys["KEY_DATABASE"] = 0x1aa;
keys["KEY_NEWS"] = 0x1ab;
keys["KEY_VOICEMAIL"] = 0x1ac;
keys["KEY_ADDRESSBOOK"] = 0x1ad;
keys["KEY_MESSENGER"] = 0x1ae;
keys["KEY_DISPLAYTOGGLE"] = 0x1af;
keys["KEY_SPELLCHECK"] = 0x1b0;
keys["KEY_LOGOFF"] = 0x1b1;
keys["KEY_DOLLAR"] = 0x1b2;
keys["KEY_EURO"] = 0x1b3;
keys["KEY_FRAMEBACK"] = 0x1b4;
keys["KEY_FRAMEFORWARD"] = 0x1b5;
keys["KEY_CONTEXT_MENU"] = 0x1b6;
keys["KEY_MEDIA_REPEAT"] = 0x1b7;
keys["KEY_10CHANNELSUP"] = 0x1b8;
keys["KEY_10CHANNELSDOWN"] = 0x1b9;
keys["KEY_IMAGES"] = 0x1ba;
keys["KEY_DEL_EOL"] = 0x1c0;
keys["KEY_DEL_EOS"] = 0x1c1;
keys["KEY_INS_LINE"] = 0x1c2;
keys["KEY_DEL_LINE"] = 0x1c3;
keys["KEY_FN"] = 0x1d0;
keys["KEY_FN_ESC"] = 0x1d1;
keys["KEY_FN_F1"] = 0x1d2;
keys["KEY_FN_F2"] = 0x1d3;
keys["KEY_FN_F3"] = 0x1d4;
keys["KEY_FN_F4"] = 0x1d5;
keys["KEY_FN_F5"] = 0x1d6;
keys["KEY_FN_F6"] = 0x1d7;
keys["KEY_FN_F7"] = 0x1d8;
keys["KEY_FN_F8"] = 0x1d9;
keys["KEY_FN_F9"] = 0x1da;
keys["KEY_FN_F10"] = 0x1db;
keys["KEY_FN_F11"] = 0x1dc;
keys["KEY_FN_F12"] = 0x1dd;
keys["KEY_FN_1"] = 0x1de;
keys["KEY_FN_2"] = 0x1df;
keys["KEY_FN_D"] = 0x1e0;
keys["KEY_FN_E"] = 0x1e1;
keys["KEY_FN_F"] = 0x1e2;
keys["KEY_FN_S"] = 0x1e3;
keys["KEY_FN_B"] = 0x1e4;
keys["KEY_BRL_DOT1"] = 0x1f1;
keys["KEY_BRL_DOT2"] = 0x1f2;
keys["KEY_BRL_DOT3"] = 0x1f3;
keys["KEY_BRL_DOT4"] = 0x1f4;
keys["KEY_BRL_DOT5"] = 0x1f5;
keys["KEY_BRL_DOT6"] = 0x1f6;
keys["KEY_BRL_DOT7"] = 0x1f7;
keys["KEY_BRL_DOT8"] = 0x1f8;
keys["KEY_BRL_DOT9"] = 0x1f9;
keys["KEY_BRL_DOT10"] = 0x1fa;
keys["KEY_NUMERIC_0"] = 0x200;
keys["KEY_NUMERIC_1"] = 0x201;
keys["KEY_NUMERIC_2"] = 0x202;
keys["KEY_NUMERIC_3"] = 0x203;
keys["KEY_NUMERIC_4"] = 0x204;
keys["KEY_NUMERIC_5"] = 0x205;
keys["KEY_NUMERIC_6"] = 0x206;
keys["KEY_NUMERIC_7"] = 0x207;
keys["KEY_NUMERIC_8"] = 0x208;
keys["KEY_NUMERIC_9"] = 0x209;
keys["KEY_NUMERIC_STAR"] = 0x20a;
keys["KEY_NUMERIC_POUND"] = 0x20b;
keys["KEY_NUMERIC_A"] = 0x20c;
keys["KEY_NUMERIC_B"] = 0x20d;
keys["KEY_NUMERIC_C"] = 0x20e;
keys["KEY_NUMERIC_D"] = 0x20f;
keys["KEY_CAMERA_FOCUS"] = 0x210;
keys["KEY_WPS_BUTTON"] = 0x211;
keys["KEY_TOUCHPAD_TOGGLE"] = 0x212;
keys["KEY_TOUCHPAD_ON"] = 0x213;
keys["KEY_TOUCHPAD_OFF"] = 0x214;
keys["KEY_CAMERA_ZOOMIN"] = 0x215;
keys["KEY_CAMERA_ZOOMOUT"] = 0x216;
keys["KEY_CAMERA_UP"] = 0x217;
keys["KEY_CAMERA_DOWN"] = 0x218;
keys["KEY_CAMERA_LEFT"] = 0x219;
keys["KEY_CAMERA_RIGHT"] = 0x21a;
keys["KEY_ATTENDANT_ON"] = 0x21b;
keys["KEY_ATTENDANT_OFF"] = 0x21c;
keys["KEY_ATTENDANT_TOGGLE"] = 0x21d;
keys["KEY_LIGHTS_TOGGLE"] = 0x21e;
keys["BTN_DPAD_UP"] = 0x220;
keys["BTN_DPAD_DOWN"] = 0x221;
keys["BTN_DPAD_LEFT"] = 0x222;
keys["BTN_DPAD_RIGHT"] = 0x223;
keys["KEY_ALS_TOGGLE"] = 0x230;
keys["KEY_BUTTONCONFIG"] = 0x240;
keys["KEY_TASKMANAGER"] = 0x241;
keys["KEY_JOURNAL"] = 0x242;
keys["KEY_CONTROLPANEL"] = 0x243;
keys["KEY_APPSELECT"] = 0x244;
keys["KEY_SCREENSAVER"] = 0x245;
keys["KEY_VOICECOMMAND"] = 0x246;
keys["KEY_ASSISTANT"] = 0x247;
keys["KEY_BRIGHTNESS_MIN"] = 0x250;
keys["KEY_BRIGHTNESS_MAX"] = 0x251;
keys["KEY_KBDINPUTASSIST_PREV"] = 0x260;
keys["KEY_KBDINPUTASSIST_NEXT"] = 0x261;
keys["KEY_KBDINPUTASSIST_PREVGROUP"] = 0x262;
keys["KEY_KBDINPUTASSIST_NEXTGROUP"] = 0x263;
keys["KEY_KBDINPUTASSIST_ACCEPT"] = 0x264;
keys["KEY_KBDINPUTASSIST_CANCEL"] = 0x265;
keys["KEY_RIGHT_UP"] = 0x266;
keys["KEY_RIGHT_DOWN"] = 0x267;
keys["KEY_LEFT_UP"] = 0x268;
keys["KEY_LEFT_DOWN"] = 0x269;
keys["KEY_ROOT_MENU"] = 0x26a;
keys["KEY_MEDIA_TOP_MENU"] = 0x26b;
keys["KEY_NUMERIC_11"] = 0x26c;
keys["KEY_NUMERIC_12"] = 0x26d;
keys["KEY_AUDIO_DESC"] = 0x26e;
keys["KEY_3D_MODE"] = 0x26f;
keys["KEY_NEXT_FAVORITE"] = 0x270;
keys["KEY_STOP_RECORD"] = 0x271;
keys["KEY_PAUSE_RECORD"] = 0x272;
keys["KEY_VOD"] = 0x273;
keys["KEY_UNMUTE"] = 0x274;
keys["KEY_FASTREVERSE"] = 0x275;
keys["KEY_SLOWREVERSE"] = 0x276;
keys["KEY_DATA"] = 0x277;
keys["KEY_ONSCREEN_KEYBOARD"] = 0x278;

#define BTN_TRIGGER_HAPPY		0x2c0
#define BTN_TRIGGER_HAPPY1		0x2c0
#define BTN_TRIGGER_HAPPY2		0x2c1
#define BTN_TRIGGER_HAPPY3		0x2c2
#define BTN_TRIGGER_HAPPY4		0x2c3
#define BTN_TRIGGER_HAPPY5		0x2c4
#define BTN_TRIGGER_HAPPY6		0x2c5
#define BTN_TRIGGER_HAPPY7		0x2c6
#define BTN_TRIGGER_HAPPY8		0x2c7
#define BTN_TRIGGER_HAPPY9		0x2c8
#define BTN_TRIGGER_HAPPY10		0x2c9
#define BTN_TRIGGER_HAPPY11		0x2ca
#define BTN_TRIGGER_HAPPY12		0x2cb
#define BTN_TRIGGER_HAPPY13		0x2cc
#define BTN_TRIGGER_HAPPY14		0x2cd
#define BTN_TRIGGER_HAPPY15		0x2ce
#define BTN_TRIGGER_HAPPY16		0x2cf
#define BTN_TRIGGER_HAPPY17		0x2d0
#define BTN_TRIGGER_HAPPY18		0x2d1
#define BTN_TRIGGER_HAPPY19		0x2d2
#define BTN_TRIGGER_HAPPY20		0x2d3
#define BTN_TRIGGER_HAPPY21		0x2d4
#define BTN_TRIGGER_HAPPY22		0x2d5
#define BTN_TRIGGER_HAPPY23		0x2d6
#define BTN_TRIGGER_HAPPY24		0x2d7
#define BTN_TRIGGER_HAPPY25		0x2d8
#define BTN_TRIGGER_HAPPY26		0x2d9
#define BTN_TRIGGER_HAPPY27		0x2da
#define BTN_TRIGGER_HAPPY28		0x2db
#define BTN_TRIGGER_HAPPY29		0x2dc
#define BTN_TRIGGER_HAPPY30		0x2dd
#define BTN_TRIGGER_HAPPY31		0x2de
#define BTN_TRIGGER_HAPPY32		0x2df
#define BTN_TRIGGER_HAPPY33		0x2e0
#define BTN_TRIGGER_HAPPY34		0x2e1
#define BTN_TRIGGER_HAPPY35		0x2e2
#define BTN_TRIGGER_HAPPY36		0x2e3
#define BTN_TRIGGER_HAPPY37		0x2e4
#define BTN_TRIGGER_HAPPY38		0x2e5
#define BTN_TRIGGER_HAPPY39		0x2e6
#define BTN_TRIGGER_HAPPY40		0x2e7

#define REL_X			0x00
#define REL_Y			0x01
#define REL_Z			0x02
#define REL_RX			0x03
#define REL_RY			0x04
#define REL_RZ			0x05
#define REL_HWHEEL		0x06
#define REL_DIAL		0x07
#define REL_WHEEL		0x08
#define REL_MISC		0x09
#define REL_MAX			0x0f

#define ABS_X			0x00
#define ABS_Y			0x01
#define ABS_Z			0x02
#define ABS_RX			0x03
#define ABS_RY			0x04
#define ABS_RZ			0x05
#define ABS_THROTTLE		0x06
#define ABS_RUDDER		0x07
#define ABS_WHEEL		0x08
#define ABS_GAS			0x09
#define ABS_BRAKE		0x0a
#define ABS_HAT0X		0x10
#define ABS_HAT0Y		0x11
#define ABS_HAT1X		0x12
#define ABS_HAT1Y		0x13
#define ABS_HAT2X		0x14
#define ABS_HAT2Y		0x15
#define ABS_HAT3X		0x16
#define ABS_HAT3Y		0x17
#define ABS_PRESSURE		0x18
#define ABS_DISTANCE		0x19
#define ABS_TILT_X		0x1a
#define ABS_TILT_Y		0x1b
#define ABS_TOOL_WIDTH		0x1c
#define ABS_VOLUME		0x20
#define ABS_MISC		0x28
#define ABS_MT_SLOT		0x2f	
#define ABS_MT_TOUCH_MAJOR	0x30	
#define ABS_MT_TOUCH_MINOR	0x31	
#define ABS_MT_WIDTH_MAJOR	0x32	
#define ABS_MT_WIDTH_MINOR	0x33	
#define ABS_MT_ORIENTATION	0x34	
#define ABS_MT_POSITION_X	0x35	
#define ABS_MT_POSITION_Y	0x36	
#define ABS_MT_TOOL_TYPE	0x37	
#define ABS_MT_BLOB_ID		0x38	
#define ABS_MT_TRACKING_ID	0x39	
#define ABS_MT_PRESSURE		0x3a	
#define ABS_MT_DISTANCE		0x3b	
#define ABS_MT_TOOL_X		0x3c	
#define ABS_MT_TOOL_Y		0x3d	
#define ABS_MAX			0x3f

#define SW_LID			0x00  
#define SW_TABLET_MODE		0x01  
#define SW_HEADPHONE_INSERT	0x02  
#define SW_RFKILL_ALL		0x03  /* rfkill master switch, type "any" set = radio enabled */
#define SW_RADIO		SW_RFKILL_ALL	
#define SW_MICROPHONE_INSERT	0x04  
#define SW_DOCK			0x05  
#define SW_LINEOUT_INSERT	0x06  
#define SW_JACK_PHYSICAL_INSERT 0x07  
#define SW_VIDEOOUT_INSERT	0x08  
#define SW_CAMERA_LENS_COVER	0x09  
#define SW_KEYPAD_SLIDE		0x0a  
#define SW_FRONT_PROXIMITY	0x0b  
#define SW_ROTATE_LOCK		0x0c  
#define SW_LINEIN_INSERT	0x0d  
#define SW_MUTE_DEVICE		0x0e  
#define SW_PEN_INSERTED		0x0f  
#define SW_MAX			0x0f

#define MSC_SERIAL		0x00
#define MSC_PULSELED		0x01
#define MSC_GESTURE		0x02
#define MSC_RAW			0x03
#define MSC_SCAN		0x04
#define MSC_TIMESTAMP		0x05
#define MSC_MAX			0x07

#define LED_NUML		0x00
#define LED_CAPSL		0x01
#define LED_SCROLLL		0x02
#define LED_COMPOSE		0x03
#define LED_KANA		0x04
#define LED_SLEEP		0x05
#define LED_SUSPEND		0x06
#define LED_MUTE		0x07
#define LED_MISC		0x08
#define LED_MAIL		0x09
#define LED_CHARGING		0x0a
#define LED_MAX			0x0f

#define REP_DELAY		0x00
#define REP_PERIOD		0x01
#define REP_MAX			0x01

#define SND_CLICK		0x00
#define SND_BELL		0x01
#define SND_TONE		0x02
#define SND_MAX			0x07
static bool
FUN1(const struct VAR1 *VAR2, enum jz_version VAR3)
{
return (VAR4 >> VAR3) &&
(!(VAR4 & FUN2(VAR3 - 1, 0))
|| VAR2->VAR5->VAR3 >= VAR3);
}

static const u32 VAR6[4] = {
0x3fa3320f, 0xf200ffff, 0xffffffff, 0xffffffff,
};

static const u32 VAR7[4] = {
0x00000df0, 0x0dff0000, 0x00000000, 0x00000000,
};

static int VAR8[] = { 0x27, 0x26, 0x22, };
static int VAR9[] = { 0x23, 0x24, 0x25, };
static int VAR10[] = { 0x7e, 0x7f, };
static int VAR11[] = { 0x18, 0x19, };
static int VAR12[] = { 0x6f, 0x7d, };
static int VAR13[] = { 0x10, 0x15, };
static int VAR14[] = { 0x11, 0x17, };
static int VAR15[] = {
0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
0x3a, 0x39, 0x38,
};
static int VAR16[] = {
0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
};
static int VAR17[] = { 0x3d, 0x3c, 0x3e, 0x3f, };
static int VAR18[] = { 0x3b, };
static int VAR19[] = { 0x53, };
static int VAR20[] = { 0x54, };
static int VAR21[] = { 0x55, };
static int VAR22[] = { 0x56, };
static int VAR23[] = { 0x57, };
static int VAR24[] = { 0x5e, };
static int VAR25[] = { 0x5f, };

static u8 VAR26[] = { 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, };

static const struct group_desc VAR27[] = {
FUN3("", VAR28, 1),
FUN3("", VAR29, 1),
FUN3("", VAR30, 1),
FUN3("", VAR31, 1),
FUN3("", VAR32, 1),
FUN3("", VAR33, 1),
FUN3("", VAR34, 1),
FUN4("", VAR35, VAR26),
FUN3("", VAR36, 1),
FUN3("", VAR37, 1),
FUN3("", VAR38, 1),
FUN3("", VAR39, 1),
FUN3("", VAR40, 1),
FUN3("", VAR41, 1),
FUN3("", VAR42, 1),
FUN3("", VAR43, 1),
FUN3("", VAR44, 1),
FUN3("", VAR45, 1),
};

static const char *VAR46[] = { "", "", };
static const char *VAR47[] = { "", };
static const char *VAR48[] = { "", };
static const char *VAR49[] = { "", };
static const char *VAR50[] = { "", "", };
static const char *VAR51[] = {
"", "", "", "",
};
static const char *VAR52[] = {
"", "", "", "", "",
};
static const char *VAR53[] = { "", };
static const char *VAR54[] = { "", };

static const struct function_desc VAR55[] = {
{ "", VAR46, FUN5(VAR46), },
{ "", VAR47, FUN5(VAR47), },
{ "", VAR48, FUN5(VAR48), },
{ "", VAR49, FUN5(VAR49), },
{ "", VAR50, FUN5(VAR50), },
{ "", VAR51, FUN5(VAR51), },
{ "", VAR52, FUN5(VAR52), },
{ "", VAR53, FUN5(VAR53), },
{ "", VAR54, FUN5(VAR54), },
};

static const struct ingenic_chip_info VAR56 = {
.VAR57 = 4,
.VAR58 = 0x30,
.VAR3 = VAR59,
.VAR60 = VAR27,
.VAR61 = FUN5(VAR27),
.VAR62 = VAR55,
.VAR63 = FUN5(VAR55),
.VAR64 = VAR6,
.VAR65 = VAR7,
};

static const u32 VAR66[4] = {
0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
};

static const u32 VAR67[4] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

static int VAR68[] = { 0x69, 0x68, 0x6a, };
static int VAR69[] = { 0x6b, 0x6c, 0x6d, };
static int VAR70[] = { 0x7a, 0x79, };
static int VAR71[] = { 0x7e, 0x7f, };
static int VAR72[] = { 0x7e, 0x7f, };
static int VAR73[] = {
0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
0x52, 0x53, 0x54,
};
static int VAR74[] = {
0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
};
static int VAR75[] = { 0x50, 0x51, };
static int VAR76[] = { 0x31, 0x32, 0x56, 0x57, };
static int VAR77[] = { 0x55, };
static int VAR78[] = { 0x39, };
static int VAR79[] = { 0x3a, };
static int VAR80[] = { 0x3b, };
static int VAR81[] = { 0x3c, };
static int VAR82[] = { 0x5c, 0x5d, };
static int VAR83[] = { 0x77, };
static int VAR84[] = { 0x78, };
static int VAR85[] = { 0x79, };
static int VAR86[] = { 0x7a, };
static int VAR87[] = { 0x7b, };
static int VAR88[] = { 0x7c, };
static int VAR89[] = { 0x7e, };
static int VAR90[] = { 0x7f, };

static const struct group_desc VAR91[] = {
FUN3("", VAR92, 0),
FUN3("", VAR93, 0),
FUN3("", VAR94, 1),
FUN3("", VAR95, 1),
FUN3("", VAR96, 2),
FUN3("", VAR97, 0),
FUN3("", VAR98, 0),
FUN3("", VAR99, 0),
FUN3("", VAR100, 0),
FUN3("", VAR101, 0),
FUN3("", VAR102, 0),
FUN3("", VAR103, 0),
FUN3("", VAR104, 0),
FUN3("", VAR105, 0),
FUN3("", VAR106, 0),
FUN3("", VAR107, 0),
FUN3("", VAR108, 0),
FUN3("", VAR109, 0),
FUN3("", VAR110, 0),
FUN3("", VAR111, 0),
FUN3("", VAR112, 0),
FUN3("", VAR113, 0),
FUN3("", VAR114, 0),
};

static const char *VAR115[] = { "", "", };
static const char *VAR116[] = { "", "", };
static const char *VAR117[] = { "", };
static const char *VAR118[] = {
"", "", "", "", "",
};
static const char *VAR119[] = {
"", "", "", "", "",
};
static const char *VAR120[] = { "", };
static const char *VAR121[] = { "", };
static const char *VAR122[] = { "", };
static const char *VAR123[] = { "", };
static const char *VAR124[] = { "", };
static const char *VAR125[] = { "", };
static const char *VAR126[] = { "", };
static const char *VAR127[] = { "", };

static const struct function_desc VAR128[] = {
{ "", VAR115, FUN5(VAR115), },
{ "", VAR116, FUN5(VAR116), },
{ "", VAR117, FUN5(VAR117), },
{ "", VAR118, FUN5(VAR118), },
{ "", VAR119, FUN5(VAR119), },
{ "", VAR120, FUN5(VAR120), },
{ "", VAR121, FUN5(VAR121), },
{ "", VAR122, FUN5(VAR122), },
{ "", VAR123, FUN5(VAR123), },
{ "", VAR124, FUN5(VAR124), },
{ "", VAR125, FUN5(VAR125), },
{ "", VAR126, FUN5(VAR126), },
{ "", VAR127, FUN5(VAR127), },
};

static const struct ingenic_chip_info VAR129 = {
.VAR57 = 4,
.VAR58 = 0x100,
.VAR3 = VAR130,
.VAR60 = VAR91,
.VAR61 = FUN5(VAR91),
.VAR62 = VAR128,
.VAR63 = FUN5(VAR128),
.VAR64 = VAR66,
.VAR65 = VAR67,
};

static int VAR131[] = { 0x48, 0x49, 0x5c, };
static int VAR132[] = { 0x5d, 0x5b, 0x56, };
static int VAR133[] = { 0x7a, 0x7b, 0x7c, };
static int VAR134[] = { 0x7d, 0x7e, 0x7f, };
static int VAR135[] = { 0x4c, 0x4d, };
static int VAR136[] = {
0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
0x72, 0x73, 0x74,
};
static int VAR137[] = {
0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
};
static int VAR138[] = { 0x70, 0x71, };
static int VAR139[] = { 0x76, 0x77, 0x78, 0x79, };
static int VAR140[] = { 0x76, 0x77, 0x78, 0x79, };
static int VAR141[] = { 0x75, };
static int VAR142[] = { 0x55, };
static int VAR143[] = { 0x56, };
static int VAR144[] = { 0x57, };
static int VAR145[] = { 0x58, };
static int VAR146[] = { 0x48, 0x49 };
static int VAR147[] = { 0x5c, 0x5d };
static int VAR148[] = { 0x4a, };
static int VAR149[] = { 0x4b, };
static int VAR150[] = { 0x4c, };
static int VAR151[] = { 0x4d, };
static int VAR152[] = { 0x4e, };
static int VAR153[] = { 0x4f, };

static u8 VAR154[] = { 1, 0, 1, };

static const struct group_desc VAR155[] = {
FUN3("", VAR156, 1),
FUN4("", VAR157,
VAR154),
FUN3("", VAR158, 0),
FUN3("", VAR159, 0),
FUN3("", VAR160, 1),
FUN3("", VAR161, 0),
FUN3("", VAR162, 0),
FUN3("", VAR163, 0),
FUN3("", VAR164, 1),
FUN3("", VAR165, 0),
FUN3("", VAR166, 0),
FUN3("", VAR167, 0),
FUN3("", VAR168, 0),
FUN3("", VAR169, 0),
FUN3("", VAR170, 0),
FUN3("", VAR171, 0),
FUN3("", VAR172, 0),
FUN3("", VAR173, 0),
FUN3("", VAR174, 0),
FUN3("", VAR175, 0),
FUN3("", VAR176, 0),
FUN3("", VAR177, 0),
FUN3("", VAR178, 0),
};

static const char *VAR179[] = { "", "", };
static const char *VAR180[] = { "", "", };
static const char *VAR181[] = { "", };
static const char *VAR182[] = {
"", "", "", "",
"", "",
};
static const char *VAR183[] = {
"", "", "", "",
"", "",
};
static const char *VAR184[] = { "", };
static const char *VAR185[] = { "", };
static const char *VAR186[] = { "", };
static const char *VAR187[] = { "", };
static const char *VAR188[] = { "", };
static const char *VAR189[] = { "", };

static const struct function_desc VAR190[] = {
{ "", VAR179, FUN5(VAR179), },
{ "", VAR180, FUN5(VAR180), },
{ "", VAR181, FUN5(VAR181), },
{ "", VAR183, FUN5(VAR183), },
{ "", VAR184, FUN5(VAR184), },
{ "", VAR185, FUN5(VAR185), },
{ "", VAR186, FUN5(VAR186), },
{ "", VAR187, FUN5(VAR187), },
{ "", VAR188, FUN5(VAR188), },
{ "", VAR189, FUN5(VAR189), },
{ "", VAR182, FUN5(VAR182), },
};

static const struct ingenic_chip_info VAR191 = {
.VAR57 = 4,
.VAR58 = 0x100,
.VAR3 = VAR192,
.VAR60 = VAR155,
.VAR61 = FUN5(VAR155),
.VAR62 = VAR190,
.VAR63 = FUN5(VAR190),
.VAR64 = VAR66,
.VAR65 = VAR67,
};

static const u32 VAR193[6] = {
0xffffffff, 0xffffffff, 0x3fffffff, 0x7fffffff, 0x1fff3fff, 0x00ffffff,
};

static const u32 VAR194[6] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

static int VAR195[] = { 0xa4, 0xa5, };
static int VAR196[] = { 0xa6, 0xa7, };
static int VAR197[] = { 0x90, 0x91, };
static int VAR198[] = { 0x92, 0x93, };
static int VAR199[] = { 0x9b, 0x9a, };
static int VAR200[] = { 0xb0, 0xb1, };
static int VAR201[] = { 0xb2, 0xb3, };
static int VAR202[] = { 0xa8, 0xa9, 0xa0, };
static int VAR203[] = { 0xa1, 0xa2, 0xa3, };
static int VAR204[] = { 0xa4, 0xa5, 0xa6, 0xa7, };
static int VAR205[] = { 0xae, 0xaf, 0xaa, };
static int VAR206[] = { 0xab, 0xac, 0xad, };
static int VAR207[] = { 0x8c, 0x8d, };
static int VAR208[] = {
0x89, 0x8b, 0x8a, 0x88,
0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
};
static int VAR209[] = {
0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
0x72, 0x73, 0x74,
};
static int VAR210[] = {
0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
};
static int VAR211[] = { 0x70, 0x71, };
static int VAR212[] = { 0x76, 0x77, 0x78, 0x79, 0xb2, 0xb3, };
static int VAR213[] = { 0x76, 0x77, 0x78, 0x79, };
static int VAR214[] = { 0x75, };
static int VAR215[] = { 0x55, };
static int VAR216[] = { 0x56, };
static int VAR217[] = { 0x57, };
static int VAR218[] = { 0x58, };
static int VAR219[] = { 0x5c, 0x5d, };
static int VAR220[] = { 0x94, };
static int VAR221[] = { 0x95, };
static int VAR222[] = { 0x96, };
static int VAR223[] = { 0x97, };
static int VAR224[] = { 0x98, };
static int VAR225[] = { 0x99, };

static const struct group_desc VAR226[] = {
FUN3("", VAR227, 1),
FUN3("", VAR228, 1),
FUN3("", VAR229, 0),
FUN3("", VAR230, 0),
FUN3("", VAR231, 1),
FUN3("", VAR232, 0),
FUN3("", VAR233, 0),
FUN3("", VAR234, 0),
FUN3("", VAR235, 0),
FUN3("", VAR236, 0),
FUN3("", VAR237, 0),
FUN3("", VAR238, 0),
FUN3("", VAR239, 0),
FUN3("", VAR240, 0),
FUN3("", VAR241, 0),
FUN3("", VAR242, 0),
FUN3("", VAR243, 0),
FUN3("", VAR244, 1),
FUN3("", VAR245, 0),
FUN3("", VAR246, 0),
FUN3("", VAR247, 0),
FUN3("", VAR248, 0),
FUN3("", VAR249, 0),
FUN3("", VAR250, 0),
FUN3("", VAR251, 0),
FUN3("", VAR252, 0),
FUN3("", VAR253, 0),
FUN3("", VAR254, 0),
FUN3("", VAR255, 0),
FUN3("", VAR256, 0),
FUN3("", VAR257, 0),
};

static const char *VAR258[] = { "", "", };
static const char *VAR259[] = { "", "", };
static const char *VAR260[] = { "", };
static const char *VAR261[] = { "", "", };
static const char *VAR262[] = {
"", "", "",
};
static const char *VAR263[] = { "", "", };
static const char *VAR264[] = { "", };
static const char *VAR265[] = { "", };
static const char *VAR266[] = {
"", "", "", "",
"", "",
};
static const char *VAR267[] = {
"", "", "", "", "",
};
static const char *VAR268[] = { "", };
static const char *VAR269[] = { "", };
static const char *VAR270[] = { "", };
static const char *VAR271[] = { "", };
static const char *VAR272[] = { "", };
static const char *VAR273[] = { "", };

static const struct function_desc VAR274[] = {
{ "", VAR258, FUN5(VAR258), },
{ "", VAR259, FUN5(VAR259), },
{ "", VAR260, FUN5(VAR260), },
{ "", VAR261, FUN5(VAR261), },
{ "", VAR262, FUN5(VAR262), },
{ "", VAR263, FUN5(VAR263), },
{ "", VAR264, FUN5(VAR264), },
{ "", VAR265, FUN5(VAR265), },
{ "", VAR266, FUN5(VAR266), },
{ "", VAR267, FUN5(VAR267), },
{ "", VAR268, FUN5(VAR268), },
{ "", VAR269, FUN5(VAR269), },
{ "", VAR270, FUN5(VAR270), },
{ "", VAR271, FUN5(VAR271), },
{ "", VAR272, FUN5(VAR272), },
{ "", VAR273, FUN5(VAR273), },
};

static const struct ingenic_chip_info VAR275 = {
.VAR57 = 6,
.VAR58 = 0x100,
.VAR3 = VAR276,
.VAR60 = VAR226,
.VAR61 = FUN5(VAR226),
.VAR62 = VAR274,
.VAR63 = FUN5(VAR274),
.VAR64 = VAR193,
.VAR65 = VAR194,
};

static const u32 VAR277[6] = {
0xffffffff, 0xffffffff, 0x0fffffff, 0xffffffff, 0x33dc3fff, 0x0000fc00,
};

static const u32 VAR278[6] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

static int VAR279[] = { 0x7c, 0x7d, };
static int VAR280[] = { 0x7e, 0x7f, };
static int VAR281[] = { 0x97, 0x99, };
static int VAR282[] = { 0x9f, };
static int VAR283[] = { 0x3b, };
static int VAR284[] = { 0xa1, };
static int VAR285[] = { 0x3c, };
static int VAR286[] = { 0xa2, };
static int VAR287[] = { 0x3a, };
static int VAR288[] = { 0xa0, };
static int VAR289[] = { 0x3e, };
static int VAR290[] = { 0xa4, };
static int VAR291[] = { 0x3d, };
static int VAR292[] = { 0xa3, };
static int VAR293[] = { 0x3f, };
static int VAR294[] = { 0xa5, };
static int VAR295[] = { 0x2f, 0x50, 0x5c, };
static int VAR296[] = { 0x5d, 0x5b, 0x51, };
static int VAR297[] = { 0x3a, 0x3d, 0x3c, };
static int VAR298[] = { 0x3b, 0x3e, 0x3f, };
static int VAR299[] = { 0x8c, 0x8d, };
static int VAR300[] = {
0x89, 0x8b, 0x8a, 0x88,
0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
};
static int VAR301[] = {
0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
0x72, 0x73, 0x74,
};
static int VAR302[] = {
0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
};
static int VAR303[] = { 0x70, 0x71, };
static int VAR304[] = { 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, };
static int VAR305[] = { 0x76, 0x77, 0x78, 0x79, };
static int VAR306[] = { 0x75, };
static int VAR307[] = { 0x55, };
static int VAR308[] = { 0x56, };
static int VAR309[] = { 0x57, };
static int VAR310[] = { 0x58, };
static int VAR311[] = { 0x5c, 0x5d, };
static int VAR312[] = { 0x94, };
static int VAR313[] = { 0xab, };
static int VAR314[] = { 0x96, };
static int VAR315[] = { 0x97, };
static int VAR316[] = { 0x98, };
static int VAR317[] = { 0x99, };

static u8 VAR318[] = { 2, 2, 1, };
static u8 VAR319[] = { 1, 0, 1, };
static u8 VAR320[] = { 1, 1, 1, 1, 0, 0, };

static const struct group_desc VAR321[] = {
FUN3("", VAR322, 0),
FUN3("", VAR323, 0),
FUN3("", VAR324, 1),
FUN3("", VAR325, 1),
FUN3("", VAR326, 0),
FUN3("", VAR327, 0),
FUN3("", VAR328, 0),
FUN3("", VAR329, 0),
FUN3("", VAR330, 0),
FUN3("", VAR331, 0),
FUN3("", VAR332, 0),
FUN3("", VAR333, 0),
FUN3("", VAR334, 0),
FUN3("", VAR335, 0),
FUN3("", VAR336, 0),
FUN3("", VAR337, 0),
FUN4("", VAR338,
VAR318),
FUN4("", VAR339,
VAR319),
FUN3("", VAR340, 1),
FUN3("", VAR341, 1),
FUN3("", VAR342, 0),
FUN3("", VAR343, 0),
FUN3("", VAR344, 0),
FUN3("", VAR345, 0),
FUN3("", VAR346, 0),
FUN4("", VAR347,
VAR320),
FUN3("", VAR348, 0),
FUN3("", VAR349, 0),
FUN3("", VAR350, 0),
FUN3("", VAR351, 0),
FUN3("", VAR352, 0),
FUN3("", VAR353, 0),
FUN3("", VAR354, 0),
FUN3("", VAR355, 0),
FUN3("", VAR356, 1),
FUN3("", VAR357, 0),
FUN3("", VAR358, 0),
FUN3("", VAR359, 0),
FUN3("", VAR360, 0),
};

static const char *VAR361[] = { "", "", };
static const char *VAR362[] = { "", };
static const char *VAR363[] = { "", };
static const char *VAR364[] = {
"", "",
"", "",
"", "",
"", "",
"", "",
"", "",
};
static const char *VAR365[] = { "", "", };
static const char *VAR366[] = { "", "", };
static const char *VAR367[] = { "", };
static const char *VAR368[] = { "", };
static const char *VAR369[] = {
"", "", "", "",
"", "",
};
static const char *VAR370[] = {
"", "", "", "", "",
};
static const char *VAR371[] = { "", };
static const char *VAR372[] = { "", };
static const char *VAR373[] = { "", };
static const char *VAR374[] = { "", };
static const char *VAR375[] = { "", };
static const char *VAR376[] = { "", };

static const struct function_desc VAR377[] = {
{ "", VAR361, FUN5(VAR361), },
{ "", VAR362, FUN5(VAR362), },
{ "", VAR363, FUN5(VAR363), },
{ "", VAR364, FUN5(VAR364), },
{ "", VAR365, FUN5(VAR365), },
{ "", VAR366, FUN5(VAR366), },
{ "", VAR367, FUN5(VAR367), },
{ "", VAR368, FUN5(VAR368), },
{ "", VAR369, FUN5(VAR369), },
{ "", VAR370, FUN5(VAR370), },
{ "", VAR371, FUN5(VAR371), },
{ "", VAR372, FUN5(VAR372), },
{ "", VAR373, FUN5(VAR373), },
{ "", VAR374, FUN5(VAR374), },
{ "", VAR375, FUN5(VAR375), },
{ "", VAR376, FUN5(VAR376), },
};

static const struct ingenic_chip_info VAR378 = {
.VAR57 = 6,
.VAR58 = 0x100,
.VAR3 = VAR379,
.VAR60 = VAR321,
.VAR61 = FUN5(VAR321),
.VAR62 = VAR377,
.VAR63 = FUN5(VAR377),
.VAR64 = VAR277,
.VAR65 = VAR278,
};

static const u32 VAR380[6] = {
0xffffffff, 0xfffcf3ff, 0xffffffff, 0xffffcfff, 0xfffffb7c, 0x0000000f,
};

static const u32 VAR381[6] = {
0x00000000, 0x00030c00, 0x00000000, 0x00003000, 0x00000483, 0x00000ff0,
};

static int VAR382[] = { 0xa0, 0xa3, };
static int VAR383[] = { 0xa1, 0xa2, };
static int VAR384[] = { 0x7a, 0x7c, };
static int VAR385[] = { 0x7b, 0x7d, };
static int VAR386[] = { 0x5c, 0x5e, };
static int VAR387[] = { 0x5d, 0x5f, };
static int VAR388[] = { 0x6c, 0x85, };
static int VAR389[] = { 0x88, 0x89, };
static int VAR390[] = { 0x15, };
static int VAR391[] = { 0x35, };
static int VAR392[] = { 0x75, };
static int VAR393[] = { 0x91, };
static int VAR394[] = { 0x14, };
static int VAR395[] = { 0x34, };
static int VAR396[] = { 0x74, };
static int VAR397[] = { 0x8e, };
static int VAR398[] = { 0x12, };
static int VAR399[] = { 0x3c, };
static int VAR400[] = { 0x78, };
static int VAR401[] = { 0x8f, };
static int VAR402[] = { 0x3e, };
static int VAR403[] = { 0x76, };
static int VAR404[] = { 0x93, };
static int VAR405[] = { 0x13, };
static int VAR406[] = { 0x3d, };
static int VAR407[] = { 0x79, };
static int VAR408[] = { 0x90, };
static int VAR409[] = { 0x3f, };
static int VAR410[] = { 0x77, };
static int VAR411[] = { 0x92, };
static int VAR412[] = { 0x29, };
static int VAR413[] = { 0x35, };
static int VAR414[] = { 0x6c, };
static int VAR415[] = { 0x75, };
static int VAR416[] = { 0x91, };
static int VAR417[] = { 0xa3, };
static int VAR418[] = { 0x26, };
static int VAR419[] = { 0x34, };
static int VAR420[] = { 0x6d, };
static int VAR421[] = { 0x74, };
static int VAR422[] = { 0x8e, };
static int VAR423[] = { 0xa0, };
static int VAR424[] = { 0x27, };
static int VAR425[] = { 0x3c, };
static int VAR426[] = { 0x78, };
static int VAR427[] = { 0x87, };
static int VAR428[] = { 0x8f, };
static int VAR429[] = { 0xa2, };
static int VAR430[] = { 0x3e, };
static int VAR431[] = { 0x76, };
static int VAR432[] = { 0x93, };
static int VAR433[] = { 0x28, };
static int VAR434[] = { 0x3d, };
static int VAR435[] = { 0x79, };
static int VAR436[] = { 0x86, };
static int VAR437[] = { 0x90, };
static int VAR438[] = { 0xa1, };
static int VAR439[] = { 0x3f, };
static int VAR440[] = { 0x77, };
static int VAR441[] = { 0x92, };
static int VAR442[] = { 0x12, 0x13, 0x14, };
static int VAR443[] = { 0x15, 0x16, 0x17, };
static int VAR444[] = { 0x9c, 0x9d, 0x94, };
static int VAR445[] = { 0x95, 0x96, 0x97, };
static int VAR446[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR447[] = { 0x78, 0x79, 0x74, };
static int VAR448[] = { 0x75, 0x76, 0x77, };
static int VAR449[] = { 0x9c, 0x9d, 0x94, };
static int VAR450[] = { 0x95, 0x96, 0x97, };
static int VAR451[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR452[] = { 0x3c, 0x3d, 0x34, };
static int VAR453[] = { 0x35, 0x3e, 0x3f, };
static int VAR454[] = { 0x9c, 0x9d, 0x94, };
static int VAR455[] = { 0x95, 0x96, 0x97, };
static int VAR456[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR457[] = {
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
};
static int VAR458[] = {
0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
};
static int VAR459[] = { 0x20, 0x21, };
static int VAR460[] = { 0x22, 0x23, 0x24, 0x25, };
static int VAR461[] = { 0x10, 0x11, };
static int VAR462[] = { 0x12, 0x13, };
static int VAR463[] = { 0x1b, };
static int VAR464[] = { 0x15, };
static int VAR465[] = { 0x16, };
static int VAR466[] = { 0x17, };
static int VAR467[] = { 0x18, };
static int VAR468[] = { 0x19, };
static int VAR469[] = { 0x1a, };
static int VAR470[] = { 0x7e, 0x7f, };
static int VAR471[] = { 0x9e, 0x9f, };
static int VAR472[] = {
0x26, 0x27, 0x28, 0x29,
0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31,
};
static int VAR473[] = {
0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x4c,
0x4d, 0x52, 0x53,
};
static int VAR474[] = {
0x4e, 0x4f, 0x50, 0x51, 0x56, 0x57, 0x58, 0x59,
};
static int VAR475[] = {
0x5a, 0x5b,
};
static int VAR476[] = {
0x40, 0x41, 0x4a, 0x4b, 0x54, 0x55,
};
static int VAR477[] = { 0x54, 0x4a, 0x41, 0x40, };
static int VAR478[] = { 0x49, };
static int VAR479[] = { 0x80, };
static int VAR480[] = { 0x81, };
static int VAR481[] = { 0x82, };
static int VAR482[] = { 0x83, };
static int VAR483[] = { 0x84, };
static int VAR484[] = { 0x85, };
static int VAR485[] = { 0x6a, };
static int VAR486[] = { 0x6b, };
static int VAR487[] = { 0x8a, };

static u8 VAR488[] = { 0, 1, };
static u8 VAR489[] = { 1, 1, 0, };

static const struct group_desc VAR490[] = {
FUN3("", VAR491, 0),
FUN3("", VAR492, 0),
FUN3("", VAR493, 0),
FUN3("", VAR494, 0),
FUN3("", VAR495, 0),
FUN3("", VAR496, 0),
FUN4("", VAR497,
VAR488),
FUN3("", VAR498, 0),
FUN3("", VAR499, 2),
FUN3("", VAR500, 1),
FUN3("", VAR501, 1),
FUN3("", VAR502, 0),
FUN3("", VAR503, 1),
FUN3("", VAR504, 1),
FUN3("", VAR505, 1),
FUN3("", VAR506, 0),
FUN3("", VAR507, 2),
FUN3("", VAR508, 1),
FUN3("", VAR509, 1),
FUN3("", VAR510, 0),
FUN3("", VAR511, 1),
FUN3("", VAR512, 1),
FUN3("", VAR513, 0),
FUN3("", VAR514, 2),
FUN3("", VAR515, 1),
FUN3("", VAR516, 1),
FUN3("", VAR517, 0),
FUN3("", VAR518, 1),
FUN3("", VAR519, 1),
FUN3("", VAR520, 0),
FUN3("", VAR521, 2),
FUN3("", VAR522, 2),
FUN3("", VAR523, 2),
FUN3("", VAR524, 2),
FUN3("", VAR525, 1),
FUN3("", VAR526, 2),
FUN3("", VAR527, 2),
FUN3("", VAR528, 2),
FUN3("", VAR529, 2),
FUN3("", VAR530, 2),
FUN3("", VAR531, 1),
FUN3("", VAR532, 2),
FUN3("", VAR533, 2),
FUN3("", VAR534, 2),
FUN3("", VAR535, 2),
FUN3("", VAR536, 2),
FUN3("", VAR537, 1),
FUN3("", VAR538, 2),
FUN3("", VAR539, 2),
FUN3("", VAR540, 2),
FUN3("", VAR541, 1),
FUN3("", VAR542, 2),
FUN3("", VAR543, 2),
FUN3("", VAR544, 2),
FUN3("", VAR545, 2),
FUN3("", VAR546, 1),
FUN3("", VAR547, 2),
FUN3("", VAR548, 2),
FUN3("", VAR549, 2),
FUN3("", VAR550, 1),
FUN4("", VAR551,
VAR489),
FUN3("", VAR552, 1),
FUN3("", VAR553, 0),
FUN3("", VAR554, 0),
FUN3("", VAR555, 0),
FUN3("", VAR556, 0),
FUN3("", VAR557, 0),
FUN3("", VAR558, 1),
FUN3("", VAR559, 1),
FUN3("", VAR560, 1),
FUN3("", VAR561, 0),
FUN3("", VAR562, 0),
FUN3("", VAR563, 2),
FUN3("", VAR564, 2),
FUN3("", VAR565, 2),
FUN3("", VAR566, 0),
FUN3("", VAR567, 0),
FUN3("", VAR568, 0),
FUN3("", VAR569, 0),
FUN3("", VAR570, 0),
FUN3("", VAR571, 0),
FUN3("", VAR572, 0),
FUN3("", VAR573, 0),
FUN3("", VAR574, 0),
FUN3("", VAR575, 0),
FUN3("", VAR576, 0),
FUN3("", VAR577, 0),
FUN3("", VAR578, 0),
FUN3("", VAR579, 0),
FUN3("", VAR580, 0),
FUN3("", VAR581, 0),
FUN3("", VAR582, 0),
FUN3("", VAR583, 0),
FUN3("", VAR584, 0),
FUN3("", VAR585, 0),
FUN3("", VAR586, 1),
FUN3("", VAR587, 0),
FUN3("", VAR588, 0),
FUN3("", VAR589, 0),
FUN3("", VAR590, 0),
FUN3("", VAR591, 0),
FUN3("", VAR592, 0),
FUN3("", VAR593, 0),
FUN3("", VAR594, 0),
FUN3("", VAR595, 0),
FUN3("", VAR596, 0),
};

static const char *VAR597[] = { "", "", };
static const char *VAR598[] = { "", "", };
static const char *VAR599[] = { "", "", };
static const char *VAR600[] = { "", "", };
static const char *VAR601[] = {
"", "", "", "",
"", "", "", "",
"", "", "", "",
"", "", "",
"", "", "", "",
"", "", "",
};
static const char *VAR602[] = {
"", "", "", "", "", "",
"", "", "", "", "", "",
"", "", "", "", "", "",
"", "", "",
"", "", "", "", "", "",
"", "", "",
};
static const char *VAR603[] = {
"", "",
"", "", "",
};
static const char *VAR604[] = {
"", "",
"", "", "",
};
static const char *VAR605[] = {
"", "",
"", "", "",
};
static const char *VAR606[] = {
"", "", "",
"", "", "", "",
};
static const char *VAR607[] = { "", };
static const char *VAR608[] = { "", };
static const char *VAR609[] = { "", };
static const char *VAR610[] = { "", };
static const char *VAR611[] = { "", };
static const char *VAR612[] = { "", };
static const char *VAR613[] = { "", };
static const char *VAR614[] = { "", };
static const char *VAR615[] = { "", };
static const char *VAR616[] = {
"", "", "", "",
"", "",
};
static const char *VAR617[] = { "", };
static const char *VAR618[] = { "", };
static const char *VAR619[] = { "", };
static const char *VAR620[] = { "", };
static const char *VAR621[] = { "", };
static const char *VAR622[] = { "", };
static const char *VAR623[] = { "", };
static const char *VAR624[] = { "", };
static const char *VAR625[] = { "", };

static const struct function_desc VAR626[] = {
{ "", VAR597, FUN5(VAR597), },
{ "", VAR598, FUN5(VAR598), },
{ "", VAR599, FUN5(VAR599), },
{ "", VAR600, FUN5(VAR600), },
{ "", VAR601, FUN5(VAR601), },
{ "", VAR602, FUN5(VAR602), },
{ "", VAR603, FUN5(VAR603), },
{ "", VAR604, FUN5(VAR604), },
{ "", VAR605, FUN5(VAR605), },
{ "", VAR606, FUN5(VAR606), },
{ "", VAR607, FUN5(VAR607), },
{ "", VAR608, FUN5(VAR608), },
{ "", VAR609, FUN5(VAR609), },
{ "", VAR610, FUN5(VAR610), },
{ "", VAR611, FUN5(VAR611), },
{ "", VAR612, FUN5(VAR612), },
{ "", VAR613, FUN5(VAR613), },
{ "", VAR614, FUN5(VAR614), },
{ "", VAR615, FUN5(VAR615), },
{ "", VAR616, FUN5(VAR616), },
{ "", VAR617, FUN5(VAR617), },
{ "", VAR618, FUN5(VAR618), },
{ "", VAR619, FUN5(VAR619), },
{ "", VAR620, FUN5(VAR620), },
{ "", VAR621, FUN5(VAR621), },
{ "", VAR622, FUN5(VAR622), },
{ "", VAR623, FUN5(VAR623), },
{ "", VAR624, FUN5(VAR624), },
{ "", VAR625, FUN5(VAR625), },
};

static const struct ingenic_chip_info VAR627 = {
.VAR57 = 6,
.VAR58 = 0x100,
.VAR3 = VAR628,
.VAR60 = VAR490,
.VAR61 = FUN5(VAR490),
.VAR62 = VAR626,
.VAR63 = FUN5(VAR626),
.VAR64 = VAR380,
.VAR65 = VAR381,
};

static const u32 VAR629[6] = {
0x3fffffff, 0xfff0f3fc, 0xffffffff, 0xffff4fff, 0xfffffb7c, 0x0024f00f,
};

static const u32 VAR630[6] = {
0x00000000, 0x000f0c03, 0x00000000, 0x0000b000, 0x00000483, 0x005b0ff0,
};

static int VAR631[] = { 0xa0, 0xa3, };
static int VAR632[] = { 0xa1, 0xa2, };
static int VAR633[] = { 0x7a, 0x7c, };
static int VAR634[] = { 0x7b, 0x7d, };
static int VAR635[] = { 0x5c, 0x5e, };
static int VAR636[] = { 0x5d, 0x5f, };
static int VAR637[] = { 0x6c, 0x85, };
static int VAR638[] = { 0x88, 0x89, };
static int VAR639[] = { 0x15, };
static int VAR640[] = { 0x35, };
static int VAR641[] = { 0x75, };
static int VAR642[] = { 0x91, };
static int VAR643[] = { 0x14, };
static int VAR644[] = { 0x34, };
static int VAR645[] = { 0x74, };
static int VAR646[] = { 0x8e, };
static int VAR647[] = { 0x12, };
static int VAR648[] = { 0x3c, };
static int VAR649[] = { 0x78, };
static int VAR650[] = { 0x8f, };
static int VAR651[] = { 0x3e, };
static int VAR652[] = { 0x76, };
static int VAR653[] = { 0x93, };
static int VAR654[] = { 0x13, };
static int VAR655[] = { 0x3d, };
static int VAR656[] = { 0x79, };
static int VAR657[] = { 0x90, };
static int VAR658[] = { 0x3f, };
static int VAR659[] = { 0x77, };
static int VAR660[] = { 0x92, };
static int VAR661[] = { 0x35, };
static int VAR662[] = { 0x75, };
static int VAR663[] = { 0x91, };
static int VAR664[] = { 0x34, };
static int VAR665[] = { 0x74, };
static int VAR666[] = { 0x8e, };
static int VAR667[] = { 0x3c, };
static int VAR668[] = { 0x78, };
static int VAR669[] = { 0x8f, };
static int VAR670[] = { 0x3e, };
static int VAR671[] = { 0x76, };
static int VAR672[] = { 0x93, };
static int VAR673[] = { 0x3d, };
static int VAR674[] = { 0x79, };
static int VAR675[] = { 0x90, };
static int VAR676[] = { 0x3f, };
static int VAR677[] = { 0x77, };
static int VAR678[] = { 0x92, };
static int VAR679[] = { 0x12, 0x13, 0x14, };
static int VAR680[] = { 0x15, 0x16, 0x17, };
static int VAR681[] = { 0x9c, 0x9d, 0x94, };
static int VAR682[] = { 0x95, 0x96, 0x97, };
static int VAR683[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR684[] = { 0x78, 0x79, 0x74, };
static int VAR685[] = { 0x75, 0x76, 0x77, };
static int VAR686[] = { 0x9c, 0x9d, 0x94, };
static int VAR687[] = { 0x95, 0x96, 0x97, };
static int VAR688[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR689[] = { 0x3c, 0x3d, 0x34, };
static int VAR690[] = { 0x35, 0x3e, 0x3f, };
static int VAR691[] = { 0x9c, 0x9d, 0x94, };
static int VAR692[] = { 0x95, 0x96, 0x97, };
static int VAR693[] = { 0x98, 0x99, 0x9a, 0x9b, };
static int VAR694[] = {
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
};
static int VAR695[] = {
0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
};
static int VAR696[] = { 0x20, 0x21, };
static int VAR697[] = { 0x22, 0x23, 0x24, 0x25, };
static int VAR698[] = { 0x10, 0x11, };
static int VAR699[] = { 0x12, 0x13, };
static int VAR700[] = { 0x1b, };
static int VAR701[] = { 0x15, };
static int VAR702[] = { 0x16, };
static int VAR703[] = { 0x17, };
static int VAR704[] = { 0x18, };
static int VAR705[] = { 0x19, };
static int VAR706[] = { 0x1a, };
static int VAR707[] = { 0x7e, 0x7f, };
static int VAR708[] = { 0x9e, 0x9f, };
static int VAR709[] = { 0xb0, 0xb1, };
static int VAR710[] = {
0x26, 0x27, 0x28, 0x29,
0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31,
};
static int VAR711[] = {
0x32, 0x33, 0xb0, 0xb1,
};
static int VAR712[] = {
0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x4c, 0x4d,
0x48, 0x52, 0x53,
};
static int VAR713[] = {
0x4e, 0x4f, 0x50, 0x51, 0x56, 0x57, 0x58, 0x59,
};
static int VAR714[] = {
0x5a, 0x5b,
};
static int VAR715[] = {
0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
0x58, 0x59, 0x5a, 0x5b,
};
static int VAR716[] = { 0x54, 0x4a, 0x41, 0x40, };
static int VAR717[] = { 0x49, };
static int VAR718[] = { 0x80, };
static int VAR719[] = { 0x81, };
static int VAR720[] = { 0x82, };
static int VAR721[] = { 0x83, };
static int VAR722[] = { 0x84, };
static int VAR723[] = { 0x85, };
static int VAR724[] = { 0x6a, };
static int VAR725[] = { 0x6b, };
static int VAR726[] = {
0xa9, 0xab, 0xaa, 0xac, 0xa5, 0xa4, 0xad, 0xae, 0xa6, 0xa8,
};
static int VAR727[] = {
0x7b, 0x7a, 0x7d, 0x7c, 0xa7, 0x24, 0xaf,
};

static const struct group_desc VAR728[] = {
FUN3("", VAR729, 0),
FUN3("", VAR730, 0),
FUN3("", VAR731, 0),
FUN3("", VAR732, 0),
FUN3("", VAR733, 0),
FUN3("", VAR734, 0),
FUN4("", VAR735,
VAR488),
FUN3("", VAR736, 0),
FUN3("", VAR737, 2),
FUN3("", VAR738, 1),
FUN3("", VAR739, 1),
FUN3("", VAR740, 0),
FUN3("", VAR741, 1),
FUN3("", VAR742, 1),
FUN3("", VAR743, 1),
FUN3("", VAR744, 0),
FUN3("", VAR745, 2),
FUN3("", VAR746, 1),
FUN3("", VAR747, 1),
FUN3("", VAR748, 0),
FUN3("", VAR749, 1),
FUN3("", VAR750, 1),
FUN3("", VAR751, 0),
FUN3("", VAR752, 2),
FUN3("", VAR753, 1),
FUN3("", VAR754, 1),
FUN3("", VAR755, 0),
FUN3("", VAR756, 1),
FUN3("", VAR757, 1),
FUN3("", VAR758, 0),
FUN3("", VAR759, 2),
FUN3("", VAR760, 2),
FUN3("", VAR761, 1),
FUN3("", VAR762, 2),
FUN3("", VAR763, 2),
FUN3("", VAR764, 1),
FUN3("", VAR765, 2),
FUN3("", VAR766, 2),
FUN3("", VAR767, 1),
FUN3("", VAR768, 2),
FUN3("", VAR769, 2),
FUN3("", VAR770, 1),
FUN3("", VAR771, 2),
FUN3("", VAR772, 2),
FUN3("", VAR773, 1),
FUN3("", VAR774, 2),
FUN3("", VAR775, 2),
FUN3("", VAR776, 1),
FUN4("", VAR777,
VAR489),
FUN3("", VAR778, 1),
FUN3("", VAR779, 0),
FUN3("", VAR780, 0),
FUN3("", VAR781, 0),
FUN3("", VAR782, 0),
FUN3("", VAR783, 0),
FUN3("", VAR784, 1),
FUN3("", VAR785, 1),
FUN3("", VAR786, 1),
FUN3("", VAR787, 0),
FUN3("", VAR788, 0),
FUN3("", VAR789, 2),
FUN3("", VAR790, 2),
FUN3("", VAR791, 2),
FUN3("", VAR792, 0),
FUN3("", VAR793, 0),
FUN3("", VAR794, 0),
FUN3("", VAR795, 0),
FUN3("", VAR796, 0),
FUN3("", VAR797, 0),
FUN3("", VAR798, 0),
FUN3("", VAR799, 0),
FUN3("", VAR800, 0),
FUN3("", VAR801, 0),
FUN3("", VAR802, 0),
FUN3("", VAR803, 0),
FUN3("", VAR804, 0),
FUN3("", VAR805, 0),
FUN3("", VAR806, 0),
FUN3("", VAR807, 2),
FUN3("", VAR808, 0),
FUN3("", VAR809, 0),
FUN3("", VAR810, 0),
FUN3("", VAR811, 0),
FUN3("", VAR812, 0),
FUN3("", VAR813, 0),
FUN3("", VAR814, 1),
FUN3("", VAR815, 0),
FUN3("", VAR816, 0),
FUN3("", VAR817, 0),
FUN3("", VAR818, 0),
FUN3("", VAR819, 0),
FUN3("", VAR820, 0),
FUN3("", VAR821, 0),
FUN3("", VAR822, 0),
FUN3("", VAR823, 0),
FUN3("", VAR824, 0),
FUN3("", VAR825, 0),
FUN3("", VAR596, 0),
};

static const char *VAR826[] = { "", "", };
static const char *VAR827[] = { "", "", };
static const char *VAR828[] = { "", "", };
static const char *VAR829[] = { "", "", };
static const char *VAR830[] = {
"", "", "", "",
"", "", "", "",
"", "", "", "",
"", "", "",
"", "", "", "",
"", "", "",
};
static const char *VAR831[] = {
"", "", "",
"", "", "",
"", "", "",
"", "", "",
"", "", "",
"", "", "",
};
static const char *VAR832[] = {
"", "",
"", "", "",
};
static const char *VAR833[] = {
"", "",
"", "", "",
};
static const char *VAR834[] = {
"", "",
"", "", "",
};
static const char *VAR835[] = {
"", "", "",
"", "", "", "",
};
static const char *VAR836[] = { "", };
static const char *VAR837[] = { "", };
static const char *VAR838[] = { "", };
static const char *VAR839[] = { "", };
static const char *VAR840[] = { "", };
static const char *VAR841[] = { "", };
static const char *VAR842[] = { "", };
static const char *VAR843[] = { "", };
static const char *VAR844[] = { "", };
static const char *VAR845[] = { "", "", };
static const char *VAR846[] = {
"", "", "", "",
"", "",
};
static const char *VAR847[] = { "", };
static const char *VAR848[] = { "", };
static const char *VAR849[] = { "", };
static const char *VAR850[] = { "", };
static const char *VAR851[] = { "", };
static const char *VAR852[] = { "", };
static const char *VAR853[] = { "", };
static const char *VAR854[] = { "", };
static const char *VAR855[] = { "", "", };

static const struct function_desc VAR856[] = {
{ "", VAR826, FUN5(VAR826), },
{ "", VAR827, FUN5(VAR827), },
{ "", VAR828, FUN5(VAR828), },
{ "", VAR829, FUN5(VAR829), },
{ "", VAR830, FUN5(VAR830), },
{ "", VAR831, FUN5(VAR831), },
{ "", VAR832, FUN5(VAR832), },
{ "", VAR833, FUN5(VAR833), },
{ "", VAR834, FUN5(VAR834), },
{ "", VAR835, FUN5(VAR835), },
{ "", VAR836, FUN5(VAR836), },
{ "", VAR837, FUN5(VAR837), },
{ "", VAR838, FUN5(VAR838), },
{ "", VAR839, FUN5(VAR839), },
{ "", VAR840, FUN5(VAR840), },
{ "", VAR841, FUN5(VAR841), },
{ "", VAR842, FUN5(VAR842), },
{ "", VAR843, FUN5(VAR843), },
{ "", VAR844, FUN5(VAR844), },
{ "", VAR845, FUN5(VAR845), },
{ "", VAR846, FUN5(VAR846), },
{ "", VAR847, FUN5(VAR847), },
{ "", VAR848, FUN5(VAR848), },
{ "", VAR849, FUN5(VAR849), },
{ "", VAR850, FUN5(VAR850), },
{ "", VAR851, FUN5(VAR851), },
{ "", VAR852, FUN5(VAR852), },
{ "", VAR853, FUN5(VAR853), },
{ "", VAR854, FUN5(VAR854), },
{ "", VAR855, FUN5(VAR855), },
{ "", VAR625, FUN5(VAR625), },
};

static const struct ingenic_chip_info VAR857 = {
.VAR57 = 6,
.VAR58 = 0x100,
.VAR3 = VAR858,
.VAR60 = VAR728,
.VAR61 = FUN5(VAR728),
.VAR62 = VAR856,
.VAR63 = FUN5(VAR856),
.VAR64 = VAR629,
.VAR65 = VAR630,
};

static const u32 VAR859[7] = {
0x28ff00ff, 0xf030f3fc, 0x0fffffff, 0xfffe4000, 0xf0f0000c, 0x0000f00f, 0x0000f3c0,
};

static const u32 VAR860[7] = {
0x00000000, 0x00030c03, 0x00000000, 0x00008000, 0x00000403, 0x00000ff0, 0x00030c00,
};

static int VAR861[] = { 0xa0, 0xa3, };
static int VAR862[] = { 0xa1, 0xa2, };
static int VAR863[] = { 0x7a, 0x7c, };
static int VAR864[] = { 0x7b, 0x7d, };
static int VAR865[] = { 0x54, 0x4a, };
static int VAR866[] = { 0xa5, 0xa4, };
static int VAR867[] = { 0x1e, 0x1f, };
static int VAR868[] = { 0x13, };
static int VAR869[] = { 0x75, };
static int VAR870[] = { 0x14, };
static int VAR871[] = { 0x74, };
static int VAR872[] = { 0x12, };
static int VAR873[] = { 0x78, };
static int VAR874[] = { 0x76, };
static int VAR875[] = { 0x17, };
static int VAR876[] = { 0x79, };
static int VAR877[] = { 0x77, };
static int VAR878[] = { 0x12, 0x13, 0x14, };
static int VAR879[] = { 0x15, 0x16, 0x17, };
static int VAR880[] = { 0x04, 0x05, 0x06, 0x07, };
static int VAR881[] = { 0x9c, 0x9d, 0x94, };
static int VAR882[] = { 0x95, 0x96, 0x97, };
static int VAR883[] = { 0x78, 0x79, 0x74, };
static int VAR884[] = { 0x75, 0x76, 0x77, };
static int VAR885[] = { 0x9c, 0x9d, 0x94, };
static int VAR886[] = { 0x95, 0x96, 0x97, };
static int VAR887[] = { 0x3c, 0x3d, 0x34, };
static int VAR888[] = { 0x35, 0x3e, 0x3f, };
static int VAR889[] = { 0x9c, 0x9d, 0x94, };
static int VAR890[] = { 0x95, 0x96, 0x97, };
static int VAR891[] = {
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
};
static int VAR892[] = {
0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1,
};
static int VAR893[] = { 0x20, 0x21, };
static int VAR894[] = { 0x22, 0x23, 0x24, 0x25, };
static int VAR895[] = { 0x10, 0x11, };
static int VAR896[] = { 0x12, 0x13, };
static int VAR897[] = { 0x1b, };
static int VAR898[] = { 0x15, };
static int VAR899[] = { 0x16, };
static int VAR900[] = { 0x17, };
static int VAR901[] = { 0x7e, 0x7f, };
static int VAR902[] = { 0x9e, 0x9f, };
static int VAR903[] = { 0x80, 0x83, };
static int VAR904[] = { 0xa3, };
static int VAR905[] = { 0xa2, };
static int VAR906[] = { 0xa0, 0xa1, };
static int VAR907[] = { 0x83, };
static int VAR908[] = { 0xaa, 0xab, };
static int VAR909[] = {
0x26, 0x27, 0x28, 0x29,
0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31,
};
static int VAR910[] = {
0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x4c, 0x4d,
0x48, 0x52, 0x53,
};
static int VAR911[] = {
0x4e, 0x4f, 0x50, 0x51, 0x56, 0x57, 0x58, 0x59,
};
static int VAR912[] = {
0x5a, 0x5b,
};
static int VAR913[] = {
0x40, 0x41, 0x4a, 0x4b, 0x54, 0x55,
};
static int VAR914[] = { 0x54, 0x4a, 0x41, 0x40, };
static int VAR915[] = { 0x49, };
static int VAR916[] = { 0x80, };
static int VAR917[] = { 0x81, };
static int VAR918[] = { 0x82, };
static int VAR919[] = { 0x83, };
static int VAR920[] = {
0xa9, 0xab, 0xaa, 0xac, 0xa5, 0xa4, 0xad, 0xae, 0xa6, 0xa8,
};
static int VAR921[] = {
0x7b, 0x7a, 0x7d, 0x7c, 0xa7, 0x24, 0xaf,
};
static int VAR922[] = {
0xa9, 0x7b, 0x7a, 0xab, 0xaa, 0xac, 0x7d, 0x7c, 0xa5, 0xa4,
0xad, 0xae, 0xa7, 0xa6,
};
static int VAR923[] = {
0x31, 0x30, 0x2f, 0x2e, 0x2d, 0x2c, 0x2b, 0x2a,
0xa8, 0x28, 0x24, 0xaf,
};
static int VAR924[] = { 0x8a, };

static u8 VAR925[] = { 0, 1, };
static u8 VAR926[] = { 1, 1, 1, 1, 0, 1, 0, };
static u8 VAR927[] = {
0, 1, 1, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0,
};
static u8 VAR928[] = {
1, 1, 1, 1, 1, 1, 1, 1,
0, 1, 1, 0,
};

static const struct group_desc VAR929[] = {
FUN3("", VAR930, 0),
FUN3("", VAR931, 0),
FUN3("", VAR932, 0),
FUN3("", VAR933, 0),
FUN3("", VAR934, 2),
FUN3("", VAR935, 1),
FUN4("", VAR936,
VAR925),
FUN3("", VAR937, 2),
FUN3("", VAR938, 1),
FUN3("", VAR939, 2),
FUN3("", VAR940, 1),
FUN3("", VAR941, 2),
FUN3("", VAR942, 1),
FUN3("", VAR943, 1),
FUN3("", VAR944, 2),
FUN3("", VAR945, 1),
FUN3("", VAR946, 1),
FUN3("", VAR947, 1),
FUN3("", VAR948, 1),
FUN3("", VAR949, 1),
FUN3("", VAR950, 0),
FUN3("", VAR951, 0),
FUN3("", VAR952, 0),
FUN3("", VAR953, 0),
FUN3("", VAR954, 1),
FUN3("", VAR955, 1),
FUN3("", VAR956, 0),
FUN3("", VAR957, 0),
FUN3("", VAR958, 2),
FUN3("", VAR959, 2),
FUN3("", VAR960, 0),
FUN3("", VAR961, 1),
FUN3("", VAR962, 0),
FUN3("", VAR963, 0),
FUN3("", VAR964, 0),
FUN3("", VAR965, 0),
FUN3("", VAR966, 0),
FUN3("", VAR967, 0),
FUN3("", VAR968, 0),
FUN3("", VAR969, 0),
FUN3("", VAR970, 0),
FUN3("", VAR971, 0),
FUN3("", VAR972, 1),
FUN3("", VAR973, 1),
FUN3("", VAR974, 1),
FUN3("", VAR975, 1),
FUN3("", VAR976, 2),
FUN3("", VAR977, 1),
FUN3("", VAR978, 0),
FUN3("", VAR979, 0),
FUN3("", VAR980, 0),
FUN3("", VAR981, 0),
FUN3("", VAR982, 0),
FUN3("", VAR983, 0),
FUN3("", VAR984, 1),
FUN3("", VAR985, 0),
FUN3("", VAR986, 0),
FUN3("", VAR987, 0),
FUN3("", VAR988, 0),
FUN3("", VAR989, 0),
FUN4("", VAR990,
VAR926),
FUN4("", VAR991,
VAR927),
FUN4("", VAR992,
VAR928),
FUN3("", VAR993, 0),
};

static const char *VAR994[] = { "", "", };
static const char *VAR995[] = { "", "", };
static const char *VAR996[] = { "", "", };
static const char *VAR997[] = { "", };
static const char *VAR998[] = {
"", "",
"", "",
"", "",
"",
"", "",
"",
};
static const char *VAR999[] = {
"", "", "",
"", "",
};
static const char *VAR1000[] = {
"", "",
"", "",
};
static const char *VAR1001[] = {
"", "",
"", "",
};
static const char *VAR1002[] = {
"", "", "",
"", "", "", "",
};
static const char *VAR1003[] = { "", };
static const char *VAR1004[] = { "", };
static const char *VAR1005[] = { "", };
static const char *VAR1006[] = { "", };
static const char *VAR1007[] = { "", };
static const char *VAR1008[] = { "", };
static const char *VAR1009[] = {
"", "", "", "",
};
static const char *VAR1010[] = { "", };
static const char *VAR1011[] = { "", };
static const char *VAR1012[] = {
"", "", "", "",
"", "",
};
static const char *VAR1013[] = { "", };
static const char *VAR1014[] = { "", };
static const char *VAR1015[] = { "", };
static const char *VAR1016[] = { "", };
static const char *VAR1017[] = {
"", "", "", "",
};
static const char *VAR1018[] = { "", };

static const struct function_desc VAR1019[] = {
{ "", VAR994, FUN5(VAR994), },
{ "", VAR995, FUN5(VAR995), },
{ "", VAR996, FUN5(VAR996), },
{ "", VAR997, FUN5(VAR997), },
{ "", VAR998, FUN5(VAR998), },
{ "", VAR999, FUN5(VAR999), },
{ "", VAR1000, FUN5(VAR1000), },
{ "", VAR1001, FUN5(VAR1001), },
{ "", VAR1002, FUN5(VAR1002), },
{ "", VAR1003, FUN5(VAR1003), },
{ "", VAR1004, FUN5(VAR1004), },
{ "", VAR1005, FUN5(VAR1005), },
{ "", VAR1006, FUN5(VAR1006), },
{ "", VAR1007, FUN5(VAR1007), },
{ "", VAR1008, FUN5(VAR1008), },
{ "", VAR1009, FUN5(VAR1009), },
{ "", VAR1010, FUN5(VAR1010), },
{ "", VAR1011, FUN5(VAR1011), },
{ "", VAR1012, FUN5(VAR1012), },
{ "", VAR1013, FUN5(VAR1013), },
{ "", VAR1014, FUN5(VAR1014), },
{ "", VAR1015, FUN5(VAR1015), },
{ "", VAR1016, FUN5(VAR1016), },
{ "", VAR1017, FUN5(VAR1017), },
{ "", VAR1018, FUN5(VAR1018), },
};

static const struct ingenic_chip_info VAR1020 = {
.VAR57 = 7,
.VAR58 = 0x100,
.VAR3 = VAR1021,
.VAR60 = VAR929,
.VAR61 = FUN5(VAR929),
.VAR62 = VAR1019,
.VAR63 = FUN5(VAR1019),
.VAR64 = VAR859,
.VAR65 = VAR860,
};

static const u32 VAR1022[6] = {
0x3fffffff, 0xfff0f3fc, 0x0fffffff, 0xffff4fff, 0xfffffb7c, 0x7fa7f00f,
};

static const u32 VAR1023[6] = {
0x00000000, 0x000f0c03, 0x00000000, 0x0000b000, 0x00000483, 0x00580ff0,
};

static int VAR1024[] = { 0x66, 0x67, };
static int VAR1025[] = { 0x65, 0x64, };
static int VAR1026[] = { 0x54, 0x4a, };
static int VAR1027[] = { 0x13, };
static int VAR1028[] = { 0x15, };
static int VAR1029[] = { 0x1c, };
static int VAR1030[] = { 0x3d, };
static int VAR1031[] = { 0x79, };
static int VAR1032[] = { 0x14, };
static int VAR1033[] = { 0x1b, };
static int VAR1034[] = { 0x34, };
static int VAR1035[] = { 0x74, };
static int VAR1036[] = { 0x12, };
static int VAR1037[] = { 0x25, };
static int VAR1038[] = { 0x3c, };
static int VAR1039[] = { 0x78, };
static int VAR1040[] = { 0x3e, };
static int VAR1041[] = { 0x76, };
static int VAR1042[] = { 0x17, };
static int VAR1043[] = { 0x19, };
static int VAR1044[] = { 0x3f, };
static int VAR1045[] = { 0x77, };
static int VAR1046[] = { 0x35, };
static int VAR1047[] = { 0x75, };
static int VAR1048[] = { 0x3d, };
static int VAR1049[] = { 0x79, };
static int VAR1050[] = { 0x34, };
static int VAR1051[] = { 0x74, };
static int VAR1052[] = { 0x3c, };
static int VAR1053[] = { 0x78, };
static int VAR1054[] = { 0x3e, };
static int VAR1055[] = { 0x76, };
static int VAR1056[] = { 0x3f, };
static int VAR1057[] = { 0x77, };
static int VAR1058[] = { 0x35, };
static int VAR1059[] = { 0x75, };
static int VAR1060[] = { 0x04, 0x05, 0x06, 0x07, 0x18, };
static int VAR1061[] = { 0x6a, 0x6b, };
static int VAR1062[] = { 0x8c, 0x8d, };
static int VAR1063[] = { 0xb9, 0xb8, };
static int VAR1064[] = { 0x87, };
static int VAR1065[] = { 0x86, };
static int VAR1066[] = { 0x6c, 0x6d, };
static int VAR1067[] = { 0x88, 0x89, };
static int VAR1068[] = { 0x85, };
static int VAR1069[] = { 0x32, 0x33, };
static int VAR1070[] = { 0xb9, 0xb8, };

static u8 VAR1071[] = { 1, 0, };

static const struct group_desc VAR1072[] = {
FUN3("", VAR729, 0),
FUN3("", VAR730, 0),
FUN3("", VAR731, 0),
FUN3("", VAR732, 0),
FUN3("", VAR1073, 1),
FUN3("", VAR1074, 1),
FUN4("", VAR735,
VAR488),
FUN3("", VAR736, 0),
FUN3("", VAR1075, 2),
FUN3("", VAR1076, 2),
FUN3("", VAR1077, 2),
FUN3("", VAR1078, 2),
FUN3("", VAR1079, 1),
FUN3("", VAR1080, 1),
FUN3("", VAR740, 0),
FUN3("", VAR1081, 2),
FUN3("", VAR1082, 2),
FUN3("", VAR1083, 1),
FUN3("", VAR1084, 1),
FUN3("", VAR744, 0),
FUN3("", VAR1085, 2),
FUN3("", VAR1086, 1),
FUN3("", VAR1087, 1),
FUN3("", VAR1088, 1),
FUN3("", VAR748, 0),
FUN3("", VAR1089, 1),
FUN3("", VAR1090, 1),
FUN3("", VAR751, 0),
FUN3("", VAR1091, 2),
FUN3("", VAR1092, 2),
FUN3("", VAR1093, 1),
FUN3("", VAR1094, 1),
FUN3("", VAR755, 0),
FUN3("", VAR1095, 1),
FUN3("", VAR1096, 1),
FUN3("", VAR758, 0),
FUN3("", VAR1097, 2),
FUN3("", VAR1098, 2),
FUN3("", VAR761, 1),
FUN3("", VAR1099, 2),
FUN3("", VAR1100, 2),
FUN3("", VAR764, 1),
FUN3("", VAR1101, 2),
FUN3("", VAR1102, 2),
FUN3("", VAR767, 1),
FUN3("", VAR1103, 2),
FUN3("", VAR1104, 2),
FUN3("", VAR770, 1),
FUN3("", VAR1105, 2),
FUN3("", VAR1106, 2),
FUN3("", VAR773, 1),
FUN3("", VAR1107, 2),
FUN3("", VAR1108, 2),
FUN3("", VAR776, 1),
FUN4("", VAR777,
VAR489),
FUN3("", VAR778, 1),
FUN3("", VAR1109, 1),
FUN3("", VAR779, 0),
FUN3("", VAR780, 0),
FUN3("", VAR782, 0),
FUN3("", VAR783, 0),
FUN3("", VAR784, 1),
FUN3("", VAR785, 1),
FUN3("", VAR787, 0),
FUN3("", VAR788, 0),
FUN3("", VAR789, 2),
FUN3("", VAR790, 2),
FUN3("", VAR792, 0),
FUN3("", VAR794, 0),
FUN3("", VAR795, 0),
FUN3("", VAR796, 0),
FUN3("", VAR797, 0),
FUN3("", VAR798, 0),
FUN3("", VAR799, 0),
FUN3("", VAR800, 0),
FUN3("", VAR801, 0),
FUN3("", VAR802, 0),
FUN3("", VAR803, 0),
FUN3("", VAR804, 0),
FUN3("", VAR805, 0),
FUN3("", VAR806, 0),
FUN3("", VAR807, 2),
FUN3("", VAR1110, 1),
FUN3("", VAR1111, 1),
FUN3("", VAR1112, 1),
FUN3("", VAR1113, 0),
FUN3("", VAR1114, 0),
FUN4("", VAR1115,
VAR1071),
FUN3("", VAR1116, 1),
FUN3("", VAR1117, 2),
FUN3("", VAR1118, 1),
FUN3("", VAR1119, 0),
FUN3("", VAR808, 0),
FUN3("", VAR809, 0),
FUN3("", VAR810, 0),
FUN3("", VAR811, 0),
FUN3("", VAR812, 0),
FUN3("", VAR813, 0),
FUN3("", VAR814, 1),
FUN3("", VAR815, 0),
FUN3("", VAR816, 0),
FUN3("", VAR817, 0),
FUN3("", VAR818, 0),
FUN3("", VAR819, 0),
FUN3("", VAR820, 0),
FUN3("", VAR821, 0),
FUN3("", VAR822, 0),
FUN3("", VAR823, 0),
};

static const char *VAR1120[] = { "", "", };
static const char *VAR1121[] = { "", };
static const char *VAR1122[] = {
"", "", "", "", "", "",
"", "", "", "", "",
"", "", "", "", "",
"", "", "",
"", "", "", "", "",
"", "", "",
};
static const char *VAR1123[] = {
"", "", "",
"", "", "",
"", "", "",
"", "", "",
"", "", "",
"", "", "",
};
static const char *VAR1124[] = {
"", "", "",
"", "",
};
static const char *VAR1125[] = {
"", "", "", "",
};
static const char *VAR1126[] = {
"", "", "", "",
};
static const char *VAR1127[] = {
"", "", "",
"", "", "",
};
static const char *VAR1128[] = { "", };
static const char *VAR1129[] = { "", "", };
static const char *VAR1130[] = {
"", "", "", "", "",
};
static const char *VAR1131[] = { "", };
static const char *VAR1132[] = { "", };
static const char *VAR1133[] = { "", };

static const struct function_desc VAR1134[] = {
{ "", VAR826, FUN5(VAR826), },
{ "", VAR827, FUN5(VAR827), },
{ "", VAR1120, FUN5(VAR1120), },
{ "", VAR829, FUN5(VAR829), },
{ "", VAR1121, FUN5(VAR1121), },
{ "", VAR1122, FUN5(VAR1122), },
{ "", VAR1123, FUN5(VAR1123), },
{ "", VAR1124, FUN5(VAR1124), },
{ "", VAR1125, FUN5(VAR1125), },
{ "", VAR1126, FUN5(VAR1126), },
{ "", VAR1127, FUN5(VAR1127), },
{ "", VAR836, FUN5(VAR836), },
{ "", VAR837, FUN5(VAR837), },
{ "", VAR838, FUN5(VAR838), },
{ "", VAR839, FUN5(VAR839), },
{ "", VAR840, FUN5(VAR840), },
{ "", VAR841, FUN5(VAR841), },
{ "", VAR842, FUN5(VAR842), },
{ "", VAR843, FUN5(VAR843), },
{ "", VAR844, FUN5(VAR844), },
{ "", VAR1128, FUN5(VAR1128), },
{ "", VAR1129, FUN5(VAR1129), },
{ "", VAR1130, FUN5(VAR1130), },
{ "", VAR1131, FUN5(VAR1131), },
{ "", VAR1132, FUN5(VAR1132), },
{ "", VAR846, FUN5(VAR846), },
{ "", VAR847, FUN5(VAR847), },
{ "", VAR848, FUN5(VAR848), },
{ "", VAR849, FUN5(VAR849), },
{ "", VAR850, FUN5(VAR850), },
{ "", VAR851, FUN5(VAR851), },
{ "", VAR852, FUN5(VAR852), },
{ "", VAR853, FUN5(VAR853), },
{ "", VAR854, FUN5(VAR854), },
{ "", VAR1133,
FUN5(VAR1133), },
};

static const struct ingenic_chip_info VAR1135 = {
.VAR57 = 6,
.VAR58 = 0x100,
.VAR3 = VAR1136,
.VAR60 = VAR1072,
.VAR61 = FUN5(VAR1072),
.VAR62 = VAR1134,
.VAR63 = FUN5(VAR1134),
.VAR64 = VAR1022,
.VAR65 = VAR1023,
};

static const u32 VAR1137[4] = {
0xffffffff, 0xfdffffff, 0x0dffffff, 0x0000003f,
};

static const u32 VAR1138[4] = {
0x00000000, 0x02000000, 0x02000000, 0x00000000,
};

static int VAR1139[] = { 0x4a, 0x4b, };
static int VAR1140[] = { 0x4c, 0x4d, };
static int VAR1141[] = { 0x04, 0x05, };
static int VAR1142[] = { 0x62, 0x63, };
static int VAR1143[] = { 0x64, 0x65, };
static int VAR1144[] = { 0x02, 0x03, };
static int VAR1145[] = { 0x65, 0x64, };
static int VAR1146[] = { 0x1d, 0x1c, 0x1e, 0x1f, };
static int VAR1147[] = { 0x1a, };
static int VAR1148[] = { 0x1b, };
static int VAR1149[] = { 0x16, };
static int VAR1150[] = { 0x1d, };
static int VAR1151[] = { 0x62, };
static int VAR1152[] = { 0x17, };
static int VAR1153[] = { 0x1c, };
static int VAR1154[] = { 0x63, };
static int VAR1155[] = { 0x18, };
static int VAR1156[] = { 0x1a, };
static int VAR1157[] = { 0x60, };
static int VAR1158[] = { 0x14, };
static int VAR1159[] = { 0x1f, };
static int VAR1160[] = { 0x19, };
static int VAR1161[] = { 0x1b, };
static int VAR1162[] = { 0x61, };
static int VAR1163[] = { 0x15, };
static int VAR1164[] = { 0x1e, };
static int VAR1165[] = { 0x18, 0x19, 0x17, };
static int VAR1166[] = { 0x16, 0x15, 0x14, };
static int VAR1167[] = { 0x13, 0x12, 0x11, 0x10, };
static int VAR1168[] = { 0x40, 0x41, 0x42, };
static int VAR1169[] = { 0x43, 0x44, 0x45, };
static int VAR1170[] = {
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
};
static int VAR1171[] = {
0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
};
static int VAR1172[] = {
0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
};
static int VAR1173[] = { 0x30, 0x31, };
static int VAR1174[] = { 0x34, };
static int VAR1175[] = { 0x32, };
static int VAR1176[] = { 0x33, };
static int VAR1177[] = { 0x38, 0x37, };
static int VAR1178[] = { 0x01, 0x00, };
static int VAR1179[] = { 0x5b, 0x5a, };
static int VAR1180[] = { 0x61, 0x60, };
static int VAR1181[] = { 0x24, };
static int VAR1182[] = { 0x23, };
static int VAR1183[] = { 0x21, 0x22, };
static int VAR1184[] = { 0x20, };
static int VAR1185[] = { 0x35, 0x36, };
static int VAR1186[] = { 0x25, };
static int VAR1187[] = {
0x08, 0x09, 0x0a, 0x0b,
0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c,
};
static int VAR1188[] = {
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
0x30, 0x31, 0x32, 0x33, 0x34,
};
static int VAR1189[] = {
0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
};
static int VAR1190[] = { 0x59, };
static int VAR1191[] = { 0x5a, };
static int VAR1192[] = { 0x5b, };
static int VAR1193[] = { 0x26, };
static int VAR1194[] = { 0x58, };
static int VAR1195[] = {
0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x26,
};

static const struct group_desc VAR1196[] = {
FUN3("", VAR1197, 0),
FUN3("", VAR1198, 0),
FUN3("", VAR1199, 2),
FUN3("", VAR1200, 1),
FUN3("", VAR1201, 1),
FUN3("", VAR1202, 2),
FUN3("", VAR1203, 0),
FUN3("", VAR1204, 1),
FUN3("", VAR1205, 1),
FUN3("", VAR1206, 1),
FUN3("", VAR1207, 2),
FUN3("", VAR1208, 2),
FUN3("", VAR1209, 0),
FUN3("", VAR1210, 2),
FUN3("", VAR1211, 2),
FUN3("", VAR1212, 0),
FUN3("", VAR1213, 2),
FUN3("", VAR1214, 2),
FUN3("", VAR1215, 0),
FUN3("", VAR1216, 2),
FUN3("", VAR1217, 2),
FUN3("", VAR1218, 2),
FUN3("", VAR1219, 2),
FUN3("", VAR1220, 0),
FUN3("", VAR1221, 2),
FUN3("", VAR1222, 2),
FUN3("", VAR1223, 1),
FUN3("", VAR1224, 1),
FUN3("", VAR1225, 1),
FUN3("", VAR1226, 0),
FUN3("", VAR1227, 0),
FUN3("", VAR1228, 0),
FUN3("", VAR1229, 0),
FUN3("", VAR1230, 0),
FUN3("", VAR1231, 0),
FUN3("", VAR1232, 0),
FUN3("", VAR1233, 0),
FUN3("", VAR1234, 0),
FUN3("", VAR1235, 0),
FUN3("", VAR1236, 2),
FUN3("", VAR1237, 0),
FUN3("", VAR1238, 1),
FUN3("", VAR1239, 1),
FUN3("", VAR1240, 1),
FUN3("", VAR1241, 1),
FUN3("", VAR1242, 1),
FUN3("", VAR1243, 0),
FUN3("", VAR1244, 1),
FUN3("", VAR1245, 2),
FUN3("", VAR1246, 1),
FUN3("", VAR1247, 1),
FUN3("", VAR1248, 0),
FUN3("", VAR1249, 1),
FUN3("", VAR1250, 1),
FUN3("", VAR1251, 2),
FUN3("", VAR1252, 0),
FUN3("", VAR1253, 1),
};

static const char *VAR1254[] = { "", "", };
static const char *VAR1255[] = {
"", "", "",
};
static const char *VAR1256[] = { "", "", };
static const char *VAR1257[] = { "", "", "", };
static const char *VAR1258[] = {
"", "", "",
"", "", "",
"", "", "",
"", "",
"", "", "",
"", "",
};
static const char *VAR1259[] = {
"", "", "",
};
static const char *VAR1260[] = {
"", "",
};
static const char *VAR1261[] = {
"", "",
"", "", "",
};
static const char *VAR1262[] = { "", };
static const char *VAR1263[] = { "", };
static const char *VAR1264[] = { "", };
static const char *VAR1265[] = { "", "", };
static const char *VAR1266[] = { "", };
static const char *VAR1267[] = {
"", "", "", "",
};
static const char *VAR1268[] = { "", "", };
static const char *VAR1269[] = { "", };
static const char *VAR1270[] = { "", "", };
static const char *VAR1271[] = { "", };
static const char *VAR1272[] = { "", };
static const char *VAR1273[] = { "", };
static const char *VAR1274[] = { "", };
static const char *VAR1275[] = { "", };
static const char *VAR1276[] = { "", };

static const struct function_desc VAR1277[] = {
{ "", VAR1254, FUN5(VAR1254), },
{ "", VAR1255, FUN5(VAR1255), },
{ "", VAR1256, FUN5(VAR1256), },
{ "", VAR1257, FUN5(VAR1257), },
{ "", VAR1258, FUN5(VAR1258), },
{ "", VAR1259, FUN5(VAR1259), },
{ "", VAR1260, FUN5(VAR1260), },
{ "", VAR1261, FUN5(VAR1261), },
{ "", VAR1262, FUN5(VAR1262), },
{ "", VAR1263, FUN5(VAR1263), },
{ "", VAR1264, FUN5(VAR1264), },
{ "", VAR1265, FUN5(VAR1265), },
{ "", VAR1266, FUN5(VAR1266), },
{ "", VAR1267, FUN5(VAR1267), },
{ "", VAR1268, FUN5(VAR1268), },
{ "", VAR1269, FUN5(VAR1269), },
{ "", VAR1270, FUN5(VAR1270), },
{ "", VAR1271, FUN5(VAR1271), },
{ "", VAR1272, FUN5(VAR1272), },
{ "", VAR1273, FUN5(VAR1273), },
{ "", VAR1274, FUN5(VAR1274), },
{ "", VAR1275, FUN5(VAR1275), },
{ "", VAR1276, FUN5(VAR1276), },
};

static const struct regmap_range VAR1278[] = {
FUN6(0x000, 0x400 - 4),
FUN6(0x700, 0x800 - 4),
};


static const struct regmap_access_table VAR1279 = {
.VAR1280 = VAR1278,
.VAR1281 = FUN5(VAR1278),
};

static const struct ingenic_chip_info VAR1282 = {
.VAR57 = 4,
.VAR58 = 0x100,
.VAR3 = VAR1283,
.VAR60 = VAR1196,
.VAR61 = FUN5(VAR1196),
.VAR62 = VAR1277,
.VAR63 = FUN5(VAR1277),
.VAR64 = VAR1137,
.VAR65 = VAR1138,
.VAR1284 = &VAR1279,
};

static int VAR1285[] = { 0x4a, 0x4b, };
static int VAR1286[] = { 0x4c, 0x4d, };
static int VAR1287[] = { 0x04, 0x05, };
static int VAR1288[] = { 0x62, 0x63, };
static int VAR1289[] = { 0x64, 0x65, };
static int VAR1290[] = { 0x02, 0x03, };
static int VAR1291[] = { 0x65, 0x64, };
static int VAR1292[] = { 0x18, 0x19, 0x17, };
static int VAR1293[] = { 0x16, 0x15, 0x14, };
static int VAR1294[] = { 0x38, 0x37, };
static int VAR1295[] = { 0x01, 0x00, };
static int VAR1296[] = { 0x5b, 0x5a, };
static int VAR1297[] = { 0x61, 0x60, };
static int VAR1298[] = { 0x24, };
static int VAR1299[] = { 0x23, };
static int VAR1300[] = { 0x21, 0x22, };
static int VAR1301[] = { 0x20, };
static int VAR1302[] = { 0x35, 0x36, };
static int VAR1303[] = { 0x25, };
static int VAR1304[] = {
0x08, 0x09, 0x0a, 0x0b,
0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c,
};
static int VAR1305[] = { 0x59, };
static int VAR1306[] = { 0x5a, };
static int VAR1307[] = { 0x5b, };
static int VAR1308[] = { 0x26, };
static int VAR1309[] = { 0x58, };

static const struct group_desc VAR1310[] = {
FUN3("", VAR1311, 0),
FUN3("", VAR1312, 0),
FUN3("", VAR1313, 2),
FUN3("", VAR1314, 1),
FUN3("", VAR1315, 1),
FUN3("", VAR1316, 2),
FUN3("", VAR1317, 0),
FUN3("", VAR1204, 1),
FUN3("", VAR1205, 1),
FUN3("", VAR1206, 1),
FUN3("", VAR1318, 1),
FUN3("", VAR1319, 1),
FUN3("", VAR1320, 0),
FUN3("", VAR1321, 2),
FUN3("", VAR1322, 0),
FUN3("", VAR1323, 1),
FUN3("", VAR1324, 1),
FUN3("", VAR1325, 1),
FUN3("", VAR1326, 1),
FUN3("", VAR1327, 1),
FUN3("", VAR1328, 0),
FUN3("", VAR1329, 1),
FUN3("", VAR1330, 2),
FUN3("", VAR1331, 0),
FUN3("", VAR1332, 1),
FUN3("", VAR1333, 1),
FUN3("", VAR1334, 2),
FUN3("", VAR1335, 0),
};

static const char *VAR1336[] = { "", "", };
static const char *VAR1337[] = {
"", "", "",
};
static const char *VAR1338[] = { "", "", };
static const char *VAR1339[] = { "", "", };
static const char *VAR1340[] = { "", };
static const char *VAR1341[] = { "", "", };
static const char *VAR1342[] = { "", };
static const char *VAR1343[] = {
"", "", "", "",
};
static const char *VAR1344[] = { "", "", };
static const char *VAR1345[] = { "", };
static const char *VAR1346[] = { "", };
static const char *VAR1347[] = { "", };
static const char *VAR1348[] = { "", };
static const char *VAR1349[] = { "", };
static const char *VAR1350[] = { "", };

static const struct function_desc VAR1351[] = {
{ "", VAR1336, FUN5(VAR1336), },
{ "", VAR1337, FUN5(VAR1337), },
{ "", VAR1338, FUN5(VAR1338), },
{ "", VAR1257, FUN5(VAR1257), },
{ "", VAR1339, FUN5(VAR1339), },
{ "", VAR1340, FUN5(VAR1340), },
{ "", VAR1341, FUN5(VAR1341), },
{ "", VAR1342, FUN5(VAR1342), },
{ "", VAR1343, FUN5(VAR1343), },
{ "", VAR1344, FUN5(VAR1344), },
{ "", VAR1345, FUN5(VAR1345), },
{ "", VAR1346, FUN5(VAR1346), },
{ "", VAR1347, FUN5(VAR1347), },
{ "", VAR1348, FUN5(VAR1348), },
{ "", VAR1349, FUN5(VAR1349), },
{ "", VAR1350, FUN5(VAR1350), },
};

static const struct ingenic_chip_info VAR1352 = {
.VAR57 = 4,
.VAR58 = 0x100,
.VAR3 = VAR1353,
.VAR60 = VAR1310,
.VAR61 = FUN5(VAR1310),
.VAR62 = VAR1351,
.VAR63 = FUN5(VAR1351),
.VAR64 = VAR1137,
.VAR65 = VAR1138,
.VAR1284 = &VAR1279,
};

static const u32 VAR1354[4] = {
0x5fdfffc0, 0xffffefff, 0x1ffffbff, 0x0fcff3fc,
};

static const u32 VAR1355[4] = {
0x5fdfffc0, 0xffffefff, 0x1ffffbff, 0x0fcff3fc,
};

static int VAR1356[] = { 0x33, 0x36, };
static int VAR1357[] = { 0x34, 0x35, };
static int VAR1358[] = { 0x38, 0x37, };
static int VAR1359[] = { 0x17, 0x18, 0x1a, 0x19, };
static int VAR1360[] = { 0x1b, };
static int VAR1361[] = { 0x1c, };
static int VAR1362[] = { 0x4c, };
static int VAR1363[] = { 0x4b, };
static int VAR1364[] = { 0x4f, };
static int VAR1365[] = { 0x4d, };
static int VAR1366[] = { 0x50, };
static int VAR1367[] = { 0x4e, };
static int VAR1368[] = { 0x53, };
static int VAR1369[] = { 0x62, };
static int VAR1370[] = { 0x54, };
static int VAR1371[] = { 0x63, };
static int VAR1372[] = { 0x57, };
static int VAR1373[] = { 0x66, };
static int VAR1374[] = { 0x55, };
static int VAR1375[] = { 0x64, };
static int VAR1376[] = { 0x58, };
static int VAR1377[] = { 0x67, };
static int VAR1378[] = { 0x56, };
static int VAR1379[] = { 0x65, };
static int VAR1380[] = { 0x24, 0x25, 0x20, };
static int VAR1381[] = { 0x21, 0x22, 0x23, };
static int VAR1382[] = { 0x42, 0x43, 0x44, };
static int VAR1383[] = { 0x45, 0x46, 0x47, };
static int VAR1384[] = { 0x0c, 0x0d, };
static int VAR1385[] = { 0x39, 0x3a, };
static int VAR1386[] = { 0x5b, 0x5c, };
static int VAR1387[] = { 0x53, };
static int VAR1388[] = { 0x54, };
static int VAR1389[] = { 0x58, 0x52, };
static int VAR1390[] = { 0x56, 0x55, };
static int VAR1391[] = { 0x57, };
static int VAR1392[] = { 0x48, 0x59, };
static int VAR1393[] = { 0x5a, };
static int VAR1394[] = {
0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
0x68, 0x73, 0x72, 0x69,
};
static int VAR1395[] = {
0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71,
0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b,
};
static int VAR1396[] = {
0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x6c, 0x6d,
0x69, 0x72, 0x73, 0x7b, 0x7a,
};
static int VAR1397[] = {
0x6e, 0x6f, 0x70, 0x71, 0x76, 0x77, 0x78, 0x79,
};
static int VAR1398[] = { 0x31, };
static int VAR1399[] = { 0x4b, };
static int VAR1400[] = { 0x32, };
static int VAR1401[] = { 0x4c, };
static int VAR1402[] = { 0x48, };
static int VAR1403[] = { 0x4d, };
static int VAR1404[] = { 0x49, };
static int VAR1405[] = { 0x4e, };
static int VAR1406[] = { 0x4f, };
static int VAR1407[] = { 0x59, };
static int VAR1408[] = { 0x50, };
static int VAR1409[] = { 0x5a, };
static int VAR1410[] = { 0x51, };
static int VAR1411[] = { 0x5b, };
static int VAR1412[] = { 0x52, };
static int VAR1413[] = { 0x5c, };
static int VAR1414[] = {
0x29, 0x30, 0x2f, 0x28, 0x2e, 0x2d, 0x2a, 0x2b, 0x26, 0x27,
};

static const struct group_desc VAR1415[] = {
FUN3("", VAR1416, 0),
FUN3("", VAR1417, 0),
FUN3("", VAR1418, 0),
FUN3("", VAR1419, 1),
FUN3("", VAR1420, 1),
FUN3("", VAR1421, 1),
FUN3("", VAR1422, 0),
FUN3("", VAR1423, 0),
FUN3("", VAR1424, 0),
FUN3("", VAR1425, 0),
FUN3("", VAR1426, 0),
FUN3("", VAR1427, 0),
FUN3("", VAR1428, 1),
FUN3("", VAR1429, 1),
FUN3("", VAR1430, 1),
FUN3("", VAR1431, 1),
FUN3("", VAR1432, 1),
FUN3("", VAR1433, 1),
FUN3("", VAR1434, 2),
FUN3("", VAR1435, 2),
FUN3("", VAR1436, 2),
FUN3("", VAR1437, 2),
FUN3("", VAR1438, 2),
FUN3("", VAR1439, 2),
FUN3("", VAR1440, 0),
FUN3("", VAR1441, 0),
FUN3("", VAR1442, 0),
FUN3("", VAR1443, 0),
FUN3("", VAR1444, 1),
FUN3("", VAR1445, 0),
FUN3("", VAR1446, 1),
FUN3("", VAR1447, 0),
FUN3("", VAR1448, 0),
FUN3("", VAR1449, 0),
FUN3("", VAR1450, 0),
FUN3("", VAR1451, 0),
FUN3("", VAR1452, 2),
FUN3("", VAR1453, 2),
FUN3("", VAR1454, 0),
FUN3("", VAR1455, 0),
FUN3("", VAR1456, 1),
FUN3("", VAR1457, 1),
FUN3("", VAR1458, 0),
FUN3("", VAR1459, 1),
FUN3("", VAR1460, 0),
FUN3("", VAR1461, 1),
FUN3("", VAR1462, 0),
FUN3("", VAR1463, 1),
FUN3("", VAR1464, 0),
FUN3("", VAR1465, 1),
FUN3("", VAR1466, 1),
FUN3("", VAR1467, 0),
FUN3("", VAR1468, 1),
FUN3("", VAR1469, 0),
FUN3("", VAR1470, 1),
FUN3("", VAR1471, 0),
FUN3("", VAR1472, 1),
FUN3("", VAR1473, 0),
FUN3("", VAR1474, 0),
};

static const char *VAR1475[] = { "", "", };
static const char *VAR1476[] = { "", };
static const char *VAR1477[] = { "", "", "", };
static const char *VAR1478[] = {
"", "", "", "", "", "",
};
static const char *VAR1479[] = {
"", "",
"", "",
"", "",
"", "",
"", "",
"", "",
};
static const char *VAR1480[] = { "", "", };
static const char *VAR1481[] = { "", "", };
static const char *VAR1482[] = { "", };
static const char *VAR1483[] = { "", };
static const char *VAR1484[] = { "", };
static const char *VAR1485[] = {
"", "", "", "", "",
};
static const char *VAR1486[] = { "", "", };
static const char *VAR1487[] = {
"", "", "", "",
};
static const char *VAR1488[] = { "", "", };
static const char *VAR1489[] = { "", "", };
static const char *VAR1490[] = { "", "", };
static const char *VAR1491[] = { "", "", };
static const char *VAR1492[] = { "", "", };
static const char *VAR1493[] = { "", "", };
static const char *VAR1494[] = { "", "", };
static const char *VAR1495[] = { "", "", };
static const char *VAR1496[] = { "", };

static const struct function_desc VAR1497[] = {
{ "", VAR1475, FUN5(VAR1475), },
{ "", VAR1476, FUN5(VAR1476), },
{ "", VAR1477, FUN5(VAR1477), },
{ "", VAR1478, FUN5(VAR1478), },
{ "", VAR1479, FUN5(VAR1479), },
{ "", VAR1480, FUN5(VAR1480), },
{ "", VAR1481, FUN5(VAR1481), },
{ "", VAR1482, FUN5(VAR1482), },
{ "", VAR1483, FUN5(VAR1483), },
{ "", VAR1484, FUN5(VAR1484), },
{ "", VAR1485, FUN5(VAR1485), },
{ "", VAR1486, FUN5(VAR1486), },
{ "", VAR1487, FUN5(VAR1487), },
{ "", VAR1488, FUN5(VAR1488), },
{ "", VAR1489, FUN5(VAR1489), },
{ "", VAR1490, FUN5(VAR1490), },
{ "", VAR1491, FUN5(VAR1491), },
{ "", VAR1492, FUN5(VAR1492), },
{ "", VAR1493, FUN5(VAR1492), },
{ "", VAR1494, FUN5(VAR1492), },
{ "", VAR1495, FUN5(VAR1492), },
{ "", VAR1496, FUN5(VAR1496), },
};

static const struct regmap_range VAR1498[] = {
FUN6(0x0000, 0x4000 - 4),
FUN6(0x7000, 0x8000 - 4),
};

static const struct regmap_access_table VAR1499 = {
.VAR1280 = VAR1498,
.VAR1281 = FUN5(VAR1498),
};

static const struct ingenic_chip_info VAR1500 = {
.VAR57 = 4,
.VAR58 = 0x1000,
.VAR3 = VAR1501,
.VAR60 = VAR1415,
.VAR61 = FUN5(VAR1415),
.VAR62 = VAR1497,
.VAR63 = FUN5(VAR1497),
.VAR64 = VAR1354,
.VAR65 = VAR1355,
.VAR1284 = &VAR1499,
};

static const u32 VAR1502[5] = {
0x0003ffff, 0xffffffff, 0x1ff0ffff, 0xc7fe3f3f, 0x8fff003f,
};

static const u32 VAR1503[5] = {
0x0003ffff, 0xffffffff, 0x1ff0ffff, 0x00000000, 0x8fff003f,
};

static int VAR1504[] = { 0x77, 0x78, };
static int VAR1505[] = { 0x79, 0x7a, };
static int VAR1506[] = { 0x57, 0x58, };
static int VAR1507[] = { 0x55, 0x56, };
static int VAR1508[] = { 0x7e, 0x7f, };
static int VAR1509[] = { 0x59, 0x5a, };
static int VAR1510[] = { 0x62, 0x63, };
static int VAR1511[] = { 0x5b, 0x5c, };
static int VAR1512[] = { 0x60, 0x61, };
static int VAR1513[] = { 0x02, 0x03, };
static int VAR1514[] = { 0x4b, 0x4c, };
static int VAR1515[] = { 0x00, 0x01, };
static int VAR1516[] = { 0x49, 0x4a, };
static int VAR1517[] = { 0x04, 0x05, };
static int VAR1518[] = { 0x45, 0x46, };
static int VAR1519[] = { 0x06, 0x07, };
static int VAR1520[] = { 0x47, 0x48, };
static int VAR1521[] = { 0x08, 0x09, };
static int VAR1522[] = { 0x41, 0x42, };
static int VAR1523[] = { 0x3c, 0x3d, };
static int VAR1524[] = { 0x3e, 0x3f, };
static int VAR1525[] = { 0x73, 0x74, 0x75, 0x76, };
static int VAR1526[] = { 0x92, 0x93, 0x94, 0x95, };
static int VAR1527[] = { 0x77, 0x78, 0x79, 0x7a, };
static int VAR1528[] = { 0x71, };
static int VAR1529[] = { 0x90, };
static int VAR1530[] = { 0x72, };
static int VAR1531[] = { 0x91, };
static int VAR1532[] = { 0x3e, };
static int VAR1533[] = { 0x69, };
static int VAR1534[] = { 0x3d, };
static int VAR1535[] = { 0x6a, };
static int VAR1536[] = { 0x3f, };
static int VAR1537[] = { 0x68, };
static int VAR1538[] = { 0x3c, };
static int VAR1539[] = { 0x6d, };
static int VAR1540[] = { 0x4b, };
static int VAR1541[] = { 0x72, };
static int VAR1542[] = { 0x91, };
static int VAR1543[] = { 0x4a, };
static int VAR1544[] = { 0x73, };
static int VAR1545[] = { 0x92, };
static int VAR1546[] = { 0x4c, };
static int VAR1547[] = { 0x71, };
static int VAR1548[] = { 0x90, };
static int VAR1549[] = { 0x49, };
static int VAR1550[] = { 0x76, };
static int VAR1551[] = { 0x95, };
static int VAR1552[] = { 0x71, 0x72, 0x73, };
static int VAR1553[] = { 0x74, 0x75, 0x75, };
static int VAR1554[] = { 0x77, 0x78, 0x79, 0x7a, };
static int VAR1555[] = { 0x68, 0x69, 0x6a, };
static int VAR1556[] = { 0x6b, 0x6c, 0x6d, };
static int VAR1557[] = { 0x80, 0x81, 0x82, };
static int VAR1558[] = { 0x83, 0x84, 0x85, };
static int VAR1559[] = {
0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
};
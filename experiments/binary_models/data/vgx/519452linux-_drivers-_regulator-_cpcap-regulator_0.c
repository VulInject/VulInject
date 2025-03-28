static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
int VAR4;

switch (VAR3) {
case VAR5:
VAR4 = VAR6;
break;
case VAR7:
VAR4 = VAR8;
break;
default:
return -VAR9;
}

return FUN2(VAR2->VAR10, VAR2->VAR11->VAR12,
VAR8, VAR4);
}

static const struct regulator_ops VAR13 = {
.VAR14 = VAR15,
.VAR16 = VAR17,
.VAR18 = VAR19,
.VAR20 = VAR21,
.VAR22 = VAR23,
.VAR24 = VAR25,
.VAR26 = VAR27,
.VAR28 = VAR29,
.VAR30 = VAR31,
};

static const unsigned int VAR32[] = { 0, };
static const unsigned int VAR33[] = { 612500, 625000, 637500,
650000, 662500, 675000,
687500, 700000, 712500,
725000, 737500, 750000,
762500, 775000, 787500,
800000, 812500, 825000,
837500, 850000, 862500,
875000, 887500, 900000,
912500, 925000, 937500,
950000, 962500, 975000,
987500, 1000000, 1012500,
1025000, 1037500, 1050000,
1062500, 1075000, 1087500,
1100000, 1112500, 1125000,
1137500, 1150000, 1162500,
1175000, 1187500, 1200000,
1212500, 1225000, 1237500,
1250000, 1262500, 1275000,
1287500, 1300000, 1312500,
1325000, 1337500, 1350000,
1362500, 1375000, 1387500,
1400000, 1412500, 1425000,
1437500, 1450000, 1462500, };
static const unsigned int VAR34[] = { 0, 5050000, };
static const unsigned int VAR35[] = { 2600000, 2700000, 2800000,
2900000, };
static const unsigned int VAR36[] = { 1200000, 1800000, };
static const unsigned int VAR37[] = { 1200000, 1500000, 1800000,
2500000,};
static const unsigned int VAR38[] = { 1200000, 1350000, 1500000,
1875000, };
static const unsigned int VAR39[] = { 1500000, 1600000, 1700000,
1800000, 1900000, 2000000,
2100000, 2200000, 2300000,
2400000, 2500000, 2600000,
2700000, 3150000, };
static const unsigned int VAR40[] = { 2775000, };
static const unsigned int VAR41[] = { 1500000, 1600000, 1800000,
2600000, 2700000, 2800000,
2900000, 3000000, };
static const unsigned int VAR42[] = { 1200000, 1300000, 1400000,
1800000, };

static const unsigned int VAR43[] = { 2775000, 2500000, };
static const unsigned int VAR44[] = { 0, 2775000, };
static const unsigned int VAR45[] = { 2500000, 2775000, };
static const unsigned int VAR46[] = { 1800000, 1900000, };
static const unsigned int VAR47[] = { 2775000, 3000000, 3300000,
3300000, };
static const unsigned int VAR48[] = { 1800000, 2900000, };
static const unsigned int VAR49[] = { 1800000, 2900000, };
static const unsigned int VAR50[] = { 1300000, 1800000, 2000000,
3000000, };
static const unsigned int VAR51[] = { 0, 3300000, };
static const unsigned int VAR52[] = { 0, 2775000, };


static const struct cpcap_regulator VAR53[] = {
FUN3(VAR54, VAR55, VAR56,
VAR57, VAR32,
0, 0, 0, 0, 0),
FUN3(VAR58, VAR59, VAR56,
VAR60, VAR32,
0, 0, 0, 0, 0),
FUN3(VAR61, VAR62, VAR56,
VAR63, VAR32,
0, 0, 0, 0, 0),
FUN3(VAR64, VAR65, VAR56,
VAR66, VAR32,
0, 0, 0, 0, 0),
FUN3(VAR67, VAR68, VAR56,
VAR69, VAR34,
0x28, 0, 0x20 | VAR70, 0, 0),
FUN3(VAR71, VAR72, VAR56,
VAR73, VAR32,
0, 0, 0, 0, 0),
FUN3(VAR74, VAR75, VAR56,
VAR76, VAR35,
0x87, 0x30, 0x3, 0, 420),
FUN3(VAR77, VAR78, VAR79,
VAR80, VAR36,
0x47, 0x10, 0x43, 0x41, 350),
FUN3(VAR81, VAR82, VAR79,
VAR83, VAR37,
0x87, 0x30, 0x3, 0, 420),
FUN3(VAR84, VAR85, VAR56,
VAR86, VAR38,
0x87, 0x30, 0x82, 0, 420),
FUN3(VAR87, VAR88, VAR79,
VAR89, VAR39,
0x80, 0xf, 0x80, 0, 420),
FUN3(VAR90, VAR91, VAR79,
VAR92, VAR40,
0x17, 0, 0, 0x12, 0),
FUN3(VAR93, VAR94, VAR56,
VAR95, VAR41,
0x87, 0x38, 0x82, 0, 420),
FUN3(VAR96, VAR97, VAR79,
VAR98, VAR42,
0x43, 0x18, 0x2, 0, 420),
FUN3(VAR99, VAR100, VAR79,
VAR101, VAR43,
0xac, 0x2, 0x4, 0, 10),
FUN3(VAR102, VAR103, VAR79,
VAR104, VAR44,
0x23, 0x8, 0, 0, 10),
FUN3(VAR105, VAR106, VAR79,
VAR107, VAR45,
0x23, 0x8, 0, 0, 420),
FUN3(VAR108, VAR109, VAR79,
VAR110, VAR46,
0x47, 0x10, 0, 0, 420),
FUN3(VAR111, VAR112, VAR79,
VAR113, VAR47,
0x20c, 0xc0, 0x20c, 0, 420),
FUN3(VAR114, VAR115, VAR79,
0xffff, VAR48,
0x23, 0x8, 0x3, 0, 420),
FUN3(VAR116, VAR115, VAR79,
0xffff, VAR49,
0x1e80, 0x8, 0x1e00, 0, 420),
FUN3(VAR117, VAR118, VAR79,
VAR119, VAR50,
0x1, 0xc, 0x1, 0, 500),
FUN3(VAR120, VAR121, VAR79,
VAR122, VAR51,
0x11c, 0x40, 0xc, 0, 0),
FUN3(VAR123, VAR124, VAR125,
VAR126, VAR52,
0x16, 0x1, 0x4, 0, 0),
{  },
};
static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
VAR7 *VAR8 = FUN3(VAR6);
VAR9 *VAR10;
int VAR11, VAR12;
VAR3 *VAR13 = NULL;
int VAR14;

VAR10 = VAR2->VAR15;


VAR10[VAR16] = 0;

VAR10[VAR17] = 0x01;

if (VAR6->VAR18 != VAR19) {
VAR14 = FUN4(VAR2, 0x50, 1, true, false, &VAR13);

assert(!VAR14 || VAR14 == -VAR20);
if (VAR14 && VAR6->VAR18 == VAR21) {

FUN5(&VAR13, ""
"");
FUN6(VAR4, VAR13);
return;
} else if (VAR14) {

VAR6->VAR18 = VAR19;
FUN7(VAR13);
}
}

FUN8(&VAR6->VAR22, FUN9(VAR6), &VAR23, VAR6,
"", 0x4000);
FUN8(&VAR6->VAR24, FUN9(VAR6), &VAR25, VAR6,
"", 256);
FUN8(&VAR6->VAR26, FUN9(VAR6), &VAR27, VAR6,
"", 0x40000);

if (FUN10(VAR6) &&
FUN11(VAR2, 15, &VAR6->VAR22, VAR8->VAR28, 0x2000,
&VAR6->VAR22, VAR8->VAR28, 0x3800, 0x68, NULL)) {

VAR6->VAR29 = VAR19;
}

if (FUN12(VAR2)) {
FUN13(VAR2, 0xa0);
}

VAR12 = VAR30 | VAR31;
FUN14(VAR2, VAR8->VAR32,
VAR33, &VAR6->VAR24);
FUN14(VAR2, VAR8->VAR28, VAR12, &VAR6->VAR22);
FUN14(VAR2, 3, VAR12, &VAR6->VAR26);

if (FUN10(VAR6)) {
FUN15(VAR2, 0);
}

VAR6->VAR34 = VAR35;
if (!VAR6->VAR36) {
VAR6->VAR36 = ((VAR37 << 24) |
VAR38) << 36;
VAR6->VAR36 |= FUN16(VAR2) << 16;
VAR6->VAR36 |= FUN17(VAR2->VAR39) << 8;
VAR6->VAR36 |= FUN18(VAR2->VAR39);
}
if (!VAR6->VAR40) {
VAR6->VAR40 = FUN19(VAR41);
}
if (VAR6->VAR42 >= VAR43 - VAR44) {
VAR6->VAR42 = VAR43 - VAR44;
} else if (VAR6->VAR42 >= 128 - VAR44) {
VAR6->VAR42 = 128 - VAR44;
} else {
VAR6->VAR42 = 64 - VAR44;
}
if (VAR6->VAR45 > VAR46) {
VAR6->VAR45 = VAR46;
}
FUN20(VAR6->VAR42, VAR6->VAR45,
FUN21(VAR6) ? "" : "");

if (FUN21(VAR6)) {
VAR6->VAR47 = VAR48;
} else {
VAR6->VAR47 = VAR49;
}
VAR6->VAR50 = 0;
VAR6->VAR51 = 0;
for (VAR11 = 0; VAR11 < VAR6->VAR45; VAR11++) {
VAR6->VAR52[VAR11].VAR53 = VAR11;
VAR6->VAR52[VAR11].VAR54 = -1;
VAR6->VAR52[VAR11].VAR55 = 0;
VAR6->VAR52[VAR11].VAR56 = VAR6;
}

FUN22(&VAR6->VAR57, sizeof(VAR6->VAR57), FUN23(VAR2), &VAR58);
}

static Property VAR59[] = {
FUN24("", VAR5, VAR42,
VAR60),
FUN24("", VAR5, VAR45,
VAR61),
FUN25("", VAR5, VAR40),
FUN26("", VAR5, VAR36, 0),
FUN27("", VAR5, VAR18, VAR62),
FUN27("", VAR5, VAR29, VAR62),
FUN28("", VAR5, VAR63,
VAR64, false),
FUN29(),
};

static Property VAR65[] = {
FUN24("", VAR5, VAR42,
VAR60),
FUN24("", VAR5, VAR45,
VAR66),
FUN25("", VAR5, VAR40),
FUN26("", VAR5, VAR36, 0),
FUN27("", VAR5, VAR18, VAR62),
FUN27("", VAR5, VAR29, VAR62),
FUN28("", VAR5, VAR63,
VAR64, false),
FUN29(),
};

typedef struct VAR67 {
const char *VAR68;
const char *VAR69;
const char *VAR70;
const char *VAR71;
uint16_t VAR72;
uint16_t VAR73;
int VAR32;
int VAR28;
int VAR74;
const VAR75 *VAR76;
VAR77 *VAR78;
VAR79 *VAR80;
} VAR67;
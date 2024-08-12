static int
FUN1(const VAR1 *VAR2, const VAR1 *VAR3, int VAR4) {
static const int VAR5 = 10;
static const int VAR6 = -100;
static const int VAR7 = -20;
static const int VAR8 = -1;
static const int VAR9 = 10;
static const int VAR10 = -25;
static const int VAR11 = -5;
static const int VAR12 = -1;
int VAR13, VAR14, VAR15, VAR16;
if (!VAR4) {
VAR13 = VAR5;
VAR14 = VAR6;
VAR15 = VAR7;
VAR16 = VAR8;
} else {
VAR13 = VAR9;
VAR14 = VAR10;
VAR15 = VAR11;
VAR16 = VAR12;
}
int VAR17 = 0;
const VAR1 *VAR18 = VAR2;
const VAR1 *VAR19 = VAR3;
while (1) {
if (!VAR18) {
if (!VAR19) break;
VAR17 += VAR16;
const VAR1 *VAR20 = VAR19;
VAR20 = VAR20->VAR21;
while (VAR20 && FUN2(VAR20->VAR22, VAR19->VAR22) == 0) VAR20 = VAR20->VAR21;
VAR19 = VAR20;
} else if (!VAR19) {
VAR17 += VAR15;
VAR18 = VAR18->VAR21;
} else {
int VAR23 = FUN2(VAR18->VAR22, VAR19->VAR22);
if (VAR23 < 0) {
VAR17 += VAR15;
VAR18 = VAR18->VAR21;
} else if (VAR23 > 0) {
VAR17 += VAR16;
const VAR1 *VAR20 = VAR19;
VAR20 = VAR20->VAR21;
while (VAR20 && FUN2(VAR20->VAR22, VAR19->VAR22) == 0) VAR20 = VAR20->VAR21;
VAR19 = VAR20;
} else {
int VAR24 = 0;
const VAR1 *VAR20 = VAR19;
while (1) {
if (!VAR24 &&
FUN3(((VAR25 *)VAR18->VAR22)->VAR26,
((VAR25 *)VAR20->VAR22)->VAR26) == 0)
VAR24 = 1;
VAR20 = VAR20->VAR21;
if (!VAR20 || FUN2(VAR20->VAR22, VAR19->VAR22) != 0) break;
}
if (VAR24)
VAR17 += VAR13;
else
VAR17 += VAR14;
VAR18 = VAR18->VAR21;
VAR19 = VAR20;
}
}
}
return VAR17;
}
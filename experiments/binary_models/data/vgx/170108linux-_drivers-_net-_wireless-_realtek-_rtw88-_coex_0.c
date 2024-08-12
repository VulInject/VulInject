static void FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = &VAR2->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR9;
struct VAR10 *VAR11 = &VAR2->VAR11;
u8 VAR12, VAR13;
u32 VAR14 = 0;
bool VAR15 = false, VAR16 = false;

FUN2(VAR2, VAR17, "", VAR18);
FUN3(VAR2, false, VAR19);
FUN4(VAR2, VAR4->VAR20[0]);

if (VAR11->VAR21) {

if (VAR8->VAR22) {

if (VAR8->VAR23[VAR24] > 5) {
VAR12 = 26;
VAR13 = 2;
} else {
VAR12 = 27;
VAR13 = 9;
}
} else {

if (VAR8->VAR25 == 1 &&
(VAR8->VAR26 ||
(VAR8->VAR27 +
VAR8->VAR28 > 360) ||
VAR8->VAR29 ||
VAR15)) {
VAR14 = VAR30;
VAR12 = 12;
VAR13 = 20;
} else if (VAR8->VAR31) {
VAR12 = 9;
VAR13 = 18;
} else if (VAR8->VAR32 &&
VAR8->VAR33) {
VAR16 = true;
VAR14 = VAR30;
VAR12 = 9;
VAR13 = 24;
} else if (VAR8->VAR34 &&
VAR8->VAR33) {
VAR12 = 32;
VAR13 = 9;
} else {
VAR12 = 9;
VAR13 = 9;
}
}
} else {

if (VAR8->VAR22) {

if (VAR8->VAR23[VAR24] > 5) {
VAR12 = 121;
VAR13 = 102;
} else {
VAR12 = 122;
VAR13 = 109;
}
} else if (VAR8->VAR31) {
VAR12 = 113;
VAR13 = 118;
} else {
VAR12 = 113;
VAR13 = 104;
}
}

FUN5(VAR2, false, VAR12);
if (VAR16) {
FUN6(VAR2, true, VAR12);
FUN7(VAR2, false, 1, VAR35);
}

FUN8(VAR2, false, VAR13 | VAR14);
}
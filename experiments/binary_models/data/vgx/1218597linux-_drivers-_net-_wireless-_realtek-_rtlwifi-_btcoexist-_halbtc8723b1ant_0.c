static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
bool VAR6 = false;
bool VAR7 = false, VAR8 = false, VAR9 = false;
bool VAR10 = false, VAR11 = false;

FUN2(VAR4, VAR12, VAR13,
"");

VAR2->FUN3(VAR2, VAR14,
&VAR10);
if (VAR10) {
FUN4(VAR2);
FUN2(VAR4, VAR12, VAR13,
"");
return;
}

VAR2->FUN3(VAR2, VAR15, &VAR7);
VAR2->FUN3(VAR2, VAR16, &VAR8);
VAR2->FUN3(VAR2, VAR17, &VAR9);

if (VAR7 || VAR8 || VAR9) {
if (VAR7)
FUN5(VAR2);
else
FUN4(
VAR2);
FUN2(VAR4, VAR12, VAR13,
"");
return;
}

VAR2->FUN3(VAR2, VAR18,
&VAR11);
VAR2->FUN3(VAR2, VAR19, &VAR6);

if (!VAR11 &&
VAR20->VAR21 == VAR22 &&
!VAR2->VAR23.VAR24) {
if (VAR2->VAR23.VAR25) {
if (!VAR6) {
FUN6(VAR2,
VAR26,
0x0, 0x0);
} else { 
if (VAR27->VAR28 >=
VAR29)

FUN6(
VAR2, VAR26,
0x0, 0x0);
else
FUN6(
VAR2, VAR30, 0x50,
0x4);
}
} else if ((!VAR27->VAR31) && (!VAR27->VAR32) &&
(!VAR27->VAR33))
FUN6(
VAR2, VAR26, 0x0, 0x0);
else
FUN6(VAR2,
VAR30,
0x50, 0x4);
} else {
FUN6(VAR2, VAR26,
0x0, 0x0);
}

if (!VAR6) {
if (VAR20->VAR21 == VAR22) {
FUN7(
VAR2,
VAR34);
} else if (VAR20->VAR21 ==
VAR35 ||
VAR20->VAR21 ==
VAR36) {
FUN8(VAR2,
VAR34);
} else {
FUN9(VAR2, VAR37,
false, 8);
FUN10(VAR2,
VAR38,
VAR37, false, false);
FUN11(VAR2,
VAR37, 2);
}
} else {
if (VAR20->VAR21 == VAR22) {
FUN7(
VAR2,
VAR39);
} else if (VAR20->VAR21 ==
VAR35 ||
VAR20->VAR21 ==
VAR36) {
FUN8(VAR2,
VAR39);
} else {
FUN9(VAR2, VAR37,
true, 32);
FUN10(VAR2,
VAR38,
VAR37, false, false);
FUN11(VAR2,
VAR37, 4);
}
}
}
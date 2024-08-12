static bool FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
bool VAR6 = false, VAR7 = false;
bool VAR8 = false;
bool VAR9 = false, VAR10 = false;

VAR2->FUN2(VAR2, VAR11, &VAR9);
VAR2->FUN2(VAR2, VAR12,
&VAR7);
VAR2->FUN2(VAR2, VAR13, &VAR8);

if (!VAR7) {
VAR10 = false;
VAR2->FUN3(VAR2, VAR14,
&VAR10);
FUN4(VAR2, VAR15,
false, false, 0x8);

FUN5(VAR4, VAR16, VAR17,
"");

VAR2->FUN6(VAR2, VAR18, 0x1, 0xfffff,
0x0);
FUN7(VAR2, VAR15, 0);
FUN8(VAR2, VAR15, false, 1);
FUN9(VAR2, VAR15, 6);
FUN10(VAR2, VAR15, 0);

FUN11(VAR2, false, false, false,
false);

VAR6 = true;
} else {
if (VAR19 ==
VAR20->VAR21) {
VAR10 = false;
VAR2->FUN3(VAR2,
VAR14,
&VAR10);
FUN4(VAR2, VAR15,
false, false, 0x8);

FUN5(VAR4, VAR16, VAR17,
"");

VAR2->FUN6(VAR2, VAR18, 0x1,
0xfffff, 0x0);
FUN7(VAR2,
VAR15, 0);
FUN8(VAR2, VAR15, false, 1);
FUN9(VAR2, VAR15,
0xb);
FUN10(VAR2, VAR15, 0);

FUN11(VAR2, false, false,
false, false);

VAR6 = true;
} else if (VAR22 ==
VAR20->VAR21) {
VAR10 = true;
VAR2->FUN3(VAR2,
VAR14,
&VAR10);

if (VAR9)
return false;
FUN5(VAR4, VAR16, VAR17,
"");
FUN4(VAR2, VAR15,
false, false, 0x8);

VAR2->FUN6(VAR2, VAR18, 0x1,
0xfffff, 0x0);
FUN7(VAR2,
VAR15, 0);
FUN8(VAR2, VAR15, false, 1);
FUN9(VAR2, VAR15,
0xb);
FUN10(VAR2, VAR15, 0);

FUN11(VAR2, true, false,
false, false);

VAR6 = true;
} else {
VAR10 = true;
VAR2->FUN3(VAR2,
VAR14,
&VAR10);

if (VAR8) {
FUN5(VAR4, VAR16, VAR17,
"");
VAR6 = false;
} else {
FUN5(VAR4, VAR16, VAR17,
"");

VAR6 =
FUN12(
VAR2);
}
}
}

return VAR6;
}
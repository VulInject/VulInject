int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, bool VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
bool VAR8;
int VAR9;


if (FUN3(VAR2)) {
FUN4(VAR2, "");
return -VAR10;
}

FUN5(VAR2);

FUN6(VAR2, VAR11, 0xFFFFFFFF);


FUN7(VAR2);


FUN8(VAR2);

FUN9(&VAR7->mutex);


VAR8 = FUN10(VAR2);
if (VAR8 && !VAR5) {
VAR9 = -VAR12;
goto VAR13;
}


if (VAR7->VAR14) {
FUN4(VAR2,
"");
VAR9 = -VAR10;
goto VAR13;
}


FUN6(VAR2, VAR15, VAR16);
FUN6(VAR2, VAR15,
VAR17);


FUN6(VAR2, VAR11, 0xFFFFFFFF);

VAR9 = FUN11(VAR2);
if (VAR9) {
FUN12(VAR2, "");
goto VAR13;
}

if (VAR2->VAR18->VAR19 >= VAR20)
VAR9 = FUN13(VAR2, VAR4);
else
VAR9 = FUN14(VAR2, VAR4);
if (VAR9)
goto VAR13;

FUN15(VAR2);

if (VAR2->VAR18->VAR19 >= VAR21) {
FUN6(VAR2, VAR22, VAR23);
FUN16(VAR2, VAR24,
VAR25);
} else if (VAR2->VAR18->VAR19 >= VAR20) {
FUN17(VAR2, VAR26, 1);
} else {
FUN18(VAR2, VAR26, 1);
}


VAR8 = FUN10(VAR2);
if (VAR8 && !VAR5)
VAR9 = -VAR12;

VAR13:
FUN19(&VAR7->mutex);
return VAR9;
}
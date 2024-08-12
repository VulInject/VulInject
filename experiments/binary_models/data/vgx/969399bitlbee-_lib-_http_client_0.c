static VAR1 FUN1(gpointer VAR2, int VAR3, b_input_condition VAR4)
{
struct VAR5 *VAR6 = VAR2;
int VAR7;

if (VAR3 < 0) {
goto VAR8;
}

if (VAR6->VAR9 > 0) {
FUN2(VAR6->VAR9);
}

FUN3(VAR6->VAR10);

if (VAR6->VAR11) {
VAR7 = FUN4(VAR6->VAR11, VAR6->VAR12 + VAR6->VAR13,
VAR6->VAR14 - VAR6->VAR13);
if (VAR7 < 0) {
if (VAR15 != VAR16) {
FUN5(VAR6->VAR11);
goto VAR8;
}
}
} else {
VAR7 = write(VAR3, VAR6->VAR12 + VAR6->VAR13,
VAR6->VAR14 - VAR6->VAR13);
if (VAR7 < 0) {
if (!FUN6()) {
FUN7(VAR6->VAR10);
goto VAR8;
}
}
}

if (VAR7 > 0) {
VAR6->VAR13 += VAR7;
}

if (VAR6->VAR13 < VAR6->VAR14) {
VAR6->VAR9 = FUN8(VAR3,
VAR6->VAR11 ? FUN9(VAR6->VAR11) : VAR17,
VAR18, VAR6);
} else {
VAR6->VAR9 = FUN8(VAR3, VAR19, VAR20, VAR6);
}

return VAR21;

VAR8:
if (VAR6->VAR22 == NULL) {
VAR6->VAR22 = FUN10("");
}

if (VAR6->VAR23 != NULL) {
VAR6->FUN11(VAR6);
}
FUN12(VAR6);
return VAR21;
}
static void
FUN1(VAR1 *VAR2, int VAR3)
{
const VAR4 *VAR5 = FUN2("");
if (VAR5 == NULL) {
FUN3("");
}

int VAR6 = FUN4(VAR5,
VAR2->VAR7, VAR2->VAR8->VAR9,
VAR2->VAR8->VAR10, VAR2->VAR8->VAR9,
(VAR11 *)VAR12, strlen(VAR12),
VAR2->VAR13, VAR2->VAR8->VAR9);
if (VAR6) {
FUN3("");
}

memset(VAR2->VAR14, 0, VAR2->VAR8->VAR15);


if (VAR2->VAR8->VAR16 >= VAR17) {
return;
}
if (VAR2->VAR18 != NULL) {
if (FUN5(VAR2->VAR18,
VAR2->VAR13) != 0) {
FUN3("");
}
return;
}
if (FUN6(VAR2->VAR19, VAR2->VAR13,
VAR2->VAR8->VAR9 * 8, VAR3) != 0) {
FUN3("");
}
if (FUN7(VAR2->VAR19) != 0) {
FUN3("");
}
}
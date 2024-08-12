static int FUN1(VAR1 * VAR2)
{
halfword VAR3;
const char *VAR4;
int VAR5 = 0;
int VAR6 = 1;
int VAR7 = -1;
halfword VAR8 = *(FUN2(VAR2, 1));
if (FUN3(VAR2) > 1) {
VAR5 = FUN4(VAR2, 2);
if (FUN3(VAR2) > 2) {
if (FUN5(VAR2, 3) == VAR9) {
VAR4 = FUN6(VAR2, 3);
if (FUN7(VAR4, VAR10)) {
VAR6 = 0;
} else if (FUN7(VAR4, VAR11)) {
VAR6 = 1;
} else if (FUN7(VAR4, VAR12)) {
VAR6 = 2;
} else if (FUN7(VAR4, VAR13)) {
VAR6 = 3;
}
} else if (FUN5(VAR2, 3) == VAR14) {
VAR6 = (int) FUN8(VAR2, 3);
}
if ((VAR6<0) || (VAR6>3)) {
FUN9(VAR2, "");
}
if (FUN3(VAR2) > 3) {
if (FUN5(VAR2, 4) == VAR14) {
VAR7 = FUN10(VAR2, 4);
} else if (FUN5(VAR2, 4) == VAR9) {
VAR7 = FUN11(VAR2, 4);
} else {
FUN12(VAR2, "");
}
}
}
}
VAR3 = FUN13(VAR8, VAR5, VAR6, VAR7);
FUN14(VAR2, VAR3);
FUN15(VAR2, VAR15);
return 2;
}
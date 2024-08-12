static void FUN1(pointer VAR1)
{
int VAR2;
if (FUN2(VAR1)) {
FUN3("");
if (FUN4(VAR1))
FUN3("");
if (FUN5(VAR1))
FUN3("");
if (FUN6(VAR1))
FUN3("");
FUN3("");
}
if (FUN7(VAR1)) {
FUN3("");
FUN8(FUN7(VAR1));
FUN3("");
}
if (FUN9(VAR1)) {
FUN3("");
FUN8(FUN9(VAR1));
FUN3("");
}
if (FUN10(VAR1)) {
FUN3("");
FUN11(FUN10(VAR1));
FUN3("");
}
if (FUN12(VAR1) < 0) {

FUN11(-1);
} else if (FUN12(VAR1) < 16 && FUN13(VAR1) < 16 && FUN14(VAR1) < 256 && FUN15(VAR1) < 256) {

VAR2 = FUN12(VAR1) * 256 + FUN14(VAR1);
VAR2 = VAR2 * 0x1000 + FUN13(VAR1) * 256 + FUN15(VAR1);
FUN16(VAR2);
} else if ((FUN13(VAR1) == 0 && FUN15(VAR1) == 0) || FUN14(VAR1) > 65535 || FUN15(VAR1) > 65535) {

FUN16(FUN12(VAR1));
FUN16(FUN14(VAR1));
}
}
static void FUN1(const char *VAR1,
const char *VAR2,
const char *VAR3, const char *VAR4,
const char *VAR5, bool VAR6)
{
VAR7 *new = FUN2(VAR8);
VAR9 *VAR10 = FUN3(new);
char *VAR11;

if (VAR1) {
FUN4(VAR10, "", VAR1);
}
if (VAR3) {
FUN4(VAR10, "", VAR3);
}
FUN4(VAR10, "", VAR2);
FUN4(VAR10, "", VAR4);
FUN5(VAR10, "", VAR6);
VAR11 = FUN6(new, "", &VAR12);
if (!strlen(VAR11)) {
FUN4(VAR10, "", VAR5);
}
FUN7(VAR11);
FUN8(FUN9(), VAR8,
new);
FUN10(new);
FUN11(VAR10, NULL, &VAR13);
}
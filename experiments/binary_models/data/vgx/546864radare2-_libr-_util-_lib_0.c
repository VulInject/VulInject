static bool FUN1(VAR1 *VAR2, const char *VAR3) {
const char *VAR4 = FUN2 (VAR3, VAR5);
VAR6 *VAR7;
VAR8 *VAR9;
if (VAR4) {
FUN3 (VAR2->VAR10, VAR9, VAR7) {
const char *VAR11 = FUN2 (VAR7->VAR3, VAR5);
if (VAR11 && !strcmp (VAR4, VAR11)) {
return true;
}
}
}
return false;
}
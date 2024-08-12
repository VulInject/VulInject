static bool FUN1(VAR1 *VAR2) {
int VAR3, VAR4;
ut64 VAR5 = sizeof (struct VAR6) + (VAR2->VAR7.VAR8 ? sizeof (struct VAR9) : 0);
if (VAR2->VAR7.VAR10 == VAR11) {
VAR5 += 2;
}
VAR4 = VAR2->VAR7.VAR12 * sizeof (struct VAR13);
if (VAR5 > VAR2->VAR4 || VAR5 + VAR4 > VAR2->VAR4 || VAR4 < 0) {
return false;
}
VAR2->VAR14 = calloc (1, VAR4 + sizeof (struct VAR13));
if (!VAR2->VAR14) {
return false;
}
VAR3 = FUN2 (VAR2->VAR15, VAR5, (VAR16 *)VAR2->VAR14, VAR2->VAR17? "": "", VAR2->VAR7.VAR12);
if (VAR3 != VAR4) {
FUN3 (VAR2->VAR14);
return false;
}
return true;
}
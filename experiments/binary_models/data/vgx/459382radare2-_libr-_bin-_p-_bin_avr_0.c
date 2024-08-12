static void FUN1(VAR1 *VAR2, const char *VAR3, ut64 VAR4, VAR5 *VAR6) {
if (VAR6 && FUN2 (VAR6, 0)) {
char *VAR7 = FUN3 ("", VAR3);
FUN4 (VAR2, VAR7, VAR4);
free (VAR7);
ut64 VAR8 = FUN5 (VAR4, VAR6);
VAR7 = FUN3 ("", VAR3);
FUN4 (VAR2, VAR7, VAR8);
free (VAR7);
}
}
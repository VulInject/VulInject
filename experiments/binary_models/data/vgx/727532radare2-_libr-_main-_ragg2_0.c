static int FUN1(const char *VAR1, const char *VAR2, int VAR3, const VAR4 *VAR5, int VAR6) {
VAR7 *VAR8 = FUN2 ();
RBinArchOptions VAR9;
VAR10 *VAR11;
FUN3 (&VAR9, VAR2, VAR3);
VAR11 = FUN4 (VAR8, VAR1, VAR5, VAR6, NULL, 0, &VAR9);
if (VAR11) {
ut64 VAR12;
const VAR4 *VAR13 = FUN5 (VAR11, &VAR12);
if (write (1, VAR13, VAR12) != VAR12) {
FUN6 ("");
}
FUN7 (VAR11);
} else {
FUN6 ("", VAR1);
}
FUN8 (VAR8);
return 0;
}
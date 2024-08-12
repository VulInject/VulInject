static VAR1 *FUN1(VAR1 *VAR2, const char *VAR3) {
VAR4 *VAR5 = FUN2 (VAR3);
if (VAR5) {
FUN3 (VAR2);
FUN4 (VAR2, VAR5);
} else {
char *VAR6 = FUN5 (FUN6 ("", VAR7, ""), FUN7 (NULL), VAR3);
if (FUN8 (VAR6)) {
if (VAR2) {
FUN3 (VAR2);
FUN9 (VAR2, VAR6);
} else {
VAR2 = FUN10 (0, VAR6, 0);
}
} else {
FUN11 (VAR2);
VAR2 = FUN12 ();
}
free (VAR6);
}
return VAR2;
}
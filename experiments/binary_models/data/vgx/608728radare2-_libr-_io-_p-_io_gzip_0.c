static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, int VAR6) {
if (FUN2 (VAR3, VAR4, 0)) {
size_t VAR7;
VAR8 *VAR9 = (VAR8 *)FUN3 (VAR4 + 7, &VAR7); 
if (!VAR9) {
return NULL;
}
VAR10 *VAR11 = FUN4 (VAR10);
if (!VAR11) {
free (VAR9);
return NULL;
}
int *VAR12 = (int*)&VAR11->VAR12;
VAR11->VAR13 = FUN5 (VAR9, (int)VAR7, NULL, VAR12);
free (VAR9);
if (VAR11->VAR13) {
return FUN6 (VAR3, &VAR14, VAR4, VAR5, VAR6, VAR11);
}
FUN7 ("", VAR11->VAR12, VAR4 + 9);
free (VAR11);
}
return NULL;
}
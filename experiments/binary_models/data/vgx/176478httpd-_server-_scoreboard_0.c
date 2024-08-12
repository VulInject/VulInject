static void FUN1(char *VAR1, apr_size_t VAR2, VAR3 *VAR4)
{
char *VAR5;

if (VAR4->VAR6 == NULL) {
FUN2(VAR1, "", VAR2);
return; 
}

if (VAR4->VAR7.VAR8 == NULL) {
VAR5 = VAR4->VAR6;
}
else {

VAR5 = FUN3(VAR4->VAR9, VAR4->VAR10, "",
FUN4(VAR4->VAR9, &VAR4->VAR7,
VAR11),
VAR4->VAR12 ? NULL : "", VAR4->VAR13, NULL);
}


if (!VAR14) {
FUN2(VAR1, VAR5, VAR2);
}
else {
apr_size_t VAR15 = strlen(VAR5);
if (VAR15 < VAR2) {

FUN2(VAR1, VAR5, VAR2);
}
else {
FUN2(VAR1, VAR5+(VAR15-VAR2+1), VAR2);
}
}
}
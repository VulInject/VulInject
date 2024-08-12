static void FUN1(const char *VAR1)
{
char *VAR2;
char *VAR3 = (char *) alloca(strlen(VAR1) + 1);
if (!VAR3) {
FUN2();
}
strcpy(VAR3, VAR1);

for (VAR2 = VAR3; *VAR2; VAR2++) {
if (*VAR2 == '') {
*VAR2 = '';
FUN3(VAR3);
*VAR2 = '';
}
}
}
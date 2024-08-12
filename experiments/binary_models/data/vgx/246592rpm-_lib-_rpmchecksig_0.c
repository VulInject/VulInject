int FUN1(rpmts VAR1, ARGV_const_t argv)
{
int VAR2 = 0;
for (ARGV_const_t VAR3 = argv; VAR3 && *VAR3; VAR3++) {
const char *VAR4 = *VAR3;
VAR5 *VAR6 = NULL;
ssize_t VAR7 = 0;
char *VAR8 = NULL;
int VAR9;


VAR9 = FUN2(VAR4, &VAR6, &VAR7);
if (VAR9 || VAR6 == NULL || VAR7 < 64) {
FUN3(VAR10, FUN4(""), VAR4, VAR9);
VAR2++;
} else {
VAR2 += FUN5(VAR1, VAR4, (char *)VAR6, VAR7);
}

free(VAR8);
free(VAR6);
}
return VAR2;
}
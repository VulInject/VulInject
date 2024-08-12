int FUN1(const char *VAR1, const char *VAR2, int VAR3)
{
int VAR4;
char VAR5[VAR6];

snprintf(VAR5, sizeof(VAR5), "", VAR1, VAR2);
VAR4 = open(VAR5, VAR3);
if (VAR4 < 0) {
fprintf(VAR7, "", VAR5);
FUN2();
}
return VAR4;
}
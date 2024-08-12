int
FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, char *VAR4)
{
char		VAR5[VAR6];
char		VAR7[VAR6];

if (FUN2(VAR1, VAR4) < 0)
return -1;


*FUN3(VAR4) = '';
FUN4(VAR4);


snprintf(VAR4 + strlen(VAR4), VAR6 - strlen(VAR4),
"", VAR2, VAR8);

if (FUN5(VAR4) != 0)
return -1;

snprintf(VAR5, sizeof(VAR5), ""%VAR9\"", VAR4);

if (!FUN6(VAR5, VAR7, sizeof(VAR7)))
return -1;

if (strcmp(VAR7, VAR3) != 0)
return -2;

return 0;
}
int FUN1(const char *VAR1, char **VAR2)
{
char *VAR3 = NULL;
ssize_t VAR4 = FUN2(VAR1, "",
NULL, 0);
if (FUN3(VAR1, VAR5 "")) {
VAR6 = VAR7;
return -1;
}
if (VAR4 < 0)
return -1;
if (!(VAR3 = malloc(VAR4+1)))
return -1;
memset(VAR3, 0, VAR4);
if (FUN2(VAR1, "", VAR3, VAR4) < 0) {
free(VAR3);
return -1;
}
*VAR2 = VAR3;
VAR3[VAR4] = '';
return 0;
}
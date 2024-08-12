static int FUN1(const char *VAR1) {
char *VAR2, *VAR3;
long VAR4;

VAR2 = getenv(VAR1);
if (!VAR2)
return 0;

VAR4 = FUN2(VAR2, &VAR3, 10);
if (*VAR3 != '')
return 0;

return (int)VAR4;
}
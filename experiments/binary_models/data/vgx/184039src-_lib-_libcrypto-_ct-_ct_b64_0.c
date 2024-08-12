int
FUN1(VAR1 **VAR2, const char *VAR3, const char *VAR4)
{
unsigned char *VAR5 = NULL;
int VAR6;
const unsigned char *VAR7;
VAR8 *VAR9 = NULL;

if (VAR2 == NULL) {
FUN2(VAR10);
return 0;
}

VAR6 = FUN3(VAR3, &VAR5);
if (VAR6 < 0) {
FUN2(VAR11);
return 0;
}

VAR7 = VAR5;
VAR9 = FUN4(NULL, &VAR7, VAR6);
free(VAR5);
if (VAR9 == NULL) {
FUN2(VAR11);
return 0;
}

*VAR2 = FUN5(VAR9, VAR4);
if (*VAR2 == NULL) {
FUN6(VAR9);
return 0;
}

return 1;
}
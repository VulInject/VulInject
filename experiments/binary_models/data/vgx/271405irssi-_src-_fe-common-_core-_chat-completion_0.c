static void FUN1(VAR1 **VAR2, VAR3 *VAR4,
const char *VAR5, const char *VAR6,
int *VAR7)
{
const char *VAR8;

FUN2(VAR2 != NULL);
FUN2(VAR5 != NULL);

*VAR7 = VAR9;

if (*VAR5 == '' && VAR4->VAR10 != NULL) {
VAR8 = FUN3(VAR4->VAR10)->VAR11;
if (VAR8 != NULL) {
*VAR2 = FUN4(NULL, FUN5(VAR8));
FUN6();
}
}
}
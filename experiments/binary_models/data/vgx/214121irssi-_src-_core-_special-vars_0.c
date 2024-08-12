static char *FUN1(char **VAR1, VAR2 *VAR3, void *VAR4, int *VAR5,
int VAR6, VAR7 **VAR8, VAR7 **VAR9)
{
char *VAR10, *VAR11, *VAR12;


VAR10 = *VAR1;
while (FUN2((*VAR1)[1])) (*VAR1)++;

VAR11 = FUN3(VAR10, (int) (*VAR1-VAR10)+1);
if (VAR6) {
*VAR5 = VAR13;
return VAR11;
}
if (FUN4(VAR9, VAR11, &VAR12)) {
FUN5(VAR11);
return VAR12;
}
VAR12 = FUN6(VAR11, VAR3, VAR4, VAR5);
if (VAR8 != NULL) {
*VAR8 = FUN7(*VAR8, FUN8(VAR12));
*VAR8 = FUN7(*VAR8, FUN9(VAR11));
}
FUN5(VAR11);
return VAR12;
}
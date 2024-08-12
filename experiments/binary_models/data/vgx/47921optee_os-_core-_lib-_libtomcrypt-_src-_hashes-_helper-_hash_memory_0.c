int FUN1(int VAR1, const unsigned char *VAR2, unsigned long VAR3, unsigned char *VAR4, unsigned long *VAR5)
{
VAR6 *VAR7;
int VAR8;

FUN2(VAR2     != NULL);
FUN2(VAR4    != NULL);
FUN2(VAR5 != NULL);

if ((VAR8 = FUN3(VAR1)) != VAR9) {
return VAR8;
}

if (*VAR5 < VAR10[VAR1]->VAR11) {
*VAR5 = VAR10[VAR1]->VAR11;
return VAR12;
}

VAR7 = FUN4(sizeof(VAR6));
if (VAR7 == NULL) {
return VAR13;
}

if ((VAR8 = VAR10[VAR1]->FUN5(VAR7)) != VAR9) {
goto VAR14;
}
if ((VAR8 = VAR10[VAR1]->FUN6(VAR7, VAR2, VAR3)) != VAR9) {
goto VAR14;
}
VAR8 = VAR10[VAR1]->FUN7(VAR7, VAR4);
*VAR5 = VAR10[VAR1]->VAR11;
VAR14:
FUN8(VAR7, sizeof(VAR6));
FUN9(VAR7);

return VAR8;
}
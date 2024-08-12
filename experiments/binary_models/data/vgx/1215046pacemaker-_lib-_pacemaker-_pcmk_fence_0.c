int
FUN1(VAR1 *VAR2, VAR3 **VAR4,
enum pcmk__fence_history VAR5)
{
int VAR6 = VAR7;

if ((VAR2 == NULL) || (VAR2->VAR8 == VAR9)) {
VAR6 = VAR10;
} else if (VAR5 != VAR11) {
VAR6 = VAR2->VAR12->FUN2(VAR2, VAR13, NULL, VAR4, 120);

VAR6 = FUN3(VAR6);
if (VAR6 != VAR7) {
return VAR6;
}

*VAR4 = FUN4(*VAR4);
if (VAR5 == VAR14) {
*VAR4 = FUN5(*VAR4);
}
}

return VAR6;
}
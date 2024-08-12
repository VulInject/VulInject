int
FUN1(int VAR1, int VAR2, int VAR3, ...)
{
va_list VAR4;
union semun VAR5;
union VAR5 *VAR6 = NULL;

FUN2(VAR4, VAR3);
if (VAR3 == VAR7 || VAR3 == VAR8 || VAR3 == VAR9 ||
VAR3 == VAR10 || VAR3 == VAR11) {
VAR5 = FUN3(VAR4, union VAR5);
VAR6 = &VAR5;
}
FUN4(VAR4);

return (FUN5(VAR1, VAR2, VAR3, VAR6));
}
static void FUN1(char *VAR1, ...)
{
va_list VAR2;

FUN2(VAR2, VAR1);
FUN3(VAR3, VAR1, VAR2);
FUN4(VAR2);
if (VAR4)
unlink(VAR4);
FUN5("");
FUN6(VAR5);
}
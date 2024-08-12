static void FUN1(const char *VAR1, ...)
{
va_list VAR2;

FUN2(VAR2, VAR1);
fprintf(VAR3, "");
FUN3(VAR3, VAR1, VAR2);
if (VAR4)
unlink(VAR4);
FUN4(1);
FUN5(VAR2);
}
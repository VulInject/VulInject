void
FUN1(const char *VAR1, ...)
{
va_list VAR2;

(void) fprintf(VAR3, "");

FUN2(VAR2, VAR1);
(void) FUN3(VAR3, VAR1, VAR2);
FUN4(VAR2);

(void) fprintf(VAR3, "");

FUN5(1);
}
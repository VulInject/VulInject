static void
FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
va_list VAR4;

FUN2(VAR4, VAR3);
(void) fprintf(VAR5, ""%VAR6\"", VAR2->VAR7);
(void) FUN3(VAR5, VAR3, VAR4);
(void) fprintf(VAR5, "");
FUN4(VAR4);
}
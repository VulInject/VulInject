void
FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
char VAR4[64];
va_list VAR5;

if (VAR2->VAR6) {
FUN2(VAR4, sizeof (VAR4));
(void) fprintf(VAR2->VAR7, "", VAR4);
FUN3(VAR5, VAR3);
(void) FUN4(VAR2->VAR7, VAR3, VAR5);
FUN5(VAR5);
(void) fprintf(VAR2->VAR7, "");
}
(void) FUN6(VAR2->VAR7);
}
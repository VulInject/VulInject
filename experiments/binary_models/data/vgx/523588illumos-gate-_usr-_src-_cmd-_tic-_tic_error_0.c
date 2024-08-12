extern char *VAR1;
extern short VAR2;
extern char *VAR3;


void
FUN1(char *VAR4, ...)
{
va_list VAR5;

FUN2(VAR5, VAR4);
fprintf(VAR6, "", VAR3, VAR7);
if (VAR1 != NULL) {
fprintf(VAR6, "", VAR1+VAR2);
}
FUN3(VAR6, VAR4, VAR5);
fprintf(VAR6, "");
FUN4(VAR5);
}
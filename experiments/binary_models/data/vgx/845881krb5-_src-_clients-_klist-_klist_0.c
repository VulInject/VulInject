static void
FUN1(const char *VAR1, errcode_t VAR2, const char *VAR3,
va_list VAR4)
{
const char *VAR5;

VAR5 = FUN2(VAR6, VAR2);
fprintf(VAR7, "", VAR1, VAR5, (*VAR3 == '') ? "" : "");
FUN3(VAR6, VAR5);
FUN4(VAR7, VAR3, VAR4);
fprintf(VAR7, "");
}
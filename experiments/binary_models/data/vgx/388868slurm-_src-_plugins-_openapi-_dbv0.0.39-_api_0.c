static bool FUN1(void *VAR1, data_parser_type_t VAR2, int VAR3,
const char *VAR4, const char *VAR5, ...)
{
va_list VAR6;
char *VAR7;
VAR8 *VAR9 = VAR1;

FUN2(VAR9->VAR10 == VAR11);

FUN3(VAR6, VAR5);
VAR7 = FUN4(VAR5, VAR6);
FUN5(VAR6);

FUN6(VAR9, VAR3, VAR7, "", VAR4);

return false;
}
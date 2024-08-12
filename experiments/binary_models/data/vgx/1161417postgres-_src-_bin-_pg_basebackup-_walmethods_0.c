static char *
FUN1(VAR1 *VAR2,
const char *VAR3, const char *VAR4)
{
char	   *VAR5 = FUN2(VAR6 * sizeof(char));

snprintf(VAR5, VAR6, "",
VAR3,
VAR2->VAR7 == VAR8 ? "" :
VAR2->VAR7 == VAR9 ? "" : "",
VAR4 ? VAR4 : "");

return VAR5;
}
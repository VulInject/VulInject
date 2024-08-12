static int FUN1(void *VAR1, const char *VAR2, const char *VAR3, const char *VAR4)
{
int VAR5;
VAR6 *VAR7 = VAR1;


VAR5 = VAR7 != NULL;

FUN2("", VAR2, VAR5 ? "" : "");

return VAR5;
}
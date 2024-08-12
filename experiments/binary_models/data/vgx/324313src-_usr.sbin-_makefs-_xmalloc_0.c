char *
FUN1(const char *VAR1)
{
char *VAR2;

if ((VAR2 = strdup(VAR1)) == NULL)
FUN2(1, "");
return VAR2;
}
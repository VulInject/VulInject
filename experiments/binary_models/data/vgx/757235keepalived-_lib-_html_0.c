VAR1 FUN1(const char *VAR2, size_t VAR3)
{
char *VAR4 = strstr(VAR2, VAR5);
size_t VAR6;
char *VAR7;


if (!VAR4 || VAR4 > VAR2 + VAR3)
return VAR8;


VAR6 = FUN2(VAR4 + strlen(VAR5), &VAR7, 10);
if (*VAR7 && (*VAR7 != '' && *VAR7 != ''))
return VAR8;

return VAR6;
}
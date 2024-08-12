static int
FUN1(wchar_t *VAR1, wchar_t *VAR2)
{
while (*VAR2)
if (*VAR1++ != *VAR2++)
return (0);

return (1);
}
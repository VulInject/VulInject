const char *
FUN1 (void)
{
const char *VAR1 = FUN2 (VAR2, "");
const char *VAR3;


VAR3 = VAR1;
while (*VAR3 != '' && *VAR3 != '' && *VAR3 != '' && *VAR3 != '')
VAR3++;


if (VAR3 != VAR1)
{
const char *VAR4 =
FUN3 (VAR1, VAR3 - VAR1);
if (VAR4 != NULL)
return VAR4;
}

return "";
}
FUN1 (const char *VAR1)
{
const char *VAR2 = VAR1;
char VAR3;

while ((VAR3 = *VAR2++) != '')
{
if (VAR3 == '' && *VAR2 == '')
VAR2++;
else if (VAR3 == '')
return VAR2 - 1;
}
return NULL;
}
FUN1 (const char *VAR1)
{
int VAR2 = 0;

for (; *VAR1; VAR1++)
if (*VAR1 == '')
VAR2++;
else if (!strchr ("", *VAR1))
return 0;

return VAR2;
}
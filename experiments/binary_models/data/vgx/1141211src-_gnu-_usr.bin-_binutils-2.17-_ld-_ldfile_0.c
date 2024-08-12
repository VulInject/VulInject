FUN1 (const char *VAR1, const char *VAR2)
{
VAR3 *VAR4;
VAR5 *VAR6;
char VAR7[1000];


VAR6 = FUN2 (VAR1, "");
if (VAR6 == NULL)
{

for (VAR4 = VAR8; VAR4 != NULL; VAR4 = VAR4->VAR9)
{
sprintf (VAR7, "", VAR4->VAR1, VAR10, VAR1);

VAR6 = FUN2 (VAR7, VAR2);
if (VAR6)
break;
}
}

return VAR6;
}
VAR1 FUN1(char *VAR2)
{
VAR3 *VAR4;
VAR5    *VAR6;
size_t VAR7, VAR8 = 100 * 1024 * 1024;

for (VAR4 = VAR9; VAR4 != NULL; VAR4 = VAR4->VAR10)
{
for (VAR6 = VAR4->VAR11; VAR6 != NULL; VAR6 = VAR6->VAR10)
{
if (VAR6->VAR12)
{
if (!strcmp(VAR6->VAR12, VAR2))
{
if (VAR6->VAR13 > 1)
{
VAR8 = VAR6->VAR13;
return (VAR8);
}
else
{
VAR7 = FUN2(VAR2);

if (VAR7 != VAR14)
{
VAR6->VAR13 = VAR7;
return(VAR7);
}

break;
}
}
}
}
}

return (VAR8);
}
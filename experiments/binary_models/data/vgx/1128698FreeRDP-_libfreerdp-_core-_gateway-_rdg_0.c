static VAR1 FUN1(VAR2* VAR3, VAR4* VAR5)
{
const VAR6* VAR7 = FUN2(VAR3);
char* VAR8 = NULL;

if (VAR7)
{
if (VAR7->VAR9 > VAR10)
return VAR11;

VAR8 = FUN3(VAR7->VAR12, (int)VAR7->VAR9);
}

if (VAR8)
{
BOOL VAR13 = FUN4(VAR5, FUN5(VAR3)) &&
FUN6(VAR5, VAR8);
free(VAR8);

if (!VAR13)
return VAR11;
}

return VAR14;
}
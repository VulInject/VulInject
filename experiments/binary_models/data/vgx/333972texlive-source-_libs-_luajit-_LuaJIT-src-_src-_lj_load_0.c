static const char *FUN1(VAR1 *VAR2, void *VAR3, VAR4 *VAR5)
{
VAR6 *VAR7 = (VAR6 *)VAR3;
FUN2(VAR2);
if (VAR7->VAR5 == 0) return NULL;
*VAR5 = VAR7->VAR5;
VAR7->VAR5 = 0;
return VAR7->VAR8;
}
VAR1 *FUN1(VAR2 *VAR3)
{
VAR4 *VAR5 = FUN2(VAR3,
VAR6,
sizeof(VAR1));
if (!VAR5)
return NULL;

memset(VAR5->VAR7, 0, sizeof(VAR1));

return (VAR1 *)VAR5->VAR7;
}
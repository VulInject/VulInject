int FUN1(const void *VAR1, int VAR2,
VAR3 *VAR4)
{
const VAR5 *VAR6;

VAR6 = FUN2(VAR1, VAR2, "", NULL);
if (!VAR6)
return -VAR7;

*VAR4 = (VAR3)FUN3(*VAR6);

return 0;
}
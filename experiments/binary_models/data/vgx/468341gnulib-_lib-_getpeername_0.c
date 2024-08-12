FUN1 (int VAR1, struct VAR2 *VAR3, VAR4 *VAR5)
{
SOCKET VAR6 = FUN2 (VAR1);

if (VAR6 == VAR7)
{
VAR8 = VAR9;
return -1;
}
else
{
int VAR10 = FUN3 (VAR6, VAR3, VAR5);
if (VAR10 < 0)
FUN4 ();

return VAR10;
}
}
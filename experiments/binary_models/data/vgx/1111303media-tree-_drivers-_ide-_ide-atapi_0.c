int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
struct ide_atapi_pc VAR6;

if ((VAR2->VAR7 & VAR8) == 0)
return 0;

FUN2(&VAR6);
VAR6.VAR9[0] = VAR10;
VAR6.VAR9[4] = VAR5;

return FUN3(VAR2, VAR4, &VAR6, NULL, 0);
}
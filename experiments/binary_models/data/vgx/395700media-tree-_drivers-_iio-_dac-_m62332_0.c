static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
struct VAR7 *VAR8 = FUN4(VAR6);
int VAR9;

VAR8->VAR10[0] = VAR8->VAR11[0];
VAR8->VAR10[1] = VAR8->VAR11[1];

VAR9 = FUN5(VAR6, 0, 0);
if (VAR9 < 0)
return VAR9;

return FUN5(VAR6, 0, 1);
}
static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6);
int VAR9 = VAR4->VAR10.VAR11.VAR10[0];

if (VAR9 > 1)
return -VAR12;

VAR8->VAR9 = VAR9;

return FUN4(VAR6);
}
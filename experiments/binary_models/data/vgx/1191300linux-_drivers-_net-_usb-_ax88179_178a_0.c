static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR6->VAR9;

if (VAR4->VAR10 & ~(VAR8->VAR11))
return -VAR12;

VAR8->VAR10 = VAR4->VAR10;

return 0;
}
static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

if (VAR6->VAR7.VAR8 < VAR9)
return -VAR10;

if (VAR6->VAR11 <= 4)
VAR4->VAR12 = VAR6->VAR11;
else
VAR4->VAR12 = 1000000 / VAR6->VAR11;

return 0;
}
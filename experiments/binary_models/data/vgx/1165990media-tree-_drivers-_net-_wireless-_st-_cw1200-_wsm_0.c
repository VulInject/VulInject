static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
VAR4->VAR7 = FUN2(VAR6);
if (FUN3(VAR4->VAR7) != VAR8)
return -VAR9;

VAR4->VAR10 = FUN2(VAR6);
VAR4->VAR11 = FUN2(VAR6);

return 0;

VAR12:
FUN3(1);
return -VAR9;
}
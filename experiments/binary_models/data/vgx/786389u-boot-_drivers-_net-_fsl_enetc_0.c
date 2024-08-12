static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR4->VAR6 = FUN3(VAR2);
if (!VAR4->VAR6)
return -VAR7;

VAR5 = VAR8 | VAR9;
VAR4->VAR6->VAR5 &= VAR5;
VAR4->VAR6->VAR10 &= VAR5;

return FUN4(VAR4->VAR6);
}
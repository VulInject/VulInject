static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
(struct VAR3 *)VAR2->VAR5;
u16 VAR6;

VAR6 = FUN2(VAR2, VAR7, VAR8);

if (VAR4->VAR9 == VAR10)
VAR6 |= VAR11;
else
VAR6 &= ~VAR11;

FUN3(VAR2, VAR7, VAR8, VAR6);

return 0;
}
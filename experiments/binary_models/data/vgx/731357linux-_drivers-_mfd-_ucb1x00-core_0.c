static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR5->VAR8->VAR9.VAR10;
unsigned VAR11 = 1 << (VAR2->VAR12 - VAR5->VAR13);

if (!VAR7 || !VAR7->VAR14)
return -VAR15;

FUN3(&VAR5->VAR16);
if (VAR3)
VAR5->VAR17 |= VAR11;
else
VAR5->VAR17 &= ~VAR11;
FUN4(&VAR5->VAR16);

return 0;
}
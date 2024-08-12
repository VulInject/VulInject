static unsigned int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR6);
struct VAR7 *VAR8 = FUN3(VAR2);
u32 VAR9, VAR10 = 0;

VAR9 = FUN4(VAR4, VAR8->VAR11);

if (VAR9 & VAR12)
VAR10 |= VAR13;
else
VAR10 |= VAR14;

if (VAR9 & VAR15)
VAR10 |= VAR16;
else
VAR10 |= VAR17;

return VAR10;
}
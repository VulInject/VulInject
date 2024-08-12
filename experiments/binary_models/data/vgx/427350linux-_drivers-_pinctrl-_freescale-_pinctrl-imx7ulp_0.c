static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned VAR5, bool VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
const struct VAR9 *VAR10;
u32 VAR11;

VAR10 = &VAR8->VAR12[VAR5];
if (VAR10->VAR13 == -1)
return -VAR14;

VAR11 = FUN3(VAR8->VAR15 + VAR10->VAR13);
if (VAR6)
VAR11 = (VAR11 & ~VAR16) | VAR17;
else
VAR11 = (VAR11 & ~VAR17) | VAR16;
FUN4(VAR11, VAR8->VAR15 + VAR10->VAR13);

return 0;
}
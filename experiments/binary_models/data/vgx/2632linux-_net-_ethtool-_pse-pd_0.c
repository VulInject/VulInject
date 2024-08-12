static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
const struct VAR7 *VAR8 = FUN2(VAR6);
const struct VAR9 *VAR10 = &VAR8->VAR11;

if (VAR10->VAR12 > 0 &&
FUN3(VAR2, VAR13,
VAR10->VAR12))
return -VAR14;

if (VAR10->VAR15 > 0 &&
FUN3(VAR2, VAR16,
VAR10->VAR15))
return -VAR14;

return 0;
}
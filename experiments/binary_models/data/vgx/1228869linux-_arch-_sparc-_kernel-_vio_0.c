static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2->VAR7);
const struct VAR8 *VAR9;

if (!VAR6->VAR10)
return -VAR11;

VAR9 = FUN4(VAR6->VAR12, VAR4);
if (!VAR9)
return -VAR11;


if (!VAR6->VAR13) {
if (VAR4->VAR14 == 0 && VAR4->VAR15 != ~0UL)
VAR4->VAR14 = FUN5(VAR4->VAR16,
VAR4->VAR15);

if (VAR4->VAR17 == 0 && VAR4->VAR18 != ~0UL)
VAR4->VAR17 = FUN5(VAR4->VAR16,
VAR4->VAR18);
}

return VAR6->FUN6(VAR4, VAR9);
}
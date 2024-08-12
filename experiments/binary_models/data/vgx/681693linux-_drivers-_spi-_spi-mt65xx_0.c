static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR4->VAR2);
u32 VAR9 = 0;


if (VAR8->VAR10->VAR11) {
if (!VAR6->VAR12 || !VAR6->VAR13) {
VAR9 |= VAR14;
if (VAR6->VAR13)
VAR9 |= VAR15;
}
FUN3(VAR9, VAR8->VAR16 + VAR17);
}

if (VAR2->FUN4(VAR2, VAR4, VAR6))
return FUN5(VAR2, VAR4, VAR6);
else
return FUN6(VAR2, VAR4, VAR6);
}
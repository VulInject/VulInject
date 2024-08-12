int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
struct membuf VAR5)
{
struct membuf VAR6 = FUN2(&VAR5, FUN3(struct VAR7, VAR8));
struct membuf VAR9 = FUN2(&VAR5, FUN3(struct VAR7, VAR10));

if (!FUN4(VAR11))
return -VAR12;

if (!FUN5(VAR2->VAR13.VAR14->VAR8))
return -VAR15;

FUN6(VAR2);
FUN7(VAR2);
FUN8(VAR2);

FUN9(&VAR5, &VAR2->VAR13.VAR16, sizeof(struct VAR17));

FUN10(&VAR6, FUN11(VAR2));
FUN10(&VAR9, 0x1ul);
return FUN12(&VAR5, VAR18 * sizeof(unsigned long) -
sizeof(struct VAR17));
}
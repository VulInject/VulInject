static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR4);
struct VAR9 *VAR10 = FUN3(VAR4);
struct VAR11 *VAR12;
union amt_addr VAR13, VAR14;

memset(&VAR13, 0, sizeof(union VAR15));
VAR13.VAR16 = VAR8->VAR13;
memset(&VAR14, 0, sizeof(union VAR15));
VAR14.VAR16 = VAR10->VAR17;

VAR12 = FUN4(VAR6, &VAR13, &VAR14, false);
if (!VAR12) {
VAR12 = FUN5(VAR2, VAR6, &VAR13, &VAR14, false);
if (!FUN6(VAR12)) {
VAR12->VAR18 = VAR19;
if (!FUN7(VAR20, &VAR12->VAR21,
FUN8(FUN9(VAR2))))
FUN10(VAR2->VAR22);
}
}
}
static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);


FUN3(VAR7, VAR8, &VAR4->VAR9);
if (VAR4->VAR9) {
FUN3(VAR7, VAR10, &VAR4->VAR11);
FUN3(VAR12, VAR13, &VAR4->VAR14);

FUN3(VAR15, VAR16, &VAR4->VAR17);
FUN3(VAR15, VAR18, &VAR4->VAR19);

FUN3(VAR12, VAR20, &VAR4->VAR21);
FUN3(VAR22, VAR23, &VAR4->VAR24);
}
}
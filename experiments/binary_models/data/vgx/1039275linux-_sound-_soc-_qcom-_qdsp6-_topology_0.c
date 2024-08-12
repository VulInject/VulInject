static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR2->VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = FUN3(VAR2);
struct VAR12 *VAR13 = FUN4(VAR9);
struct VAR14 *VAR15 = VAR11->VAR16.private;
struct VAR14 *VAR17 = VAR6->VAR16.private;
struct VAR18 *VAR19 = FUN5(VAR13->VAR20);

if (VAR4->VAR21.VAR22.VAR21[0]) {
FUN6(VAR19, VAR17, VAR15, true);
FUN7(VAR9, VAR2, 1, NULL);
} else {
FUN6(VAR19, VAR17, VAR15, false);
FUN7(VAR9, VAR2, 0, NULL);
}
return 0;
}
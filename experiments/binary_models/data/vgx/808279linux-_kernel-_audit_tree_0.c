void FUN1(void)
{
struct list_head VAR1;

FUN2(&VAR2);
FUN3(&VAR1, &VAR3);
while (VAR1.VAR4 != &VAR3) {
struct VAR5 *VAR6;
struct path VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
int VAR12;

VAR6 = FUN4(VAR1.VAR4, struct VAR5, VAR13);
FUN5(VAR6);
FUN6(&VAR1, &VAR6->VAR13);
FUN7(&VAR2);

VAR12 = FUN8(VAR6->VAR14, 0, &VAR7);
if (VAR12)
goto VAR15;

VAR9 = FUN9(&VAR7);
FUN10(&VAR7);
if (FUN11(VAR9))
goto VAR15;

FUN12(&VAR16);
FUN13(VAR11, &VAR6->VAR17, VAR13) {
struct VAR18 *VAR19 = FUN14(VAR11);

VAR11->VAR20 |= 1U<<31;
if (FUN15(VAR21,
(void *)(VAR19->VAR22),
VAR9))
VAR11->VAR20 &= ~(1U<<31);
}
FUN16(&VAR16);
FUN17(VAR6);
FUN18(VAR9);
VAR15:
FUN19(VAR6);
FUN2(&VAR2);
}
FUN20(&VAR1);
FUN7(&VAR2);
}
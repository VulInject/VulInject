static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8;
void *VAR9, *VAR10;

FUN2(&VAR2->mutex);

FUN3("");
VAR9 = VAR4->VAR11.VAR12;
VAR10 = VAR9 + VAR4->VAR11.VAR13;

VAR8 = FUN4(&VAR9, VAR10, FUN5(VAR6));
if (FUN6(VAR8)) {
FUN7("",
(int)FUN8(VAR8));
FUN9(VAR4);
goto VAR14;
}

if (FUN10(VAR6, &VAR8->VAR15) < 0) {
FUN11(VAR8);
goto VAR14;
}

FUN11(VAR2->VAR8);
VAR2->VAR8 = VAR8;

FUN12(VAR2, VAR16, VAR2->VAR8->VAR17);
VAR6->VAR18 = true;

VAR14:
FUN13(&VAR2->mutex);
FUN14(&VAR6->VAR19);
}
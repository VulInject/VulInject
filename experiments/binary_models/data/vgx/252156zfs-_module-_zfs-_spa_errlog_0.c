void
FUN1(VAR1 *VAR2, uint64_t VAR3)
{
VAR4 *VAR5;
avl_tree_t VAR6, VAR7;
int VAR8;

FUN2(&VAR2->VAR9);


if (FUN3(&VAR2->VAR10) == 0 &&
FUN3(&VAR2->VAR11) == 0 &&
!VAR2->VAR12) {
FUN4(&VAR2->VAR9);
return;
}

FUN5(VAR2, &VAR7, &VAR6);
VAR8 = VAR2->VAR12;
VAR2->VAR12 = VAR13;

FUN4(&VAR2->VAR9);
FUN2(&VAR2->VAR14);

VAR5 = FUN6(VAR2->VAR15, VAR3);


FUN7(VAR2, &VAR7, &VAR2->VAR16, VAR5);


if (VAR8) {
if (VAR2->VAR16 != 0)
FUN8(FUN9(VAR2->VAR17,
VAR2->VAR16, VAR5) == 0);
VAR2->VAR16 = VAR2->VAR18;
VAR2->VAR18 = 0;

FUN7(VAR2, &VAR6, &VAR2->VAR16, VAR5);
}


FUN7(VAR2, &VAR6, &VAR2->VAR18, VAR5);


(void) FUN10(VAR2->VAR17, VAR19,
VAR20, sizeof (VAR21), 1,
&VAR2->VAR16, VAR5);
(void) FUN10(VAR2->VAR17, VAR19,
VAR22, sizeof (VAR21), 1,
&VAR2->VAR18, VAR5);

FUN11(VAR5);

FUN4(&VAR2->VAR14);
}
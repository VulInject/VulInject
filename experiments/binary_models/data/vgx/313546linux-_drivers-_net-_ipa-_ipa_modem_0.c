static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = &VAR1->VAR4->VAR3;
int VAR5;


FUN2(VAR1);

VAR5 = FUN3(VAR3);
if (VAR5 < 0) {
FUN4(VAR3, "", VAR5);
goto VAR6;
}

FUN5(VAR1, true);

FUN6(VAR1);

FUN7(VAR1, true);

VAR5 = FUN8(VAR1);
if (VAR5)
FUN4(VAR3, "", VAR5);

VAR5 = FUN9(VAR1);
if (VAR5)
FUN4(VAR3, "", VAR5);

FUN5(VAR1, false);

VAR5 = FUN10(VAR1);
if (VAR5)
FUN4(VAR3, "", VAR5);


VAR5 = FUN11(VAR1);
if (VAR5)
FUN4(VAR3, "", VAR5);

VAR6:
FUN12(VAR3);
(void)FUN13(VAR3);
}
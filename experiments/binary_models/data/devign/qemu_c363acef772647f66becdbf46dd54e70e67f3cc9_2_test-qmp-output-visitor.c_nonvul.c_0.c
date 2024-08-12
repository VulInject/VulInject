static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = FUN2(sizeof(VAR10));
    VAR11->VAR12 = VAR13;
    VAR11->VAR14 = FUN3("");
    VAR11->VAR15.VAR16 = FUN2(sizeof(VAR17));
    VAR11->VAR18 = 41;
    VAR11->VAR15.VAR16->VAR19 = true;
    FUN4(VAR2->VAR20, &VAR11, NULL, &VAR9);
    FUN5(VAR9 == NULL);
    VAR5 = FUN6(VAR2->VAR21);
    FUN5(FUN7(VAR5) == VAR22);
    VAR7 = FUN8(VAR5);
    FUN9(FUN10(VAR7, ""), ==, "");
    FUN9(FUN10(VAR7, ""), ==, "");
    FUN11(FUN12(VAR7, ""), ==, 41);
    FUN11(FUN13(VAR7, ""), ==, true);
    FUN14(VAR11);
    FUN15(VAR7);
}
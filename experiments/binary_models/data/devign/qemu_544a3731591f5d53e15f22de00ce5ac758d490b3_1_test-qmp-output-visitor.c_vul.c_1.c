static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(sizeof(VAR8));
    VAR9->VAR10 = VAR11;
    VAR9->VAR12 = FUN3("");
    VAR9->VAR13.VAR14 = FUN2(sizeof(VAR15));
    VAR9->VAR16 = 41;
    VAR9->VAR13.VAR14->VAR17 = true;
    FUN4(VAR2->VAR18, NULL, &VAR9, &VAR19);
    VAR5 = FUN5(VAR2->VAR20);
    FUN6(FUN7(VAR5) == VAR21);
    VAR7 = FUN8(VAR5);
    FUN9(FUN10(VAR7, ""), ==, "");
    FUN9(FUN10(VAR7, ""), ==, "");
    FUN11(FUN12(VAR7, ""), ==, 41);
    FUN11(FUN13(VAR7, ""), ==, true);
    FUN14(VAR9);
    FUN15(VAR7);
}
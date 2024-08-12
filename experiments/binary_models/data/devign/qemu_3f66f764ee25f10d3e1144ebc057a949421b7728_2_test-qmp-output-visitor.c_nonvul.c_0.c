static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    const char *VAR4 = "";
    VAR5 *VAR6, *VAR7 = NULL;
    const int VAR8 = 10;
    bool VAR9 = true;
    int VAR10 = 10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    for (VAR17 = 0; VAR17 < VAR8; VAR17++)
    {
        VAR6 = FUN2(sizeof(*VAR6));
        VAR6->VAR18 = FUN2(sizeof(*VAR6->VAR18));
        VAR6->VAR18->VAR19 = VAR10 + (VAR8 - VAR17 - 1);
        VAR6->VAR18->VAR20 = VAR9;
        VAR6->VAR18->VAR21 = FUN3(VAR4);
        VAR6->VAR22 = VAR7;
        VAR7 = VAR6;
    }
    FUN4(VAR2->VAR23, &VAR7, NULL, &VAR24);
    VAR14 = FUN5(VAR2->VAR25);
    FUN6(VAR14 != NULL);
    FUN6(FUN7(VAR14) == VAR26);
    VAR16 = FUN8(VAR14);
    FUN6(!FUN9(VAR16));
    VAR17 = 0;
    FUN10(VAR16, VAR12)
    {
        VAR27 *VAR28;
        FUN6(FUN7(VAR12->VAR18) == VAR29);
        VAR28 = FUN11(VAR12->VAR18);
        FUN12(FUN13(VAR28), ==, 3);
        FUN12(FUN14(VAR28, ""), ==, VAR10 + VAR17);
        FUN12(FUN15(VAR28, ""), ==, VAR9);
        FUN16(FUN17(VAR28, ""), ==, VAR4);
        VAR17++;
    }
    FUN12(VAR17, ==, VAR8);
    FUN18(VAR16);
    FUN19(VAR7);
}
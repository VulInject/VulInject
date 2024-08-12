static void FUN1(VAR1 *VAR2, enum spitz_model_e VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9 = NULL;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    const char *VAR13 = VAR2->VAR13;
    if (!VAR13)
        VAR13 = (VAR3 == VAR14) ? "" : "";
    VAR6 = FUN4(VAR11, VAR15.VAR16, VAR13);
    FUN5(VAR6, (VAR3 == VAR17) ? VAR18 : VAR19);
    FUN6(VAR12, NULL, "", VAR20, &VAR21);
    FUN7(VAR12);
    FUN8(VAR12, true);
    FUN9(VAR11, 0, VAR12);
    FUN10(VAR6);
    FUN11(VAR6);
    VAR8 = FUN12("", 0x10800000, NULL);
    if (VAR3 != VAR22)
    {
        VAR9 = FUN12("", 0x08800040, NULL);
    }
    FUN13(VAR6, VAR8, VAR9);
    FUN14(VAR6, (VAR3 == VAR22) ? 1 : 2);
    FUN15(VAR6);
    if (VAR3 == VAR22)
        FUN16(VAR6);
    if (VAR3 == VAR14)
        FUN17(VAR6, 1);
    else if (VAR3 != VAR22)
        FUN17(VAR6, 0);
    VAR15.VAR23 = VAR2->VAR23;
    VAR15.VAR24 = VAR2->VAR24;
    VAR15.VAR25 = VAR2->VAR25;
    VAR15.VAR26 = VAR4;
    FUN18(VAR6->VAR27, &VAR15);
    FUN19(VAR28);
}
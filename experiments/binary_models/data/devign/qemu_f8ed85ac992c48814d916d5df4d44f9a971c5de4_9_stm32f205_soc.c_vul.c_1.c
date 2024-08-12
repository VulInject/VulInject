static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR1 *VAR7, *VAR8, *VAR9;
    VAR10 *VAR11, *VAR12, *VAR13;
    VAR14 *VAR15;
    VAR3 *VAR16 = NULL;
    int VAR17;
    VAR18 *VAR19 = FUN3();
    VAR18 *VAR20 = FUN4(VAR18, 1);
    VAR18 *VAR21 = FUN4(VAR18, 1);
    VAR18 *VAR22 = FUN4(VAR18, 1);
    FUN5(VAR21, NULL, "", VAR23, &VAR24);
    FUN6(VAR22, NULL, "", VAR21, 0, VAR23);
    FUN7(VAR21);
    FUN8(VAR21, true);
    FUN8(VAR22, true);
    FUN9(VAR19, VAR25, VAR21);
    FUN9(VAR19, 0, VAR22);
    FUN5(VAR20, NULL, "", VAR26, &VAR24);
    FUN7(VAR20);
    FUN9(VAR19, VAR27, VAR20);
    VAR15 = FUN10(FUN3(), VAR23, 96, VAR6->VAR28, VAR6->VAR29);
    VAR7 = FUN11(&VAR6->VAR30);
    FUN12(FUN13(&VAR6->VAR30), true, "", &VAR16);
    if (VAR16 != NULL)
    {
        FUN14(VAR4, VAR16);
        return;
    }
    VAR11 = FUN15(VAR7);
    FUN16(VAR11, 0, 0x40013800);
    FUN17(VAR11, 0, VAR15[71]);
    for (VAR17 = 0; VAR17 < VAR31; VAR17++)
    {
        VAR8 = FUN11(&(VAR6->VAR32[VAR17]));
        FUN12(FUN13(&VAR6->VAR32[VAR17]), true, "", &VAR16);
        if (VAR16 != NULL)
        {
            FUN14(VAR4, VAR16);
            return;
        }
        VAR12 = FUN15(VAR8);
        FUN16(VAR12, 0, VAR33[VAR17]);
        FUN17(VAR12, 0, VAR15[VAR34[VAR17]]);
    }
    for (VAR17 = 0; VAR17 < VAR35; VAR17++)
    {
        VAR9 = FUN11(&(VAR6->VAR36[VAR17]));
        FUN18(VAR9, "", 1000000000);
        FUN12(FUN13(&VAR6->VAR36[VAR17]), true, "", &VAR16);
        if (VAR16 != NULL)
        {
            FUN14(VAR4, VAR16);
            return;
        }
        VAR13 = FUN15(VAR9);
        FUN16(VAR13, 0, VAR37[VAR17]);
        FUN17(VAR13, 0, VAR15[VAR38[VAR17]]);
    }
}
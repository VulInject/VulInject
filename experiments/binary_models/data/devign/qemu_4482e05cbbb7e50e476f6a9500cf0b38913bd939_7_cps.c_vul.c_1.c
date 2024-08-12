static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR3 *VAR12 = NULL;
    target_ulong VAR13;
    bool VAR14 = false;
    for (VAR11 = 0; VAR11 < VAR6->VAR15; VAR11++)
    {
        VAR10 = FUN3(VAR6->VAR16);
        if (VAR10 == NULL)
        {
            FUN4(VAR4, "", VAR17);
            return;
        }
        FUN5(VAR10);
        FUN6(VAR10);
        VAR8 = &VAR10->VAR8;
        if (FUN7(VAR8))
        {
            VAR14 = true;
            VAR8->VAR18 = FUN8(&VAR6->VAR19);
        }
        FUN9(VAR20, VAR10);
    }
    VAR10 = FUN10(VAR21);
    VAR8 = &VAR10->VAR8;
    if (VAR14)
    {
        FUN11(&VAR6->VAR19, sizeof(VAR6->VAR19), VAR22);
        FUN12(FUN13(&VAR6->VAR19), FUN14());
        FUN15(FUN16(&VAR6->VAR19), 16, "", &VAR12);
        FUN15(FUN16(&VAR6->VAR19), 16, "", &VAR12);
        FUN17(FUN16(&VAR6->VAR19), true, "", &VAR12);
        if (VAR12 != NULL)
        {
            FUN18(VAR4, VAR12);
            return;
        }
        FUN19(&VAR6->VAR23, 0, FUN20(FUN21(&VAR6->VAR19), 0));
    }
    FUN11(&VAR6->VAR24, sizeof(VAR6->VAR24), VAR25);
    FUN12(FUN13(&VAR6->VAR24), FUN14());
    FUN15(FUN16(&VAR6->VAR24), VAR6->VAR15, "", &VAR12);
    FUN15(FUN16(&VAR6->VAR24), 1, "", &VAR12);
    FUN17(FUN16(&VAR6->VAR24), true, "", &VAR12);
    if (VAR12 != NULL)
    {
        FUN18(VAR4, VAR12);
        return;
    }
    FUN19(&VAR6->VAR23, 0, FUN20(FUN21(&VAR6->VAR24), 0));
    FUN11(&VAR6->VAR26, sizeof(VAR6->VAR26), VAR27);
    FUN12(FUN13(&VAR6->VAR26), FUN14());
    FUN15(FUN16(&VAR6->VAR26), VAR6->VAR15, "", &VAR12);
    FUN15(FUN16(&VAR6->VAR26), 128, "", &VAR12);
    FUN17(FUN16(&VAR6->VAR26), true, "", &VAR12);
    if (VAR12 != NULL)
    {
        FUN18(VAR4, VAR12);
        return;
    }
    FUN19(&VAR6->VAR23, 0, FUN20(FUN21(&VAR6->VAR26), 0));
    VAR13 = VAR8->VAR28 << 4;
    FUN11(&VAR6->VAR29, sizeof(VAR6->VAR29), VAR30);
    FUN12(FUN13(&VAR6->VAR29), FUN14());
    FUN15(FUN16(&VAR6->VAR29), VAR6->VAR15, "", &VAR12);
    FUN15(FUN16(&VAR6->VAR29), 0x800, "", &VAR12);
    FUN15(FUN16(&VAR6->VAR29), VAR13, "", &VAR12);
    FUN22(FUN16(&VAR6->VAR29), FUN16(&VAR6->VAR26.VAR31), "", &VAR12);
    FUN22(FUN16(&VAR6->VAR29), FUN16(&VAR6->VAR24.VAR31), "", &VAR12);
    FUN17(FUN16(&VAR6->VAR29), true, "", &VAR12);
    if (VAR12 != NULL)
    {
        FUN18(VAR4, VAR12);
        return;
    }
    FUN19(&VAR6->VAR23, VAR13, FUN20(FUN21(&VAR6->VAR29), 0));
}
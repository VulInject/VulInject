void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, int64_t VAR6, BlockdevOnError VAR7, const char *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    VAR13 *VAR14 = NULL;
    int VAR15;
    int VAR16;
    VAR2 *VAR17;
    VAR2 *VAR18;
    VAR2 *VAR19 = NULL;
    VAR9 *VAR20 = NULL;
    int VAR21;
    assert(VAR5 != VAR3);
    if (VAR5 == VAR4)
    {
        FUN2(VAR10, "");
        return;
    }
    VAR18 = FUN3(VAR3, VAR5);
    if (VAR18 == NULL)
    {
        FUN2(VAR10, "", VAR5->VAR22);
        return;
    }
    VAR12 = FUN4(VAR1, &VAR23, VAR3, 0, VAR24, VAR6, VAR25, NULL, NULL, VAR10);
    if (!VAR12)
    {
        return;
    }
    VAR16 = FUN5(VAR4);
    VAR15 = FUN5(VAR18);
    if (!(VAR16 & VAR26))
    {
        VAR14 = FUN6(VAR14, VAR4, NULL, VAR16 | VAR26);
    }
    if (!(VAR15 & VAR26))
    {
        VAR14 = FUN6(VAR14, VAR18, NULL, VAR15 | VAR26);
    }
    if (VAR14)
    {
        FUN7(FUN8(VAR3), VAR14, &VAR20);
        if (VAR20 != NULL)
        {
            FUN9(VAR10, VAR20);
            goto VAR27;
        }
    }
    VAR19 = FUN10(&VAR28, NULL, 0, VAR10);
    if (VAR19 == NULL)
    {
        goto VAR27;
    }
    FUN11(VAR19, VAR5);
    FUN11(VAR18, VAR19);
    VAR12->VAR19 = VAR19;
    FUN12(VAR19);
    assert(FUN13(VAR5, VAR4));
    for (VAR17 = VAR5; VAR17 != VAR4; VAR17 = FUN14(VAR17))
    {
        VAR21 = FUN15(&VAR12->VAR29, "", VAR17, 0, VAR30 | VAR31, VAR10);
        if (VAR21 < 0)
        {
            goto VAR27;
        }
    }
    VAR21 = FUN15(&VAR12->VAR29, "", VAR4, 0, VAR24, VAR10);
    if (VAR21 < 0)
    {
        goto VAR27;
    }
    VAR21 = FUN15(&VAR12->VAR29, "", VAR18, VAR32, VAR24, VAR10);
    if (VAR21 < 0)
    {
        goto VAR27;
    }
    VAR12->VAR4 = FUN16(VAR33 | VAR31 | VAR34, VAR33 | VAR32 | VAR30);
    VAR21 = FUN17(VAR12->VAR4, VAR4, VAR10);
    if (VAR21 < 0)
    {
        goto VAR27;
    }
    VAR12->VAR5 = FUN16(0, VAR24);
    FUN17(VAR12->VAR5, VAR5, VAR10);
    if (VAR21 < 0)
    {
        goto VAR27;
    }
    VAR12->VAR35 = VAR3;
    VAR12->VAR36 = VAR16;
    VAR12->VAR15 = VAR15;
    VAR12->VAR8 = FUN18(VAR8);
    VAR12->VAR7 = VAR7;
    FUN19(VAR3, VAR4, VAR5, VAR12);
    FUN20(&VAR12->VAR29);
    return;
VAR27:
    if (VAR12->VAR4)
    {
        FUN21(VAR12->VAR4);
    }
    if (VAR12->VAR5)
    {
        FUN21(VAR12->VAR5);
    }
    if (VAR19)
    {
        FUN11(VAR18, VAR5);
    }
    FUN22(&VAR12->VAR29);
}
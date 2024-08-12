static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    int VAR8 = 0;
    int VAR9, VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13;
    ThrottleConfig VAR14;
    int VAR15 = 0;
    VAR5 *VAR16 = NULL;
    VAR17 *VAR18;
    const char *VAR19;
    bool VAR20;
    BlockdevDetectZeroesOptions VAR21 = VAR22;
    const char *VAR23 = NULL;
    VAR19 = FUN2(VAR4, "");
    VAR18 = FUN3(&VAR24, VAR19, 1, &VAR16);
    if (VAR16)
    {
        FUN4(VAR6, VAR16);
        goto VAR25;
    }
    FUN5(VAR18, VAR4, &VAR16);
    if (VAR16)
    {
        FUN4(VAR6, VAR16);
        goto VAR26;
    }
    if (VAR19)
    {
        FUN6(VAR4, "");
    }
    VAR20 = !!FUN7(VAR4);
    VAR15 = FUN8(VAR18, "", 0);
    VAR27 = FUN8(VAR18, "", true);
    VAR28 = FUN8(VAR18, "", true);
    FUN9(VAR18, &VAR8, &VAR23, &VAR14, &VAR21, &VAR16);
    if (VAR16)
    {
        FUN4(VAR6, VAR16);
        goto VAR26;
    }
    if ((VAR7 = FUN10(VAR18, "")) != NULL)
    {
        if (FUN11(VAR7))
        {
            FUN12("");
            FUN13(VAR29, NULL);
            FUN12("");
            goto VAR26;
        }
        if (FUN14(VAR4, ""))
        {
            FUN15(VAR6, "");
            goto VAR26;
        }
        FUN16(VAR4, "", FUN17(VAR7));
    }
    VAR10 = VAR30;
    if ((VAR7 = FUN10(VAR18, "")) != NULL)
    {
        VAR10 = FUN18(VAR7, 0, &VAR16);
        if (VAR16)
        {
            FUN4(VAR6, VAR16);
            goto VAR26;
        }
    }
    VAR9 = VAR31;
    if ((VAR7 = FUN10(VAR18, "")) != NULL)
    {
        VAR9 = FUN18(VAR7, 1, &VAR16);
        if (VAR16)
        {
            FUN4(VAR6, VAR16);
            goto VAR26;
        }
    }
    if (VAR15)
    {
        VAR8 &= ~VAR32;
        VAR8 |= (VAR33 | VAR34 | VAR35);
    }
    if ((!VAR2 || !*VAR2) && !VAR20)
    {
        VAR36 *VAR37;
        VAR11 = FUN19(FUN20(VAR18), VAR6);
        if (!VAR11)
        {
            goto VAR26;
        }
        VAR37 = FUN21(VAR11);
        VAR37->VAR38 = VAR8;
        VAR37->VAR39 = !(VAR8 & VAR40);
        VAR37->VAR21 = VAR21;
        if (FUN22(&VAR14))
        {
            if (!VAR23)
            {
                VAR23 = FUN23(VAR11);
            }
            VAR37->VAR41 = FUN24(VAR23);
            VAR37->VAR42 = FUN25(VAR23);
            VAR37->VAR42->VAR14 = VAR14;
        }
        FUN26(VAR4);
    }
    else
    {
        if (VAR2 && !*VAR2)
        {
            VAR2 = NULL;
        }
        VAR11 = FUN27(FUN20(VAR18), VAR2, NULL, VAR4, VAR8, VAR6);
        if (!VAR11)
        {
            goto VAR43;
        }
        VAR13 = FUN28(VAR11);
        VAR13->VAR21 = VAR21;
        if (FUN22(&VAR14))
        {
            if (!VAR23)
            {
                VAR23 = FUN23(VAR11);
            }
            FUN29(VAR13, VAR23);
            FUN30(VAR13, &VAR14);
        }
        if (FUN31(VAR13))
        {
            VAR44 = 0;
        }
        FUN32(FUN33(VAR11), VAR27, VAR28);
    }
    FUN34(VAR11, VAR9, VAR10);
VAR43:
    FUN35(VAR18);
    return VAR11;
VAR26:
    FUN35(VAR18);
VAR25:
    FUN26(VAR4);
    return NULL;
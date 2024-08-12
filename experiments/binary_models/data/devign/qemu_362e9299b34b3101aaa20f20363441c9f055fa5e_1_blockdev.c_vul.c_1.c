static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    int VAR8 = 0;
    int VAR9, VAR10;
    bool VAR11, VAR12;
    VAR1 *VAR13;
    VAR14 *VAR15;
    ThrottleConfig VAR16;
    int VAR17 = 0;
    VAR5 *VAR18 = NULL;
    VAR19 *VAR20;
    const char *VAR21;
    bool VAR22;
    BlockdevDetectZeroesOptions VAR23 = VAR24;
    const char *VAR25 = NULL;
    VAR21 = FUN2(VAR4, "");
    VAR20 = FUN3(&VAR26, VAR21, 1, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR27;
    }
    FUN5(VAR20, VAR4, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR28;
    }
    if (VAR21)
    {
        FUN6(VAR4, "");
    }
    VAR22 = !!FUN7(VAR4);
    VAR17 = FUN8(VAR20, "", 0);
    FUN9(VAR20, &VAR8, &VAR25, &VAR16, &VAR23, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR28;
    }
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        if (FUN11(VAR7))
        {
            FUN12("");
            FUN13(VAR29, NULL);
            FUN12("");
            goto VAR28;
        }
        if (FUN14(VAR4, ""))
        {
            FUN15(VAR6, "");
            goto VAR28;
        }
        FUN16(VAR4, "", FUN17(VAR7));
    }
    VAR10 = VAR30;
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        VAR10 = FUN18(VAR7, 0, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR28;
        }
    }
    VAR9 = VAR31;
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        VAR9 = FUN18(VAR7, 1, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR28;
        }
    }
    if (VAR17)
    {
        VAR8 &= ~VAR32;
        VAR8 |= (VAR33 | VAR34 | VAR35);
    }
    if ((!VAR2 || !*VAR2) && !VAR22)
    {
        VAR36 *VAR37;
        VAR13 = FUN19(FUN20(VAR20), VAR6);
        if (!VAR13)
        {
            goto VAR28;
        }
        VAR37 = FUN21(VAR13);
        VAR37->VAR38 = VAR8;
        VAR37->VAR39 = !(VAR8 & VAR40);
        VAR37->VAR23 = VAR23;
        if (FUN22(&VAR16))
        {
            if (!VAR25)
            {
                VAR25 = FUN23(VAR13);
            }
            VAR37->VAR41 = FUN24(VAR25);
            VAR37->VAR42 = FUN25(VAR25);
            VAR37->VAR42->VAR16 = VAR16;
        }
        FUN26(VAR4);
    }
    else
    {
        if (VAR2 && !*VAR2)
        {
            VAR2 = NULL;
        }
        VAR13 = FUN27(FUN20(VAR20), VAR2, NULL, VAR4, VAR8, VAR6);
        if (!VAR13)
        {
            goto VAR43;
        }
        VAR15 = FUN28(VAR13);
        VAR15->VAR23 = VAR23;
        if (FUN22(&VAR16))
        {
            if (!VAR25)
            {
                VAR25 = FUN23(VAR13);
            }
            FUN29(VAR15, VAR25);
            FUN30(VAR15, &VAR16);
        }
        if (FUN31(VAR15))
        {
            VAR44 = 0;
        }
        FUN32(FUN33(VAR13), VAR11, VAR12);
    }
    FUN34(VAR13, VAR9, VAR10);
VAR43:
    FUN35(VAR20);
    return VAR13;
VAR28:
    FUN35(VAR20);
VAR27:
    FUN26(VAR4);
    return NULL;
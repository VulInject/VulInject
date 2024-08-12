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
    VAR3 *VAR21 = NULL;
    VAR22 *VAR23 = NULL;
    const char *VAR24;
    bool VAR25;
    BlockdevDetectZeroesOptions VAR26 = VAR27;
    const char *VAR28 = NULL;
    VAR24 = FUN2(VAR4, "");
    VAR20 = FUN3(&VAR29, VAR24, 1, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR30;
    }
    FUN5(VAR20, VAR4, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR31;
    }
    if (VAR24)
    {
        FUN6(VAR4, "");
    }
    VAR25 = !!FUN7(VAR4);
    VAR17 = FUN8(VAR20, "", 0);
    VAR11 = FUN8(VAR20, "", true);
    VAR12 = FUN8(VAR20, "", true);
    FUN9(VAR4, &VAR21, "");
    FUN10(VAR21, &VAR23);
    if (FUN7(VAR21) != 0)
    {
        FUN11(VAR6, "", FUN12(VAR21)->VAR32);
        goto VAR31;
    }
    FUN13(VAR20, &VAR8, &VAR28, &VAR16, &VAR26, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR31;
    }
    if ((VAR7 = FUN14(VAR20, "")) != NULL)
    {
        if (FUN15(VAR7))
        {
            FUN16("");
            FUN17(VAR33, NULL);
            FUN16("");
            goto VAR31;
        }
        if (FUN18(VAR4, ""))
        {
            FUN11(VAR6, "");
            goto VAR31;
        }
        FUN19(VAR4, "", FUN20(VAR7));
    }
    VAR10 = VAR34;
    if ((VAR7 = FUN14(VAR20, "")) != NULL)
    {
        VAR10 = FUN21(VAR7, 0, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR31;
        }
    }
    VAR9 = VAR35;
    if ((VAR7 = FUN14(VAR20, "")) != NULL)
    {
        VAR9 = FUN21(VAR7, 1, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR31;
        }
    }
    if (VAR17)
    {
        VAR8 &= ~VAR36;
        VAR8 |= (VAR37 | VAR38 | VAR39);
    }
    if ((!VAR2 || !*VAR2) && !VAR25)
    {
        VAR40 *VAR41;
        VAR13 = FUN22(FUN23(VAR20), VAR6);
        if (!VAR13)
        {
            goto VAR31;
        }
        VAR41 = FUN24(VAR13);
        VAR41->VAR42 = VAR8;
        VAR41->VAR43 = !(VAR8 & VAR44);
        VAR41->VAR26 = VAR26;
        if (FUN25(&VAR16))
        {
            if (!VAR28)
            {
                VAR28 = FUN26(VAR13);
            }
            VAR41->VAR45 = FUN27(VAR28);
            VAR41->VAR46 = FUN28(VAR28);
            VAR41->VAR46->VAR16 = VAR16;
        }
        FUN29(VAR4);
    }
    else
    {
        if (VAR2 && !*VAR2)
        {
            VAR2 = NULL;
        }
        VAR13 = FUN30(FUN23(VAR20), VAR2, NULL, VAR4, VAR8, VAR6);
        if (!VAR13)
        {
            goto VAR47;
        }
        VAR15 = FUN31(VAR13);
        VAR15->VAR26 = VAR26;
        if (FUN25(&VAR16))
        {
            if (!VAR28)
            {
                VAR28 = FUN26(VAR13);
            }
            FUN32(VAR15, VAR28);
            FUN33(VAR15, &VAR16);
        }
        if (FUN34(VAR15))
        {
            VAR48 = 0;
        }
        FUN35(FUN36(VAR13), VAR11, VAR12);
        if (!FUN37(FUN36(VAR13), VAR23, VAR6))
        {
            FUN38(VAR13);
            VAR13 = NULL;
            goto VAR47;
        }
    }
    FUN39(VAR13, VAR9, VAR10);
VAR47:
    FUN40(VAR20);
    FUN29(VAR21);
    FUN29(VAR23);
    return VAR13;
VAR31:
    FUN40(VAR20);
    FUN29(VAR21);
    FUN29(VAR23);
VAR30:
    FUN29(VAR4);
    return NULL;
}
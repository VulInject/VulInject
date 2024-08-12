static VAR1 *FUN1(const char *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR1 *VAR7, const VAR8 *VAR9, VAR10 **VAR11)
{
    int VAR12;
    VAR13 *VAR14 = NULL;
    VAR1 *VAR15;
    VAR16 *VAR17 = NULL;
    const char *VAR18;
    const char *VAR19;
    VAR10 *VAR20 = NULL;
    VAR4 *VAR21 = NULL;
    int VAR22 = 0;
    assert(!VAR9 || !VAR6);
    assert(!VAR9 == !VAR7);
    if (VAR3)
    {
        bool VAR23 = VAR5 ? FUN2(VAR5) : false;
        FUN3(VAR5);
        if (VAR2 || VAR23)
        {
            FUN4(VAR11, ""
                             "");
            return NULL;
        }
        VAR15 = FUN5(VAR3, VAR3, VAR11);
        if (!VAR15)
        {
            return NULL;
        }
        FUN6(VAR15);
        return VAR15;
    }
    VAR15 = FUN7();
    if (VAR5 == NULL)
    {
        VAR5 = FUN8();
    }
    FUN9(VAR5, &VAR2, &VAR20);
    if (VAR20)
    {
        goto VAR24;
    }
    VAR15->VAR25 = FUN10(VAR5);
    if (VAR9)
    {
        VAR15->VAR26 = VAR7;
        VAR9->FUN11(&VAR6, VAR5, VAR7->VAR27, VAR7->VAR5);
    }
    VAR12 = FUN12(&VAR5, VAR2, &VAR6, &VAR20);
    if (VAR20)
    {
        goto VAR24;
    }
    if (FUN13(FUN14(VAR5, VAR28), "") && !FUN15(VAR5, VAR28, false))
    {
        VAR6 |= (VAR29 | VAR30);
    }
    else
    {
        VAR6 &= ~VAR29;
    }
    if (VAR6 & VAR31)
    {
        VAR21 = FUN8();
        FUN16(&VAR22, VAR21, VAR6, VAR5);
        FUN17(VAR5, VAR28);
        FUN18(&VAR6, VAR5, VAR6, VAR5);
    }
    VAR15->VAR27 = VAR6;
    VAR15->VAR5 = VAR5;
    VAR5 = FUN10(VAR5);
    VAR18 = FUN14(VAR5, "");
    if (VAR18)
    {
        VAR17 = FUN19(VAR18);
        if (!VAR17)
        {
            FUN4(VAR11, "", VAR18);
            goto VAR24;
        }
    }
    assert(VAR18 || !(VAR6 & VAR32));
    VAR19 = FUN14(VAR5, "");
    if (VAR19 && *VAR19 == '')
    {
        VAR6 |= VAR33;
        FUN17(VAR5, "");
    }
    if ((VAR6 & VAR32) == 0)
    {
        VAR1 *VAR34;
        VAR34 = FUN20(VAR2, VAR5, "", VAR15, &VAR35, true, &VAR20);
        if (VAR20)
        {
            goto VAR24;
        }
        if (VAR34 != NULL)
        {
            VAR14 = FUN21(VAR36, VAR37);
            FUN22(VAR14, VAR34, &VAR20);
            FUN23(VAR34);
            if (VAR20)
            {
                goto VAR24;
            }
            FUN24(VAR5, "", FUN25(VAR34));
        }
    }
    VAR15->VAR38 = !VAR17;
    if (!VAR17 && VAR14)
    {
        VAR12 = FUN26(VAR14, VAR2, &VAR17, &VAR20);
        if (VAR12 < 0)
        {
            goto VAR24;
        }
        FUN24(VAR15->VAR5, "", VAR17->VAR39);
        FUN24(VAR5, "", VAR17->VAR39);
    }
    else if (!VAR17)
    {
        FUN4(VAR11, "");
        goto VAR24;
    }
    assert(!!(VAR6 & VAR32) == !!VAR17->VAR40);
    assert(!(VAR6 & VAR32) || !VAR14);
    VAR12 = FUN27(VAR15, VAR14, VAR5, &VAR20);
    if (VAR12 < 0)
    {
        goto VAR24;
    }
    if (VAR14)
    {
        FUN28(VAR14);
        VAR14 = NULL;
    }
    if ((VAR6 & VAR33) == 0)
    {
        VAR12 = FUN29(VAR15, VAR5, "", &VAR20);
        if (VAR12 < 0)
        {
            goto VAR41;
        }
    }
    FUN30(VAR15);
    if (FUN2(VAR5) != 0)
    {
        const VAR42 *VAR43 = FUN31(VAR5);
        if (VAR6 & VAR32)
        {
            FUN4(VAR11, ""
                             "",
                       VAR17->VAR39, VAR43->VAR44);
        }
        else
        {
            FUN4(VAR11, "", VAR17->VAR39, VAR43->VAR44);
        }
        goto VAR41;
    }
    FUN32(VAR15, true);
    FUN3(VAR5);
    if (VAR22)
    {
        VAR1 *VAR45;
        VAR45 = FUN33(VAR15, VAR22, VAR21, &VAR20);
        VAR21 = NULL;
        if (VAR20)
        {
            goto VAR41;
        }
        FUN23(VAR15);
        VAR15 = VAR45;
    }
    return VAR15;
VAR24:
    FUN28(VAR14);
    if (VAR15->VAR14 != NULL)
    {
        FUN34(VAR15, VAR15->VAR14);
    }
    FUN3(VAR21);
    FUN3(VAR15->VAR25);
    FUN3(VAR15->VAR5);
    FUN3(VAR5);
    VAR15->VAR5 = NULL;
    VAR15->VAR25 = NULL;
    FUN23(VAR15);
    FUN35(VAR11, VAR20);
    return NULL;
VAR41:
    FUN23(VAR15);
    FUN3(VAR21);
    FUN3(VAR5);
    FUN35(VAR11, VAR20);
    return NULL;
}
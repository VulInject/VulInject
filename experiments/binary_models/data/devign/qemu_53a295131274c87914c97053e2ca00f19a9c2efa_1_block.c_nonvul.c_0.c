int FUN1(VAR1 **VAR2, const char *VAR3, const char *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    int VAR12;
    VAR1 *VAR13 = NULL, *VAR14;
    const char *VAR15;
    VAR10 *VAR16 = NULL;
    int VAR17 = 0;
    assert(VAR2);
    if (VAR4)
    {
        bool VAR18 = VAR6 ? FUN2(VAR6) : false;
        FUN3(VAR6);
        if (*VAR2)
        {
            FUN4(VAR11, ""
                             "");
            return -VAR19;
        }
        if (VAR3 || VAR18)
        {
            FUN4(VAR11, ""
                             "");
            return -VAR19;
        }
        VAR14 = FUN5(VAR4, VAR4, VAR11);
        if (!VAR14)
        {
            return -VAR20;
        }
        FUN6(VAR14);
        *VAR2 = VAR14;
        return 0;
    }
    if (*VAR2)
    {
        VAR14 = *VAR2;
    }
    else
    {
        VAR14 = FUN7();
    }
    if (VAR6 == NULL)
    {
        VAR6 = FUN8();
    }
    VAR12 = FUN9(&VAR6, &VAR3, &VAR7, VAR9, &VAR16);
    if (VAR16)
    {
        goto VAR21;
    }
    VAR9 = NULL;
    VAR15 = FUN10(VAR6, "");
    if (VAR15)
    {
        VAR9 = FUN11(VAR15);
        FUN12(VAR6, "");
        if (!VAR9)
        {
            FUN4(VAR11, "", VAR15);
            VAR12 = -VAR19;
            goto VAR21;
        }
    }
    assert(VAR15 || !(VAR7 & VAR22));
    VAR14->VAR6 = VAR6;
    VAR6 = FUN13(VAR6);
    if ((VAR7 & VAR22) == 0)
    {
        if (VAR7 & VAR23)
        {
            VAR7 |= VAR24;
        }
        if (VAR7 & VAR25)
        {
            VAR17 = FUN14(VAR7);
            VAR7 = FUN15(VAR7);
        }
        assert(VAR13 == NULL);
        VAR12 = FUN16(&VAR13, VAR3, VAR6, "", FUN17(VAR7), true, &VAR16);
        if (VAR12 < 0)
        {
            goto VAR21;
        }
    }
    VAR14->VAR26 = !VAR9;
    if (!VAR9 && VAR13)
    {
        VAR12 = FUN18(VAR13, VAR3, &VAR9, &VAR16);
        if (VAR12 < 0)
        {
            goto VAR21;
        }
    }
    else if (!VAR9)
    {
        FUN4(VAR11, "");
        VAR12 = -VAR19;
        goto VAR21;
    }
    assert(!!(VAR7 & VAR22) == !!VAR9->VAR27);
    assert(!(VAR7 & VAR22) || !VAR13);
    VAR12 = FUN19(VAR14, VAR13, VAR6, VAR7, VAR9, &VAR16);
    if (VAR12 < 0)
    {
        goto VAR21;
    }
    if (VAR13 && (VAR14->VAR13 != VAR13))
    {
        FUN20(VAR13);
        VAR13 = NULL;
    }
    if ((VAR7 & VAR28) == 0)
    {
        VAR5 *VAR29;
        FUN21(VAR6, &VAR29, "");
        VAR12 = FUN22(VAR14, VAR29, &VAR16);
        if (VAR12 < 0)
        {
            goto VAR30;
        }
    }
    FUN23(VAR14);
    if (VAR17)
    {
        VAR12 = FUN24(VAR14, VAR17, &VAR16);
        if (VAR16)
        {
            goto VAR30;
        }
    }
    if (VAR6 && (FUN2(VAR6) != 0))
    {
        const VAR31 *VAR32 = FUN25(VAR6);
        if (VAR7 & VAR22)
        {
            FUN4(VAR11, ""
                             "",
                       VAR9->VAR33, VAR32->VAR34);
        }
        else
        {
            FUN4(VAR11, ""
                             "",
                       VAR9->VAR33, FUN26(VAR14), VAR32->VAR34);
        }
        VAR12 = -VAR19;
        goto VAR30;
    }
    if (!FUN27(VAR14))
    {
        if (VAR14->VAR35)
        {
            FUN28(VAR14->VAR35, true);
        }
    }
    else if (!FUN29(VAR36) && !FUN29(VAR37) && !FUN29(VAR38))
    {
        FUN4(VAR11, "");
        VAR12 = -VAR39;
        goto VAR30;
    }
    FUN3(VAR6);
    *VAR2 = VAR14;
    return 0;
VAR21:
    if (VAR13 != NULL)
    {
        FUN20(VAR13);
    }
    FUN3(VAR14->VAR6);
    FUN3(VAR6);
    VAR14->VAR6 = NULL;
    if (!*VAR2)
    {
        FUN20(VAR14);
    }
    if (VAR16)
    {
        FUN30(VAR11, VAR16);
    }
    return VAR12;
VAR30:
    if (*VAR2)
    {
        FUN31(VAR14);
    }
    else
    {
        FUN20(VAR14);
    }
    FUN3(VAR6);
    if (VAR16)
    {
        FUN30(VAR11, VAR16);
    }
    return VAR12;
}
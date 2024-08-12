static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    const char *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11, VAR12;
    VAR1 *VAR13;
    ThrottleConfig VAR14;
    int VAR15 = 0;
    bool VAR16;
    int VAR17;
    VAR5 *VAR18 = NULL;
    VAR19 *VAR20;
    const char *VAR21;
    bool VAR22;
    VAR23 *VAR24 = NULL;
    VAR21 = FUN2(VAR4, "");
    VAR20 = FUN3(&VAR25, VAR21, 1, &VAR18);
    if (FUN4(&VAR18))
    {
        FUN5(VAR6, VAR18);
        return NULL;
    }
    FUN6(VAR20, VAR4, &VAR18);
    if (FUN4(&VAR18))
    {
        FUN5(VAR6, VAR18);
        goto VAR26;
    }
    if (VAR21)
    {
        FUN7(VAR4, "");
    }
    VAR22 = !!FUN8(VAR4);
    VAR15 = FUN9(VAR20, "", 0);
    VAR9 = FUN9(VAR20, "", 0);
    VAR16 = FUN9(VAR20, "", false);
    VAR8 = FUN10(VAR20, "");
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        if (FUN11(VAR7, &VAR10) != 0)
        {
            FUN12(VAR6, "");
            goto VAR26;
        }
    }
    if (FUN9(VAR20, "", true))
    {
        VAR10 |= VAR27;
    }
    if (FUN9(VAR20, "", false))
    {
        VAR10 |= VAR28;
    }
    if (FUN9(VAR20, "", false))
    {
        VAR10 |= VAR29;
    }
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        if (!strcmp(VAR7, ""))
        {
            VAR10 |= VAR30;
        }
        else if (!strcmp(VAR7, ""))
        {
        }
        else
        {
            FUN12(VAR6, "");
            goto VAR26;
        }
    }
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        if (FUN13(VAR7))
        {
            FUN14("");
            FUN15(VAR31, NULL);
            FUN14("");
            goto VAR26;
        }
        VAR24 = FUN16(VAR7);
        if (!VAR24)
        {
            FUN12(VAR6, "", VAR7);
            goto VAR26;
        }
    }
    memset(&VAR14, 0, sizeof(VAR14));
    VAR14.VAR32[VAR33].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR35].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR36].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR37].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR38].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR39].VAR34 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR33].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR35].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR36].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR37].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR38].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR32[VAR39].VAR40 = FUN17(VAR20, "", 0);
    VAR14.VAR41 = FUN17(VAR20, "", 0);
    if (!FUN18(&VAR14, &VAR18))
    {
        FUN5(VAR6, VAR18);
        goto VAR26;
    }
    VAR12 = VAR42;
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        VAR12 = FUN19(VAR7, 0, &VAR18);
        if (FUN4(&VAR18))
        {
            FUN5(VAR6, VAR18);
            goto VAR26;
        }
    }
    VAR11 = VAR43;
    if ((VAR7 = FUN10(VAR20, "")) != NULL)
    {
        VAR11 = FUN19(VAR7, 1, &VAR18);
        if (FUN4(&VAR18))
        {
            FUN5(VAR6, VAR18);
            goto VAR26;
        }
    }
    VAR13 = FUN20(sizeof(*VAR13));
    VAR13->VAR21 = FUN21(FUN22(VAR20));
    VAR13->VAR44 = FUN23(VAR13->VAR21);
    VAR13->VAR44->VAR45 = VAR15 ? VAR46 : 0;
    VAR13->VAR44->VAR47 = VAR9;
    VAR13->VAR48 = 1;
    if (VAR8 != NULL)
    {
        VAR13->VAR8 = FUN21(VAR8);
    }
    FUN24(&VAR49, VAR13, VAR50);
    FUN25(VAR13->VAR44, VAR11, VAR12);
    if (FUN26(&VAR14))
    {
        FUN27(VAR13->VAR44);
        FUN28(VAR13->VAR44, &VAR14);
    }
    if (!VAR2 || !*VAR2)
    {
        if (VAR22)
        {
            VAR2 = NULL;
        }
        else
        {
            FUN29(VAR4);
            FUN30(VAR20);
            return VAR13;
        }
    }
    if (VAR15)
    {
        VAR10 &= ~VAR51;
        VAR10 |= (VAR46 | VAR27 | VAR29);
    }
    if (VAR16)
    {
        VAR10 |= VAR52;
    }
    if (FUN31(VAR53))
    {
        VAR10 |= VAR54;
    }
    VAR10 |= VAR9 ? 0 : VAR55;
    FUN32(VAR4);
    VAR17 = FUN33(VAR13->VAR44, VAR2, VAR4, VAR10, VAR24, &VAR18);
    if (VAR17 < 0)
    {
        FUN12(VAR6, "", VAR2 ?: VAR13->VAR21, FUN34(VAR18));
        FUN35(VAR18);
        goto VAR56;
    }
    if (FUN36(VAR13->VAR44))
        VAR57 = 0;
    FUN29(VAR4);
    FUN30(VAR20);
    return VAR13;
VAR56:
    FUN37(VAR13->VAR44);
    FUN38(VAR13->VAR21);
    FUN39(&VAR49, VAR13, VAR50);
    FUN38(VAR13);
VAR26:
    FUN29(VAR4);
    FUN30(VAR20);
    return NULL;
}
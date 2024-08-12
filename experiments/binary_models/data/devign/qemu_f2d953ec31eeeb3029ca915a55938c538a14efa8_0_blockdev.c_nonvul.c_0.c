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
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        return NULL;
    }
    FUN5(VAR20, VAR4, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR26;
    }
    if (VAR21)
    {
        FUN6(VAR4, "");
    }
    VAR22 = !!FUN7(VAR4);
    VAR15 = FUN8(VAR20, "", 0);
    VAR9 = FUN8(VAR20, "", 0);
    VAR16 = FUN8(VAR20, "", false);
    VAR8 = FUN9(VAR20, "");
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        if (FUN10(VAR7, &VAR10) != 0)
        {
            FUN11(VAR6, "");
            goto VAR26;
        }
    }
    if (FUN8(VAR20, "", true))
    {
        VAR10 |= VAR27;
    }
    if (FUN8(VAR20, "", false))
    {
        VAR10 |= VAR28;
    }
    if (FUN8(VAR20, "", false))
    {
        VAR10 |= VAR29;
    }
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
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
            FUN11(VAR6, "");
            goto VAR26;
        }
    }
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        if (FUN12(VAR7))
        {
            FUN13("");
            FUN14(VAR31, NULL);
            FUN13("");
            goto VAR26;
        }
        VAR24 = FUN15(VAR7);
        if (!VAR24)
        {
            FUN11(VAR6, "", VAR7);
            goto VAR26;
        }
    }
    memset(&VAR14, 0, sizeof(VAR14));
    VAR14.VAR32[VAR33].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR35].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR36].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR37].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR38].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR39].VAR34 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR33].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR35].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR36].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR37].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR38].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR32[VAR39].VAR40 = FUN16(VAR20, "", 0);
    VAR14.VAR41 = FUN16(VAR20, "", 0);
    if (!FUN17(&VAR14, &VAR18))
    {
        FUN4(VAR6, VAR18);
        goto VAR26;
    }
    VAR12 = VAR42;
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        VAR12 = FUN18(VAR7, 0, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR26;
        }
    }
    VAR11 = VAR43;
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        VAR11 = FUN18(VAR7, 1, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR26;
        }
    }
    VAR13 = FUN19(sizeof(*VAR13));
    VAR13->VAR21 = FUN20(FUN21(VAR20));
    VAR13->VAR44 = FUN22(VAR13->VAR21, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR45;
    }
    VAR13->VAR44->VAR46 = VAR15 ? VAR47 : 0;
    VAR13->VAR44->VAR48 = VAR9;
    VAR13->VAR49 = 1;
    if (VAR8 != NULL)
    {
        VAR13->VAR8 = FUN20(VAR8);
    }
    FUN23(&VAR50, VAR13, VAR51);
    FUN24(VAR13->VAR44, VAR11, VAR12);
    if (FUN25(&VAR14))
    {
        FUN26(VAR13->VAR44);
        FUN27(VAR13->VAR44, &VAR14);
    }
    if (!VAR2 || !*VAR2)
    {
        if (VAR22)
        {
            VAR2 = NULL;
        }
        else
        {
            FUN28(VAR4);
            FUN29(VAR20);
            return VAR13;
        }
    }
    if (VAR15)
    {
        VAR10 &= ~VAR52;
        VAR10 |= (VAR47 | VAR27 | VAR29);
    }
    if (VAR16)
    {
        VAR10 |= VAR53;
    }
    if (FUN30(VAR54))
    {
        VAR10 |= VAR55;
    }
    VAR10 |= VAR9 ? 0 : VAR56;
    FUN31(VAR4);
    VAR17 = FUN32(&VAR13->VAR44, VAR2, NULL, VAR4, VAR10, VAR24, &VAR18);
    if (VAR17 < 0)
    {
        FUN11(VAR6, "", VAR2 ?: VAR13->VAR21, FUN33(VAR18));
        FUN34(VAR18);
        goto VAR57;
    }
    if (FUN35(VAR13->VAR44))
        VAR58 = 0;
    FUN28(VAR4);
    FUN29(VAR20);
    return VAR13;
VAR57:
    FUN36(VAR13->VAR44);
    FUN37(&VAR50, VAR13, VAR51);
VAR45:
    FUN38(VAR13->VAR21);
    FUN38(VAR13);
VAR26:
    FUN28(VAR4);
    FUN29(VAR20);
    return NULL;
}
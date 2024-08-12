static VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4, DriveMediaType VAR5)
{
    const char *VAR6;
    const char *VAR7 = NULL;
    const char *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11, VAR12;
    VAR1 *VAR13;
    ThrottleConfig VAR14;
    int VAR15 = 0;
    bool VAR16;
    int VAR17;
    VAR18 *VAR19 = NULL;
    VAR20 *VAR21;
    const char *VAR22;
    bool VAR23;
    VAR24 *VAR25 = NULL;
    VAR22 = FUN2(VAR3, "");
    VAR21 = FUN3(&VAR26, VAR22, 1, &VAR19);
    if (FUN4(&VAR19))
    {
        FUN5(VAR19);
        FUN6(VAR19);
        return NULL;
    }
    FUN7(VAR21, VAR3, &VAR19);
    if (FUN4(&VAR19))
    {
        FUN5(VAR19);
        FUN6(VAR19);
        return NULL;
    }
    if (VAR22)
    {
        FUN8(VAR3, "");
    }
    VAR23 = !!FUN9(VAR3);
    VAR15 = FUN10(VAR21, "", 0);
    VAR9 = FUN10(VAR21, "", 0);
    VAR16 = FUN10(VAR21, "", false);
    VAR7 = FUN11(VAR21, "");
    VAR8 = FUN11(VAR21, "");
    if ((VAR6 = FUN11(VAR21, "")) != NULL)
    {
        if (FUN12(VAR6, &VAR10) != 0)
        {
            FUN13("");
            return NULL;
        }
    }
    if (FUN10(VAR21, "", true))
    {
        VAR10 |= VAR27;
    }
    if (FUN10(VAR21, "", false))
    {
        VAR10 |= VAR28;
    }
    if (FUN10(VAR21, "", false))
    {
        VAR10 |= VAR29;
    }
    if ((VAR6 = FUN11(VAR21, "")) != NULL)
    {
        if (!strcmp(VAR6, ""))
        {
            VAR10 |= VAR30;
        }
        else if (!strcmp(VAR6, ""))
        {
        }
        else
        {
            FUN13("");
            return NULL;
        }
    }
    if ((VAR6 = FUN11(VAR21, "")) != NULL)
    {
        if (FUN14(VAR6))
        {
            FUN15("");
            FUN16(VAR31, NULL);
            FUN15("");
            return NULL;
        }
        VAR25 = FUN17(VAR6);
        if (!VAR25)
        {
            FUN13("", VAR6);
            return NULL;
        }
    }
    memset(&VAR14, 0, sizeof(VAR14));
    VAR14.VAR32[VAR33].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR35].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR36].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR37].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR38].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR39].VAR34 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR33].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR35].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR36].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR37].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR38].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR32[VAR39].VAR40 = FUN18(VAR21, "", 0);
    VAR14.VAR41 = FUN18(VAR21, "", 0);
    if (!FUN19(&VAR14, &VAR19))
    {
        FUN13("", FUN20(VAR19));
        FUN6(VAR19);
        return NULL;
    }
    VAR12 = VAR42;
    if ((VAR6 = FUN11(VAR21, "")) != NULL)
    {
        if (VAR4 != VAR43 && VAR4 != VAR44 && VAR4 != VAR45 && VAR4 != VAR46)
        {
            FUN13("");
            return NULL;
        }
        VAR12 = FUN21(VAR6, 0);
        if (VAR12 < 0)
        {
            return NULL;
        }
    }
    VAR11 = VAR47;
    if ((VAR6 = FUN11(VAR21, "")) != NULL)
    {
        if (VAR4 != VAR43 && VAR4 != VAR45 && VAR4 != VAR44 && VAR4 != VAR46)
        {
            FUN13("");
            return NULL;
        }
        VAR11 = FUN21(VAR6, 1);
        if (VAR11 < 0)
        {
            return NULL;
        }
    }
    VAR13 = FUN22(sizeof(*VAR13));
    VAR13->VAR22 = FUN23(FUN24(VAR21));
    VAR13->VAR48 = FUN25(VAR13->VAR22);
    VAR13->VAR48->VAR49 = VAR15 ? VAR50 : 0;
    VAR13->VAR48->VAR51 = VAR9;
    VAR13->VAR4 = VAR4;
    VAR13->VAR52 = 1;
    if (VAR8 != NULL)
    {
        VAR13->VAR8 = FUN23(VAR8);
    }
    FUN26(&VAR53, VAR13, VAR54);
    FUN27(VAR13->VAR48, VAR11, VAR12);
    if (FUN28(&VAR14))
    {
        FUN29(VAR13->VAR48);
        FUN30(VAR13->VAR48, &VAR14);
    }
    switch (VAR4)
    {
    case VAR43:
    case VAR44:
    case VAR55:
    case VAR46:
        VAR13->VAR56 = VAR5 == VAR57;
        break;
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR45:
        break;
    default:
        FUN31();
    }
    if (!VAR7 || !*VAR7)
    {
        if (VAR23)
        {
            VAR7 = NULL;
        }
        else
        {
            return VAR13;
        }
    }
    if (VAR15)
    {
        VAR10 &= ~VAR62;
        VAR10 |= (VAR50 | VAR27 | VAR29);
    }
    if (VAR16)
    {
        VAR10 |= VAR63;
    }
    if (FUN32(VAR64))
    {
        VAR10 |= VAR65;
    }
    if (VAR5 == VAR57)
    {
        VAR9 = 1;
    }
    VAR10 |= VAR9 ? 0 : VAR66;
    if (VAR9 && VAR16)
    {
        FUN13("");
    }
    FUN33(VAR3);
    VAR17 = FUN34(VAR13->VAR48, VAR7, VAR3, VAR10, VAR25, &VAR19);
    if (VAR17 < 0)
    {
        FUN13("", VAR7 ?: VAR13->VAR22, FUN20(VAR19));
        goto VAR67;
    }
    if (FUN35(VAR13->VAR48))
        VAR68 = 0;
    FUN36(VAR3);
    FUN37(VAR21);
    return VAR13;
VAR67:
    FUN37(VAR21);
    FUN36(VAR3);
    FUN38(VAR13->VAR48);
    FUN39(VAR13->VAR22);
    FUN40(&VAR53, VAR13, VAR54);
    FUN39(VAR13);
    return NULL;
}
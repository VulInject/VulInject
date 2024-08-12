static VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    const char *VAR8 = NULL;
    const char *VAR9;
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12, VAR13;
    VAR1 *VAR14;
    ThrottleConfig VAR15;
    int VAR16 = 0;
    bool VAR17;
    int VAR18;
    VAR5 *VAR19 = NULL;
    VAR20 *VAR21;
    const char *VAR22;
    bool VAR23;
    VAR24 *VAR25 = NULL;
    VAR22 = FUN2(VAR3, "");
    VAR21 = FUN3(&VAR26, VAR22, 1, &VAR19);
    if (FUN4(&VAR19))
    {
        FUN5(VAR6, VAR19);
        return NULL;
    }
    FUN6(VAR21, VAR3, &VAR19);
    if (FUN4(&VAR19))
    {
        FUN5(VAR6, VAR19);
        return NULL;
    }
    if (VAR22)
    {
        FUN7(VAR3, "");
    }
    VAR23 = !!FUN8(VAR3);
    VAR16 = FUN9(VAR21, "", 0);
    VAR10 = FUN9(VAR21, "", 0);
    VAR17 = FUN9(VAR21, "", false);
    VAR8 = FUN10(VAR21, "");
    VAR9 = FUN10(VAR21, "");
    if ((VAR7 = FUN10(VAR21, "")) != NULL)
    {
        if (FUN11(VAR7, &VAR11) != 0)
        {
            FUN12(VAR6, "");
            return NULL;
        }
    }
    if (FUN9(VAR21, "", true))
    {
        VAR11 |= VAR27;
    }
    if (FUN9(VAR21, "", false))
    {
        VAR11 |= VAR28;
    }
    if (FUN9(VAR21, "", false))
    {
        VAR11 |= VAR29;
    }
    if ((VAR7 = FUN10(VAR21, "")) != NULL)
    {
        if (!strcmp(VAR7, ""))
        {
            VAR11 |= VAR30;
        }
        else if (!strcmp(VAR7, ""))
        {
        }
        else
        {
            FUN12(VAR6, "");
            return NULL;
        }
    }
    if ((VAR7 = FUN10(VAR21, "")) != NULL)
    {
        if (FUN13(VAR7))
        {
            FUN14("");
            FUN15(VAR31, NULL);
            FUN14("");
            return NULL;
        }
        VAR25 = FUN16(VAR7);
        if (!VAR25)
        {
            FUN12(VAR6, "", VAR7);
            return NULL;
        }
    }
    memset(&VAR15, 0, sizeof(VAR15));
    VAR15.VAR32[VAR33].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR35].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR36].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR37].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR38].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR39].VAR34 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR33].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR35].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR36].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR37].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR38].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR32[VAR39].VAR40 = FUN17(VAR21, "", 0);
    VAR15.VAR41 = FUN17(VAR21, "", 0);
    if (!FUN18(&VAR15, &VAR19))
    {
        FUN5(VAR6, VAR19);
        return NULL;
    }
    VAR13 = VAR42;
    if ((VAR7 = FUN10(VAR21, "")) != NULL)
    {
        if (VAR4 != VAR43 && VAR4 != VAR44 && VAR4 != VAR45 && VAR4 != VAR46)
        {
            FUN12(VAR6, "");
            return NULL;
        }
        VAR13 = FUN19(VAR7, 0, &VAR19);
        if (FUN4(&VAR19))
        {
            FUN5(VAR6, VAR19);
            return NULL;
        }
    }
    VAR12 = VAR47;
    if ((VAR7 = FUN10(VAR21, "")) != NULL)
    {
        if (VAR4 != VAR43 && VAR4 != VAR45 && VAR4 != VAR44 && VAR4 != VAR46)
        {
            FUN20("");
            return NULL;
        }
        VAR12 = FUN19(VAR7, 1, &VAR19);
        if (FUN4(&VAR19))
        {
            FUN5(VAR6, VAR19);
            return NULL;
        }
    }
    VAR14 = FUN21(sizeof(*VAR14));
    VAR14->VAR22 = FUN22(FUN23(VAR21));
    VAR14->VAR48 = FUN24(VAR14->VAR22);
    VAR14->VAR48->VAR49 = VAR16 ? VAR50 : 0;
    VAR14->VAR48->VAR51 = VAR10;
    VAR14->VAR4 = VAR4;
    VAR14->VAR52 = 1;
    if (VAR9 != NULL)
    {
        VAR14->VAR9 = FUN22(VAR9);
    }
    FUN25(&VAR53, VAR14, VAR54);
    FUN26(VAR14->VAR48, VAR12, VAR13);
    if (FUN27(&VAR15))
    {
        FUN28(VAR14->VAR48);
        FUN29(VAR14->VAR48, &VAR15);
    }
    if (!VAR8 || !*VAR8)
    {
        if (VAR23)
        {
            VAR8 = NULL;
        }
        else
        {
            return VAR14;
        }
    }
    if (VAR16)
    {
        VAR11 &= ~VAR55;
        VAR11 |= (VAR50 | VAR27 | VAR29);
    }
    if (VAR17)
    {
        VAR11 |= VAR56;
    }
    if (FUN30(VAR57))
    {
        VAR11 |= VAR58;
    }
    VAR11 |= VAR10 ? 0 : VAR59;
    FUN31(VAR3);
    VAR18 = FUN32(VAR14->VAR48, VAR8, VAR3, VAR11, VAR25, &VAR19);
    if (VAR18 < 0)
    {
        FUN12(VAR6, "", VAR8 ?: VAR14->VAR22, FUN33(VAR19));
        FUN34(VAR19);
        goto VAR60;
    }
    if (FUN35(VAR14->VAR48))
        VAR61 = 0;
    FUN36(VAR3);
    FUN37(VAR21);
    return VAR14;
VAR60:
    FUN37(VAR21);
    FUN36(VAR3);
    FUN38(VAR14->VAR48);
    FUN39(VAR14->VAR22);
    FUN40(&VAR53, VAR14, VAR54);
    FUN39(VAR14);
    return NULL;
}
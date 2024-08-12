static VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4)
{
    const char *VAR5;
    const char *VAR6 = NULL;
    const char *VAR7;
    const char *VAR8 = "";
    BlockInterfaceType VAR9;
    enum
    {
        VAR10,
        VAR11
    } VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    int VAR20;
    int VAR21 = 0;
    int VAR22 = 0;
    int VAR23, VAR24;
    const char *VAR25;
    VAR1 *VAR26;
    ThrottleConfig VAR27;
    int VAR28 = 0;
    bool VAR29;
    int VAR30;
    VAR31 *VAR32 = NULL;
    VAR2 *VAR33;
    VAR34 *VAR35;
    const char *VAR36;
    bool VAR37;
    VAR38 *VAR39 = NULL;
    VAR18 = VAR40;
    VAR12 = VAR10;
    VAR36 = FUN2(VAR3);
    VAR33 = FUN3(&VAR41, VAR36, 1, &VAR32);
    if (FUN4(&VAR32))
    {
        FUN5(VAR32);
        FUN6(VAR32);
        return NULL;
    }
    VAR35 = FUN7();
    FUN8(VAR3, VAR35);
    FUN9(VAR33, VAR35, &VAR32);
    if (FUN4(&VAR32))
    {
        FUN5(VAR32);
        FUN6(VAR32);
        return NULL;
    }
    if (VAR36)
    {
        FUN10(VAR35, "");
    }
    VAR37 = !!FUN11(VAR35);
    VAR13 = FUN12(VAR33, "", 0);
    VAR14 = FUN12(VAR33, "", -1);
    VAR20 = FUN12(VAR33, "", -1);
    VAR15 = FUN12(VAR33, "", 0);
    VAR16 = FUN12(VAR33, "", 0);
    VAR17 = FUN12(VAR33, "", 0);
    VAR28 = FUN13(VAR33, "", 0);
    VAR21 = FUN13(VAR33, "", 0);
    VAR29 = FUN13(VAR33, "", false);
    VAR6 = FUN14(VAR33, "");
    VAR7 = FUN14(VAR33, "");
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        for (VAR9 = 0; VAR9 < VAR42 && strcmp(VAR5, VAR43[VAR9]); VAR9++)
            ;
        if (VAR9 == VAR42)
        {
            FUN15("", VAR5);
            return NULL;
        }
    }
    else
    {
        VAR9 = VAR4;
    }
    VAR19 = VAR44[VAR9];
    if (VAR15 || VAR16 || VAR17)
    {
        if (VAR15 < 1)
        {
            FUN15("");
            return NULL;
        }
        if (VAR16 < 1)
        {
            FUN15("");
            return NULL;
        }
        if (VAR17 < 1)
        {
            FUN15("");
            return NULL;
        }
    }
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (!VAR15)
        {
            FUN15("", VAR5);
            return NULL;
        }
        if (!strcmp(VAR5, ""))
            VAR18 = VAR45;
        else if (!strcmp(VAR5, ""))
            VAR18 = VAR46;
        else if (!strcmp(VAR5, ""))
            VAR18 = VAR40;
        else
        {
            FUN15("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR12 = VAR10;
        }
        else if (!strcmp(VAR5, ""))
        {
            if (VAR15 || VAR17 || VAR16)
            {
                FUN15("", VAR5);
                return NULL;
            }
            VAR12 = VAR11;
        }
        else
        {
            FUN15("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (FUN16(VAR5, &VAR22) != 0)
        {
            FUN15("");
            return NULL;
        }
    }
    if (FUN13(VAR33, "", true))
    {
        VAR22 |= VAR47;
    }
    if (FUN13(VAR33, "", false))
    {
        VAR22 |= VAR48;
    }
    if (FUN13(VAR33, "", false))
    {
        VAR22 |= VAR49;
    }
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR22 |= VAR50;
        }
        else if (!strcmp(VAR5, ""))
        {
        }
        else
        {
            FUN15("");
            return NULL;
        }
    }
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (FUN17(VAR5))
        {
            FUN18("");
            FUN19(VAR51, NULL);
            FUN18("");
            return NULL;
        }
        VAR39 = FUN20(VAR5, VAR21);
        if (!VAR39)
        {
            if (!VAR21 && FUN20(VAR5, !VAR21))
            {
                FUN15("", VAR5);
            }
            else
            {
                FUN15("", VAR5);
            }
            return NULL;
        }
    }
    memset(&VAR27, 0, sizeof(VAR27));
    VAR27.VAR52[VAR53].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR55].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR56].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR57].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR58].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR59].VAR54 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR53].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR55].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR56].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR57].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR58].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR52[VAR59].VAR60 = FUN12(VAR33, "", 0);
    VAR27.VAR61 = FUN12(VAR33, "", 0);
    if (!FUN21(&VAR27, &VAR32))
    {
        FUN15("", FUN22(VAR32));
        FUN6(VAR32);
        return NULL;
    }
    if (FUN14(VAR33, "") != NULL)
    {
        fprintf(VAR62, ""
                        ""
                        "");
    }
    VAR24 = VAR63;
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (VAR9 != VAR64 && VAR9 != VAR65 && VAR9 != VAR66 && VAR9 != VAR67)
        {
            FUN15("");
            return NULL;
        }
        VAR24 = FUN23(VAR5, 0);
        if (VAR24 < 0)
        {
            return NULL;
        }
    }
    VAR23 = VAR68;
    if ((VAR5 = FUN14(VAR33, "")) != NULL)
    {
        if (VAR9 != VAR64 && VAR9 != VAR66 && VAR9 != VAR65 && VAR9 != VAR67)
        {
            FUN15("");
            return NULL;
        }
        VAR23 = FUN23(VAR5, 1);
        if (VAR23 < 0)
        {
            return NULL;
        }
    }
    if ((VAR25 = FUN14(VAR33, "")) != NULL)
    {
        if (VAR9 != VAR66)
        {
            FUN15("");
            return NULL;
        }
    }
    if (VAR20 != -1)
    {
        if (VAR13 != 0 || VAR14 != -1)
        {
            FUN15("");
            return NULL;
        }
        VAR13 = FUN24(VAR9, VAR20);
        VAR14 = FUN25(VAR9, VAR20);
    }
    if (VAR14 == -1)
    {
        VAR14 = 0;
        while (FUN26(VAR9, VAR13, VAR14) != NULL)
        {
            VAR14++;
            if (VAR19 && VAR14 >= VAR19)
            {
                VAR14 -= VAR19;
                VAR13++;
            }
        }
    }
    if (VAR19 && VAR14 >= VAR19)
    {
        FUN15("", VAR14, VAR19 - 1);
        return NULL;
    }
    if (FUN26(VAR9, VAR13, VAR14) != NULL)
    {
        FUN15("", VAR13, VAR14, VAR20);
        return NULL;
    }
    VAR26 = FUN27(sizeof(*VAR26));
    if ((VAR5 = FUN2(VAR33)) != NULL)
    {
        VAR26->VAR36 = FUN28(VAR5);
    }
    else
    {
        VAR26->VAR36 = FUN27(32);
        if (VAR9 == VAR64 || VAR9 == VAR65)
            VAR8 = (VAR12 == VAR11) ? "" : "";
        if (VAR19)
            snprintf(VAR26->VAR36, 32, "", VAR43[VAR9], VAR13, VAR8, VAR14);
        else
            snprintf(VAR26->VAR36, 32, "", VAR43[VAR9], VAR8, VAR14);
    }
    VAR26->VAR69 = FUN29(VAR26->VAR36);
    VAR26->VAR69->VAR70 = VAR28 ? VAR71 : 0;
    VAR26->VAR69->VAR72 = VAR21;
    VAR26->VAR25 = VAR25;
    VAR26->VAR9 = VAR9;
    VAR26->VAR73 = VAR13;
    VAR26->VAR74 = VAR14;
    VAR26->VAR15 = VAR15;
    VAR26->VAR16 = VAR16;
    VAR26->VAR17 = VAR17;
    VAR26->VAR75 = VAR18;
    VAR26->VAR33 = VAR3;
    VAR26->VAR76 = 1;
    if (VAR7 != NULL)
    {
        VAR26->VAR7 = FUN28(VAR7);
    }
    FUN30(&VAR77, VAR26, VAR78);
    FUN31(VAR26->VAR69, VAR23, VAR24);
    if (FUN32(&VAR27))
    {
        FUN33(VAR26->VAR69);
        FUN34(VAR26->VAR69, &VAR27);
    }
    switch (VAR9)
    {
    case VAR64:
    case VAR65:
    case VAR79:
    case VAR67:
        VAR26->VAR80 = VAR12 == VAR11;
        break;
    case VAR81:
    case VAR82:
    case VAR83:
    case VAR84:
        break;
    case VAR66:
    {
        VAR2 *VAR85;
        VAR85 = FUN35(FUN36(""));
        if (VAR86 == VAR87)
        {
            FUN37(VAR85, "", "");
        }
        else
        {
            FUN37(VAR85, "", "");
        }
        FUN37(VAR85, "", VAR26->VAR36);
        if (VAR25)
            FUN37(VAR85, "", VAR25);
        break;
    }
    default:
        FUN38();
    }
    if (!VAR6 || !*VAR6)
    {
        if (VAR37)
        {
            VAR6 = NULL;
        }
        else
        {
            return VAR26;
        }
    }
    if (VAR28)
    {
        VAR22 &= ~VAR88;
        VAR22 |= (VAR71 | VAR47 | VAR49);
    }
    if (VAR29)
    {
        VAR22 |= VAR89;
    }
    if (FUN39(VAR90))
    {
        VAR22 |= VAR91;
    }
    if (VAR12 == VAR11)
    {
        VAR21 = 1;
    }
    else if (VAR21 == 1)
    {
        if (VAR9 != VAR65 && VAR9 != VAR66 && VAR9 != VAR82 && VAR9 != VAR67 && VAR9 != VAR83)
        {
            FUN15("");
            goto VAR92;
        }
    }
    VAR22 |= VAR21 ? 0 : VAR93;
    if (VAR21 && VAR29)
    {
        FUN15("");
    }
    FUN40(VAR35);
    VAR30 = FUN41(VAR26->VAR69, VAR6, VAR35, VAR22, VAR39, &VAR32);
    if (VAR30 < 0)
    {
        FUN15("", VAR6 ?: VAR26->VAR36, FUN22(VAR32));
        goto VAR92;
    }
    if (FUN42(VAR26->VAR69))
        VAR94 = 0;
    FUN43(VAR35);
    FUN44(VAR33);
    return VAR26;
VAR92:
    FUN44(VAR33);
    FUN43(VAR35);
    FUN45(VAR26->VAR69);
    FUN46(VAR26->VAR36);
    FUN47(&VAR77, VAR26, VAR78);
    FUN46(VAR26);
    return NULL;
}
VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    const char *VAR5;
    const char *VAR6 = NULL;
    char VAR7[128];
    const char *VAR8;
    const char *VAR9 = "";
    BlockInterfaceType VAR10;
    enum
    {
        VAR11,
        VAR12
    } VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21 = NULL;
    int VAR22;
    int VAR23;
    int VAR24 = 0;
    int VAR25 = 0;
    int VAR26, VAR27;
    const char *VAR28;
    VAR1 *VAR29;
    BlockIOLimit VAR30;
    int VAR31 = 0;
    bool VAR32;
    int VAR33;
    VAR19 = VAR34;
    VAR13 = VAR11;
    VAR14 = FUN2(VAR3, "", 0);
    VAR15 = FUN2(VAR3, "", -1);
    VAR23 = FUN2(VAR3, "", -1);
    VAR16 = FUN2(VAR3, "", 0);
    VAR17 = FUN2(VAR3, "", 0);
    VAR18 = FUN2(VAR3, "", 0);
    VAR31 = FUN3(VAR3, "", 0);
    VAR24 = FUN3(VAR3, "", 0);
    VAR32 = FUN3(VAR3, "", false);
    VAR6 = FUN4(VAR3, "");
    VAR8 = FUN4(VAR3, "");
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        FUN5(VAR7, sizeof(VAR7), VAR5);
        for (VAR10 = 0; VAR10 < VAR35 && strcmp(VAR5, VAR36[VAR10]); VAR10++)
            ;
        if (VAR10 == VAR35)
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    else
    {
        VAR10 = VAR4 ? VAR37 : VAR38;
        FUN5(VAR7, sizeof(VAR7), VAR36[VAR10]);
    }
    VAR22 = VAR39[VAR10];
    if (VAR16 || VAR17 || VAR18)
    {
        if (VAR16 < 1 || (VAR10 == VAR38 && VAR16 > 16383))
        {
            FUN6("");
            return NULL;
        }
        if (VAR17 < 1 || (VAR10 == VAR38 && VAR17 > 16))
        {
            FUN6("");
            return NULL;
        }
        if (VAR18 < 1 || (VAR10 == VAR38 && VAR18 > 63))
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!VAR16)
        {
            FUN6("", VAR5);
            return NULL;
        }
        if (!strcmp(VAR5, ""))
            VAR19 = VAR40;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR41;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR34;
        else
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR13 = VAR11;
        }
        else if (!strcmp(VAR5, ""))
        {
            if (VAR16 || VAR18 || VAR17)
            {
                FUN6("", VAR5);
                return NULL;
            }
            VAR13 = VAR12;
        }
        else
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (FUN7(VAR5, &VAR25) != 0)
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR25 |= VAR42;
        }
        else if (!strcmp(VAR5, ""))
        {
        }
        else
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (strcmp(VAR5, "") == 0)
        {
            FUN8("");
            FUN9(VAR43, NULL);
            FUN8("");
            return NULL;
        }
        VAR21 = FUN10(VAR5);
        if (!VAR21)
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    VAR30.VAR44[VAR45] = FUN2(VAR3, "", 0);
    VAR30.VAR44[VAR46] = FUN2(VAR3, "", 0);
    VAR30.VAR44[VAR47] = FUN2(VAR3, "", 0);
    VAR30.VAR48[VAR45] = FUN2(VAR3, "", 0);
    VAR30.VAR48[VAR46] = FUN2(VAR3, "", 0);
    VAR30.VAR48[VAR47] = FUN2(VAR3, "", 0);
    if (!FUN11(&VAR30))
    {
        FUN6(""
                     "");
        return NULL;
    }
    VAR27 = VAR49;
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR38 && VAR10 != VAR37 && VAR10 != VAR50 && VAR10 != VAR51)
        {
            FUN6("");
            return NULL;
        }
        VAR27 = FUN12(VAR5, 0);
        if (VAR27 < 0)
        {
            return NULL;
        }
    }
    VAR26 = VAR52;
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR38 && VAR10 != VAR50 && VAR10 != VAR37 && VAR10 != VAR51)
        {
            FUN6("");
            return NULL;
        }
        VAR26 = FUN12(VAR5, 1);
        if (VAR26 < 0)
        {
            return NULL;
        }
    }
    if ((VAR28 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR50)
        {
            FUN6("");
            return NULL;
        }
    }
    if (VAR23 != -1)
    {
        if (VAR14 != 0 || VAR15 != -1)
        {
            FUN6("");
            return NULL;
        }
        VAR14 = FUN13(VAR10, VAR23);
        VAR15 = FUN14(VAR10, VAR23);
    }
    if (VAR15 == -1)
    {
        VAR15 = 0;
        while (FUN15(VAR10, VAR14, VAR15) != NULL)
        {
            VAR15++;
            if (VAR22 && VAR15 >= VAR22)
            {
                VAR15 -= VAR22;
                VAR14++;
            }
        }
    }
    if (VAR22 && VAR15 >= VAR22)
    {
        FUN6("", VAR15, VAR22 - 1);
        return NULL;
    }
    if (FUN15(VAR10, VAR14, VAR15) != NULL)
    {
        FUN6("", VAR14, VAR15, VAR23);
        return NULL;
    }
    VAR29 = FUN16(sizeof(*VAR29));
    if ((VAR5 = FUN17(VAR3)) != NULL)
    {
        VAR29->VAR53 = FUN18(VAR5);
    }
    else
    {
        VAR29->VAR53 = FUN16(32);
        if (VAR10 == VAR38 || VAR10 == VAR37)
            VAR9 = (VAR13 == VAR12) ? "" : "";
        if (VAR22)
            snprintf(VAR29->VAR53, 32, "", VAR7, VAR14, VAR9, VAR15);
        else
            snprintf(VAR29->VAR53, 32, "", VAR7, VAR9, VAR15);
    }
    VAR29->VAR54 = FUN19(VAR29->VAR53);
    VAR29->VAR28 = VAR28;
    VAR29->VAR10 = VAR10;
    VAR29->VAR55 = VAR14;
    VAR29->VAR56 = VAR15;
    VAR29->VAR3 = VAR3;
    VAR29->VAR57 = 1;
    if (VAR8)
    {
        FUN5(VAR29->VAR8, sizeof(VAR29->VAR8), VAR8);
    }
    FUN20(&VAR58, VAR29, VAR59);
    FUN21(VAR29->VAR54, VAR26, VAR27);
    FUN22(VAR29->VAR54, &VAR30);
    switch (VAR10)
    {
    case VAR38:
    case VAR37:
    case VAR60:
    case VAR51:
        switch (VAR13)
        {
        case VAR11:
            if (VAR16 != 0)
            {
                FUN23(VAR29->VAR54, VAR16, VAR17, VAR18);
                FUN24(VAR29->VAR54, VAR19);
            }
            break;
        case VAR12:
            VAR29->VAR61 = 1;
            break;
        }
        break;
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
        break;
    case VAR50:
        VAR3 = FUN25(FUN26(""), NULL, 0);
        if (VAR66 == VAR67)
        {
            FUN27(VAR3, "", "");
        }
        else
        {
            FUN27(VAR3, "", "");
        }
        FUN27(VAR3, "", VAR29->VAR53);
        if (VAR28)
            FUN27(VAR3, "", VAR28);
        break;
    default:
        FUN28();
    }
    if (!VAR6 || !*VAR6)
    {
        return VAR29;
    }
    if (VAR31)
    {
        VAR25 &= ~VAR68;
        VAR25 |= (VAR69 | VAR70 | VAR71);
    }
    if (VAR32)
    {
        VAR25 |= VAR72;
    }
    if (FUN29(VAR73))
    {
        VAR25 |= VAR74;
    }
    if (VAR13 == VAR12)
    {
        VAR24 = 1;
    }
    else if (VAR24 == 1)
    {
        if (VAR10 != VAR37 && VAR10 != VAR50 && VAR10 != VAR63 && VAR10 != VAR51 && VAR10 != VAR64)
        {
            FUN6("");
            goto VAR75;
        }
    }
    VAR25 |= VAR24 ? 0 : VAR76;
    VAR33 = FUN30(VAR29->VAR54, VAR6, VAR25, VAR21);
    if (VAR33 < 0)
    {
        FUN6("", VAR6, strerror(-VAR33));
        goto VAR75;
    }
    if (FUN31(VAR29->VAR54))
        VAR77 = 0;
    return VAR29;
VAR75:
    FUN32(VAR29->VAR54);
    FUN33(VAR29->VAR53);
    FUN34(&VAR58, VAR29, VAR59);
    FUN33(VAR29);
    return NULL;
}
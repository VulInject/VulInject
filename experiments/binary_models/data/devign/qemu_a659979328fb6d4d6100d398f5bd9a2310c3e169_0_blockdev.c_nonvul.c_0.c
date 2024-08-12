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
    int VAR30 = 0;
    int VAR31;
    VAR19 = VAR32;
    if (VAR4)
    {
        VAR10 = VAR33;
        FUN2(VAR7, sizeof(VAR7), "");
    }
    else
    {
        VAR10 = VAR34;
        FUN2(VAR7, sizeof(VAR7), "");
    }
    VAR13 = VAR11;
    VAR14 = FUN3(VAR3, "", 0);
    VAR15 = FUN3(VAR3, "", -1);
    VAR23 = FUN3(VAR3, "", -1);
    VAR16 = FUN3(VAR3, "", 0);
    VAR17 = FUN3(VAR3, "", 0);
    VAR18 = FUN3(VAR3, "", 0);
    VAR30 = FUN4(VAR3, "", 0);
    VAR24 = FUN4(VAR3, "", 0);
    VAR6 = FUN5(VAR3, "");
    VAR8 = FUN5(VAR3, "");
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        FUN2(VAR7, sizeof(VAR7), VAR5);
        for (VAR10 = 0; VAR10 < VAR35 && strcmp(VAR5, VAR36[VAR10]); VAR10++)
            ;
        if (VAR10 == VAR35)
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    VAR22 = VAR37[VAR10];
    if (VAR16 || VAR17 || VAR18)
    {
        if (VAR16 < 1 || (VAR10 == VAR34 && VAR16 > 16383))
        {
            FUN6("");
            return NULL;
        }
        if (VAR17 < 1 || (VAR10 == VAR34 && VAR17 > 16))
        {
            FUN6("");
            return NULL;
        }
        if (VAR18 < 1 || (VAR10 == VAR34 && VAR18 > 63))
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (!VAR16)
        {
            FUN6("", VAR5);
            return NULL;
        }
        if (!strcmp(VAR5, ""))
            VAR19 = VAR38;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR39;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR32;
        else
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
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
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
        {
            VAR25 |= VAR40 | VAR41;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR25 |= VAR41;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR25 |= VAR41;
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
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR25 |= VAR43;
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
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (strcmp(VAR5, "") == 0)
        {
            FUN7("");
            FUN8(VAR44, NULL);
            FUN7("");
            return NULL;
        }
        VAR21 = FUN9(VAR5);
        if (!VAR21)
        {
            FUN6("", VAR5);
            return NULL;
        }
    }
    VAR27 = VAR45;
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR34 && VAR10 != VAR33 && VAR10 != VAR46 && VAR10 != VAR47)
        {
            FUN6("");
            return NULL;
        }
        VAR27 = FUN10(VAR5, 0);
        if (VAR27 < 0)
        {
            return NULL;
        }
    }
    VAR26 = VAR48;
    if ((VAR5 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR34 && VAR10 != VAR46 && VAR10 != VAR33 && VAR10 != VAR47)
        {
            FUN6("");
            return NULL;
        }
        VAR26 = FUN10(VAR5, 1);
        if (VAR26 < 0)
        {
            return NULL;
        }
    }
    if ((VAR28 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR10 != VAR46)
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
        VAR14 = FUN11(VAR10, VAR23);
        VAR15 = FUN12(VAR10, VAR23);
    }
    if (VAR15 == -1)
    {
        VAR15 = 0;
        while (FUN13(VAR10, VAR14, VAR15) != NULL)
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
    if (FUN13(VAR10, VAR14, VAR15) != NULL)
    {
        FUN6("", VAR14, VAR15, VAR23);
        return NULL;
    }
    VAR29 = FUN14(sizeof(*VAR29));
    if ((VAR5 = FUN15(VAR3)) != NULL)
    {
        VAR29->VAR49 = FUN16(VAR5);
    }
    else
    {
        VAR29->VAR49 = FUN14(32);
        if (VAR10 == VAR34 || VAR10 == VAR33)
            VAR9 = (VAR13 == VAR12) ? "" : "";
        if (VAR22)
            snprintf(VAR29->VAR49, 32, "", VAR7, VAR14, VAR9, VAR15);
        else
            snprintf(VAR29->VAR49, 32, "", VAR7, VAR9, VAR15);
    }
    VAR29->VAR50 = FUN17(VAR29->VAR49);
    VAR29->VAR28 = VAR28;
    VAR29->VAR10 = VAR10;
    VAR29->VAR51 = VAR14;
    VAR29->VAR52 = VAR15;
    VAR29->VAR3 = VAR3;
    VAR29->VAR53 = 1;
    if (VAR8)
        strncpy(VAR29->VAR8, VAR8, sizeof(VAR29->VAR8) - 1);
    FUN18(&VAR54, VAR29, VAR55);
    FUN19(VAR29->VAR50, VAR26, VAR27);
    switch (VAR10)
    {
    case VAR34:
    case VAR33:
    case VAR56:
    case VAR47:
        switch (VAR13)
        {
        case VAR11:
            if (VAR16 != 0)
            {
                FUN20(VAR29->VAR50, VAR16, VAR17, VAR18);
                FUN21(VAR29->VAR50, VAR19);
            }
            break;
        case VAR12:
            FUN22(VAR29->VAR50, 1);
            VAR29->VAR57 = 1;
            break;
        }
        break;
    case VAR58:
    case VAR59:
        FUN22(VAR29->VAR50, 1);
        break;
    case VAR60:
    case VAR61:
        break;
    case VAR46:
        VAR3 = FUN23(FUN24(""), NULL, 0);
        FUN25(VAR3, "", "");
        FUN25(VAR3, "", VAR29->VAR49);
        if (VAR28)
            FUN25(VAR3, "", VAR28);
        break;
    default:
        FUN26();
    }
    if (!VAR6 || !*VAR6)
    {
        return VAR29;
    }
    if (VAR30)
    {
        VAR25 &= ~VAR62;
        VAR25 |= (VAR63 | VAR41 | VAR42);
    }
    if (VAR13 == VAR12)
    {
        VAR24 = 1;
    }
    else if (VAR24 == 1)
    {
        if (VAR10 != VAR33 && VAR10 != VAR46 && VAR10 != VAR59 && VAR10 != VAR47)
        {
            FUN6("");
            goto VAR64;
        }
    }
    VAR25 |= VAR24 ? 0 : VAR65;
    VAR31 = FUN27(VAR29->VAR50, VAR6, VAR25, VAR21);
    if (VAR31 < 0)
    {
        FUN6("", VAR6, strerror(-VAR31));
        goto VAR64;
    }
    if (FUN28(VAR29->VAR50))
        VAR66 = 0;
    return VAR29;
VAR64:
    FUN29(VAR29->VAR50);
    FUN30(VAR29->VAR49);
    FUN31(&VAR54, VAR29, VAR55);
    FUN30(VAR29);
    return NULL;
}
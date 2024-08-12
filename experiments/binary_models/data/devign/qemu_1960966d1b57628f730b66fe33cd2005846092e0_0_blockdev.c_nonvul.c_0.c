VAR1 *FUN1(VAR2 *VAR3, int VAR4, int *VAR5)
{
    const char *VAR6;
    const char *VAR7 = NULL;
    char VAR8[128];
    const char *VAR9;
    const char *VAR10 = "";
    BlockInterfaceType VAR11;
    enum
    {
        VAR12,
        VAR13
    } VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    VAR21 *VAR22 = NULL;
    int VAR23;
    int VAR24;
    int VAR25 = 0;
    int VAR26 = 0;
    int VAR27, VAR28;
    const char *VAR29;
    VAR1 *VAR30;
    int VAR31 = 0;
    int VAR32;
    *VAR5 = 1;
    VAR20 = VAR33;
    if (VAR4)
    {
        VAR11 = VAR34;
        FUN2(VAR8, sizeof(VAR8), "");
    }
    else
    {
        VAR11 = VAR35;
        FUN2(VAR8, sizeof(VAR8), "");
    }
    VAR14 = VAR12;
    VAR15 = FUN3(VAR3, "", 0);
    VAR16 = FUN3(VAR3, "", -1);
    VAR24 = FUN3(VAR3, "", -1);
    VAR17 = FUN3(VAR3, "", 0);
    VAR18 = FUN3(VAR3, "", 0);
    VAR19 = FUN3(VAR3, "", 0);
    VAR31 = FUN4(VAR3, "", 0);
    VAR25 = FUN4(VAR3, "", 0);
    VAR7 = FUN5(VAR3, "");
    VAR9 = FUN5(VAR3, "");
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        FUN2(VAR8, sizeof(VAR8), VAR6);
        for (VAR11 = 0; VAR11 < VAR36 && strcmp(VAR6, VAR37[VAR11]); VAR11++)
            ;
        if (VAR11 == VAR36)
        {
            FUN6("", VAR6);
            return NULL;
        }
    }
    VAR23 = VAR38[VAR11];
    if (VAR17 || VAR18 || VAR19)
    {
        if (VAR17 < 1 || (VAR11 == VAR35 && VAR17 > 16383))
        {
            FUN6("");
            return NULL;
        }
        if (VAR18 < 1 || (VAR11 == VAR35 && VAR18 > 16))
        {
            FUN6("");
            return NULL;
        }
        if (VAR19 < 1 || (VAR11 == VAR35 && VAR19 > 63))
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!VAR17)
        {
            FUN6("", VAR6);
            return NULL;
        }
        if (!strcmp(VAR6, ""))
            VAR20 = VAR39;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR40;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR33;
        else
        {
            FUN6("", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, ""))
        {
            VAR14 = VAR12;
        }
        else if (!strcmp(VAR6, ""))
        {
            if (VAR17 || VAR19 || VAR18)
            {
                FUN6("", VAR6);
                return NULL;
            }
            VAR14 = VAR13;
        }
        else
        {
            FUN6("", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, "") || !strcmp(VAR6, ""))
        {
            VAR26 |= VAR41;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR42;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR42;
            VAR26 |= VAR43;
        }
        else if (!strcmp(VAR6, ""))
        {
        }
        else
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR44;
        }
        else if (!strcmp(VAR6, ""))
        {
        }
        else
        {
            FUN6("");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (strcmp(VAR6, "") == 0)
        {
            FUN7("");
            FUN8(VAR45, NULL);
            FUN7("");
            return NULL;
        }
        VAR22 = FUN9(VAR6);
        if (!VAR22)
        {
            FUN6("", VAR6);
            return NULL;
        }
    }
    VAR28 = VAR46;
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR35 && VAR11 != VAR34 && VAR11 != VAR47 && VAR11 != VAR48)
        {
            FUN6("");
            return NULL;
        }
        VAR28 = FUN10(VAR6, 0);
        if (VAR28 < 0)
        {
            return NULL;
        }
    }
    VAR27 = VAR49;
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR35 && VAR11 != VAR47 && VAR11 != VAR34 && VAR11 != VAR48)
        {
            FUN6("");
            return NULL;
        }
        VAR27 = FUN10(VAR6, 1);
        if (VAR27 < 0)
        {
            return NULL;
        }
    }
    if ((VAR29 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR47)
        {
            FUN6("");
            return NULL;
        }
    }
    if (VAR24 != -1)
    {
        if (VAR15 != 0 || VAR16 != -1)
        {
            FUN6("");
            return NULL;
        }
        if (VAR23 == 0)
        {
            VAR16 = VAR24;
            VAR15 = 0;
        }
        else
        {
            VAR16 = VAR24 % VAR23;
            VAR15 = VAR24 / VAR23;
        }
    }
    if (VAR16 == -1)
    {
        VAR16 = 0;
        while (FUN11(VAR11, VAR15, VAR16) != NULL)
        {
            VAR16++;
            if (VAR23 && VAR16 >= VAR23)
            {
                VAR16 -= VAR23;
                VAR15++;
            }
        }
    }
    if (VAR23 && VAR16 >= VAR23)
    {
        FUN6("", VAR16, VAR23 - 1);
        return NULL;
    }
    if (FUN11(VAR11, VAR15, VAR16) != NULL)
    {
        *VAR5 = 0;
        return NULL;
    }
    VAR30 = FUN12(sizeof(*VAR30));
    if ((VAR6 = FUN13(VAR3)) != NULL)
    {
        VAR30->VAR50 = FUN14(VAR6);
    }
    else
    {
        VAR30->VAR50 = FUN12(32);
        if (VAR11 == VAR35 || VAR11 == VAR34)
            VAR10 = (VAR14 == VAR13) ? "" : "";
        if (VAR23)
            snprintf(VAR30->VAR50, 32, "", VAR8, VAR15, VAR10, VAR16);
        else
            snprintf(VAR30->VAR50, 32, "", VAR8, VAR10, VAR16);
    }
    VAR30->VAR51 = FUN15(VAR30->VAR50);
    VAR30->VAR29 = VAR29;
    VAR30->VAR11 = VAR11;
    VAR30->VAR52 = VAR15;
    VAR30->VAR53 = VAR16;
    VAR30->VAR3 = VAR3;
    if (VAR9)
        strncpy(VAR30->VAR9, VAR9, sizeof(VAR30->VAR9) - 1);
    FUN16(&VAR54, VAR30, VAR55);
    FUN17(VAR30->VAR51, VAR27, VAR28);
    switch (VAR11)
    {
    case VAR35:
    case VAR34:
    case VAR56:
    case VAR48:
        switch (VAR14)
        {
        case VAR12:
            if (VAR17 != 0)
            {
                FUN18(VAR30->VAR51, VAR17, VAR18, VAR19);
                FUN19(VAR30->VAR51, VAR20);
            }
            break;
        case VAR13:
            FUN20(VAR30->VAR51, VAR57);
            break;
        }
        break;
    case VAR58:
    case VAR59:
        FUN20(VAR30->VAR51, VAR60);
        break;
    case VAR61:
    case VAR62:
        break;
    case VAR47:
        VAR3 = FUN21(FUN22(""), NULL, 0);
        FUN23(VAR3, "", "");
        FUN23(VAR3, "", VAR30->VAR50);
        if (VAR29)
            FUN23(VAR3, "", VAR29);
        break;
    case VAR36:
        FUN24();
    }
    if (!VAR7 || !*VAR7)
    {
        *VAR5 = 0;
        return NULL;
    }
    if (VAR31)
    {
        VAR26 &= ~VAR63;
        VAR26 |= (VAR64 | VAR42 | VAR43);
    }
    if (VAR14 == VAR13)
    {
        VAR25 = 1;
    }
    else if (VAR25 == 1)
    {
        if (VAR11 != VAR34 && VAR11 != VAR47 && VAR11 != VAR59 && VAR11 != VAR48)
        {
            FUN6("");
            return NULL;
        }
    }
    VAR26 |= VAR25 ? 0 : VAR65;
    VAR32 = FUN25(VAR30->VAR51, VAR7, VAR26, VAR22);
    if (VAR32 < 0)
    {
        FUN6("", VAR7, strerror(-VAR32));
        return NULL;
    }
    if (FUN26(VAR30->VAR51))
        VAR66 = 0;
    *VAR5 = 0;
    return VAR30;
}
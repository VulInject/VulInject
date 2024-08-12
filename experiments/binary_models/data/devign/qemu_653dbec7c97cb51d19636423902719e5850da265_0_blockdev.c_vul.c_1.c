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
        VAR23 = VAR35;
        FUN2(VAR8, sizeof(VAR8), "");
    }
    else
    {
        VAR11 = VAR36;
        VAR23 = VAR37;
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
        if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR36;
            VAR23 = VAR37;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR34;
            VAR23 = VAR35;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR38;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR39;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR40;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR41;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR42;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR43;
            VAR23 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR44;
            VAR23 = 0;
        }
        else
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
    }
    if (VAR17 || VAR18 || VAR19)
    {
        if (VAR17 < 1 || (VAR11 == VAR36 && VAR17 > 16383))
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
        if (VAR18 < 1 || (VAR11 == VAR36 && VAR18 > 16))
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
        if (VAR19 < 1 || (VAR11 == VAR36 && VAR19 > 63))
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!VAR17)
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
        if (!strcmp(VAR6, ""))
            VAR20 = VAR46;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR47;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR33;
        else
        {
            fprintf(VAR45, "", VAR6);
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
                fprintf(VAR45, "", VAR6);
                return NULL;
            }
            VAR14 = VAR13;
        }
        else
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, "") || !strcmp(VAR6, ""))
        {
            VAR26 |= VAR48;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR49;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR49;
            VAR26 |= VAR50;
        }
        else if (!strcmp(VAR6, ""))
        {
        }
        else
        {
            fprintf(VAR45, "");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, ""))
        {
            VAR26 |= VAR51;
        }
        else if (!strcmp(VAR6, ""))
        {
        }
        else
        {
            fprintf(VAR45, "");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (strcmp(VAR6, "") == 0)
        {
            fprintf(VAR45, "");
            FUN6(VAR52, NULL);
            fprintf(VAR45, "");
            return NULL;
        }
        VAR22 = FUN7(VAR6);
        if (!VAR22)
        {
            fprintf(VAR45, "", VAR6);
            return NULL;
        }
    }
    VAR28 = VAR53;
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR36 && VAR11 != VAR34 && VAR11 != VAR42 && VAR11 != VAR44)
        {
            fprintf(VAR45, "");
            return NULL;
        }
        VAR28 = FUN8(VAR6, 0);
        if (VAR28 < 0)
        {
            return NULL;
        }
    }
    VAR27 = VAR54;
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR36 && VAR11 != VAR42 && VAR11 != VAR44)
        {
            fprintf(VAR45, "");
            return NULL;
        }
        VAR27 = FUN8(VAR6, 1);
        if (VAR27 < 0)
        {
            return NULL;
        }
    }
    if ((VAR29 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR42)
        {
            fprintf(VAR45, "");
            return NULL;
        }
    }
    if (VAR24 != -1)
    {
        if (VAR15 != 0 || VAR16 != -1)
        {
            fprintf(VAR45, "");
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
        while (FUN9(VAR11, VAR15, VAR16) != NULL)
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
        fprintf(VAR45, "", VAR16, VAR23 - 1);
        return NULL;
    }
    if (FUN9(VAR11, VAR15, VAR16) != NULL)
    {
        *VAR5 = 0;
        return NULL;
    }
    VAR30 = FUN10(sizeof(*VAR30));
    if ((VAR6 = FUN11(VAR3)) != NULL)
    {
        VAR30->VAR55 = FUN12(VAR6);
    }
    else
    {
        VAR30->VAR55 = FUN10(32);
        if (VAR11 == VAR36 || VAR11 == VAR34)
            VAR10 = (VAR14 == VAR13) ? "" : "";
        if (VAR23)
            snprintf(VAR30->VAR55, 32, "", VAR8, VAR15, VAR10, VAR16);
        else
            snprintf(VAR30->VAR55, 32, "", VAR8, VAR10, VAR16);
    }
    VAR30->VAR56 = FUN13(VAR30->VAR55);
    VAR30->VAR29 = VAR29;
    VAR30->VAR11 = VAR11;
    VAR30->VAR57 = VAR15;
    VAR30->VAR58 = VAR16;
    VAR30->VAR27 = VAR27;
    VAR30->VAR28 = VAR28;
    VAR30->VAR3 = VAR3;
    if (VAR9)
        strncpy(VAR30->VAR9, VAR9, sizeof(VAR9));
    FUN14(&VAR59, VAR30, VAR60);
    switch (VAR11)
    {
    case VAR36:
    case VAR34:
    case VAR43:
    case VAR44:
        switch (VAR14)
        {
        case VAR12:
            if (VAR17 != 0)
            {
                FUN15(VAR30->VAR56, VAR17, VAR18, VAR19);
                FUN16(VAR30->VAR56, VAR20);
            }
            break;
        case VAR13:
            FUN17(VAR30->VAR56, VAR61);
            break;
        }
        break;
    case VAR41:
    case VAR38:
        FUN17(VAR30->VAR56, VAR62);
        break;
    case VAR39:
    case VAR40:
        break;
    case VAR42:
        VAR3 = FUN18(&VAR63, NULL, 0);
        FUN19(VAR3, "", "");
        FUN19(VAR3, "", VAR30->VAR55);
        if (VAR29)
            FUN19(VAR3, "", VAR29);
        break;
    case VAR64:
        FUN20();
    }
    if (!VAR7)
    {
        *VAR5 = 0;
        return NULL;
    }
    if (VAR31)
    {
        VAR26 &= ~VAR65;
        VAR26 |= (VAR66 | VAR49 | VAR50);
    }
    if (VAR14 == VAR13)
    {
        VAR25 = 1;
    }
    else if (VAR25 == 1)
    {
        if (VAR11 != VAR34 && VAR11 != VAR42 && VAR11 != VAR38 && VAR11 != VAR44)
        {
            fprintf(VAR45, "");
            return NULL;
        }
    }
    VAR26 |= VAR25 ? 0 : VAR67;
    VAR32 = FUN21(VAR30->VAR56, VAR7, VAR26, VAR22);
    if (VAR32 < 0)
    {
        fprintf(VAR45, "", VAR7, strerror(-VAR32));
        return NULL;
    }
    if (FUN22(VAR30->VAR56))
        VAR68 = 0;
    *VAR5 = 0;
    return VAR30;
}
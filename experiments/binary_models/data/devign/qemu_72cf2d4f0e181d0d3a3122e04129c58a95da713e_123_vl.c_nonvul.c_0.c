VAR1 *FUN1(VAR2 *VAR3, void *VAR4, int *VAR5)
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
    VAR23 *VAR24 = VAR4;
    int VAR25;
    int VAR26;
    int VAR27;
    int VAR28 = 0;
    int VAR29, VAR30;
    const char *VAR31;
    VAR1 *VAR32;
    int VAR33 = 0;
    *VAR5 = 1;
    VAR20 = VAR34;
    VAR27 = 1;
    if (VAR24 && VAR24->VAR35)
    {
        VAR11 = VAR36;
        VAR25 = VAR37;
        FUN2(VAR8, sizeof(VAR8), "");
    }
    else
    {
        VAR11 = VAR38;
        VAR25 = VAR39;
        FUN2(VAR8, sizeof(VAR8), "");
    }
    VAR14 = VAR12;
    VAR15 = FUN3(VAR3, "", 0);
    VAR16 = FUN3(VAR3, "", -1);
    VAR26 = FUN3(VAR3, "", -1);
    VAR17 = FUN3(VAR3, "", 0);
    VAR18 = FUN3(VAR3, "", 0);
    VAR19 = FUN3(VAR3, "", 0);
    VAR33 = FUN4(VAR3, "", 0);
    VAR7 = FUN5(VAR3, "");
    VAR9 = FUN5(VAR3, "");
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        FUN2(VAR8, sizeof(VAR8), VAR6);
        if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR38;
            VAR25 = VAR39;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR36;
            VAR25 = VAR37;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR40;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR41;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR42;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR43;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR44;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR45;
            VAR25 = 0;
        }
        else if (!strcmp(VAR6, ""))
        {
            VAR11 = VAR46;
            VAR25 = 0;
        }
        else
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
    }
    if (VAR17 || VAR18 || VAR19)
    {
        if (VAR17 < 1 || VAR17 > 16383)
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
        if (VAR18 < 1 || VAR18 > 16)
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
        if (VAR19 < 1 || VAR19 > 63)
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!VAR17)
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
        if (!strcmp(VAR6, ""))
            VAR20 = VAR48;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR49;
        else if (!strcmp(VAR6, ""))
            VAR20 = VAR34;
        else
        {
            fprintf(VAR47, "", VAR6);
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
                fprintf(VAR47, "", VAR6);
                return NULL;
            }
            VAR14 = VAR13;
        }
        else
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, "") || !strcmp(VAR6, ""))
            VAR27 = 0;
        else if (!strcmp(VAR6, ""))
            VAR27 = 1;
        else if (!strcmp(VAR6, ""))
            VAR27 = 2;
        else
        {
            fprintf(VAR47, "");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR6, ""))
            VAR28 = 0;
        else if (!strcmp(VAR6, ""))
            VAR28 = 1;
        else
        {
            fprintf(VAR47, "");
            return NULL;
        }
    }
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (strcmp(VAR6, "") == 0)
        {
            fprintf(VAR47, "");
            FUN6(VAR50, NULL);
            fprintf(VAR47, "");
            return NULL;
        }
        VAR22 = FUN7(VAR6);
        if (!VAR22)
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
    }
    VAR30 = VAR51;
    if ((VAR6 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR38 && VAR11 != VAR36 && VAR11 != VAR44)
        {
            fprintf(VAR47, "");
            return NULL;
        }
        if (!strcmp(VAR6, ""))
            VAR30 = VAR52;
        else if (!strcmp(VAR6, ""))
            VAR30 = VAR51;
        else if (!strcmp(VAR6, ""))
            VAR30 = VAR53;
        else if (!strcmp(VAR6, ""))
            VAR30 = VAR54;
        else
        {
            fprintf(VAR47, "", VAR6);
            return NULL;
        }
    }
    if ((VAR31 = FUN5(VAR3, "")) != NULL)
    {
        if (VAR11 != VAR44)
        {
            fprintf(VAR47, "");
            return NULL;
        }
    }
    if (VAR26 != -1)
    {
        if (VAR15 != 0 || VAR16 != -1)
        {
            fprintf(VAR47, "");
            return NULL;
        }
        if (VAR25 == 0)
        {
            VAR16 = VAR26;
            VAR15 = 0;
        }
        else
        {
            VAR16 = VAR26 % VAR25;
            VAR15 = VAR26 / VAR25;
        }
    }
    if (VAR16 == -1)
    {
        VAR16 = 0;
        while (FUN8(VAR11, VAR15, VAR16) != NULL)
        {
            VAR16++;
            if (VAR25 && VAR16 >= VAR25)
            {
                VAR16 -= VAR25;
                VAR15++;
            }
        }
    }
    if (VAR25 && VAR16 >= VAR25)
    {
        fprintf(VAR47, "", VAR16, VAR25 - 1);
        return NULL;
    }
    if (FUN8(VAR11, VAR15, VAR16) != NULL)
    {
        *VAR5 = 0;
        return NULL;
    }
    VAR32 = FUN9(sizeof(*VAR32));
    if ((VAR6 = FUN10(VAR3)) != NULL)
    {
        VAR32->VAR55 = FUN11(VAR6);
    }
    else
    {
        VAR32->VAR55 = FUN9(32);
        if (VAR11 == VAR38 || VAR11 == VAR36)
            VAR10 = (VAR14 == VAR13) ? "" : "";
        if (VAR25)
            snprintf(VAR32->VAR55, 32, "", VAR8, VAR15, VAR10, VAR16);
        else
            snprintf(VAR32->VAR55, 32, "", VAR8, VAR10, VAR16);
    }
    VAR32->VAR56 = FUN12(VAR32->VAR55);
    VAR32->VAR31 = VAR31;
    VAR32->VAR11 = VAR11;
    VAR32->VAR57 = VAR15;
    VAR32->VAR58 = VAR16;
    VAR32->VAR30 = VAR30;
    VAR32->VAR3 = VAR3;
    if (VAR9)
        strncpy(VAR32->VAR9, VAR9, sizeof(VAR9));
    FUN13(&VAR59, VAR32, VAR60);
    switch (VAR11)
    {
    case VAR38:
    case VAR36:
    case VAR45:
        switch (VAR14)
        {
        case VAR12:
            if (VAR17 != 0)
            {
                FUN14(VAR32->VAR56, VAR17, VAR18, VAR19);
                FUN15(VAR32->VAR56, VAR20);
            }
            break;
        case VAR13:
            FUN16(VAR32->VAR56, VAR61);
            break;
        }
        break;
    case VAR43:
    case VAR40:
        FUN16(VAR32->VAR56, VAR62);
        break;
    case VAR41:
    case VAR42:
    case VAR46:
        break;
    case VAR44:
        VAR3 = FUN17(&VAR63, NULL, 0);
        FUN18(VAR3, "", "");
        FUN18(VAR3, "", VAR32->VAR55);
        if (VAR31)
            FUN18(VAR3, "", VAR31);
        break;
    case VAR64:
        FUN19();
    }
    if (!VAR7)
    {
        *VAR5 = 0;
        return NULL;
    }
    VAR29 = 0;
    if (VAR33)
    {
        VAR29 |= VAR65;
        VAR27 = 2;
    }
    if (VAR27 == 0)
        VAR29 |= VAR66;
    else if (VAR27 == 2)
        VAR29 |= VAR67;
    if (VAR28 == 1)
    {
        VAR29 |= VAR68;
    }
    else
    {
        VAR29 &= ~VAR68;
    }
    if (FUN20(VAR32->VAR56, VAR7, VAR29, VAR22) < 0)
    {
        fprintf(VAR47, "", VAR7);
        return NULL;
    }
    if (FUN21(VAR32->VAR56))
        VAR69 = 0;
    *VAR5 = 0;
    return VAR32;
}
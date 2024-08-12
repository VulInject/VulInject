int FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4)
{
    char VAR5[128];
    char VAR6[1024];
    char VAR7[128];
    char VAR8[21];
    const char *VAR9 = "";
    BlockInterfaceType VAR10;
    enum
    {
        VAR11,
        VAR12
    } VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23 = NULL;
    VAR24 *VAR25 = VAR4;
    int VAR26;
    int VAR27;
    int VAR28;
    int VAR29, VAR30;
    int VAR31;
    char *VAR32 = VAR2->VAR33;
    static const char *const VAR34[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", NULL};
    if (FUN2(VAR34, VAR32) < 0)
    {
        fprintf(VAR35, "", VAR5, VAR32);
        return -1;
    }
    VAR6[0] = 0;
    VAR16 = VAR17 = VAR18 = 0;
    VAR14 = 0;
    VAR15 = -1;
    VAR19 = VAR36;
    VAR27 = -1;
    VAR28 = 3;
    if (VAR25->VAR37)
    {
        VAR10 = VAR38;
        VAR26 = VAR39;
        FUN3(VAR7, sizeof(VAR7), "");
    }
    else
    {
        VAR10 = VAR40;
        VAR26 = VAR41;
        FUN3(VAR7, sizeof(VAR7), "");
    }
    VAR13 = VAR11;
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR14 = FUN5(VAR5, NULL, 0);
        if (VAR14 < 0)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR15 = FUN5(VAR5, NULL, 0);
        if (VAR15 < 0)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        FUN3(VAR7, sizeof(VAR7), VAR5);
        if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR40;
            VAR26 = VAR41;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR38;
            VAR26 = VAR39;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR42;
            VAR26 = 0;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR43;
            VAR26 = 0;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR44;
            VAR26 = 0;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR45;
            VAR26 = 0;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR46;
            VAR26 = 0;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR47;
            VAR26 = 0;
        }
        else
        {
            fprintf(VAR35, "", VAR32, VAR5);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR27 = FUN5(VAR5, NULL, 0);
        if (VAR27 < 0)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR16 = FUN5(VAR5, NULL, 0);
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR17 = FUN5(VAR5, NULL, 0);
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        VAR18 = FUN5(VAR5, NULL, 0);
    }
    if (VAR16 || VAR17 || VAR18)
    {
        if (VAR16 < 1 || VAR16 > 16383)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
        if (VAR17 < 1 || VAR17 > 16)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
        if (VAR18 < 1 || VAR18 > 63)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        if (!VAR16)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
        if (!strcmp(VAR5, ""))
            VAR19 = VAR48;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR49;
        else if (!strcmp(VAR5, ""))
            VAR19 = VAR36;
        else
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        if (!strcmp(VAR5, ""))
        {
            VAR13 = VAR11;
        }
        else if (!strcmp(VAR5, ""))
        {
            if (VAR16 || VAR18 || VAR17)
            {
                fprintf(VAR35, "", VAR32);
                return -1;
            }
            VAR13 = VAR12;
        }
        else
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        if (!strcmp(VAR5, ""))
            VAR3 = 1;
        else if (!strcmp(VAR5, ""))
            VAR3 = 0;
        else
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
            VAR28 = 0;
        else if (!strcmp(VAR5, ""))
            VAR28 = 1;
        else if (!strcmp(VAR5, ""))
            VAR28 = 2;
        else
        {
            fprintf(VAR35, "");
            return -1;
        }
    }
    if (FUN4(VAR5, sizeof(VAR5), "", VAR32))
    {
        if (strcmp(VAR5, "") == 0)
        {
            fprintf(VAR35, "");
            FUN6(VAR50, NULL);
            fprintf(VAR35, "");
            return -1;
        }
        VAR23 = FUN7(VAR5);
        if (!VAR23)
        {
            fprintf(VAR35, "", VAR5);
            return -1;
        }
    }
    if (VAR2->VAR6 == NULL)
        FUN4(VAR6, sizeof(VAR6), "", VAR32);
    else
        FUN3(VAR6, sizeof(VAR6), VAR2->VAR6);
    if (!FUN4(VAR8, sizeof(VAR8), "", VAR32))
        memset(VAR8, 0, sizeof(VAR8));
    VAR30 = VAR51;
    if (FUN4(VAR5, sizeof(VAR8), "", VAR32))
    {
        if (VAR10 != VAR40 && VAR10 != VAR38 && VAR10 != VAR46)
        {
            fprintf(VAR35, "");
            return -1;
        }
        if (!strcmp(VAR5, ""))
            VAR30 = VAR52;
        else if (!strcmp(VAR5, ""))
            VAR30 = VAR51;
        else if (!strcmp(VAR5, ""))
            VAR30 = VAR53;
        else if (!strcmp(VAR5, ""))
            VAR30 = VAR54;
        else
        {
            fprintf(VAR35, "", VAR5);
            return -1;
        }
    }
    if (VAR27 != -1)
    {
        if (VAR14 != 0 || VAR15 != -1)
        {
            fprintf(VAR35, "", VAR32);
            return -1;
        }
        if (VAR26 == 0)
        {
            VAR15 = VAR27;
            VAR14 = 0;
        }
        else
        {
            VAR15 = VAR27 % VAR26;
            VAR14 = VAR27 / VAR26;
        }
    }
    if (VAR15 == -1)
    {
        VAR15 = 0;
        while (FUN8(VAR10, VAR14, VAR15) != -1)
        {
            VAR15++;
            if (VAR26 && VAR15 >= VAR26)
            {
                VAR15 -= VAR26;
                VAR14++;
            }
        }
    }
    if (VAR26 && VAR15 >= VAR26)
    {
        fprintf(VAR35, "", VAR32, VAR15, VAR26 - 1);
        return -1;
    }
    if (FUN8(VAR10, VAR14, VAR15) != -1)
        return -2;
    if (VAR10 == VAR40 || VAR10 == VAR38)
        VAR9 = (VAR13 == VAR12) ? "" : "";
    if (VAR26)
        snprintf(VAR5, sizeof(VAR5), "", VAR7, VAR14, VAR9, VAR15);
    else
        snprintf(VAR5, sizeof(VAR5), "", VAR7, VAR9, VAR15);
    VAR21 = FUN9(VAR5);
    VAR31 = FUN10();
    VAR55[VAR31].VAR21 = VAR21;
    VAR55[VAR31].VAR10 = VAR10;
    VAR55[VAR31].VAR56 = VAR14;
    VAR55[VAR31].VAR57 = VAR15;
    VAR55[VAR31].VAR30 = VAR30;
    VAR55[VAR31].VAR58 = VAR2 - VAR59;
    strncpy(VAR55[VAR60].VAR8, VAR8, sizeof(VAR8));
    VAR60++;
    switch (VAR10)
    {
    case VAR40:
    case VAR38:
    case VAR47:
        switch (VAR13)
        {
        case VAR11:
            if (VAR16 != 0)
            {
                FUN11(VAR21, VAR16, VAR17, VAR18);
                FUN12(VAR21, VAR19);
            }
            break;
        case VAR12:
            FUN13(VAR21, VAR61);
            break;
        }
        break;
    case VAR45:
    case VAR42:
        FUN13(VAR21, VAR62);
        break;
    case VAR43:
    case VAR44:
    case VAR46:
        break;
    }
    if (!VAR6[0])
        return -2;
    VAR29 = 0;
    if (VAR3)
    {
        VAR29 |= VAR63;
        VAR28 = 2;
    }
    if (VAR28 == 0)
        VAR29 |= VAR64;
    else if (VAR28 == 2)
        VAR29 |= VAR65;
    else if (VAR28 == 3)
        VAR29 |= VAR66;
    if (FUN14(VAR21, VAR6, VAR29, VAR23) < 0)
    {
        fprintf(VAR35, "", VAR6);
        return -1;
    }
    if (FUN15(VAR21))
        VAR67 = 0;
    return VAR31;
}
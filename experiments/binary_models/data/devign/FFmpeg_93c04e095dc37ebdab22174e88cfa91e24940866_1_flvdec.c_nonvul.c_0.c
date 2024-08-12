static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const char *VAR6, int64_t VAR7, int VAR8)
{
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16;
    AMFDataType VAR17;
    char VAR18[256];
    double VAR19;
    VAR19 = 0;
    VAR16 = VAR2->VAR20;
    VAR17 = FUN2(VAR16);
    switch (VAR17)
    {
    case VAR21:
        VAR19 = FUN3(FUN4(VAR16));
        break;
    case VAR22:
        VAR19 = FUN2(VAR16);
        break;
    case VAR23:
        if (FUN5(VAR16, VAR18, sizeof(VAR18)) < 0)
            return -1;
        break;
    case VAR24:
        if ((VAR5 || VAR4) && VAR6 && !strcmp(VAR25, VAR6) && VAR8 == 1)
            if (FUN6(VAR2, VAR16, VAR5 ? VAR5 : VAR4, VAR7) < 0)
                return -1;
        while (FUN7(VAR16) < VAR7 - 2 && FUN5(VAR16, VAR18, sizeof(VAR18)) > 0)
            if (FUN1(VAR2, VAR4, VAR5, VAR18, VAR7, VAR8 + 1) < 0)
                return -1;
        if (FUN2(VAR16) != VAR26)
            return -1;
        break;
    case VAR27:
    case VAR28:
    case VAR29:
        break;
    case VAR30:
        FUN8(VAR16, 4);
        while (FUN7(VAR16) < VAR7 - 2 && FUN5(VAR16, VAR18, sizeof(VAR18)) > 0)
            if (FUN1(VAR2, VAR4, VAR5, VAR18, VAR7, VAR8 + 1) < 0)
                return -1;
        if (FUN2(VAR16) != VAR26)
            return -1;
        break;
    case VAR31:
    {
        unsigned int VAR32, VAR33;
        VAR32 = FUN9(VAR16);
        for (VAR33 = 0; VAR33 < VAR32 && FUN7(VAR16) < VAR7 - 1; VAR33++)
            if (FUN1(VAR2, NULL, NULL, NULL, VAR7, VAR8 + 1) < 0)
                return -1;
    }
    break;
    case VAR34:
        FUN8(VAR16, 8 + 2);
        break;
    default:
        return -1;
    }
    if (VAR6)
    {
        if (VAR8 == 1)
        {
            VAR10 = VAR4 ? VAR4->VAR35 : NULL;
            VAR11 = VAR5 ? VAR5->VAR35 : NULL;
            if (VAR17 == VAR21 || VAR17 == VAR22)
            {
                if (!strcmp(VAR6, ""))
                    VAR2->VAR36 = VAR19 * VAR37;
                else if (!strcmp(VAR6, "") && VAR11 && 0 <= (int)(VAR19 * 1024.0))
                    VAR11->VAR38 = VAR19 * 1024.0;
                else if (!strcmp(VAR6, "") && VAR10 && 0 <= (int)(VAR19 * 1024.0))
                    VAR10->VAR38 = VAR19 * 1024.0;
                else if (!strcmp(VAR6, ""))
                {
                    VAR3 *VAR39 = FUN10(VAR2, VAR40);
                    if (!VAR39)
                        return FUN11(VAR41);
                    VAR39->VAR35->VAR42 = VAR43;
                }
                else if (VAR13->VAR44)
                {
                    if (!strcmp(VAR6, "") && VAR11)
                    {
                        FUN12(VAR2, VAR5, VAR19, 0);
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        int VAR45 = ((int)VAR19) << VAR46;
                        FUN13(VAR2, VAR4, VAR10, VAR45);
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR47 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR48 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR49 = VAR19 + 1;
                        VAR10->VAR50 = VAR10->VAR49 == 2 ? VAR51 : VAR52;
                    }
                    else if (!strcmp(VAR6, "") && VAR11)
                    {
                        VAR11->VAR53 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR11)
                    {
                        VAR11->VAR54 = VAR19;
                    }
                }
            }
        }
        if (!strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, ""))
            return 0;
        if (VAR17 == VAR22)
        {
            FUN14(VAR18, VAR19 > 0 ? "" : "", sizeof(VAR18));
            FUN15(&VAR2->VAR55, VAR6, VAR18, 0);
        }
        else if (VAR17 == VAR21)
        {
            snprintf(VAR18, sizeof(VAR18), "", VAR19);
            FUN15(&VAR2->VAR55, VAR6, VAR18, 0);
        }
        else if (VAR17 == VAR23)
            FUN15(&VAR2->VAR55, VAR6, VAR18, 0);
    }
    return 0;
}
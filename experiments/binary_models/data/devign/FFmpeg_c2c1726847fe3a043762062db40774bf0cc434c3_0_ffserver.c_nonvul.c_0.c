static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    char *VAR6;
    time_t VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    if (FUN2(&VAR11) < 0)
    {
        VAR2->VAR12 = VAR2->VAR13;
        VAR2->VAR14 = VAR2->VAR13;
        return;
    }
    FUN3(VAR11, "");
    FUN3(VAR11, "", "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "", VAR15);
    if (VAR2->VAR5->VAR16[0])
        FUN3(VAR11, ""shortcut VAR17\""%VAR18\"", VAR2->VAR5->VAR16);
    FUN3(VAR11, "");
    FUN3(VAR11, "", VAR15);
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    VAR5 = VAR19;
    while (VAR5 != NULL)
    {
        char VAR20[1024];
        char *VAR21;
        if (VAR5->VAR22 != VAR5)
        {
            FUN4(VAR20, VAR5->VAR23, sizeof(VAR20) - 10);
            VAR21 = VAR20 + strlen(VAR20);
            if (VAR21 - VAR20 >= 4)
            {
                if (strcmp(VAR21 - 4, "") == 0)
                    strcpy(VAR21 - 4, "");
                else if (strcmp(VAR21 - 3, "") == 0)
                    strcpy(VAR21 - 3, "");
                else if (VAR5->VAR24 && !strcmp(VAR5->VAR24->VAR25, ""))
                {
                    VAR21 = strrchr(VAR20, '');
                    if (!VAR21)
                        VAR21 = VAR20 + strlen(VAR20);
                    if (VAR5->VAR26)
                        strcpy(VAR21, "");
                    else
                        strcpy(VAR21, "");
                }
            }
            FUN3(VAR11, ""/%VAR18\"", VAR20, VAR5->VAR23);
            FUN3(VAR11, "", VAR5->VAR27);
            FUN5(VAR11, VAR5->VAR28);
            switch (VAR5->VAR29)
            {
            case VAR30:
            {
                int VAR31 = 0;
                int VAR32 = 0;
                const char *VAR33 = "";
                const char *VAR34 = "";
                const char *VAR35 = "";
                const char *VAR36 = "";
                for (VAR8 = 0; VAR8 < VAR5->VAR37; VAR8++)
                {
                    VAR38 *VAR39 = VAR5->VAR40[VAR8];
                    VAR41 *VAR42 = FUN6(VAR39->VAR42->VAR43);
                    switch (VAR39->VAR42->VAR44)
                    {
                    case VAR45:
                        VAR31 += VAR39->VAR42->VAR46;
                        if (VAR42)
                        {
                            if (*VAR33)
                                VAR35 = "";
                            VAR33 = VAR42->VAR25;
                        }
                        break;
                    case VAR47:
                        VAR32 += VAR39->VAR42->VAR46;
                        if (VAR42)
                        {
                            if (*VAR34)
                                VAR36 = "";
                            VAR34 = VAR42->VAR25;
                        }
                        break;
                    case VAR48:
                        VAR32 += VAR39->VAR42->VAR46;
                        break;
                    default:
                        FUN7();
                    }
                }
                FUN3(VAR11, "", VAR5->VAR24->VAR25, VAR5->VAR49, VAR32 / 1000, VAR34, VAR36, VAR31 / 1000, VAR33, VAR35);
                if (VAR5->VAR22)
                    FUN3(VAR11, "", VAR5->VAR22->VAR23);
                else
                    FUN3(VAR11, "", VAR5->VAR16);
                FUN3(VAR11, "");
            }
            break;
            default:
                FUN3(VAR11, "");
                break;
            }
        }
        VAR5 = VAR5->VAR50;
    }
    FUN3(VAR11, "");
    VAR5 = VAR19;
    while (VAR5 != NULL)
    {
        if (VAR5->VAR22 == VAR5)
        {
            FUN3(VAR11, "", VAR5->VAR23);
            if (VAR5->VAR51)
            {
                FUN3(VAR11, "", VAR5->VAR51);
                {
                    VAR52 *VAR53;
                    char VAR54[64];
                    snprintf(VAR54, sizeof(VAR54), ""%%VAR55,VAR56\"", VAR5->VAR51);
                    VAR53 = popen(VAR54, "");
                    if (VAR53)
                    {
                        char VAR57[10];
                        char VAR58[64];
                        if (fscanf(VAR53, "", VAR57, VAR58) == 2)
                        {
                            FUN3(VAR11, "", VAR57, VAR58);
                        }
                        fclose(VAR53);
                    }
                }
                FUN3(VAR11, "");
            }
            FUN3(VAR11, "");
            for (VAR8 = 0; VAR8 < VAR5->VAR37; VAR8++)
            {
                VAR38 *VAR39 = VAR5->VAR40[VAR8];
                VAR41 *VAR42 = FUN6(VAR39->VAR42->VAR43);
                const char *VAR59 = "";
                char VAR60[64];
                VAR60[0] = 0;
                switch (VAR39->VAR42->VAR44)
                {
                case VAR45:
                    VAR59 = "";
                    snprintf(VAR60, sizeof(VAR60), "", VAR39->VAR42->VAR61, VAR39->VAR42->VAR62);
                    break;
                case VAR47:
                    VAR59 = "";
                    snprintf(VAR60, sizeof(VAR60), "", VAR39->VAR42->VAR63, VAR39->VAR42->VAR64, VAR39->VAR42->VAR65, VAR39->VAR42->VAR66, VAR39->VAR42->VAR67.VAR68 / VAR39->VAR42->VAR67.VAR69);
                    break;
                default:
                    FUN7();
                }
                FUN3(VAR11, "", VAR8, VAR59, VAR39->VAR42->VAR46 / 1000, VAR42 ? VAR42->VAR25 : "", VAR60);
            }
            FUN3(VAR11, "");
        }
        VAR5 = VAR5->VAR50;
    }
    FUN3(VAR11, "");
    FUN3(VAR11, "", VAR70, VAR71);
    FUN3(VAR11, "" VAR72 "" VAR72 "", VAR73, VAR74);
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    VAR3 = VAR75;
    VAR8 = 0;
    while (VAR3 != NULL)
    {
        int VAR76;
        int VAR77;
        VAR76 = 0;
        if (VAR3->VAR5)
        {
            for (VAR77 = 0; VAR77 < VAR3->VAR5->VAR37; VAR77++)
            {
                if (!VAR3->VAR5->VAR22)
                    VAR76 += VAR3->VAR5->VAR40[VAR77]->VAR42->VAR46;
                else if (VAR3->VAR78[VAR77] >= 0)
                    VAR76 += VAR3->VAR5->VAR22->VAR40[VAR3->VAR78[VAR77]]->VAR42->VAR46;
            }
        }
        VAR8++;
        VAR6 = FUN8(VAR3->VAR79.VAR80);
        FUN3(VAR11, "", VAR8, VAR3->VAR5 ? VAR3->VAR5->VAR23 : "", VAR3->VAR81 == VAR82 ? "" : "", VAR6, VAR3->VAR83, VAR84[VAR3->VAR81]);
        FUN5(VAR11, VAR76);
        FUN3(VAR11, "");
        FUN5(VAR11, FUN9(&VAR3->VAR85, VAR3->VAR86) * 8);
        FUN3(VAR11, "");
        FUN5(VAR11, VAR3->VAR86);
        FUN3(VAR11, "");
        VAR3 = VAR3->VAR50;
    }
    FUN3(VAR11, "");
    VAR7 = FUN10(NULL);
    VAR6 = FUN11(&VAR7);
    FUN3(VAR11, "", VAR6);
    FUN3(VAR11, "");
    VAR9 = FUN12(VAR11, &VAR2->VAR87);
    VAR2->VAR12 = VAR2->VAR87;
    VAR2->VAR14 = VAR2->VAR87 + VAR9;
}
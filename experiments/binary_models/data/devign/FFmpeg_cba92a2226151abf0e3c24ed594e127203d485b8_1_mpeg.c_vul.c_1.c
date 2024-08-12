static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0, VAR5 = 0, VAR6 = 0;
    VAR7 *VAR8 = VAR2->VAR9;
    char *VAR10 = NULL;
    size_t VAR11;
    char *VAR12, *VAR13;
    AVBPrint VAR14;
    int64_t VAR15 = 0;
    VAR16 *VAR17 = NULL;
    VAR10 = FUN2(VAR2->VAR18);
    VAR11 = strlen(VAR10);
    VAR12 = VAR10 - 3 + VAR11;
    if (VAR11 < 4 || *(VAR12 - 1) != '')
    {
        FUN3(VAR2, VAR19, ""
                                "");
        VAR4 = VAR20;
        goto VAR21;
    }
    memcpy(VAR12, !FUN4(VAR12, "", 3) ? "" : "", 3);
    FUN3(VAR2, VAR22, "", VAR2->VAR18, VAR10);
    VAR4 = FUN5(&VAR8->VAR23, VAR10, &VAR24, NULL);
    if (VAR4 < 0)
    {
        FUN3(VAR2, VAR19, "", VAR10);
        goto VAR21;
    }
    FUN6(&VAR14, 0, VAR25);
    while (!FUN7(VAR2->VAR26))
    {
        char VAR27[2048];
        int VAR28 = FUN8(VAR2->VAR26, VAR27, sizeof(VAR27));
        if (!VAR28)
            break;
        VAR27[strcspn(VAR27, "")] = 0;
        if (!FUN4(VAR27, "", 3))
        {
            int VAR29, VAR30 = 0;
            char VAR31[64] = {0};
            VAR29 = sscanf(VAR27, "", VAR31, &VAR30);
            if (VAR29 != 2)
            {
                FUN3(VAR2, VAR32, ""
                                          "",
                       VAR27);
                strcpy(VAR31, "");
                VAR30 = 0;
            }
            if (VAR30 >= FUN9(VAR8->VAR33))
            {
                FUN3(VAR2, VAR19, "");
                VAR4 = FUN10(VAR34);
                goto VAR21;
            }
            VAR17 = FUN11(VAR2, NULL);
            if (!VAR17)
            {
                VAR4 = FUN10(VAR35);
                goto VAR21;
            }
            VAR17->VAR31 = VAR30;
            VAR17->VAR36->VAR37 = VAR38;
            VAR17->VAR36->VAR39 = VAR40;
            FUN12(VAR17, 64, 1, 1000);
            FUN13(&VAR17->VAR41, "", VAR31, 0);
            FUN3(VAR2, VAR42, "", VAR30, VAR31);
            VAR5 = 1;
        }
        else if (VAR17 && !FUN4(VAR27, "", 10))
        {
            VAR43 *VAR44;
            int VAR45, VAR46, VAR47, VAR48;
            int64_t VAR49, VAR50;
            const char *VAR51 = VAR27 + 10;
            if (!VAR2->VAR52)
            {
                FUN3(VAR2, VAR19, "");
                VAR4 = VAR20;
                goto VAR21;
            }
            if (sscanf(VAR51, "" VAR53, &VAR45, &VAR46, &VAR47, &VAR48, &VAR49) != 5)
            {
                FUN3(VAR2, VAR19, ""
                                        "",
                       VAR27);
                break;
            }
            VAR50 = (VAR45 * 3600LL + VAR46 * 60LL + VAR47) * 1000LL + VAR48 + VAR15;
            VAR50 = FUN14(VAR50, FUN15(1, 1000), VAR17->VAR54);
            VAR44 = FUN16(&VAR8->VAR33[VAR2->VAR52 - 1], "", 0, 0);
            if (!VAR44)
            {
                VAR4 = FUN10(VAR35);
                goto VAR21;
            }
            VAR44->VAR49 = VAR49;
            VAR44->VAR55 = VAR50;
            VAR44->VAR56 = VAR2->VAR52 - 1;
        }
        else if (VAR17 && !FUN4(VAR27, "", 4))
        {
            const char *VAR51 = VAR27 + 4;
            while (*VAR51 == '')
                VAR51++;
            FUN13(&VAR17->VAR41, "", VAR51, 0);
            FUN3(VAR2, VAR42, "", VAR17->VAR31, VAR51);
            VAR5 = 1;
        }
        else if (!FUN4(VAR27, "", 6))
        {
            int VAR57 = 1, VAR45 = 0, VAR46 = 0, VAR47 = 0, VAR48 = 0;
            const char *VAR51 = VAR27 + 6;
            while (*VAR51 == '')
                VAR51++;
            if (*VAR51 == '' || *VAR51 == '')
            {
                VAR57 = *VAR51 == '' ? -1 : 1;
                VAR51++;
            }
            sscanf(VAR51, "", &VAR45, &VAR46, &VAR47, &VAR48);
            VAR15 = ((VAR45 * 3600LL + VAR46 * 60LL + VAR47) * 1000LL + VAR48) * VAR57;
        }
        else if (!FUN4(VAR27, "", 8))
        {
            const char *VAR51 = VAR27 + 8;
            if (sscanf(VAR51, "", &VAR6) != 1)
                FUN3(VAR2, VAR19, "");
        }
        else if (!VAR5)
        {
            if (VAR27[0] && VAR27[0] != '')
                FUN17(&VAR14, "", VAR27);
        }
    }
    if (VAR6 < VAR2->VAR52)
        VAR2->VAR58[VAR6]->VAR59 |= VAR60;
    for (VAR3 = 0; VAR3 < VAR2->VAR52; VAR3++)
    {
        VAR8->VAR33[VAR3].VAR61 = VAR62;
        FUN18(&VAR8->VAR33[VAR3]);
    }
    if (!FUN19(&VAR14))
    {
        FUN20(&VAR14, NULL);
        VAR4 = FUN10(VAR35);
        goto VAR21;
    }
    FUN20(&VAR14, &VAR13);
    for (VAR3 = 0; VAR3 < VAR2->VAR52; VAR3++)
    {
        VAR16 *VAR63 = VAR2->VAR58[VAR3];
        VAR63->VAR36->VAR64 = FUN2(VAR13);
        VAR63->VAR36->VAR65 = VAR14.VAR28;
    }
    FUN21(VAR13);
VAR21:
    FUN21(VAR10);
    return VAR4;
}
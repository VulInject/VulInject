static int FUN1(VAR1 *VAR2, const char *VAR3, const char **VAR4, int VAR5, VAR6 **VAR7)
{
    char VAR8[1024], VAR9[1024];
    VAR6 *VAR10;
    int VAR11;
    FUN2(VAR7);
    VAR10 = *VAR7;
    if (!FUN3(VAR3, ""))
    {
        char *VAR12;
        VAR6 *VAR13;
        VAR10 = FUN4(sizeof(VAR6));
        if (!VAR10)
            return FUN5(VAR14);
        VAR2->VAR15 = FUN6(NULL);
        VAR2->VAR16 = FUN6(NULL);
        if (!VAR2->VAR16 || !VAR2->VAR15)
        {
            FUN7(VAR10);
            FUN8(&VAR2->VAR16);
            FUN8(&VAR2->VAR15);
            return FUN5(VAR14);
        }
        VAR2->VAR15->VAR17 = VAR18;
        VAR2->VAR16->VAR17 = VAR19;
        FUN9(VAR10->VAR20, sizeof(VAR10->VAR20), VAR4);
        VAR12 = strrchr(VAR10->VAR20, '');
        if (VAR12)
            *VAR12 = '';
        for (VAR13 = VAR2->VAR21; VAR13; VAR13 = VAR13->VAR22)
        {
            if (!strcmp(VAR10->VAR20, VAR13->VAR20))
                FUN10("", VAR13->VAR20);
        }
        VAR10->VAR23 = FUN11(NULL, VAR10->VAR20, NULL);
        if (VAR10->VAR23)
        {
            VAR2->VAR24 = VAR10->VAR23->VAR25;
            VAR2->VAR26 = VAR10->VAR23->VAR27;
        }
        else
        {
            VAR2->VAR24 = VAR28;
            VAR2->VAR26 = VAR28;
        }
        *VAR7 = VAR10;
        return 0;
    }
    FUN2(VAR10);
    if (!FUN3(VAR3, ""))
    {
        VAR6 *VAR29;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR29 = VAR2->VAR30;
        while (VAR29)
        {
            if (!strcmp(VAR29->VAR20, VAR8))
                break;
            VAR29 = VAR29->VAR31;
        }
        if (!VAR29)
            FUN10("", VAR8, VAR10->VAR20);
        else
            VAR10->VAR32 = VAR29;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (!strcmp(VAR8, ""))
        {
            VAR10->VAR33 = VAR34;
            VAR10->VAR23 = NULL;
        }
        else
        {
            VAR10->VAR33 = VAR35;
            if (!strcmp(VAR8, ""))
                strcpy(VAR8, "");
            VAR10->VAR23 = FUN11(VAR8, NULL, NULL);
            if (!VAR10->VAR23)
                FUN10("", VAR8);
        }
        if (VAR10->VAR23)
        {
            VAR2->VAR24 = VAR10->VAR23->VAR25;
            VAR2->VAR26 = VAR10->VAR23->VAR27;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR36 = FUN12(VAR8);
        if (!VAR10->VAR36)
            FUN10("", VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        if (VAR10->VAR33 == VAR34)
            FUN9(VAR10->VAR37, sizeof(VAR10->VAR37), VAR4);
        else
            FUN10("");
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, "") || !FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        char VAR38[32];
        int VAR39;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        for (VAR39 = 0; VAR39 < strlen(VAR3); VAR39++)
            VAR38[VAR39] = FUN13(VAR3[VAR39]);
        VAR38[VAR39] = 0;
        FUN14(""
                "",
                VAR3, VAR38);
        if (FUN15(&VAR10->VAR40, VAR38, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN9(VAR9, sizeof(VAR9), VAR4);
        if (FUN15(&VAR10->VAR40, VAR8, VAR9, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR42 = FUN16(VAR8) * 1000;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR10->VAR43 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN17(VAR2->VAR15, VAR8, VAR2, VAR5);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN17(VAR2->VAR16, VAR8, VAR2, VAR5);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR44 = FUN16(VAR8) * 1000;
    }
    else if (!FUN3(VAR3, ""))
    {
        float VAR45;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN18(&VAR45, VAR8, 1000, 0, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN19(&VAR2->VAR47, VAR3, FUN20(VAR45), 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, 1, 8, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR47, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, 0, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR47, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        int VAR49, VAR50;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (sscanf(VAR8, "", &VAR49, &VAR50) == 2)
        {
            if (FUN19(&VAR2->VAR51, "", VAR49, 0) < 0 || FUN19(&VAR2->VAR51, "", VAR50, 0) < 0)
                goto VAR41;
        }
        else
            FUN10(""
                  "",
                  VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, VAR52, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, VAR52, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 8 * 1024, 0, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 1000, VAR52, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 1000, 0, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        int VAR53, VAR54, VAR55;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR53 = FUN22(&VAR54, &VAR55, VAR8);
        if (VAR53 < 0)
            FUN10("", VAR8);
        else if ((VAR54 % 2) || (VAR55 % 2))
            FUN14("");
        if (FUN19(&VAR2->VAR51, "", VAR54, 0) < 0 || FUN19(&VAR2->VAR51, "", VAR55, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        AVRational VAR56;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (FUN23(&VAR56, VAR8) < 0)
        {
            FUN10("", VAR8);
        }
        else
        {
            if (FUN19(&VAR2->VAR51, "", VAR56.VAR57, 0) < 0 || FUN19(&VAR2->VAR51, "", VAR56.VAR58, 0) < 0)
                goto VAR41;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        enum AVPixelFormat VAR59;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        VAR59 = FUN24(VAR8);
        if (VAR59 == VAR60)
            FUN10("", VAR8);
        if (FUN19(&VAR2->VAR51, VAR3, VAR59, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, VAR52, VAR48, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        int VAR53;
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN9(VAR9, sizeof(VAR9), VAR4);
        if (!FUN3(VAR3, ""))
            VAR53 = FUN25(VAR2->VAR16, VAR8, VAR9, &VAR2->VAR61, VAR62, VAR2, VAR5);
        else
            VAR53 = FUN25(VAR2->VAR15, VAR8, VAR9, &VAR2->VAR63, VAR64, VAR2, VAR5);
        if (VAR53 < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (!FUN3(VAR3, ""))
            FUN26(VAR8, VAR2->VAR16, VAR2, VAR5);
        else
            FUN26(VAR8, VAR2->VAR15, VAR2, VAR5);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (strlen(VAR8) == 4)
        {
            if (FUN15(&VAR2->VAR51, "", "", 0) < 0)
                goto VAR41;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN15(&VAR2->VAR51, VAR3, "", 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN18(NULL, VAR8, 0, -VAR46, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN18(NULL, VAR8, 0, -VAR46, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN15(&VAR2->VAR51, VAR3, VAR8, 0) < 0)
            goto VAR41;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR2->VAR65 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR2->VAR66 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN27(VAR10, NULL, NULL, *VAR4, VAR2->VAR20, VAR5);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR10->VAR67, sizeof(VAR10->VAR67), VAR4);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN28(&VAR10->VAR68);
        VAR10->VAR68 = FUN29(VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        if (FUN30(&VAR10->VAR69, VAR8))
            FUN10("", VAR8);
        VAR10->VAR70 = 1;
        VAR10->VAR71 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(&VAR11, VAR8, 0, 1, 65535, VAR2, VAR5, "", VAR8);
        VAR10->VAR72 = VAR11;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN9(VAR8, sizeof(VAR8), VAR4);
        FUN21(&VAR11, VAR8, 0, VAR52, VAR48, VAR2, VAR5, "", VAR8);
        VAR10->VAR73 = VAR11;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR10->VAR71 = 0;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (VAR10->VAR32 && VAR10->VAR23 && strcmp(VAR10->VAR23->VAR74, ""))
        {
            if (VAR2->VAR15->VAR75 == VAR28)
                VAR2->VAR15->VAR75 = VAR2->VAR24;
            if (!VAR2->VAR66 && VAR2->VAR15->VAR75 != VAR28)
            {
                VAR76 *VAR77 = FUN6(FUN31(VAR2->VAR15->VAR75));
                FUN32(VAR77, VAR2->VAR47, &VAR2->VAR63);
                FUN33(VAR10, VAR77);
            }
            if (VAR2->VAR16->VAR75 == VAR28)
                VAR2->VAR16->VAR75 = VAR2->VAR26;
            if (!VAR2->VAR65 && VAR2->VAR16->VAR75 != VAR28)
            {
                VAR76 *VAR78 = FUN6(FUN31(VAR2->VAR16->VAR75));
                FUN32(VAR78, VAR2->VAR51, &VAR2->VAR61);
                FUN33(VAR10, VAR78);
            }
        }
        FUN34(&VAR2->VAR61);
        FUN34(&VAR2->VAR51);
        FUN34(&VAR2->VAR63);
        FUN34(&VAR2->VAR47);
        FUN8(&VAR2->VAR16);
        FUN8(&VAR2->VAR15);
        *VAR7 = NULL;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        FUN9(VAR10->VAR37, sizeof(VAR10->VAR37), VAR4);
    }
    else
    {
        FUN10("", VAR3);
    }
    return 0;
VAR41:
    FUN35(NULL, VAR79, "");
    FUN34(&VAR2->VAR61);
    FUN34(&VAR2->VAR51);
    FUN34(&VAR2->VAR63);
    FUN34(&VAR2->VAR47);
    FUN8(&VAR2->VAR16);
    FUN8(&VAR2->VAR15);
    return FUN5(VAR14);
}
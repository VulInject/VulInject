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
        if (!VAR2->VAR15)
        {
            FUN7(VAR10);
            return FUN5(VAR14);
        }
        FUN8(VAR10->VAR16, sizeof(VAR10->VAR16), VAR4);
        VAR12 = strrchr(VAR10->VAR16, '');
        if (VAR12)
            *VAR12 = '';
        for (VAR13 = VAR2->VAR17; VAR13; VAR13 = VAR13->VAR18)
        {
            if (!strcmp(VAR10->VAR16, VAR13->VAR16))
                FUN9("", VAR13->VAR16);
        }
        VAR10->VAR19 = FUN10(NULL, VAR10->VAR16, NULL);
        if (VAR10->VAR19)
        {
            VAR2->VAR20 = VAR10->VAR19->VAR21;
            VAR2->VAR22 = VAR10->VAR19->VAR23;
        }
        else
        {
            VAR2->VAR20 = VAR24;
            VAR2->VAR22 = VAR24;
        }
        *VAR7 = VAR10;
        return 0;
    }
    FUN2(VAR10);
    if (!FUN3(VAR3, ""))
    {
        VAR6 *VAR25;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR25 = VAR2->VAR26;
        while (VAR25)
        {
            if (!strcmp(VAR25->VAR16, VAR8))
                break;
            VAR25 = VAR25->VAR27;
        }
        if (!VAR25)
            FUN9("", VAR8, VAR10->VAR16);
        else
            VAR10->VAR28 = VAR25;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (!strcmp(VAR8, ""))
        {
            VAR10->VAR29 = VAR30;
            VAR10->VAR19 = NULL;
        }
        else
        {
            VAR10->VAR29 = VAR31;
            if (!strcmp(VAR8, ""))
                strcpy(VAR8, "");
            VAR10->VAR19 = FUN10(VAR8, NULL, NULL);
            if (!VAR10->VAR19)
                FUN9("", VAR8);
        }
        if (VAR10->VAR19)
        {
            VAR2->VAR20 = VAR10->VAR19->VAR21;
            VAR2->VAR22 = VAR10->VAR19->VAR23;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR32 = FUN11(VAR8);
        if (!VAR10->VAR32)
            FUN9("", VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        if (VAR10->VAR29 == VAR30)
            FUN8(VAR10->VAR33, sizeof(VAR10->VAR33), VAR4);
        else
            FUN9("");
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, "") || !FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        char VAR34[32];
        int VAR35;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        for (VAR35 = 0; VAR35 < strlen(VAR3); VAR35++)
            VAR34[VAR35] = FUN12(VAR3[VAR35]);
        VAR34[VAR35] = 0;
        FUN13(""
                "",
                VAR3, VAR34);
        if (FUN14(&VAR10->VAR36, VAR34, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN8(VAR9, sizeof(VAR9), VAR4);
        if (FUN14(&VAR10->VAR36, VAR8, VAR9, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR38 = FUN15(VAR8) * 1000;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR10->VAR39 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR2->VAR20 = FUN16(VAR8, VAR40);
        if (VAR2->VAR20 == VAR24)
            FUN9("", VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR2->VAR22 = FUN16(VAR8, VAR41);
        if (VAR2->VAR22 == VAR24)
            FUN9("", VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR10->VAR42 = FUN15(VAR8) * 1000;
    }
    else if (!FUN3(VAR3, ""))
    {
        float VAR43;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN17(&VAR43, VAR8, 1000, 0, VAR44, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN18(&VAR2->VAR45, VAR3, FUN19(VAR43), 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, 1, 8, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR45, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, 0, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR45, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        int VAR47, VAR48;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (sscanf(VAR8, "", &VAR47, &VAR48) == 2)
        {
            if (FUN18(&VAR2->VAR49, "", VAR47, 0) < 0 || FUN18(&VAR2->VAR49, "", VAR48, 0) < 0)
                goto VAR37;
        }
        else
            FUN9("", VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, VAR50, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, VAR50, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 8 * 1024, 0, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 1000, VAR50, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 1000, 0, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        int VAR51, VAR52, VAR53;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR51 = FUN21(&VAR52, &VAR53, VAR8);
        if (VAR51 < 0)
            FUN9("", VAR8);
        else if ((VAR52 % 16) || (VAR53 % 16))
            FUN9("");
        if (FUN18(&VAR2->VAR49, "", VAR52, 0) < 0 || FUN18(&VAR2->VAR49, "", VAR53, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        AVRational VAR54;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (FUN22(&VAR54, VAR8) < 0)
        {
            FUN9("", VAR8);
        }
        else
        {
            if (FUN18(&VAR2->VAR49, "", VAR54.VAR55, 0) < 0 || FUN18(&VAR2->VAR49, "", VAR54.VAR56, 0) < 0)
                goto VAR37;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        enum AVPixelFormat VAR57;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        VAR57 = FUN23(VAR8);
        if (VAR57 == VAR58)
            FUN9("", VAR8);
        if (FUN18(&VAR2->VAR49, VAR3, VAR57, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, VAR50, VAR46, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        int VAR51;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN8(VAR9, sizeof(VAR9), VAR4);
        if (!FUN3(VAR3, ""))
            VAR51 = FUN24(VAR8, VAR9, &VAR2->VAR59, VAR60, VAR2, VAR5);
        else
            VAR51 = FUN24(VAR8, VAR9, &VAR2->VAR61, VAR62, VAR2, VAR5);
        if (VAR51 < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        char **VAR63 = NULL;
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (!FUN3(VAR3, ""))
        {
            VAR63 = &VAR2->VAR64;
            FUN25(VAR8, NULL, 0, NULL, &VAR2->VAR22);
        }
        else
        {
            VAR63 = &VAR2->VAR65;
            FUN25(VAR8, NULL, 0, &VAR2->VAR20, NULL);
        }
        *VAR63 = FUN26(VAR8);
        if (!VAR63)
            return FUN5(VAR14);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (strlen(VAR8) == 4)
        {
            if (FUN14(&VAR2->VAR49, "", "", 0) < 0)
                goto VAR37;
        }
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (FUN14(&VAR2->VAR49, VAR3, "", 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(NULL, VAR8, 0, 1, 31, VAR2, VAR5, "", VAR3);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN17(NULL, VAR8, 0, -VAR44, VAR44, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN17(NULL, VAR8, 0, -VAR44, VAR44, VAR2, VAR5, "", VAR3, VAR8);
        if (FUN14(&VAR2->VAR49, VAR3, VAR8, 0) < 0)
            goto VAR37;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR2->VAR22 = VAR24;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR2->VAR20 = VAR24;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN27(VAR10, NULL, NULL, *VAR4, VAR2->VAR16, VAR5);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR10->VAR66, sizeof(VAR10->VAR66), VAR4);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN28(&VAR10->VAR67);
        VAR10->VAR67 = FUN26(VAR8);
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        if (FUN29(&VAR10->VAR68, VAR8) != 0)
            FUN9("", VAR8);
        VAR10->VAR69 = 1;
        VAR10->VAR70 = 1;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(&VAR11, VAR8, 0, 1, 65535, VAR2, VAR5, "", VAR8);
        VAR10->VAR71 = VAR11;
    }
    else if (!FUN3(VAR3, ""))
    {
        FUN8(VAR8, sizeof(VAR8), VAR4);
        FUN20(&VAR11, VAR8, 0, VAR50, VAR46, VAR2, VAR5, "", VAR8);
        VAR10->VAR72 = VAR11;
    }
    else if (!FUN3(VAR3, ""))
    {
        VAR10->VAR70 = 0;
    }
    else if (!FUN3(VAR3, ""))
    {
        if (VAR10->VAR28 && VAR10->VAR19 && strcmp(VAR10->VAR19->VAR73, "") != 0)
        {
            if (VAR2->VAR20 != VAR24)
            {
                VAR74 *VAR75 = FUN6(FUN30(VAR2->VAR20));
                if (VAR2->VAR65 && FUN25(VAR8, VAR75, VAR62 | VAR76, NULL, NULL) < 0)
                    FUN9("", VAR8);
                FUN31(VAR75, VAR2->VAR45, &VAR2->VAR61);
                FUN32(VAR10, VAR75);
            }
            if (VAR2->VAR22 != VAR24)
            {
                VAR74 *VAR77 = FUN6(FUN30(VAR2->VAR22));
                if (VAR2->VAR64 && FUN25(VAR8, VAR77, VAR60 | VAR76, NULL, NULL) < 0)
                    FUN9("", VAR8);
                FUN31(VAR77, VAR2->VAR49, &VAR2->VAR59);
                FUN32(VAR10, VAR77);
            }
        }
        FUN33(&VAR2->VAR59);
        FUN33(&VAR2->VAR49);
        FUN33(&VAR2->VAR61);
        FUN33(&VAR2->VAR45);
        FUN28(&VAR2->VAR64);
        FUN28(&VAR2->VAR65);
        FUN34(&VAR2->VAR15);
        *VAR7 = NULL;
    }
    else if (!FUN3(VAR3, "") || !FUN3(VAR3, ""))
    {
        FUN8(VAR10->VAR33, sizeof(VAR10->VAR33), VAR4);
    }
    else
    {
        FUN9("", VAR3);
    }
    return 0;
VAR37:
    FUN35(NULL, VAR78, "");
    FUN33(&VAR2->VAR59);
    FUN33(&VAR2->VAR49);
    FUN33(&VAR2->VAR61);
    FUN33(&VAR2->VAR45);
    FUN28(&VAR2->VAR64);
    FUN28(&VAR2->VAR65);
    FUN34(&VAR2->VAR15);
    return FUN5(VAR14);
}
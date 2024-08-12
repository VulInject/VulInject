int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    char VAR5[1024];
    int VAR6, VAR7;
    VAR8 *VAR9;
    char *VAR10 = NULL;
    VAR6 = 0;
    if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
    {
        VAR6 = FUN3(VAR5, NULL, 0);
    }
    VAR9 = FUN4(VAR6, 1);
    if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
    {
        VAR10 = FUN5(VAR5);
    }
    if (!strcmp(VAR3, ""))
    {
        static const char *const VAR11[] = {"", "", "", "", "", "", "", NULL};
        VAR12 *VAR13;
        VAR14 *VAR15;
        int VAR16 = FUN6();
        if (FUN7(VAR5, sizeof(VAR5), VAR11, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        if (VAR16 == -1 || VAR18 >= VAR19)
        {
            FUN8(VAR2, "");
            VAR7 = -1;
            goto VAR17;
        }
        VAR13 = &VAR20[VAR16];
        memset(VAR13, 0, sizeof(*VAR13));
        VAR15 = VAR13->VAR15;
        VAR15[0] = 0x52;
        VAR15[1] = 0x54;
        VAR15[2] = 0x00;
        VAR15[3] = 0x12;
        VAR15[4] = 0x34;
        VAR15[5] = 0x56 + VAR16;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            if (FUN9(VAR15, VAR5) < 0)
            {
                FUN8(VAR2, "");
                VAR7 = -1;
                goto VAR17;
            }
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR13->VAR21 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR13->VAR22 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR13->VAR23 = FUN5(VAR5);
        }
        VAR13->VAR24 = VAR25;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            char *VAR26;
            long VAR27 = FUN3(VAR5, &VAR26, 0);
            if (*VAR26)
            {
                FUN8(VAR2, "");
                VAR7 = -1;
                goto VAR17;
            }
            if (VAR27 < 0 || VAR27 > 0x7ffffff)
            {
                FUN8(VAR2, "");
                VAR7 = -1;
                goto VAR17;
            }
            VAR13->VAR24 = VAR27;
        }
        VAR13->VAR9 = VAR9;
        VAR13->VAR10 = VAR10;
        VAR13->VAR28 = 1;
        VAR10 = NULL;
        VAR18++;
        VAR9->VAR29++;
        VAR7 = VAR16;
    }
    else if (!strcmp(VAR3, ""))
    {
        if (*VAR4 != '')
        {
            FUN8(VAR2, "");
            VAR7 = -1;
            goto VAR17;
        }
        VAR7 = 0;
    }
    else if (!strcmp(VAR3, ""))
    {
        static const char *const VAR30[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", NULL};
        struct VAR31 *VAR32;
        int VAR33 = 0;
        char *VAR34 = NULL;
        char *VAR35 = NULL;
        char *VAR36 = NULL;
        char *VAR37 = NULL;
        char *VAR38 = NULL;
        char *VAR39 = NULL;
        char *VAR40 = NULL;
        char *VAR41 = NULL;
        char *VAR42 = NULL;
        const char *VAR43;
        if (FUN7(VAR5, sizeof(VAR5), VAR30, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            int VAR44 = strlen(VAR5) + strlen("") + 1;
            VAR34 = FUN10(VAR44);
            FUN11(VAR34, VAR44, VAR5);
            FUN12(VAR34, VAR44, "");
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR34 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR35 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR36 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR33 = (VAR5[0] == '') ? 1 : 0;
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR39 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR40 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR37 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR38 = FUN5(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR41 = FUN5(VAR5);
            if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
            {
                VAR42 = FUN5(VAR5);
            }
        }
        VAR43 = VAR4;
        while (1)
        {
            VAR32 = FUN10(sizeof(*VAR32));
            if (!FUN13(VAR32->VAR45, sizeof(VAR32->VAR45), "", &VAR43))
            {
                break;
            }
            VAR32->VAR46 = VAR47;
            VAR32->VAR48 = VAR49;
            VAR49 = VAR32;
            VAR32 = NULL;
        }
        VAR43 = VAR4;
        while (1)
        {
            VAR32 = FUN10(sizeof(*VAR32));
            if (!FUN13(VAR32->VAR45, sizeof(VAR32->VAR45), "", &VAR43))
            {
                break;
            }
            VAR32->VAR46 = 0;
            VAR32->VAR48 = VAR49;
            VAR49 = VAR32;
            VAR32 = NULL;
        }
        FUN14(VAR32);
        VAR9->VAR50++;
        VAR7 = FUN15(VAR2, VAR9, VAR3, VAR10, VAR33, VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR40, VAR41, VAR42);
        while (VAR49)
        {
            VAR32 = VAR49;
            VAR49 = VAR32->VAR48;
            FUN14(VAR32);
        }
        FUN14(VAR34);
        FUN14(VAR35);
        FUN14(VAR36);
        FUN14(VAR37);
        FUN14(VAR38);
        FUN14(VAR39);
        FUN14(VAR40);
        FUN14(VAR41);
        FUN14(VAR42);
    }
    else if (!strcmp(VAR3, ""))
    {
        if (FUN16(&VAR51))
        {
            struct VAR31 *VAR32;
            VAR32 = FUN10(sizeof(*VAR32));
            FUN11(VAR32->VAR45, sizeof(VAR32->VAR45), VAR4);
            VAR32->VAR46 = VAR52;
            VAR32->VAR48 = VAR49;
            VAR49 = VAR32;
        }
        else
        {
            FUN17(FUN18(&VAR51), VAR2, VAR4, 1);
        }
        VAR7 = 0;
    }
    else if (!strcmp(VAR3, ""))
    {
        static const char *const VAR53[] = {"", "", "", NULL};
        char VAR54[64];
        if (FUN7(VAR5, sizeof(VAR5), VAR53, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        if (FUN2(VAR54, sizeof(VAR54), "", VAR4) <= 0)
        {
            FUN8(VAR2, "");
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR50++;
        VAR7 = FUN19(VAR9, VAR3, VAR10, VAR54);
    }
    else if (!strcmp(VAR3, ""))
    {
        char VAR54[64], VAR55[64];
        char VAR56[1024], VAR57[1024];
        VAR58 *VAR59;
        int VAR60;
        VAR9->VAR50++;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR61[] = {"", "", "", "", NULL};
            VAR7 = -1;
            if (FUN7(VAR55, sizeof(VAR55), VAR61, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                goto VAR17;
            }
            VAR60 = FUN20(VAR2, VAR5);
            if (VAR60 == -1)
            {
                goto VAR17;
            }
            FUN21(VAR60, VAR62, VAR63);
            VAR59 = FUN22(VAR9, VAR3, VAR10, VAR60);
            if (!VAR59)
            {
                close(VAR60);
            }
        }
        else
        {
            static const char *const VAR53[] = {"", "", "", "", "", "", NULL};
            if (FUN7(VAR55, sizeof(VAR55), VAR53, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            if (FUN2(VAR54, sizeof(VAR54), "", VAR4) <= 0)
            {
                VAR54[0] = '';
            }
            if (FUN2(VAR56, sizeof(VAR56), "", VAR4) == 0)
            {
                FUN11(VAR56, sizeof(VAR56), VAR64);
            }
            if (FUN2(VAR57, sizeof(VAR57), "", VAR4) == 0)
            {
                FUN11(VAR57, sizeof(VAR57), VAR65);
            }
            VAR59 = FUN23(VAR9, VAR3, VAR10, VAR54, VAR56, VAR57);
        }
        if (VAR59 != NULL)
        {
            const char *VAR66 = NULL;
            if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
            {
                VAR66 = VAR5;
            }
            FUN24(VAR59, VAR66, VAR2);
            VAR7 = 0;
        }
        else
        {
            VAR7 = -1;
        }
    }
    else if (!strcmp(VAR3, ""))
    {
        char VAR55[64];
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR61[] = {"", "", "", NULL};
            int VAR60;
            VAR7 = -1;
            if (FUN7(VAR55, sizeof(VAR55), VAR61, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                goto VAR17;
            }
            VAR60 = FUN20(VAR2, VAR5);
            if (VAR60 == -1)
            {
                goto VAR17;
            }
            if (!FUN25(VAR9, VAR3, VAR10, VAR60, 1))
            {
                close(VAR60);
                goto VAR17;
            }
            VAR7 = 0;
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR67[] = {"", "", "", NULL};
            if (FUN7(VAR55, sizeof(VAR55), VAR67, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN26(VAR9, VAR3, VAR10, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR68[] = {"", "", "", NULL};
            if (FUN7(VAR55, sizeof(VAR55), VAR68, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN27(VAR9, VAR3, VAR10, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR69[] = {"", "", "", NULL};
            if (FUN7(VAR55, sizeof(VAR55), VAR69, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR55, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN28(VAR9, VAR3, VAR10, VAR5);
        }
        else
        {
            FUN8(VAR2, "", VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR50++;
    }
    else if (!strcmp(VAR3, ""))
    {
        static const char *const VAR70[] = {"", "", "", "", "", "", NULL};
        char VAR71[1024], VAR72[512];
        int VAR73, VAR74;
        if (FUN7(VAR5, sizeof(VAR5), VAR70, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR50++;
        if (FUN2(VAR71, sizeof(VAR71), "", VAR4) <= 0)
        {
            VAR71[0] = '';
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR73 = FUN3(VAR5, NULL, 10);
        }
        else
        {
            VAR73 = 0;
        }
        if (FUN2(VAR72, sizeof(VAR72), "", VAR4) <= 0)
        {
            VAR72[0] = '';
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR74 = FUN3(VAR5, NULL, 8);
        }
        else
        {
            VAR74 = 0700;
        }
        VAR7 = FUN29(VAR9, VAR3, VAR10, VAR71, VAR73, VAR72, VAR74);
    }
    else if (!strcmp(VAR3, ""))
    {
        int VAR75 = 65536;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR75 = FUN3(VAR5, NULL, 0);
        }
        if (!FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            snprintf(VAR5, sizeof(VAR5), "", VAR6);
        }
        VAR7 = FUN30(VAR2, VAR9, VAR3, VAR10, VAR5, VAR75);
    }
    else
    {
        FUN8(VAR2, "", VAR3);
        VAR7 = -1;
        goto VAR17;
    }
    if (VAR7 < 0)
    {
        FUN8(VAR2, "", VAR3);
    }
VAR17:
    FUN14(VAR10);
    return VAR7;
}
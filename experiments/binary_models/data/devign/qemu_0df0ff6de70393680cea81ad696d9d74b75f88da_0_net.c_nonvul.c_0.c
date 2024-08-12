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
    VAR9 = FUN4(VAR6);
    if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
    {
        VAR10 = FUN5(VAR5);
    }
    if (!strcmp(VAR3, ""))
    {
        static const char *const VAR11[] = {"", "", "", "", "", NULL};
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
            VAR13->VAR21 = strdup(VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR13->VAR22 = strdup(VAR5);
        }
        VAR13->VAR9 = VAR9;
        VAR13->VAR10 = VAR10;
        VAR13->VAR23 = 1;
        VAR10 = NULL;
        VAR18++;
        VAR9->VAR24++;
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
        static const char *const VAR25[] = {"", "", "", "", "", NULL};
        int VAR26 = 0;
        char *VAR27 = NULL;
        if (FUN7(VAR5, sizeof(VAR5), VAR25, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            FUN10(VAR28, sizeof(VAR28), VAR5);
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR26 = (VAR5[0] == '') ? 1 : 0;
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            VAR27 = FUN5(VAR5);
        }
        VAR9->VAR29++;
        VAR7 = FUN11(VAR9, VAR3, VAR10, VAR26, VAR27);
        FUN12(VAR27);
    }
    else if (!strcmp(VAR3, ""))
    {
        long VAR30;
        char VAR10[20], *VAR31;
        struct VAR32 *VAR33;
        VAR30 = FUN3(VAR4, &VAR31, 10);
        VAR31++;
        if (VAR30 < 1 || VAR30 > 65535)
        {
            FUN8(VAR2, "");
            VAR7 = -1;
            goto VAR17;
        }
        VAR33 = malloc(sizeof(struct VAR32));
        snprintf(VAR10, 20, "", VAR30);
        VAR33->VAR34 = FUN13(VAR10, VAR31, NULL);
        if (!VAR33->VAR34)
        {
            FUN8(VAR2, "", VAR31);
            VAR7 = -1;
            goto VAR17;
        }
        VAR33->VAR30 = VAR30;
        FUN14(3, VAR33->VAR34, 4, VAR30);
        FUN15(VAR33->VAR34, VAR35, VAR36, NULL, VAR33);
        VAR7 = 0;
    }
    else if (!strcmp(VAR3, ""))
    {
        static const char *const VAR37[] = {"", "", "", NULL};
        char VAR38[64];
        if (FUN7(VAR5, sizeof(VAR5), VAR37, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        if (FUN2(VAR38, sizeof(VAR38), "", VAR4) <= 0)
        {
            FUN8(VAR2, "");
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR29++;
        VAR7 = FUN16(VAR9, VAR3, VAR10, VAR38);
    }
    else if (!strcmp(VAR3, ""))
    {
        char VAR38[64], VAR39[64];
        char VAR40[1024], VAR41[1024];
        VAR42 *VAR43;
        int VAR44;
        VAR9->VAR29++;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR45[] = {"", "", "", "", NULL};
            if (FUN7(VAR39, sizeof(VAR39), VAR45, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR44 = FUN3(VAR5, NULL, 0);
            FUN17(VAR44, VAR46, VAR47);
            VAR43 = FUN18(VAR9, VAR3, VAR10, VAR44);
        }
        else
        {
            static const char *const VAR37[] = {"", "", "", "", "", "", NULL};
            if (FUN7(VAR39, sizeof(VAR39), VAR37, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            if (FUN2(VAR38, sizeof(VAR38), "", VAR4) <= 0)
            {
                VAR38[0] = '';
            }
            if (FUN2(VAR40, sizeof(VAR40), "", VAR4) == 0)
            {
                FUN10(VAR40, sizeof(VAR40), VAR48);
            }
            if (FUN2(VAR41, sizeof(VAR41), "", VAR4) == 0)
            {
                FUN10(VAR41, sizeof(VAR41), VAR49);
            }
            VAR43 = FUN19(VAR9, VAR3, VAR10, VAR38, VAR40, VAR41);
        }
        if (VAR43 != NULL)
        {
            if (FUN2(VAR5, sizeof(VAR5), "", VAR4))
            {
                FUN20(VAR43, FUN21(VAR5), VAR2);
            }
            VAR7 = 0;
        }
        else
        {
            VAR7 = -1;
        }
    }
    else if (!strcmp(VAR3, ""))
    {
        char VAR39[64];
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR45[] = {"", "", "", NULL};
            int VAR44;
            if (FUN7(VAR39, sizeof(VAR39), VAR45, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR44 = FUN3(VAR5, NULL, 0);
            VAR7 = -1;
            if (FUN22(VAR9, VAR3, VAR10, VAR44, 1))
                VAR7 = 0;
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR50[] = {"", "", "", NULL};
            if (FUN7(VAR39, sizeof(VAR39), VAR50, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN23(VAR9, VAR3, VAR10, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR51[] = {"", "", "", NULL};
            if (FUN7(VAR39, sizeof(VAR39), VAR51, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN24(VAR9, VAR3, VAR10, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            static const char *const VAR52[] = {"", "", "", NULL};
            if (FUN7(VAR39, sizeof(VAR39), VAR52, VAR4) < 0)
            {
                FUN8(VAR2, "", VAR39, VAR4);
                VAR7 = -1;
                goto VAR17;
            }
            VAR7 = FUN25(VAR9, VAR3, VAR10, VAR5);
        }
        else
        {
            FUN8(VAR2, "", VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR29++;
    }
    else if (!strcmp(VAR3, ""))
    {
        static const char *const VAR53[] = {"", "", "", "", "", "", NULL};
        char VAR54[1024], VAR55[512];
        int VAR56, VAR57;
        if (FUN7(VAR5, sizeof(VAR5), VAR53, VAR4) < 0)
        {
            FUN8(VAR2, "", VAR5, VAR4);
            VAR7 = -1;
            goto VAR17;
        }
        VAR9->VAR29++;
        if (FUN2(VAR54, sizeof(VAR54), "", VAR4) <= 0)
        {
            VAR54[0] = '';
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR56 = FUN3(VAR5, NULL, 10);
        }
        else
        {
            VAR56 = 0;
        }
        if (FUN2(VAR55, sizeof(VAR55), "", VAR4) <= 0)
        {
            VAR55[0] = '';
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR57 = FUN3(VAR5, NULL, 8);
        }
        else
        {
            VAR57 = 0700;
        }
        VAR7 = FUN26(VAR9, VAR3, VAR10, VAR54, VAR56, VAR55, VAR57);
    }
    else if (!strcmp(VAR3, ""))
    {
        int VAR58 = 65536;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR4) > 0)
        {
            VAR58 = FUN3(VAR5, NULL, 0);
        }
        if (!FUN2(VAR5, sizeof(VAR5), "", VAR4))
        {
            snprintf(VAR5, sizeof(VAR5), "", VAR6);
        }
        VAR7 = FUN27(VAR2, VAR9, VAR3, VAR10, VAR5, VAR58);
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
    FUN12(VAR10);
    return VAR7;
}
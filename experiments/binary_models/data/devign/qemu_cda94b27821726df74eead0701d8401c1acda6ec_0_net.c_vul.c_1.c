int FUN1(const char *VAR1, const char *VAR2)
{
    static const char *const VAR3[] = {"", "", "", NULL};
    char VAR4[1024];
    int VAR5, VAR6;
    VAR7 *VAR8;
    char *VAR9 = NULL;
    VAR5 = 0;
    if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
    {
        VAR5 = FUN3(VAR4, NULL, 0);
    }
    VAR8 = FUN4(VAR5);
    if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
    {
        VAR9 = strdup(VAR4);
    }
    if (!strcmp(VAR1, ""))
    {
        static const char *const VAR10[] = {"", "", "", "", NULL};
        VAR11 *VAR12;
        VAR13 *VAR14;
        int VAR15 = FUN5();
        if (FUN6(VAR10, VAR2) < 0)
        {
            fprintf(VAR16, "", VAR2);
            return -1;
        }
        if (VAR15 == -1 || VAR17 >= VAR18)
        {
            fprintf(VAR16, "");
            VAR6 = -1;
            goto VAR19;
        }
        VAR12 = &VAR20[VAR15];
        VAR14 = VAR12->VAR14;
        VAR14[0] = 0x52;
        VAR14[1] = 0x54;
        VAR14[2] = 0x00;
        VAR14[3] = 0x12;
        VAR14[4] = 0x34;
        VAR14[5] = 0x56 + VAR15;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            if (FUN7(VAR14, VAR4) < 0)
            {
                fprintf(VAR16, "");
                VAR6 = -1;
                goto VAR19;
            }
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            VAR12->VAR21 = strdup(VAR4);
        }
        VAR12->VAR8 = VAR8;
        VAR12->VAR9 = VAR9;
        VAR12->VAR22 = 1;
        VAR9 = NULL;
        VAR17++;
        VAR8->VAR23++;
        VAR6 = VAR15;
    }
    else if (!strcmp(VAR1, ""))
    {
        if (*VAR2 != '')
        {
            fprintf(VAR16, "");
            return -1;
        }
        VAR6 = 0;
    }
    else if (!strcmp(VAR1, ""))
    {
        static const char *const VAR24[] = {"", "", "", "", "", NULL};
        if (FUN6(VAR24, VAR2) < 0)
        {
            fprintf(VAR16, "", VAR2);
            return -1;
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            FUN8(VAR25, sizeof(VAR25), VAR4);
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            VAR26 = (VAR4[0] == '') ? 1 : 0;
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            VAR27 = strdup(VAR4);
        }
        VAR8->VAR28++;
        VAR6 = FUN9(VAR8, VAR1, VAR9);
    }
    else if (!strcmp(VAR1, ""))
    {
        long VAR29;
        char VAR9[20], *VAR30;
        struct VAR31 *VAR32;
        VAR29 = FUN3(VAR2, &VAR30, 10);
        VAR30++;
        if (VAR29 < 1 || VAR29 > 65535)
        {
            fprintf(VAR16, "");
            VAR6 = -1;
            goto VAR19;
        }
        VAR32 = malloc(sizeof(struct VAR31));
        snprintf(VAR9, 20, "", VAR29);
        VAR32->VAR33 = FUN10(VAR9, VAR30, NULL);
        if (!VAR32->VAR33)
        {
            fprintf(VAR16, ""
                            "",
                    VAR30);
            VAR6 = -1;
            goto VAR19;
        }
        VAR32->VAR29 = VAR29;
        FUN11(3, VAR32->VAR33, 4, VAR29);
        FUN12(VAR32->VAR33, VAR34, VAR35, NULL, VAR32);
        VAR6 = 0;
    }
    else if (!strcmp(VAR1, ""))
    {
        static const char *const VAR36[] = {"", "", "", NULL};
        char VAR37[64];
        if (FUN6(VAR36, VAR2) < 0)
        {
            fprintf(VAR16, "", VAR2);
            return -1;
        }
        if (FUN2(VAR37, sizeof(VAR37), "", VAR2) <= 0)
        {
            fprintf(VAR16, "");
            VAR6 = -1;
            goto VAR19;
        }
        VAR8->VAR28++;
        VAR6 = FUN13(VAR8, VAR1, VAR9, VAR37);
    }
    else if (!strcmp(VAR1, ""))
    {
        char VAR37[64];
        char VAR38[1024], VAR39[1024];
        int VAR40;
        VAR8->VAR28++;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            if (FUN6(VAR3, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            VAR40 = FUN3(VAR4, NULL, 0);
            FUN14(VAR40, VAR41, VAR42);
            FUN15(VAR8, VAR1, VAR9, VAR40);
            VAR6 = 0;
        }
        else
        {
            static const char *const VAR36[] = {"", "", "", "", "", NULL};
            if (FUN6(VAR36, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            if (FUN2(VAR37, sizeof(VAR37), "", VAR2) <= 0)
            {
                VAR37[0] = '';
            }
            if (FUN2(VAR38, sizeof(VAR38), "", VAR2) == 0)
            {
                FUN8(VAR38, sizeof(VAR38), VAR43);
            }
            if (FUN2(VAR39, sizeof(VAR39), "", VAR2) == 0)
            {
                FUN8(VAR39, sizeof(VAR39), VAR44);
            }
            VAR6 = FUN16(VAR8, VAR1, VAR9, VAR37, VAR38, VAR39);
        }
    }
    else if (!strcmp(VAR1, ""))
    {
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            int VAR40;
            if (FUN6(VAR3, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            VAR40 = FUN3(VAR4, NULL, 0);
            VAR6 = -1;
            if (FUN17(VAR8, VAR1, VAR9, VAR40, 1))
                VAR6 = 0;
        }
        else if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            static const char *const VAR45[] = {"", "", "", NULL};
            if (FUN6(VAR45, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            VAR6 = FUN18(VAR8, VAR1, VAR9, VAR4);
        }
        else if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            static const char *const VAR46[] = {"", "", "", NULL};
            if (FUN6(VAR46, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            VAR6 = FUN19(VAR8, VAR1, VAR9, VAR4);
        }
        else if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            static const char *const VAR47[] = {"", "", "", NULL};
            if (FUN6(VAR47, VAR2) < 0)
            {
                fprintf(VAR16, "", VAR2);
                return -1;
            }
            VAR6 = FUN20(VAR8, VAR1, VAR9, VAR4);
        }
        else
        {
            fprintf(VAR16, "", VAR2);
            VAR6 = -1;
            goto VAR19;
        }
        VAR8->VAR28++;
    }
    else if (!strcmp(VAR1, ""))
    {
        static const char *const VAR48[] = {"", "", "", "", "", "", NULL};
        char VAR49[1024], VAR50[512];
        int VAR51, VAR52;
        if (FUN6(VAR48, VAR2) < 0)
        {
            fprintf(VAR16, "", VAR2);
            return -1;
        }
        VAR8->VAR28++;
        if (FUN2(VAR49, sizeof(VAR49), "", VAR2) <= 0)
        {
            VAR49[0] = '';
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            VAR51 = FUN3(VAR4, NULL, 10);
        }
        else
        {
            VAR51 = 0;
        }
        if (FUN2(VAR50, sizeof(VAR50), "", VAR2) <= 0)
        {
            VAR50[0] = '';
        }
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            VAR52 = FUN3(VAR4, NULL, 8);
        }
        else
        {
            VAR52 = 0700;
        }
        VAR6 = FUN21(VAR8, VAR1, VAR9, VAR49, VAR51, VAR50, VAR52);
    }
    else if (!strcmp(VAR1, ""))
    {
        int VAR53 = 65536;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR2) > 0)
        {
            VAR53 = FUN3(VAR4, NULL, 0);
        }
        if (!FUN2(VAR4, sizeof(VAR4), "", VAR2))
        {
            snprintf(VAR4, sizeof(VAR4), "", VAR5);
        }
        VAR6 = FUN22(VAR8, VAR1, VAR9, VAR4, VAR53);
    }
    else
    {
        fprintf(VAR16, "", VAR1);
        VAR6 = -1;
        goto VAR19;
    }
    if (VAR6 < 0)
    {
        fprintf(VAR16, "", VAR1);
    }
VAR19:
    if (VAR9)
        free(VAR9);
    return VAR6;
}
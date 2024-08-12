static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[8], VAR9[256], VAR10[1024], VAR11[100], *VAR12;
    char *VAR13, *VAR14, VAR15[1024];
    uint8_t VAR16[2048];
    int VAR17;
    VAR18 *VAR19 = NULL;
    int VAR20;
    if (VAR6->VAR21 > 0)
        VAR6->VAR22 = 1;
    VAR6->VAR23 = !(VAR4 & VAR24);
    FUN2(VAR8, sizeof(VAR8), VAR11, sizeof(VAR11), VAR9, sizeof(VAR9), &VAR17, VAR10, sizeof(VAR10), VAR2->VAR25);
    if (strchr(VAR10, ''))
    {
        FUN3(VAR2, VAR26, ""
                                  ""
                                  "");
    }
    if (VAR11[0])
    {
        char *VAR27 = strchr(VAR11, '');
        if (VAR27)
        {
            *VAR27 = '';
            FUN4(VAR6->VAR28, VAR11, sizeof(VAR6->VAR28));
            FUN4(VAR6->VAR29, VAR27 + 1, sizeof(VAR6->VAR29));
        }
    }
    if (VAR6->VAR22 && strcmp(VAR8, ""))
    {
        FUN3(VAR2, VAR30, "", VAR8);
        return FUN5(VAR31);
    }
    if (!strcmp(VAR8, "") || !strcmp(VAR8, ""))
    {
        if (!strcmp(VAR8, ""))
            FUN6(&VAR19, "", "", 1);
        FUN7(VAR16, sizeof(VAR16), "", NULL, VAR9, VAR17, NULL);
    }
    else if (!strcmp(VAR8, ""))
    {
        if (VAR17 < 0)
            VAR17 = VAR32;
        FUN7(VAR16, sizeof(VAR16), "", NULL, VAR9, VAR17, NULL);
    }
    else if (!strcmp(VAR8, "") || (!strcmp(VAR8, "")))
    {
        if (!strcmp(VAR8, ""))
            FUN6(&VAR19, "", "", 1);
        FUN7(VAR16, sizeof(VAR16), "", NULL, VAR9, VAR17, NULL);
        VAR6->VAR33 = 1;
    }
    else
    {
        if (VAR17 < 0)
            VAR17 = VAR34;
        if (VAR6->VAR22)
            FUN7(VAR16, sizeof(VAR16), "", NULL, VAR9, VAR17, "", VAR6->VAR21 * 1000);
        else
            FUN7(VAR16, sizeof(VAR16), "", NULL, VAR9, VAR17, NULL);
    }
VAR35:
    if ((VAR20 = FUN8(&VAR6->VAR36, VAR16, VAR37, &VAR2->VAR38, &VAR19)) < 0)
    {
        FUN3(VAR2, VAR30, "", VAR16);
        goto VAR39;
    }
    if (VAR6->VAR40)
    {
        if ((VAR20 = FUN9(VAR2)) < 0)
            goto VAR39;
    }
    VAR6->VAR41 = VAR42;
    if (!VAR6->VAR22 && (VAR20 = FUN10(VAR2, VAR6)) < 0)
        goto VAR39;
    if (VAR6->VAR22 && (VAR20 = FUN11(VAR2, VAR6)) < 0)
        goto VAR39;
    VAR6->VAR43 = 128;
    VAR6->VAR44 = 128;
    VAR6->VAR41 = VAR45;
    VAR13 = VAR6->VAR46;
    VAR6->VAR46 = FUN12(VAR47);
    if (!VAR6->VAR46)
    {
        VAR20 = FUN5(VAR48);
        goto VAR39;
    }
    VAR14 = strchr(VAR10, '');
    if (VAR14 && strstr(VAR14, ""))
    {
        char *VAR49;
        FUN4(VAR6->VAR46, VAR10 + 1, FUN13(VAR14 - VAR10, VAR47));
        VAR12 = strstr(VAR10, "") + 6;
        VAR49 = strchr(VAR12, '');
        if (VAR49)
        {
            FUN4(VAR15, VAR12, FUN13(VAR49 - VAR12 + 1, sizeof(VAR15)));
            VAR12 = VAR15;
        }
    }
    else if (!FUN14(VAR10, "", 10))
    {
        VAR12 = VAR10 + 10;
        memcpy(VAR6->VAR46, "", 9);
    }
    else
    {
        char *VAR50 = *VAR10 ? VAR10 + 1 : VAR10;
        char *VAR51 = strchr(VAR50, '');
        if (!VAR51)
        {
            VAR12 = VAR50;
            VAR6->VAR46[0] = '';
        }
        else
        {
            char *VAR52 = strchr(VAR51 + 1, '');
            VAR12 = strchr(VAR51 + 1, '');
            if (!VAR12 || (VAR52 && VAR52 < VAR12))
            {
                VAR12 = VAR51 + 1;
                FUN4(VAR6->VAR46, VAR10 + 1, FUN13(VAR51 - VAR10, VAR47));
            }
            else
            {
                VAR12++;
                FUN4(VAR6->VAR46, VAR10 + 1, FUN13(VAR12 - VAR10 - 1, VAR47));
            }
        }
    }
    if (VAR13)
    {
        if (strlen(VAR13) >= VAR47)
        {
            VAR20 = FUN5(VAR31);
            goto VAR39;
        }
        FUN15(VAR6->VAR46);
        VAR6->VAR46 = VAR13;
    }
    if (!VAR6->VAR53)
    {
        int VAR54 = strlen(VAR12);
        VAR6->VAR53 = FUN12(VAR55);
        if (!VAR6->VAR53)
        {
            VAR20 = FUN5(VAR48);
            goto VAR39;
        }
        if (!strchr(VAR12, '') && VAR54 >= 4 && (!strcmp(VAR12 + VAR54 - 4, "") || !strcmp(VAR12 + VAR54 - 4, "")))
        {
            memcpy(VAR6->VAR53, "", 5);
        }
        else
        {
            if (VAR54 >= 4 && !strcmp(VAR12 + VAR54 - 4, ""))
                VAR12[VAR54 - 4] = '';
            VAR6->VAR53[0] = 0;
        }
        FUN16(VAR6->VAR53, VAR12, VAR55);
    }
    if (!VAR6->VAR56)
    {
        VAR6->VAR56 = FUN12(VAR57);
        if (!VAR6->VAR56)
        {
            VAR20 = FUN5(VAR48);
            goto VAR39;
        }
        FUN7(VAR6->VAR56, VAR57, VAR8, NULL, VAR9, VAR17, "", VAR6->VAR46);
    }
    if (!VAR6->VAR58)
    {
        VAR6->VAR58 = FUN12(VAR59);
        if (!VAR6->VAR58)
        {
            VAR20 = FUN5(VAR48);
            goto VAR39;
        }
        if (VAR6->VAR23)
        {
            snprintf(VAR6->VAR58, VAR59, "", VAR60, VAR61, VAR62, VAR63, VAR64);
        }
        else
        {
            snprintf(VAR6->VAR58, VAR59, "", VAR65);
        }
    }
    VAR6->VAR66 = 1048576;
    VAR6->VAR67 = 0;
    VAR6->VAR68 = 0;
    VAR6->VAR69 = 0;
    VAR6->VAR70 = 0;
    VAR6->VAR71 = 0;
    VAR6->VAR72 = 2500000;
    FUN3(VAR2, VAR73, "", VAR8, VAR10, VAR6->VAR46, VAR6->VAR53);
    if (!VAR6->VAR22)
    {
        if ((VAR20 = FUN17(VAR2, VAR6)) < 0)
            goto VAR39;
    }
    else
    {
        if ((VAR20 = FUN18(VAR2, VAR2->VAR7)) < 0)
            goto VAR39;
    }
    do
    {
        VAR20 = FUN19(VAR2, 1);
    } while (VAR20 == FUN5(VAR74));
    if (VAR20 < 0)
        goto VAR39;
    if (VAR6->VAR75)
    {
        int VAR76;
        FUN20(VAR6->VAR36);
        VAR6->VAR36 = NULL;
        VAR6->VAR75 = 0;
        VAR6->VAR77 = 0;
        for (VAR76 = 0; VAR76 < 2; VAR76++)
            memset(VAR6->VAR78[VAR76], 0, sizeof(**VAR6->VAR78) * VAR6->VAR79[VAR76]);
        FUN21(VAR6);
        goto VAR35;
    }
    if (VAR6->VAR23)
    {
        int VAR80;
        VAR6->VAR81 = 13;
        if ((VAR80 = FUN22(&VAR6->VAR82, VAR6->VAR81)) < 0)
            return VAR80;
        VAR6->VAR83 = 0;
        memcpy(VAR6->VAR82, "", VAR6->VAR81);
        while (!VAR6->VAR68 && !VAR6->VAR69 && !VAR6->VAR70)
        {
            if ((VAR20 = FUN19(VAR2, 0)) < 0)
                return VAR20;
        }
        if (VAR6->VAR68)
        {
            VAR6->VAR82[4] |= VAR84;
        }
        if (VAR6->VAR69)
        {
            VAR6->VAR82[4] |= VAR85;
        }
    }
    else
    {
        VAR6->VAR81 = 0;
        VAR6->VAR82 = NULL;
        VAR6->VAR83 = 0;
        VAR6->VAR86 = 13;
    }
    VAR2->VAR87 = VAR6->VAR36->VAR87;
    VAR2->VAR88 = 1;
    return 0;
VAR39:
    FUN23(&VAR19);
    FUN24(VAR2);
    return VAR20;
}
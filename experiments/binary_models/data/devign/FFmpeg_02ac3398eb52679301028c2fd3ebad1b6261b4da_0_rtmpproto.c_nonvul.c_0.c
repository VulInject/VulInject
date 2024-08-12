static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[8], VAR9[256], VAR10[1024], VAR11[100], *VAR12;
    char *VAR13;
    uint8_t VAR14[2048];
    int VAR15;
    VAR16 *VAR17 = NULL;
    int VAR18;
    if (VAR6->VAR19 > 0)
        VAR6->VAR20 = 1;
    VAR6->VAR21 = !(VAR4 & VAR22);
    FUN2(VAR8, sizeof(VAR8), VAR11, sizeof(VAR11), VAR9, sizeof(VAR9), &VAR15, VAR10, sizeof(VAR10), VAR2->VAR23);
    if (VAR11[0])
    {
        char *VAR24 = strchr(VAR11, '');
        if (VAR24)
        {
            *VAR24 = '';
            FUN3(VAR6->VAR25, VAR11, sizeof(VAR6->VAR25));
            FUN3(VAR6->VAR26, VAR24 + 1, sizeof(VAR6->VAR26));
        }
    }
    if (VAR6->VAR20 && strcmp(VAR8, ""))
    {
        FUN4(VAR2, VAR27, "", VAR8);
        return FUN5(VAR28);
    }
    if (!strcmp(VAR8, "") || !strcmp(VAR8, ""))
    {
        if (!strcmp(VAR8, ""))
            FUN6(&VAR17, "", "", 1);
        FUN7(VAR14, sizeof(VAR14), "", NULL, VAR9, VAR15, NULL);
    }
    else if (!strcmp(VAR8, ""))
    {
        if (VAR15 < 0)
            VAR15 = VAR29;
        FUN7(VAR14, sizeof(VAR14), "", NULL, VAR9, VAR15, NULL);
    }
    else if (!strcmp(VAR8, "") || (!strcmp(VAR8, "")))
    {
        if (!strcmp(VAR8, ""))
            FUN6(&VAR17, "", "", 1);
        FUN7(VAR14, sizeof(VAR14), "", NULL, VAR9, VAR15, NULL);
        VAR6->VAR30 = 1;
    }
    else
    {
        if (VAR15 < 0)
            VAR15 = VAR31;
        if (VAR6->VAR20)
            FUN7(VAR14, sizeof(VAR14), "", NULL, VAR9, VAR15, "", VAR6->VAR19 * 1000);
        else
            FUN7(VAR14, sizeof(VAR14), "", NULL, VAR9, VAR15, NULL);
    }
VAR32:
    if ((VAR18 = FUN8(&VAR6->VAR33, VAR14, VAR34, &VAR2->VAR35, &VAR17)) < 0)
    {
        FUN4(VAR2, VAR27, "", VAR14);
        goto VAR36;
    }
    if (VAR6->VAR37)
    {
        if ((VAR18 = FUN9(VAR2)) < 0)
            goto VAR36;
    }
    VAR6->VAR38 = VAR39;
    if (!VAR6->VAR20 && (VAR18 = FUN10(VAR2, VAR6)) < 0)
        goto VAR36;
    if (VAR6->VAR20 && (VAR18 = FUN11(VAR2, VAR6)) < 0)
        goto VAR36;
    VAR6->VAR40 = 128;
    VAR6->VAR41 = 128;
    VAR6->VAR38 = VAR42;
    VAR13 = VAR6->VAR43;
    VAR6->VAR43 = FUN12(VAR44);
    if (!VAR6->VAR43)
    {
        VAR18 = FUN5(VAR45);
        goto VAR36;
    }
    if (!FUN13(VAR10, "", 10))
    {
        VAR12 = VAR10 + 10;
        memcpy(VAR6->VAR43, "", 9);
    }
    else
    {
        char *VAR46 = *VAR10 ? VAR10 + 1 : VAR10;
        char *VAR47 = strchr(VAR46, '');
        if (!VAR47)
        {
            VAR12 = VAR46;
            VAR6->VAR43[0] = '';
        }
        else
        {
            char *VAR48 = strchr(VAR47 + 1, '');
            VAR12 = strchr(VAR47 + 1, '');
            if (!VAR12 || (VAR48 && VAR48 < VAR12))
            {
                VAR12 = VAR47 + 1;
                FUN3(VAR6->VAR43, VAR10 + 1, FUN14(VAR47 - VAR10, VAR44));
            }
            else
            {
                VAR12++;
                FUN3(VAR6->VAR43, VAR10 + 1, FUN14(VAR12 - VAR10 - 1, VAR44));
            }
        }
    }
    if (VAR13)
    {
        if (strlen(VAR13) >= VAR44)
        {
            VAR18 = FUN5(VAR28);
            goto VAR36;
        }
        FUN15(VAR6->VAR43);
        VAR6->VAR43 = VAR13;
    }
    if (!VAR6->VAR49)
    {
        int VAR50 = strlen(VAR12);
        VAR6->VAR49 = FUN12(VAR51);
        if (!VAR6->VAR49)
        {
            VAR18 = FUN5(VAR45);
            goto VAR36;
        }
        if (!strchr(VAR12, '') && VAR50 >= 4 && (!strcmp(VAR12 + VAR50 - 4, "") || !strcmp(VAR12 + VAR50 - 4, "")))
        {
            memcpy(VAR6->VAR49, "", 5);
        }
        else if (VAR50 >= 4 && !strcmp(VAR12 + VAR50 - 4, ""))
        {
            VAR12[VAR50 - 4] = '';
        }
        else
        {
            VAR6->VAR49[0] = 0;
        }
        FUN16(VAR6->VAR49, VAR12, VAR51);
    }
    if (!VAR6->VAR52)
    {
        VAR6->VAR52 = FUN12(VAR53);
        if (!VAR6->VAR52)
        {
            VAR18 = FUN5(VAR45);
            goto VAR36;
        }
        FUN7(VAR6->VAR52, VAR53, VAR8, NULL, VAR9, VAR15, "", VAR6->VAR43);
    }
    if (!VAR6->VAR54)
    {
        VAR6->VAR54 = FUN12(VAR55);
        if (!VAR6->VAR54)
        {
            VAR18 = FUN5(VAR45);
            goto VAR36;
        }
        if (VAR6->VAR21)
        {
            snprintf(VAR6->VAR54, VAR55, "", VAR56, VAR57, VAR58, VAR59, VAR60);
        }
        else
        {
            snprintf(VAR6->VAR54, VAR55, "", VAR61);
        }
    }
    VAR6->VAR62 = 1048576;
    VAR6->VAR63 = 0;
    VAR6->VAR64 = 0;
    VAR6->VAR65 = 2500000;
    FUN4(VAR2, VAR66, "", VAR8, VAR10, VAR6->VAR43, VAR6->VAR49);
    if (!VAR6->VAR20)
    {
        if ((VAR18 = FUN17(VAR2, VAR6)) < 0)
            goto VAR36;
    }
    else
    {
        if (FUN18(VAR2, VAR2->VAR7) < 0)
            goto VAR36;
        VAR6->VAR21 = 1;
    }
    do
    {
        VAR18 = FUN19(VAR2, 1);
    } while (VAR18 == VAR67);
    if (VAR18 < 0)
        goto VAR36;
    if (VAR6->VAR68)
    {
        FUN20(VAR6->VAR33);
        VAR6->VAR33 = NULL;
        VAR6->VAR68 = 0;
        VAR6->VAR69 = 0;
        memset(VAR6->VAR70, 0, sizeof(VAR6->VAR70));
        FUN21(VAR6);
        goto VAR32;
    }
    if (VAR6->VAR21)
    {
        VAR6->VAR71 = 13;
        VAR6->VAR72 = FUN22(VAR6->VAR72, VAR6->VAR71);
        VAR6->VAR73 = 0;
        memcpy(VAR6->VAR72, "", VAR6->VAR71);
    }
    else
    {
        VAR6->VAR71 = 0;
        VAR6->VAR72 = NULL;
        VAR6->VAR73 = 0;
        VAR6->VAR74 = 13;
    }
    VAR2->VAR75 = VAR6->VAR33->VAR75;
    VAR2->VAR76 = 1;
    return 0;
VAR36:
    FUN23(&VAR17);
    FUN24(VAR2);
    return VAR18;
}
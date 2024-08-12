static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6, VAR7 = 0;
    char VAR8[VAR9];
    int64_t VAR10 = 0, VAR11;
    const char *VAR12 = NULL;
    const char *VAR13 = NULL;
    const char *VAR14 = NULL;
    int VAR15 = 0;
    int VAR16 = 0;
    bool VAR17, VAR18, VAR19;
    char VAR20[VAR9] = "";
    char VAR21[VAR22], VAR23[VAR22], VAR24[VAR22];
    const int64_t VAR25 = 0x80000000;
    const char *VAR26;
    char VAR27[VAR9] = "";
    uint32_t VAR28 = 0xffffffff;
    uint32_t VAR29 = 16;
    bool VAR30 = false;
    const char VAR31[] = ""
                                 ""
                                 ""
                                 ""
                                 ""%VAR32\""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""%VAR33\""
                                 ""%""\""
                                 ""%VAR33\""
                                 ""63\""
                                 ""%VAR32\"";
    if (FUN2(VAR1, VAR21, VAR23, VAR24, VAR22, VAR5))
    {
        return -VAR34;
    }
    while (VAR3 && VAR3->VAR35)
    {
        if (!strcmp(VAR3->VAR35, VAR36))
        {
            VAR10 = VAR3->VAR37.VAR38;
        }
        else if (!strcmp(VAR3->VAR35, VAR39))
        {
            VAR12 = VAR3->VAR37.VAR32;
        }
        else if (!strcmp(VAR3->VAR35, VAR40))
        {
            VAR13 = VAR3->VAR37.VAR32;
        }
        else if (!strcmp(VAR3->VAR35, VAR41))
        {
            VAR15 |= VAR3->VAR37.VAR38 ? VAR42 : 0;
        }
        else if (!strcmp(VAR3->VAR35, VAR43))
        {
            VAR14 = VAR3->VAR37.VAR32;
        }
        else if (!strcmp(VAR3->VAR35, VAR44))
        {
            VAR30 |= VAR3->VAR37.VAR38;
        }
        VAR3++;
    }
    if (!VAR12)
    {
        VAR12 = "";
    }
    else if (strcmp(VAR12, "") && strcmp(VAR12, "") && strcmp(VAR12, "") && strcmp(VAR12, ""))
    {
        FUN3(VAR5, "", VAR12);
        return -VAR34;
    }
    if (strcmp(VAR12, "") != 0)
    {
        VAR29 = 255;
    }
    if (!VAR14)
    {
        VAR14 = "";
    }
    else if (strcmp(VAR14, "") && strcmp(VAR14, "") && strcmp(VAR14, "") && strcmp(VAR14, "") && strcmp(VAR14, ""))
    {
        FUN3(VAR5, "", VAR14);
        return -VAR34;
    }
    VAR18 = !(strcmp(VAR14, "") && strcmp(VAR14, ""));
    VAR17 = !(strcmp(VAR14, "") && strcmp(VAR14, ""));
    VAR19 = !strcmp(VAR14, "");
    if (VAR17)
    {
        VAR26 = ""%VAR32\"";
    }
    else
    {
        VAR26 = ""%VAR32\"";
    }
    if (VAR17 && VAR13)
    {
        FUN3(VAR5, "");
        return -VAR45;
    }
    if (VAR17 && VAR30)
    {
        FUN3(VAR5, "");
        return -VAR45;
    }
    if (VAR13)
    {
        VAR46 *VAR47 = FUN4("");
        VAR16 = FUN5(VAR47, VAR13, NULL, VAR48, NULL, VAR5);
        if (VAR16 != 0)
        {
            FUN6(VAR47);
            return VAR16;
        }
        if (strcmp(VAR47->VAR49->VAR50, ""))
        {
            FUN6(VAR47);
            return -VAR34;
        }
        VAR28 = FUN7(VAR47, 0);
        FUN6(VAR47);
        snprintf(VAR27, sizeof(VAR27), ""%VAR32\"", VAR13);
    }
    VAR11 = VAR10;
    while (VAR11 > 0)
    {
        char VAR51[VAR9];
        char VAR52[VAR22];
        char VAR53[VAR22];
        int64_t VAR54 = VAR11;
        if (VAR18 && VAR54 > VAR25)
        {
            VAR54 = VAR25;
        }
        if (VAR18)
        {
            snprintf(VAR53, sizeof(VAR53), "", VAR23, VAR17 ? '' : '', ++VAR7, VAR24);
        }
        else if (VAR17)
        {
            snprintf(VAR53, sizeof(VAR53), "", VAR23, VAR24);
        }
        else
        {
            snprintf(VAR53, sizeof(VAR53), "", VAR23, VAR24);
        }
        snprintf(VAR52, sizeof(VAR52), "", VAR21, VAR53);
        if (FUN8(VAR52, VAR54, VAR17, VAR19, VAR30))
        {
            return -VAR34;
        }
        VAR11 -= VAR54;
        snprintf(VAR51, sizeof(VAR51), VAR26, VAR54 / 512, VAR53);
        FUN9(VAR20, sizeof(VAR20), VAR51);
    }
    snprintf(VAR8, sizeof(VAR8), VAR31, (unsigned int)FUN10(NULL), VAR28, VAR14, VAR27, VAR20, (VAR15 & VAR42 ? 6 : 4), VAR10 / (VAR55)(63 * VAR29 * 512), VAR29, VAR12);
    if (VAR18 || VAR17)
    {
        VAR6 = FUN11(VAR1, VAR56 | VAR57 | VAR58 | VAR59 | VAR60, 0644);
    }
    else
    {
        VAR6 = FUN11(VAR1, VAR56 | VAR59 | VAR60, 0644);
    }
    if (VAR6 < 0)
    {
        return -VAR61;
    }
    if (!VAR18 && !VAR17 && 0x200 != FUN12(VAR6, 0x200, VAR62))
    {
        VAR16 = -VAR61;
        goto VAR63;
    }
    VAR16 = FUN13(VAR6, VAR8, strlen(VAR8));
    if (VAR16 != strlen(VAR8))
    {
        VAR16 = -VAR61;
        goto VAR63;
    }
    VAR16 = 0;
VAR63:
    FUN14(VAR6);
    return VAR16;
}
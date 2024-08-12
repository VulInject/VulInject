static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    VAR7 *VAR8 = NULL;
    VAR4 *VAR9;
    char *VAR10 = NULL;
    int64_t VAR11 = 0, VAR12;
    const char *VAR13 = NULL;
    const char *VAR14 = NULL;
    const char *VAR15 = NULL;
    int VAR16 = 0;
    int VAR17 = 0;
    bool VAR18, VAR19, VAR20;
    VAR21 *VAR22;
    char VAR23[VAR24], VAR25[VAR24], VAR26[VAR24];
    const int64_t VAR27 = 0x80000000;
    const char *VAR28;
    char VAR29[VAR30] = "";
    uint32_t VAR31 = 0xffffffff;
    uint32_t VAR32 = 16;
    bool VAR33 = false;
    uint32_t VAR34 = 0, VAR35;
    const char VAR36[] = ""
                                 ""
                                 "" VAR37 ""
                                 "" VAR37 ""
                                 ""%VAR38\""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""%VAR39\""
                                 ""%""\""
                                 ""%""\""
                                 ""63\""
                                 ""%VAR38\"";
    VAR22 = FUN2(NULL);
    if (FUN3(VAR1, VAR23, VAR25, VAR26, VAR24, VAR5))
    {
        VAR17 = -VAR40;
        goto VAR41;
    }
    while (VAR3 && VAR3->VAR42)
    {
        if (!strcmp(VAR3->VAR42, VAR43))
        {
            VAR11 = VAR3->VAR44.VAR45;
        }
        else if (!strcmp(VAR3->VAR42, VAR46))
        {
            VAR13 = VAR3->VAR44.VAR38;
        }
        else if (!strcmp(VAR3->VAR42, VAR47))
        {
            VAR14 = VAR3->VAR44.VAR38;
        }
        else if (!strcmp(VAR3->VAR42, VAR48))
        {
            VAR16 |= VAR3->VAR44.VAR45 ? VAR49 : 0;
        }
        else if (!strcmp(VAR3->VAR42, VAR50))
        {
            VAR15 = VAR3->VAR44.VAR38;
        }
        else if (!strcmp(VAR3->VAR42, VAR51))
        {
            VAR33 |= VAR3->VAR44.VAR45;
        }
        VAR3++;
    }
    if (!VAR13)
    {
        VAR13 = "";
    }
    else if (strcmp(VAR13, "") && strcmp(VAR13, "") && strcmp(VAR13, "") && strcmp(VAR13, ""))
    {
        FUN4(VAR5, "", VAR13);
        VAR17 = -VAR40;
        goto VAR41;
    }
    if (strcmp(VAR13, "") != 0)
    {
        VAR32 = 255;
    }
    if (!VAR15)
    {
        VAR15 = "";
    }
    else if (strcmp(VAR15, "") && strcmp(VAR15, "") && strcmp(VAR15, "") && strcmp(VAR15, "") && strcmp(VAR15, ""))
    {
        FUN4(VAR5, "", VAR15);
        VAR17 = -VAR40;
        goto VAR41;
    }
    VAR19 = !(strcmp(VAR15, "") && strcmp(VAR15, ""));
    VAR18 = !(strcmp(VAR15, "") && strcmp(VAR15, ""));
    VAR20 = !strcmp(VAR15, "");
    if (VAR18)
    {
        VAR28 = "" VAR52 ""%VAR38\"";
    }
    else
    {
        VAR28 = "" VAR52 ""%VAR38\"";
    }
    if (VAR18 && VAR14)
    {
        FUN4(VAR5, "");
        VAR17 = -VAR53;
        goto VAR41;
    }
    if (VAR18 && VAR33)
    {
        FUN4(VAR5, "");
        VAR17 = -VAR53;
        goto VAR41;
    }
    if (VAR14)
    {
        VAR7 *VAR54 = NULL;
        VAR17 = FUN5(&VAR54, VAR14, NULL, NULL, VAR55, NULL, VAR5);
        if (VAR17 != 0)
        {
            goto VAR41;
        }
        if (strcmp(VAR54->VAR56->VAR57, ""))
        {
            FUN6(VAR54);
            VAR17 = -VAR40;
            goto VAR41;
        }
        VAR31 = FUN7(VAR54, 0);
        FUN6(VAR54);
        snprintf(VAR29, sizeof(VAR29), ""%VAR38\"", VAR14);
    }
    VAR12 = VAR11;
    while (VAR12 > 0)
    {
        char VAR58[VAR30];
        char VAR59[VAR24];
        char VAR60[VAR24];
        int64_t VAR61 = VAR12;
        if (VAR19 && VAR61 > VAR27)
        {
            VAR61 = VAR27;
        }
        if (VAR19)
        {
            snprintf(VAR60, sizeof(VAR60), "", VAR25, VAR18 ? '' : '', ++VAR6, VAR26);
        }
        else if (VAR18)
        {
            snprintf(VAR60, sizeof(VAR60), "", VAR25, VAR26);
        }
        else
        {
            snprintf(VAR60, sizeof(VAR60), "", VAR25, VAR26);
        }
        snprintf(VAR59, sizeof(VAR59), "", VAR23, VAR60);
        if (FUN8(VAR59, VAR61, VAR18, VAR20, VAR33, VAR5))
        {
            VAR17 = -VAR40;
            goto VAR41;
        }
        VAR12 -= VAR61;
        snprintf(VAR58, sizeof(VAR58), VAR28, VAR61 / VAR62, VAR60);
        FUN9(VAR22, VAR58);
    }
    VAR10 = FUN10(VAR36, (VAR63)FUN11(NULL), VAR31, VAR15, VAR29, VAR22->VAR64, (VAR16 & VAR49 ? 6 : 4), VAR11 / (VAR65)(63 * VAR32 * VAR62), VAR32, VAR13);
    VAR35 = strlen(VAR10);
    if (!VAR19 && !VAR18)
    {
        VAR34 = 0x200;
    }
    else
    {
        VAR17 = FUN12(VAR1, VAR3, &VAR9);
        if (VAR17 < 0)
        {
            FUN13(VAR5, -VAR17, "");
            goto VAR41;
        }
    }
    assert(VAR8 == NULL);
    VAR17 = FUN5(&VAR8, VAR1, NULL, NULL, VAR66 | VAR67, NULL, &VAR9);
    if (VAR17 < 0)
    {
        FUN13(VAR5, -VAR17, "");
        goto VAR41;
    }
    VAR17 = FUN14(VAR8, VAR34, VAR10, VAR35);
    if (VAR17 < 0)
    {
        FUN13(VAR5, -VAR17, "");
        goto VAR41;
    }
    if (VAR34 == 0)
    {
        VAR17 = FUN15(VAR8, VAR35);
        if (VAR17 < 0)
        {
            FUN13(VAR5, -VAR17, "");
        }
    }
VAR41:
    if (VAR8)
    {
        FUN6(VAR8);
    }
    FUN16(VAR10);
    FUN17(VAR22, true);
    return VAR17;
}
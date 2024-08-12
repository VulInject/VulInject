static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    VAR7 *VAR8 = NULL;
    VAR4 *VAR9 = NULL;
    char *VAR10 = NULL;
    int64_t VAR11 = 0, VAR12;
    char *VAR13 = NULL;
    char *VAR14 = NULL;
    char *VAR15 = NULL;
    char *VAR16 = NULL;
    int VAR17 = 0;
    bool VAR18, VAR19, VAR20;
    VAR21 *VAR22;
    char *VAR23 = FUN2(VAR24);
    char *VAR25 = FUN2(VAR24);
    char *VAR26 = FUN2(VAR24);
    char *VAR27 = FUN2(VAR28);
    char *VAR29 = FUN2(VAR24);
    char *VAR30 = FUN2(VAR24);
    const int64_t VAR31 = 0x80000000;
    const char *VAR32;
    char *VAR33 = FUN2(VAR28);
    uint32_t VAR34 = 0xffffffff;
    uint32_t VAR35 = 16;
    bool VAR36 = false;
    uint32_t VAR37 = 0, VAR38;
    const char VAR39[] = ""
                                 ""
                                 "" VAR40 ""
                                 "" VAR40 ""
                                 ""%VAR41\""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""
                                 ""%VAR41\""
                                 ""%""\""
                                 ""%""\""
                                 ""63\""
                                 ""%VAR41\"";
    VAR22 = FUN3(NULL);
    if (FUN4(VAR1, VAR23, VAR25, VAR26, VAR24, VAR5))
    {
        VAR17 = -VAR42;
        goto VAR43;
    }
    VAR11 = FUN5(FUN6(VAR3, VAR44, 0), VAR45);
    VAR13 = FUN7(VAR3, VAR46);
    VAR14 = FUN7(VAR3, VAR47);
    VAR15 = FUN7(VAR3, VAR48);
    if (FUN8(VAR3, VAR49, false))
    {
        if (strcmp(VAR15, ""))
        {
            FUN9(VAR5, "");
            VAR17 = -VAR42;
            goto VAR43;
        }
        FUN10(VAR15);
        VAR15 = FUN11("");
    }
    if (strcmp(VAR15, "") == 0)
    {
        FUN10(VAR15);
        VAR15 = FUN11("");
    }
    VAR16 = FUN7(VAR3, VAR50);
    if (FUN8(VAR3, VAR51, false))
    {
        VAR36 = true;
    }
    if (!VAR13)
    {
        VAR13 = FUN11("");
    }
    else if (strcmp(VAR13, "") && strcmp(VAR13, "") && strcmp(VAR13, "") && strcmp(VAR13, ""))
    {
        FUN9(VAR5, "", VAR13);
        VAR17 = -VAR42;
        goto VAR43;
    }
    if (strcmp(VAR13, "") != 0)
    {
        VAR35 = 255;
    }
    if (!VAR16)
    {
        VAR16 = FUN11("");
    }
    else if (strcmp(VAR16, "") && strcmp(VAR16, "") && strcmp(VAR16, "") && strcmp(VAR16, "") && strcmp(VAR16, ""))
    {
        FUN9(VAR5, "", VAR16);
        VAR17 = -VAR42;
        goto VAR43;
    }
    VAR19 = !(strcmp(VAR16, "") && strcmp(VAR16, ""));
    VAR18 = !(strcmp(VAR16, "") && strcmp(VAR16, ""));
    VAR20 = !strcmp(VAR16, "");
    if (VAR18)
    {
        VAR32 = "" VAR52 ""%VAR41\"";
    }
    else
    {
        VAR32 = "" VAR52 ""%VAR41\"";
    }
    if (VAR18 && VAR14)
    {
        FUN9(VAR5, "");
        VAR17 = -VAR53;
        goto VAR43;
    }
    if (VAR18 && VAR36)
    {
        FUN9(VAR5, "");
        VAR17 = -VAR53;
        goto VAR43;
    }
    if (VAR14)
    {
        VAR7 *VAR54;
        char *VAR55 = FUN12(char, VAR24);
        FUN13(VAR1, VAR14, VAR55, VAR24, &VAR9);
        if (VAR9)
        {
            FUN10(VAR55);
            FUN14(VAR5, VAR9);
            VAR17 = -VAR56;
            goto VAR43;
        }
        VAR54 = FUN15(VAR55, NULL, NULL, VAR57, VAR5);
        FUN10(VAR55);
        if (VAR54 == NULL)
        {
            VAR17 = -VAR58;
            goto VAR43;
        }
        if (strcmp(FUN16(VAR54)->VAR59->VAR60, ""))
        {
            FUN17(VAR54);
            VAR17 = -VAR42;
            goto VAR43;
        }
        VAR34 = FUN18(FUN16(VAR54), 0);
        FUN17(VAR54);
        snprintf(VAR33, VAR28, ""%VAR41\"", VAR14);
    }
    VAR12 = VAR11;
    while (VAR12 > 0)
    {
        int64_t VAR61 = VAR12;
        if (VAR19 && VAR61 > VAR31)
        {
            VAR61 = VAR31;
        }
        if (VAR19)
        {
            snprintf(VAR30, VAR24, "", VAR25, VAR18 ? '' : '', ++VAR6, VAR26);
        }
        else if (VAR18)
        {
            snprintf(VAR30, VAR24, "", VAR25, VAR26);
        }
        else
        {
            snprintf(VAR30, VAR24, "", VAR25, VAR26);
        }
        snprintf(VAR29, VAR24, "", VAR23, VAR30);
        if (FUN19(VAR29, VAR61, VAR18, VAR20, VAR36, VAR3, VAR5))
        {
            VAR17 = -VAR42;
            goto VAR43;
        }
        VAR12 -= VAR61;
        snprintf(VAR27, VAR28, VAR32, VAR61 / VAR45, VAR30);
        FUN20(VAR22, VAR27);
    }
    VAR10 = FUN21(VAR39, FUN22(), VAR34, VAR16, VAR33, VAR22->VAR62, VAR15, VAR11 / (VAR63)(63 * VAR35 * VAR45), VAR35, VAR13);
    VAR38 = strlen(VAR10);
    if (!VAR19 && !VAR18)
    {
        VAR37 = 0x200;
    }
    else
    {
        VAR17 = FUN23(VAR1, VAR3, &VAR9);
        if (VAR17 < 0)
        {
            FUN14(VAR5, VAR9);
            goto VAR43;
        }
    }
    VAR8 = FUN15(VAR1, NULL, NULL, VAR64 | VAR65 | VAR66, &VAR9);
    if (VAR8 == NULL)
    {
        FUN14(VAR5, VAR9);
        VAR17 = -VAR58;
        goto VAR43;
    }
    FUN24(VAR8, true);
    VAR17 = FUN25(VAR8, VAR37, VAR10, VAR38, 0);
    if (VAR17 < 0)
    {
        FUN26(VAR5, -VAR17, "");
        goto VAR43;
    }
    if (VAR37 == 0)
    {
        VAR17 = FUN27(VAR8, VAR38, VAR67, VAR5);
    }
VAR43:
    if (VAR8)
    {
        FUN17(VAR8);
    }
    FUN10(VAR13);
    FUN10(VAR14);
    FUN10(VAR15);
    FUN10(VAR16);
    FUN10(VAR10);
    FUN10(VAR23);
    FUN10(VAR25);
    FUN10(VAR26);
    FUN10(VAR27);
    FUN10(VAR29);
    FUN10(VAR30);
    FUN10(VAR33);
    FUN28(VAR22, true);
    return VAR17;
}
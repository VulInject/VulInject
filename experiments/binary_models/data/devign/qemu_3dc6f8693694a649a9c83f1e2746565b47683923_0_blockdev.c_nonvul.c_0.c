VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4)
{
    const char *VAR5;
    VAR6 *VAR7;
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR2 *VAR11;
    DriveMediaType VAR12 = VAR13;
    BlockInterfaceType VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    const char *VAR23;
    const char *VAR24, *VAR25;
    bool VAR26 = false;
    bool VAR27;
    const char *VAR28;
    const char *VAR29;
    VAR30 *VAR31 = NULL;
    int VAR32;
    const char *VAR33[] = {"", "", "", "", "", ""};
    static const struct
    {
        const char *VAR34;
        const char *VAR35;
    } VAR36[] = {
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", VAR37},
    };
    for (VAR32 = 0; VAR32 < FUN2(VAR36); VAR32++)
    {
        FUN3(VAR3, VAR36[VAR32].VAR34, VAR36[VAR32].VAR35, &VAR31);
        if (VAR31)
        {
            FUN4(VAR31);
            return NULL;
        }
    }
    VAR5 = FUN5(VAR3, "");
    if (VAR5)
    {
        int VAR38 = 0;
        bool VAR39;
        if (FUN6(VAR5, &VAR38, &VAR39) != 0)
        {
            FUN7("");
            return NULL;
        }
        if (!FUN5(VAR3, VAR40))
        {
            FUN8(VAR3, VAR40, !VAR39, &VAR41);
        }
        if (!FUN5(VAR3, VAR42))
        {
            FUN8(VAR3, VAR42, !!(VAR38 & VAR43), &VAR41);
        }
        if (!FUN5(VAR3, VAR44))
        {
            FUN8(VAR3, VAR44, !!(VAR38 & VAR45), &VAR41);
        }
        FUN9(VAR3, "");
    }
    VAR10 = FUN10();
    FUN11(VAR3, VAR10);
    VAR11 = FUN12(&VAR46, NULL, 0, &VAR41);
    FUN13(VAR11, VAR10, &VAR31);
    if (VAR31)
    {
        FUN4(VAR31);
        goto VAR47;
    }
    if (FUN5(VAR11, "") != NULL)
    {
        fprintf(VAR48, ""
                        ""
                        "");
    }
    if (!FUN14())
    {
        for (VAR32 = 0; VAR32 < FUN2(VAR33); VAR32++)
        {
            if (FUN5(VAR11, VAR33[VAR32]) != NULL)
            {
                FUN7(""
                             "",
                             VAR33[VAR32]);
            }
        }
    }
    VAR5 = FUN5(VAR11, "");
    if (VAR5)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR12 = VAR13;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR12 = VAR49;
            VAR26 = true;
        }
        else
        {
            FUN7("", VAR5);
            goto VAR47;
        }
    }
    VAR26 |= FUN15(VAR11, VAR37, false);
    VAR27 = FUN15(VAR11, "", false);
    if (VAR26 && VAR27)
    {
        FUN16("");
        VAR27 = false;
    }
    FUN17(VAR10, VAR37, VAR26 ? "" : "");
    FUN17(VAR10, "", VAR27 ? "" : "");
    VAR5 = FUN5(VAR11, "");
    if (VAR5)
    {
        for (VAR14 = 0; VAR14 < VAR50 && strcmp(VAR5, VAR51[VAR14]); VAR14++)
        {
        }
        if (VAR14 == VAR50)
        {
            FUN7("", VAR5);
            goto VAR47;
        }
    }
    else
    {
        VAR14 = VAR4;
    }
    VAR15 = FUN18(VAR11, "", 0);
    VAR16 = FUN18(VAR11, "", 0);
    VAR17 = FUN18(VAR11, "", 0);
    if (VAR15 || VAR16 || VAR17)
    {
        if (VAR15 < 1)
        {
            FUN7("");
            goto VAR47;
        }
        if (VAR16 < 1)
        {
            FUN7("");
            goto VAR47;
        }
        if (VAR17 < 1)
        {
            FUN7("");
            goto VAR47;
        }
    }
    VAR18 = VAR52;
    VAR5 = FUN5(VAR11, "");
    if (VAR5 != NULL)
    {
        if (!VAR15)
        {
            FUN7("", VAR5);
            goto VAR47;
        }
        if (!strcmp(VAR5, ""))
        {
            VAR18 = VAR53;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR18 = VAR54;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR18 = VAR55;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR18 = VAR56;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR18 = VAR52;
        }
        else
        {
            FUN7("", VAR5);
            goto VAR47;
        }
    }
    if (VAR12 == VAR49)
    {
        if (VAR15 || VAR17 || VAR16)
        {
            FUN7("");
            goto VAR47;
        }
    }
    VAR20 = FUN18(VAR11, "", 0);
    VAR21 = FUN18(VAR11, "", -1);
    VAR22 = FUN18(VAR11, "", -1);
    VAR19 = VAR57[VAR14];
    if (VAR22 != -1)
    {
        if (VAR20 != 0 || VAR21 != -1)
        {
            FUN7("");
            goto VAR47;
        }
        VAR20 = FUN19(VAR14, VAR22);
        VAR21 = FUN20(VAR14, VAR22);
    }
    if (VAR21 == -1)
    {
        VAR21 = 0;
        while (FUN21(VAR14, VAR20, VAR21) != NULL)
        {
            VAR21++;
            if (VAR19 && VAR21 >= VAR19)
            {
                VAR21 -= VAR19;
                VAR20++;
            }
        }
    }
    if (VAR19 && VAR21 >= VAR19)
    {
        FUN7("", VAR21, VAR19 - 1);
        goto VAR47;
    }
    if (FUN21(VAR14, VAR20, VAR21) != NULL)
    {
        FUN7("", VAR20, VAR21, VAR22);
        goto VAR47;
    }
    VAR28 = FUN5(VAR11, "");
    if (FUN22(VAR3) == NULL)
    {
        char *VAR58;
        const char *VAR59 = "";
        if (VAR14 == VAR60 || VAR14 == VAR61)
        {
            VAR59 = (VAR12 == VAR49) ? "" : "";
        }
        if (VAR19)
        {
            VAR58 = FUN23("", VAR51[VAR14], VAR20, VAR59, VAR21);
        }
        else
        {
            VAR58 = FUN23("", VAR51[VAR14], VAR59, VAR21);
        }
        FUN17(VAR10, "", VAR58);
        FUN24(VAR58);
    }
    VAR23 = FUN5(VAR11, "");
    if (VAR23 && VAR14 != VAR62)
    {
        FUN7("");
        goto VAR47;
    }
    if (VAR14 == VAR62)
    {
        VAR2 *VAR63;
        VAR63 = FUN12(FUN25(""), NULL, 0, &VAR41);
        if (VAR64 == VAR65)
        {
            FUN26(VAR63, "", "", &VAR41);
        }
        else
        {
            FUN26(VAR63, "", "", &VAR41);
        }
        FUN26(VAR63, "", FUN27(VAR10, ""), &VAR41);
        if (VAR23)
        {
            FUN26(VAR63, "", VAR23, &VAR41);
        }
    }
    VAR29 = FUN5(VAR11, "");
    VAR24 = FUN5(VAR11, "");
    if (VAR24 != NULL)
    {
        if (VAR14 != VAR60 && VAR14 != VAR61 && VAR14 != VAR62 && VAR14 != VAR66)
        {
            FUN7("");
            goto VAR47;
        }
        FUN17(VAR10, "", VAR24);
    }
    VAR25 = FUN5(VAR11, "");
    if (VAR25 != NULL)
    {
        if (VAR14 != VAR60 && VAR14 != VAR62 && VAR14 != VAR61 && VAR14 != VAR66)
        {
            FUN7("");
            goto VAR47;
        }
        FUN17(VAR10, "", VAR25);
    }
    VAR7 = FUN28(VAR29, VAR10, &VAR31);
    VAR10 = NULL;
    if (!VAR7)
    {
        if (VAR31)
        {
            FUN4(VAR31);
        }
        goto VAR47;
    }
    else
    {
        assert(!VAR31);
    }
    VAR8 = FUN29(sizeof(*VAR8));
    VAR8->VAR67 = VAR3;
    VAR8->VAR15 = VAR15;
    VAR8->VAR16 = VAR16;
    VAR8->VAR17 = VAR17;
    VAR8->VAR68 = VAR18;
    VAR8->VAR14 = VAR14;
    VAR8->VAR69 = VAR20;
    VAR8->VAR70 = VAR21;
    VAR8->VAR23 = VAR23;
    VAR8->VAR28 = FUN30(VAR28);
    FUN31(VAR7, VAR8);
    switch (VAR14)
    {
    case VAR60:
    case VAR61:
    case VAR71:
    case VAR66:
        VAR8->VAR72 = VAR12 == VAR49;
        break;
    default:
        break;
    }
VAR47:
    FUN32(VAR11);
    FUN33(VAR10);
    return VAR8;
}
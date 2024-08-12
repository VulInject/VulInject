VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4)
{
    const char *VAR5;
    VAR1 *VAR6 = NULL;
    VAR7 *VAR8;
    VAR2 *VAR9;
    DriveMediaType VAR10 = VAR11;
    BlockInterfaceType VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    const char *VAR21;
    const char *VAR22, *VAR23;
    bool VAR24 = false;
    bool VAR25;
    const char *VAR26;
    VAR27 *VAR28 = NULL;
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    FUN2(VAR3, "", "");
    VAR5 = FUN3(VAR3, "");
    if (VAR5)
    {
        int VAR29 = 0;
        if (FUN4(VAR5, &VAR29) != 0)
        {
            FUN5("");
            return NULL;
        }
        if (!FUN3(VAR3, ""))
        {
            FUN6(VAR3, "", !!(VAR29 & VAR30));
        }
        if (!FUN3(VAR3, ""))
        {
            FUN6(VAR3, "", !!(VAR29 & VAR31));
        }
        if (!FUN3(VAR3, ""))
        {
            FUN6(VAR3, "", !!(VAR29 & VAR32));
        }
        FUN7(VAR3, "");
    }
    VAR8 = FUN8();
    FUN9(VAR3, VAR8);
    VAR9 = FUN10(&VAR33, NULL, 0, &VAR34);
    FUN11(VAR9, VAR8, &VAR28);
    if (FUN12(&VAR28))
    {
        FUN13(VAR28);
        FUN14(VAR28);
        goto VAR35;
    }
    if (FUN3(VAR9, "") != NULL)
    {
        fprintf(VAR36, ""
                        ""
                        "");
    }
    VAR5 = FUN3(VAR9, "");
    if (VAR5)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR11;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR10 = VAR37;
            VAR24 = true;
        }
        else
        {
            FUN5("", VAR5);
            goto VAR35;
        }
    }
    VAR24 |= FUN15(VAR9, "", false);
    VAR25 = FUN15(VAR9, "", false);
    if (VAR24 && VAR25)
    {
        FUN5("");
        VAR25 = false;
    }
    FUN16(VAR8, "", FUN17(VAR24 ? "" : ""));
    FUN16(VAR8, "", FUN17(VAR25 ? "" : ""));
    VAR5 = FUN3(VAR9, "");
    if (VAR5)
    {
        for (VAR12 = 0; VAR12 < VAR38 && strcmp(VAR5, VAR39[VAR12]); VAR12++)
        {
        }
        if (VAR12 == VAR38)
        {
            FUN5("", VAR5);
            goto VAR35;
        }
    }
    else
    {
        VAR12 = VAR4;
    }
    VAR13 = FUN18(VAR9, "", 0);
    VAR14 = FUN18(VAR9, "", 0);
    VAR15 = FUN18(VAR9, "", 0);
    if (VAR13 || VAR14 || VAR15)
    {
        if (VAR13 < 1)
        {
            FUN5("");
            goto VAR35;
        }
        if (VAR14 < 1)
        {
            FUN5("");
            goto VAR35;
        }
        if (VAR15 < 1)
        {
            FUN5("");
            goto VAR35;
        }
    }
    VAR16 = VAR40;
    VAR5 = FUN3(VAR9, "");
    if (VAR5 != NULL)
    {
        if (!VAR13)
        {
            FUN5("", VAR5);
            goto VAR35;
        }
        if (!strcmp(VAR5, ""))
        {
            VAR16 = VAR41;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR16 = VAR42;
        }
        else if (!strcmp(VAR5, ""))
        {
            VAR16 = VAR40;
        }
        else
        {
            FUN5("", VAR5);
            goto VAR35;
        }
    }
    if (VAR10 == VAR37)
    {
        if (VAR13 || VAR15 || VAR14)
        {
            FUN5("");
            goto VAR35;
        }
    }
    VAR18 = FUN18(VAR9, "", 0);
    VAR19 = FUN18(VAR9, "", -1);
    VAR20 = FUN18(VAR9, "", -1);
    VAR17 = VAR43[VAR12];
    if (VAR20 != -1)
    {
        if (VAR18 != 0 || VAR19 != -1)
        {
            FUN5("");
            goto VAR35;
        }
        VAR18 = FUN19(VAR12, VAR20);
        VAR19 = FUN20(VAR12, VAR20);
    }
    if (VAR19 == -1)
    {
        VAR19 = 0;
        while (FUN21(VAR12, VAR18, VAR19) != NULL)
        {
            VAR19++;
            if (VAR17 && VAR19 >= VAR17)
            {
                VAR19 -= VAR17;
                VAR18++;
            }
        }
    }
    if (VAR17 && VAR19 >= VAR17)
    {
        FUN5("", VAR19, VAR17 - 1);
        goto VAR35;
    }
    if (FUN21(VAR12, VAR18, VAR19) != NULL)
    {
        FUN5("", VAR18, VAR19, VAR20);
        goto VAR35;
    }
    if (FUN22(VAR3) == NULL)
    {
        char *VAR44;
        const char *VAR45 = "";
        if (VAR12 == VAR46 || VAR12 == VAR47)
        {
            VAR45 = (VAR10 == VAR37) ? "" : "";
        }
        if (VAR17)
        {
            VAR44 = FUN23("", VAR39[VAR12], VAR18, VAR45, VAR19);
        }
        else
        {
            VAR44 = FUN23("", VAR39[VAR12], VAR45, VAR19);
        }
        FUN16(VAR8, "", FUN17(VAR44));
        FUN24(VAR44);
    }
    VAR21 = FUN3(VAR9, "");
    if (VAR21 && VAR12 != VAR48)
    {
        FUN5("");
        goto VAR35;
    }
    if (VAR12 == VAR48)
    {
        VAR2 *VAR49;
        VAR49 = FUN10(FUN25(""), NULL, 0, &VAR34);
        if (VAR50 == VAR51)
        {
            FUN26(VAR49, "", "");
        }
        else
        {
            FUN26(VAR49, "", "");
        }
        FUN26(VAR49, "", FUN27(VAR8, ""));
        if (VAR21)
        {
            FUN26(VAR49, "", VAR21);
        }
    }
    VAR26 = FUN3(VAR9, "");
    VAR22 = FUN3(VAR9, "");
    if (VAR22 != NULL)
    {
        if (VAR12 != VAR46 && VAR12 != VAR47 && VAR12 != VAR48 && VAR12 != VAR52)
        {
            FUN5("");
            goto VAR35;
        }
        FUN16(VAR8, "", FUN17(VAR22));
    }
    VAR23 = FUN3(VAR9, "");
    if (VAR23 != NULL)
    {
        if (VAR12 != VAR46 && VAR12 != VAR48 && VAR12 != VAR47 && VAR12 != VAR52)
        {
            FUN5("");
            goto VAR35;
        }
        FUN16(VAR8, "", FUN17(VAR23));
    }
    VAR6 = FUN28(VAR26, VAR8, &VAR28);
    if (VAR6 == NULL)
    {
        if (FUN12(&VAR28))
        {
            FUN13(VAR28);
            FUN14(VAR28);
        }
        goto VAR35;
    }
    else
    {
        assert(!FUN12(&VAR28));
    }
    VAR6->VAR53 = true;
    VAR6->VAR54 = VAR3;
    VAR6->VAR13 = VAR13;
    VAR6->VAR14 = VAR14;
    VAR6->VAR15 = VAR15;
    VAR6->VAR55 = VAR16;
    VAR6->VAR12 = VAR12;
    VAR6->VAR56 = VAR18;
    VAR6->VAR57 = VAR19;
    VAR6->VAR21 = VAR21;
    switch (VAR12)
    {
    case VAR46:
    case VAR47:
    case VAR58:
    case VAR52:
        VAR6->VAR59 = VAR10 == VAR37;
        break;
    default:
        break;
    }
VAR35:
    FUN29(VAR9);
    return VAR6;
}
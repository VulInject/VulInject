VAR1 *FUN1(VAR2 *VAR3, BlockInterfaceType VAR4)
{
    const char *VAR5;
    const char *VAR6 = NULL;
    const char *VAR7;
    const char *VAR8 = "";
    BlockInterfaceType VAR9;
    enum
    {
        VAR10,
        VAR11
    } VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    VAR19 *VAR20 = NULL;
    int VAR21;
    int VAR22;
    int VAR23 = 0;
    int VAR24 = 0;
    int VAR25, VAR26;
    const char *VAR27;
    VAR1 *VAR28;
    BlockIOLimit VAR29;
    int VAR30 = 0;
    bool VAR31;
    int VAR32;
    VAR33 *VAR34 = NULL;
    VAR18 = VAR35;
    VAR12 = VAR10;
    VAR13 = FUN2(VAR3, "", 0);
    VAR14 = FUN2(VAR3, "", -1);
    VAR22 = FUN2(VAR3, "", -1);
    VAR15 = FUN2(VAR3, "", 0);
    VAR16 = FUN2(VAR3, "", 0);
    VAR17 = FUN2(VAR3, "", 0);
    VAR30 = FUN3(VAR3, "", 0);
    VAR23 = FUN3(VAR3, "", 0);
    VAR31 = FUN3(VAR3, "", false);
    VAR6 = FUN4(VAR3, "");
    VAR7 = FUN4(VAR3, "");
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        for (VAR9 = 0; VAR9 < VAR36 && strcmp(VAR5, VAR37[VAR9]); VAR9++)
            ;
        if (VAR9 == VAR36)
        {
            FUN5("", VAR5);
            return NULL;
        }
    }
    else
    {
        VAR9 = VAR4;
    }
    VAR21 = VAR38[VAR9];
    if (VAR15 || VAR16 || VAR17)
    {
        if (VAR15 < 1)
        {
            FUN5("");
            return NULL;
        }
        if (VAR16 < 1)
        {
            FUN5("");
            return NULL;
        }
        if (VAR17 < 1)
        {
            FUN5("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!VAR15)
        {
            FUN5("", VAR5);
            return NULL;
        }
        if (!strcmp(VAR5, ""))
            VAR18 = VAR39;
        else if (!strcmp(VAR5, ""))
            VAR18 = VAR40;
        else if (!strcmp(VAR5, ""))
            VAR18 = VAR35;
        else
        {
            FUN5("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR12 = VAR10;
        }
        else if (!strcmp(VAR5, ""))
        {
            if (VAR15 || VAR17 || VAR16)
            {
                FUN5("", VAR5);
                return NULL;
            }
            VAR12 = VAR11;
        }
        else
        {
            FUN5("", VAR5);
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (FUN6(VAR5, &VAR24) != 0)
        {
            FUN5("");
            return NULL;
        }
    }
    VAR24 |= VAR41;
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (FUN7(VAR5, &VAR24) != 0)
        {
            FUN5("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (!strcmp(VAR5, ""))
        {
            VAR24 |= VAR42;
        }
        else if (!strcmp(VAR5, ""))
        {
        }
        else
        {
            FUN5("");
            return NULL;
        }
    }
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (FUN8(VAR5))
        {
            FUN9("");
            FUN10(VAR43, NULL);
            FUN9("");
            return NULL;
        }
        VAR20 = FUN11(VAR5);
        if (!VAR20)
        {
            FUN5("", VAR5);
            return NULL;
        }
    }
    VAR29.VAR44[VAR45] = FUN2(VAR3, "", 0);
    VAR29.VAR44[VAR46] = FUN2(VAR3, "", 0);
    VAR29.VAR44[VAR47] = FUN2(VAR3, "", 0);
    VAR29.VAR48[VAR45] = FUN2(VAR3, "", 0);
    VAR29.VAR48[VAR46] = FUN2(VAR3, "", 0);
    VAR29.VAR48[VAR47] = FUN2(VAR3, "", 0);
    if (!FUN12(&VAR29, &VAR34))
    {
        FUN5("", FUN13(VAR34));
        FUN14(VAR34);
        return NULL;
    }
    if (FUN4(VAR3, "") != NULL)
    {
        fprintf(VAR49, ""
                        ""
                        "");
    }
    VAR26 = VAR50;
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR9 != VAR51 && VAR9 != VAR52 && VAR9 != VAR53 && VAR9 != VAR54)
        {
            FUN5("");
            return NULL;
        }
        VAR26 = FUN15(VAR5, 0);
        if (VAR26 < 0)
        {
            return NULL;
        }
    }
    VAR25 = VAR55;
    if ((VAR5 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR9 != VAR51 && VAR9 != VAR53 && VAR9 != VAR52 && VAR9 != VAR54)
        {
            FUN5("");
            return NULL;
        }
        VAR25 = FUN15(VAR5, 1);
        if (VAR25 < 0)
        {
            return NULL;
        }
    }
    if ((VAR27 = FUN4(VAR3, "")) != NULL)
    {
        if (VAR9 != VAR53)
        {
            FUN5("");
            return NULL;
        }
    }
    if (VAR22 != -1)
    {
        if (VAR13 != 0 || VAR14 != -1)
        {
            FUN5("");
            return NULL;
        }
        VAR13 = FUN16(VAR9, VAR22);
        VAR14 = FUN17(VAR9, VAR22);
    }
    if (VAR14 == -1)
    {
        VAR14 = 0;
        while (FUN18(VAR9, VAR13, VAR14) != NULL)
        {
            VAR14++;
            if (VAR21 && VAR14 >= VAR21)
            {
                VAR14 -= VAR21;
                VAR13++;
            }
        }
    }
    if (VAR21 && VAR14 >= VAR21)
    {
        FUN5("", VAR14, VAR21 - 1);
        return NULL;
    }
    if (FUN18(VAR9, VAR13, VAR14) != NULL)
    {
        FUN5("", VAR13, VAR14, VAR22);
        return NULL;
    }
    VAR28 = FUN19(sizeof(*VAR28));
    if ((VAR5 = FUN20(VAR3)) != NULL)
    {
        VAR28->VAR56 = FUN21(VAR5);
    }
    else
    {
        VAR28->VAR56 = FUN19(32);
        if (VAR9 == VAR51 || VAR9 == VAR52)
            VAR8 = (VAR12 == VAR11) ? "" : "";
        if (VAR21)
            snprintf(VAR28->VAR56, 32, "", VAR37[VAR9], VAR13, VAR8, VAR14);
        else
            snprintf(VAR28->VAR56, 32, "", VAR37[VAR9], VAR8, VAR14);
    }
    VAR28->VAR57 = FUN22(VAR28->VAR56);
    VAR28->VAR57->VAR58 = VAR30 ? VAR59 : 0;
    VAR28->VAR57->VAR60 = VAR23;
    VAR28->VAR27 = VAR27;
    VAR28->VAR9 = VAR9;
    VAR28->VAR61 = VAR13;
    VAR28->VAR62 = VAR14;
    VAR28->VAR15 = VAR15;
    VAR28->VAR16 = VAR16;
    VAR28->VAR17 = VAR17;
    VAR28->VAR63 = VAR18;
    VAR28->VAR3 = VAR3;
    VAR28->VAR64 = 1;
    VAR28->VAR7 = VAR7;
    FUN23(&VAR65, VAR28, VAR66);
    FUN24(VAR28->VAR57, VAR25, VAR26);
    FUN25(VAR28->VAR57, &VAR29);
    switch (VAR9)
    {
    case VAR51:
    case VAR52:
    case VAR67:
    case VAR54:
        VAR28->VAR68 = VAR12 == VAR11;
        break;
    case VAR69:
    case VAR70:
    case VAR71:
    case VAR72:
        break;
    case VAR53:
        VAR3 = FUN26(FUN27(""));
        if (VAR73 == VAR74)
        {
            FUN28(VAR3, "", "");
        }
        else
        {
            FUN28(VAR3, "", "");
        }
        FUN28(VAR3, "", VAR28->VAR56);
        if (VAR27)
            FUN28(VAR3, "", VAR27);
        break;
    default:
        FUN29();
    }
    if (!VAR6 || !*VAR6)
    {
        return VAR28;
    }
    if (VAR30)
    {
        VAR24 &= ~VAR75;
        VAR24 |= (VAR59 | VAR41 | VAR76);
    }
    if (VAR31)
    {
        VAR24 |= VAR77;
    }
    if (FUN30(VAR78))
    {
        VAR24 |= VAR79;
    }
    if (VAR12 == VAR11)
    {
        VAR23 = 1;
    }
    else if (VAR23 == 1)
    {
        if (VAR9 != VAR52 && VAR9 != VAR53 && VAR9 != VAR70 && VAR9 != VAR54 && VAR9 != VAR71)
        {
            FUN5("");
            goto VAR80;
        }
    }
    VAR24 |= VAR23 ? 0 : VAR81;
    if (VAR23 && VAR31)
    {
        FUN5("");
    }
    VAR32 = FUN31(VAR28->VAR57, VAR6, NULL, VAR24, VAR20);
    if (VAR32 < 0)
    {
        if (VAR32 == -VAR82)
        {
            FUN5("", VAR6, VAR20->VAR83);
        }
        else
        {
            FUN5("", VAR6, strerror(-VAR32));
        }
        goto VAR80;
    }
    if (FUN32(VAR28->VAR57))
        VAR84 = 0;
    return VAR28;
VAR80:
    FUN33(VAR28->VAR57);
    FUN34(VAR28->VAR56);
    FUN35(&VAR65, VAR28, VAR66);
    FUN34(VAR28);
    return NULL;
}
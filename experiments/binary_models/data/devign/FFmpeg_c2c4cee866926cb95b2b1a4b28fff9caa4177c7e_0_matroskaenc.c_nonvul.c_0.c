static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11[VAR5];
    VAR12 *VAR13 = VAR10->VAR13;
    ebml_master VAR14, VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18 = FUN2(VAR13->VAR19);
    int VAR20 = VAR13->VAR20;
    int VAR21 = 0;
    int VAR22 = 1;
    int VAR23 = 1;
    int VAR24, VAR25;
    VAR26 *VAR27;
    FUN3(VAR10, 64, 1, 1000);
    if (VAR13->VAR28 == VAR29)
    {
        VAR4->VAR30 = 1;
        return 0;
    }
    if (!VAR18 && VAR13->VAR19 != VAR31)
        VAR18 = FUN4(VAR13->VAR32) << 3;
    if (!VAR18)
        VAR18 = VAR13->VAR33;
    if (VAR13->VAR19 == VAR34)
        FUN5(VAR2, VAR13, &VAR20, &VAR21);
    VAR15 = FUN6(VAR7, VAR35, 0);
    FUN7(VAR7, VAR36, VAR4->VAR37 ? VAR4->VAR38 : VAR5 + 1);
    FUN7(VAR7, VAR39, VAR4->VAR37 ? VAR4->VAR38 : VAR5 + 1);
    FUN7(VAR7, VAR40, 0);
    if ((VAR27 = FUN8(VAR10->VAR41, "", NULL, 0)))
        FUN9(VAR7, VAR42, VAR27->VAR43);
    VAR27 = FUN8(VAR10->VAR41, "", NULL, 0);
    if (VAR4->VAR44 != VAR45 || VAR13->VAR19 != VAR46)
    {
        FUN9(VAR7, VAR47, VAR27 && VAR27->VAR43 ? VAR27->VAR43 : "");
    }
    else if (VAR27 && VAR27->VAR43)
    {
        FUN9(VAR7, VAR47, VAR27->VAR43);
    }
    if (VAR8 && !(VAR10->VAR48 & VAR49))
        FUN7(VAR7, VAR50, !!(VAR10->VAR48 & VAR49));
    if (VAR10->VAR48 & VAR51)
        FUN7(VAR7, VAR52, 1);
    if (VAR4->VAR44 == VAR45 && VAR13->VAR19 == VAR46)
    {
        const char *VAR19;
        if (VAR10->VAR48 & VAR53)
        {
            VAR19 = "";
            VAR16 = VAR54;
        }
        else if (VAR10->VAR48 & VAR55)
        {
            VAR19 = "";
            VAR16 = VAR56;
        }
        else if (VAR10->VAR48 & VAR57)
        {
            VAR19 = "";
            VAR16 = VAR56;
        }
        else
        {
            VAR19 = "";
            VAR16 = VAR54;
        }
        FUN9(VAR7, VAR58, VAR19);
    }
    else
    {
        for (VAR24 = 0; VAR59[VAR24].VAR60 != VAR61; VAR24++)
        {
            if (VAR59[VAR24].VAR60 == VAR13->VAR19)
            {
                FUN9(VAR7, VAR58, VAR59[VAR24].VAR62);
                VAR16 = 1;
                break;
            }
        }
    }
    if (VAR13->VAR28 == VAR63 && VAR13->VAR64 && VAR13->VAR19 == VAR65)
    {
        FUN7(VAR7, VAR66, FUN10(VAR13->VAR64, (VAR67){1, VAR13->VAR20}, (VAR67){1, 1000000000}));
    }
    if (VAR13->VAR19 == VAR65)
    {
        FUN7(VAR7, VAR68, VAR69);
    }
    if (VAR4->VAR44 == VAR45 && !(VAR13->VAR19 == VAR70 || VAR13->VAR19 == VAR71 || VAR13->VAR19 == VAR65 || VAR13->VAR19 == VAR72 || VAR13->VAR19 == VAR46))
    {
        FUN11(VAR2, VAR73, "");
        return FUN12(VAR74);
    }
    switch (VAR13->VAR28)
    {
    case VAR75:
        FUN7(VAR7, VAR76, VAR77);
        if (VAR10->VAR78.VAR79 > 0 && VAR10->VAR78.VAR80 > 0 && 1.0 / FUN13(VAR10->VAR78) > FUN13(VAR13->VAR81))
            FUN7(VAR7, VAR82, 1E9 / FUN13(VAR10->VAR78));
        else
            FUN7(VAR7, VAR82, FUN13(VAR13->VAR81) * 1E9);
        if (!VAR16 && FUN14(VAR83, VAR13->VAR19) && (!FUN14(VAR84, VAR13->VAR19) || VAR13->VAR19 == VAR85 || VAR13->VAR19 == VAR86 || VAR13->VAR19 == VAR87))
            VAR17 = 1;
        if (VAR17)
            FUN9(VAR7, VAR58, "");
        else if (!VAR16)
        {
            FUN9(VAR7, VAR58, "");
            VAR4->VAR88[VAR5].VAR89 = 1;
        }
        VAR14 = FUN6(VAR7, VAR90, 0);
        FUN7(VAR7, VAR91, VAR13->VAR92);
        FUN7(VAR7, VAR93, VAR13->VAR94);
        if ((VAR27 = FUN8(VAR10->VAR41, "", NULL, 0)) || (VAR27 = FUN8(VAR2->VAR41, "", NULL, 0)))
        {
            int VAR95 = VAR96;
            for (VAR24 = 0; VAR24 < VAR96; VAR24++)
                if (!strcmp(VAR27->VAR43, VAR97[VAR24]))
                {
                    VAR95 = VAR24;
                    break;
                }
            if (FUN15(VAR2, VAR7, VAR95, VAR4->VAR44) < 0)
                return FUN12(VAR74);
            switch (VAR95)
            {
            case 1:
            case 8:
            case 9:
            case 11:
                VAR22 = 2;
                break;
            case 2:
            case 3:
            case 6:
            case 7:
                VAR23 = 2;
                break;
            }
        }
        if (((VAR27 = FUN8(VAR10->VAR41, "", NULL, 0)) && FUN16(VAR27->VAR43)) || ((VAR27 = FUN8(VAR2->VAR41, "", NULL, 0)) && FUN16(VAR27->VAR43)) || (VAR13->VAR98 == VAR99))
        {
            FUN7(VAR7, VAR100, 1);
        }
        if (VAR10->VAR101.VAR79)
        {
            int64_t VAR102 = FUN17(VAR13->VAR92, VAR10->VAR101.VAR79, VAR10->VAR101.VAR80);
            if (VAR102 > VAR103)
            {
                FUN11(VAR2, VAR73, "");
                return FUN12(VAR74);
            }
            FUN7(VAR7, VAR104, VAR102 / VAR22);
            FUN7(VAR7, VAR105, VAR13->VAR94 / VAR23);
        }
        else if (VAR22 != 1 || VAR23 != 1)
        {
            FUN7(VAR7, VAR104, VAR13->VAR92 / VAR22);
            FUN7(VAR7, VAR105, VAR13->VAR94 / VAR23);
        }
        if (VAR13->VAR19 == VAR106)
        {
            uint32_t VAR107 = FUN18(VAR13->VAR108);
            FUN19(VAR7, VAR109, &VAR107, sizeof(VAR107));
        }
        FUN20(VAR7, VAR14);
        break;
    case VAR63:
        FUN7(VAR7, VAR76, VAR110);
        if (!VAR16)
            FUN9(VAR7, VAR58, "");
        VAR14 = FUN6(VAR7, VAR111, 0);
        FUN7(VAR7, VAR112, VAR13->VAR113);
        FUN21(VAR7, VAR114, VAR20);
        if (VAR21)
            FUN21(VAR7, VAR115, VAR21);
        if (VAR18)
            FUN7(VAR7, VAR116, VAR18);
        FUN20(VAR7, VAR14);
        break;
    case VAR117:
        if (!VAR16)
        {
            FUN11(VAR2, VAR73, "", VAR13->VAR19);
            return FUN12(VAR118);
        }
        if (VAR4->VAR44 != VAR45 || VAR13->VAR19 != VAR46)
            VAR16 = VAR54;
        FUN7(VAR7, VAR76, VAR16);
        break;
    default:
        FUN11(VAR2, VAR73, "");
        return FUN12(VAR74);
    }
    if (VAR4->VAR44 != VAR45 || VAR13->VAR19 != VAR46)
    {
        VAR25 = FUN22(VAR2, VAR7, VAR13, VAR16, VAR17);
        if (VAR25 < 0)
            return VAR25;
    }
    FUN20(VAR7, VAR15);
    return 0;
}
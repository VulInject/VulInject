static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    ebml_master VAR8;
    int VAR9, VAR10, VAR11;
    VAR11 = FUN2(VAR4->VAR12, VAR13, FUN3(VAR7));
    if (VAR11 < 0)
        return VAR11;
    VAR8 = FUN4(VAR7, VAR13, 0);
    for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
    {
        VAR15 *VAR16 = VAR2->VAR17[VAR9];
        VAR18 *VAR19 = VAR16->VAR19;
        ebml_master VAR20, VAR21;
        int VAR22 = 0;
        int VAR23 = 0;
        int VAR24 = FUN5(VAR19->VAR25);
        int VAR26 = VAR19->VAR26;
        int VAR27 = 0;
        VAR28 *VAR29;
        if (VAR19->VAR30 == VAR31)
        {
            VAR4->VAR32 = 1;
            continue;
        }
        if (!VAR24)
            VAR24 = FUN6(VAR19->VAR33) << 3;
        if (VAR19->VAR25 == VAR34)
            FUN7(VAR2, VAR19, &VAR26, &VAR27);
        VAR21 = FUN4(VAR7, VAR35, 0);
        FUN8(VAR7, VAR36, VAR9 + 1);
        FUN8(VAR7, VAR37, VAR9 + 1);
        FUN8(VAR7, VAR38, 0);
        if ((VAR29 = FUN9(VAR16->VAR39, "", NULL, 0)))
            FUN10(VAR7, VAR40, VAR29->VAR41);
        VAR29 = FUN9(VAR16->VAR39, "", NULL, 0);
        FUN10(VAR7, VAR42, VAR29 ? VAR29->VAR41 : "");
        if (VAR16->VAR43)
            FUN8(VAR7, VAR44, !!(VAR16->VAR43 & VAR45));
        for (VAR10 = 0; VAR46[VAR10].VAR47 != VAR48; VAR10++)
        {
            if (VAR46[VAR10].VAR47 == VAR19->VAR25)
            {
                FUN10(VAR7, VAR49, VAR46[VAR10].VAR50);
                VAR22 = 1;
                break;
            }
        }
        if (VAR4->VAR51 == VAR52 && !(VAR19->VAR25 == VAR53 || VAR19->VAR25 == VAR54))
        {
            FUN11(VAR2, VAR55, "");
            return FUN12(VAR56);
        }
        switch (VAR19->VAR30)
        {
        case VAR57:
            FUN8(VAR7, VAR58, VAR59);
            if (VAR16->VAR60.VAR61 && VAR16->VAR60.VAR62 && 1.0 / FUN13(VAR16->VAR60) > FUN13(VAR19->VAR63))
                FUN8(VAR7, VAR64, 1E9 / FUN13(VAR16->VAR60));
            else
                FUN8(VAR7, VAR64, FUN13(VAR19->VAR63) * 1E9);
            if (!VAR22 && FUN14(VAR65, VAR19->VAR25) && (!FUN14(VAR66, VAR19->VAR25) || VAR19->VAR25 == VAR67 || VAR19->VAR25 == VAR68 || VAR19->VAR25 == VAR69))
                VAR23 = 1;
            if (VAR23)
                FUN10(VAR7, VAR49, "");
            else if (!VAR22)
            {
                FUN10(VAR7, VAR49, "");
                VAR4->VAR8[VAR9].VAR70 = 1;
            }
            VAR20 = FUN4(VAR7, VAR71, 0);
            FUN8(VAR7, VAR72, VAR19->VAR73);
            FUN8(VAR7, VAR74, VAR19->VAR75);
            if ((VAR29 = FUN9(VAR16->VAR39, "", NULL, 0)) || (VAR29 = FUN9(VAR2->VAR39, "", NULL, 0)))
            {
                uint64_t VAR76 = VAR77;
                for (VAR10 = 0; VAR10 < VAR77; VAR10++)
                    if (!strcmp(VAR29->VAR41, VAR78[VAR10]))
                    {
                        VAR76 = VAR10;
                        break;
                    }
                if ((VAR4->VAR51 == VAR52 && VAR76 > 3 && VAR76 != 11) || VAR76 >= VAR77)
                {
                    FUN11(VAR2, VAR55, "");
                    return FUN12(VAR56);
                }
                else
                    FUN8(VAR7, VAR79, VAR76);
            }
            if (VAR16->VAR80.VAR61)
            {
                int VAR81 = FUN15(VAR19->VAR73, VAR16->VAR80.VAR61, VAR16->VAR80.VAR62);
                FUN8(VAR7, VAR82, VAR81);
                FUN8(VAR7, VAR83, VAR19->VAR75);
            }
            if (VAR19->VAR25 == VAR84)
            {
                uint32_t VAR85 = FUN16(VAR19->VAR86);
                FUN17(VAR7, VAR87, &VAR85, sizeof(VAR85));
            }
            FUN18(VAR7, VAR20);
            break;
        case VAR88:
            FUN8(VAR7, VAR58, VAR89);
            if (!VAR22)
                FUN10(VAR7, VAR49, "");
            VAR20 = FUN4(VAR7, VAR90, 0);
            FUN8(VAR7, VAR91, VAR19->VAR92);
            FUN19(VAR7, VAR93, VAR26);
            if (VAR27)
                FUN19(VAR7, VAR94, VAR27);
            if (VAR24)
                FUN8(VAR7, VAR95, VAR24);
            FUN18(VAR7, VAR20);
            break;
        case VAR96:
            FUN8(VAR7, VAR58, VAR97);
            if (!VAR22)
            {
                FUN11(VAR2, VAR55, "", VAR19->VAR25);
                return FUN12(VAR98);
            }
            break;
        default:
            FUN11(VAR2, VAR55, "");
            break;
        }
        VAR11 = FUN20(VAR2, VAR7, VAR19, VAR22, VAR23);
        if (VAR11 < 0)
            return VAR11;
        FUN18(VAR7, VAR21);
        FUN21(VAR16, 64, 1, 1000);
    }
    FUN18(VAR7, VAR8);
    return 0;
}
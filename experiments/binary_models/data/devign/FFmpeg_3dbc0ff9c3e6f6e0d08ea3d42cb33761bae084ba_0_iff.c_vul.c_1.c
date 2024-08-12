static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    uint32_t VAR12, VAR13;
    uint32_t VAR14 = 0, VAR15, VAR16;
    unsigned VAR17 = 0;
    unsigned VAR18 = 0;
    uint8_t VAR19[16];
    int VAR20;
    VAR9 = FUN2(VAR2, NULL);
    if (!VAR9)
        return FUN3(VAR21);
    VAR9->VAR22->VAR23 = 1;
    VAR9->VAR22->VAR24 = VAR25;
    FUN4(VAR7, 8);
    VAR9->VAR22->VAR26 = FUN5(VAR7);
    VAR4->VAR27 = -1;
    VAR4->VAR28 = -1;
    VAR4->VAR29 = -1;
    VAR4->VAR30 = -1;
    while (!FUN6(VAR7))
    {
        uint64_t VAR31;
        int VAR32;
        const char *VAR33 = NULL;
        VAR12 = FUN5(VAR7);
        VAR13 = FUN7(VAR7);
        VAR31 = FUN8(VAR7);
        switch (VAR12)
        {
        case VAR34:
            VAR9->VAR22->VAR35 = VAR36;
            if (VAR13 < 14)
                return VAR37;
            FUN4(VAR7, 12);
            VAR9->VAR22->VAR38 = FUN9(VAR7);
            if (VAR13 >= 16)
            {
                FUN4(VAR7, 1);
                VAR4->VAR28 = FUN10(VAR7);
            }
            break;
        case VAR39:
            VAR9->VAR22->VAR35 = VAR36;
            if (VAR13 < 32)
                return VAR37;
            FUN4(VAR7, 4);
            VAR4->VAR29 = FUN9(VAR7);
            FUN4(VAR7, 2);
            VAR15 = FUN7(VAR7);
            VAR16 = FUN9(VAR7);
            if (!VAR16)
                return VAR37;
            FUN4(VAR7, 2);
            VAR9->VAR22->VAR38 = VAR15 / VAR16;
            VAR9->VAR22->VAR23 = FUN9(VAR7);
            VAR4->VAR30 = FUN9(VAR7);
            if (VAR9->VAR22->VAR23 == 1)
                VAR9->VAR22->VAR24 = VAR25;
            else if (VAR9->VAR22->VAR23 == 2)
                VAR9->VAR22->VAR24 = VAR40;
            break;
        case VAR41:
        case VAR42:
        case VAR43:
        case VAR44:
            VAR4->VAR45 = FUN8(VAR7);
            VAR4->VAR46 = VAR4->VAR45 + VAR13;
            VAR4->VAR47 = VAR13;
            break;
        case VAR48:
            if (VAR13 < 4)
                return VAR37;
            if (FUN7(VAR7) < 6)
            {
                VAR9->VAR22->VAR23 = 1;
                VAR9->VAR22->VAR24 = VAR25;
            }
            else
            {
                VAR9->VAR22->VAR23 = 2;
                VAR9->VAR22->VAR24 = VAR40;
            }
            break;
        case VAR49:
            if (VAR13 < 4)
                return VAR37;
            VAR14 = FUN7(VAR7);
            break;
        case VAR50:
            if (VAR13 > VAR51 - VAR52 - VAR53)
                return VAR37;
            VAR9->VAR22->VAR54 = VAR13 + VAR52;
            VAR9->VAR22->VAR55 = FUN11(VAR13 + VAR52 + VAR53);
            if (!VAR9->VAR22->VAR55)
                return FUN3(VAR21);
            if (FUN12(VAR7, VAR9->VAR22->VAR55 + VAR52, VAR13) < 0)
                return FUN3(VAR56);
            break;
        case VAR57:
            VAR9->VAR22->VAR35 = VAR58;
            if (VAR13 <= 8)
                return VAR37;
            VAR9->VAR22->VAR59 = FUN9(VAR7);
            VAR9->VAR22->VAR60 = FUN9(VAR7);
            FUN4(VAR7, 4);
            VAR9->VAR22->VAR61 = FUN10(VAR7);
            if (VAR13 >= 10)
                VAR18 = FUN10(VAR7);
            if (VAR13 >= 11)
                VAR4->VAR27 = FUN10(VAR7);
            if (VAR13 >= 14)
            {
                FUN4(VAR7, 1);
                VAR17 = FUN9(VAR7);
            }
            if (VAR13 >= 16)
            {
                VAR9->VAR62.VAR15 = FUN10(VAR7);
                VAR9->VAR62.VAR16 = FUN10(VAR7);
            }
            break;
        case VAR63:
            if (VAR13 < 4 || (VAR13 & 3))
                return VAR37;
            if ((VAR20 = FUN12(VAR7, VAR19, sizeof(VAR19))) < 0)
                return VAR20;
            if (VAR20 == sizeof(VAR64) && !memcmp(VAR19, VAR64, sizeof(VAR64)))
                VAR9->VAR22->VAR65 = VAR66;
            else if (VAR20 == sizeof(VAR67) && !memcmp(VAR19, VAR67, sizeof(VAR67)))
                VAR9->VAR22->VAR65 = VAR68;
            else if (VAR20 == sizeof(VAR69) && !memcmp(VAR19, VAR69, sizeof(VAR69)))
                VAR9->VAR22->VAR65 = VAR70;
            else if (VAR20 == sizeof(VAR71) && !memcmp(VAR19, VAR71, sizeof(VAR71)))
                VAR9->VAR22->VAR65 = VAR72;
            else if (VAR20 == sizeof(VAR73) && !memcmp(VAR19, VAR73, sizeof(VAR73)))
                VAR9->VAR22->VAR65 = VAR74;
            else
            {
                FUN13(VAR2, "");
                return VAR75;
            }
            break;
        case VAR76:
            VAR9->VAR22->VAR35 = VAR58;
            if (VAR13 < 8)
                return VAR37;
            VAR9->VAR22->VAR59 = FUN9(VAR7);
            VAR9->VAR22->VAR60 = FUN9(VAR7);
            VAR4->VAR27 = FUN9(VAR7);
            VAR9->VAR62.VAR15 = FUN10(VAR7);
            VAR9->VAR62.VAR16 = FUN10(VAR7);
            VAR9->VAR22->VAR61 = 24;
            break;
        case VAR77:
            if (VAR13 < 4)
                return VAR37;
            VAR9->VAR22->VAR59 = FUN9(VAR7);
            VAR9->VAR22->VAR60 = FUN9(VAR7);
            break;
        case VAR78:
            if (VAR13 < sizeof(VAR4->VAR79))
                return VAR37;
            VAR32 = FUN12(VAR7, VAR4->VAR79, sizeof(VAR4->VAR79));
            if (VAR32 < 0)
                return VAR32;
            break;
        case VAR80:
        case VAR81:
            VAR33 = "";
            break;
        case VAR82:
            VAR33 = "";
            break;
        case VAR83:
            VAR33 = "";
            break;
        case VAR84:
            VAR33 = "";
            break;
        }
        if (VAR33)
        {
            if ((VAR32 = FUN14(VAR2, VAR33, VAR13)) < 0)
            {
                FUN15(VAR2, VAR85, "", VAR33);
                return VAR32;
            }
        }
        FUN4(VAR7, VAR13 - (FUN8(VAR7) - VAR31) + (VAR13 & 1));
    }
    FUN16(VAR7, VAR4->VAR45, VAR86);
    switch (VAR9->VAR22->VAR35)
    {
    case VAR36:
        FUN17(VAR9, 32, 1, VAR9->VAR22->VAR38);
        if (VAR9->VAR22->VAR26 == VAR87)
            VAR9->VAR22->VAR88 = VAR89;
        else if (VAR9->VAR22->VAR26 == VAR90)
        {
            if (VAR4->VAR29 == 8 && !VAR4->VAR30)
            {
                VAR9->VAR22->VAR88 = VAR91;
            }
            else if (VAR4->VAR29 == 16 && !VAR4->VAR30)
            {
                VAR9->VAR22->VAR88 = VAR92;
            }
            else if (VAR4->VAR29 == 8 && VAR4->VAR30 == 2)
            {
                VAR9->VAR22->VAR88 = VAR93;
            }
            else if (VAR4->VAR29 == 8 && VAR4->VAR30 == 3)
            {
                VAR9->VAR22->VAR88 = VAR94;
            }
            else
            {
                FUN13(VAR2, "", VAR4->VAR30, VAR4->VAR29);
                return VAR75;
            }
            VAR9->VAR22->VAR61 = FUN18(VAR9->VAR22->VAR88);
            VAR9->VAR22->VAR95 = VAR9->VAR22->VAR61 * VAR9->VAR22->VAR23 / 8;
        }
        else
        {
            switch (VAR4->VAR28)
            {
            case VAR96:
                VAR9->VAR22->VAR88 = VAR97;
                break;
            case VAR98:
                VAR9->VAR22->VAR88 = VAR99;
                break;
            case VAR100:
                VAR9->VAR22->VAR88 = VAR101;
                break;
            default:
                FUN15(VAR2, VAR85, "", VAR4->VAR28);
                return -1;
            }
        }
        VAR9->VAR22->VAR61 = FUN18(VAR9->VAR22->VAR88);
        VAR9->VAR22->VAR102 = VAR9->VAR22->VAR23 * VAR9->VAR22->VAR38 * VAR9->VAR22->VAR61;
        VAR9->VAR22->VAR95 = VAR9->VAR22->VAR23 * VAR9->VAR22->VAR61;
        break;
    case VAR58:
        VAR4->VAR103 = VAR9->VAR22->VAR61;
        if ((VAR14 & 0x800) && VAR4->VAR103 <= 8)
        {
            VAR4->VAR104 = VAR4->VAR103 > 6 ? 6 : 4;
            VAR9->VAR22->VAR61 = 24;
        }
        VAR4->VAR105 = (VAR14 & 0x80) && VAR4->VAR103 <= 8;
        VAR4->VAR18 = VAR18;
        VAR4->VAR17 = VAR17;
        if (!VAR9->VAR22->VAR55)
        {
            VAR9->VAR22->VAR54 = VAR52;
            VAR9->VAR22->VAR55 = FUN11(VAR52 + VAR53);
            if (!VAR9->VAR22->VAR55)
                return FUN3(VAR21);
        }
        VAR11 = VAR9->VAR22->VAR55;
        FUN19(&VAR11, VAR52);
        FUN20(&VAR11, VAR4->VAR27);
        FUN20(&VAR11, VAR4->VAR103);
        FUN20(&VAR11, VAR4->VAR104);
        FUN20(&VAR11, VAR4->VAR105);
        FUN19(&VAR11, VAR4->VAR17);
        FUN20(&VAR11, VAR4->VAR18);
        FUN21(&VAR11, VAR4->VAR79, sizeof(VAR4->VAR79));
        VAR9->VAR22->VAR88 = VAR106;
        break;
    default:
        return -1;
    }
    return 0;
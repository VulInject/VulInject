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
            VAR4->VAR46 = VAR13;
            break;
        case VAR47:
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
        case VAR48:
            if (VAR13 < 4)
                return VAR37;
            VAR14 = FUN7(VAR7);
            break;
        case VAR49:
            VAR9->VAR22->VAR50 = VAR13 + VAR51;
            VAR9->VAR22->VAR52 = FUN11(VAR13 + VAR51 + VAR53);
            if (!VAR9->VAR22->VAR52)
                return FUN3(VAR21);
            if (FUN12(VAR7, VAR9->VAR22->VAR52 + VAR51, VAR13) < 0)
                return FUN3(VAR54);
            break;
        case VAR55:
            VAR9->VAR22->VAR35 = VAR56;
            if (VAR13 <= 8)
                return VAR37;
            VAR9->VAR22->VAR57 = FUN9(VAR7);
            VAR9->VAR22->VAR58 = FUN9(VAR7);
            FUN4(VAR7, 4);
            VAR9->VAR22->VAR59 = FUN10(VAR7);
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
                VAR9->VAR60.VAR15 = FUN10(VAR7);
                VAR9->VAR60.VAR16 = FUN10(VAR7);
            }
            break;
        case VAR61:
            if (VAR13 < 4 || (VAR13 & 3))
                return VAR37;
            if ((VAR20 = FUN12(VAR7, VAR19, sizeof(VAR19))) < 0)
                return VAR20;
            if (VAR20 == sizeof(VAR62) && !memcmp(VAR19, VAR62, sizeof(VAR62)))
                VAR9->VAR22->VAR63 = VAR64;
            else if (VAR20 == sizeof(VAR65) && !memcmp(VAR19, VAR65, sizeof(VAR65)))
                VAR9->VAR22->VAR63 = VAR66;
            else if (VAR20 == sizeof(VAR67) && !memcmp(VAR19, VAR67, sizeof(VAR67)))
                VAR9->VAR22->VAR63 = VAR68;
            else if (VAR20 == sizeof(VAR69) && !memcmp(VAR19, VAR69, sizeof(VAR69)))
                VAR9->VAR22->VAR63 = VAR70;
            else if (VAR20 == sizeof(VAR71) && !memcmp(VAR19, VAR71, sizeof(VAR71)))
                VAR9->VAR22->VAR63 = VAR72;
            else
            {
                FUN13(VAR2, "");
                return VAR73;
            }
            break;
        case VAR74:
            VAR9->VAR22->VAR35 = VAR56;
            if (VAR13 < 8)
                return VAR37;
            VAR9->VAR22->VAR57 = FUN9(VAR7);
            VAR9->VAR22->VAR58 = FUN9(VAR7);
            VAR4->VAR27 = FUN9(VAR7);
            VAR9->VAR60.VAR15 = FUN10(VAR7);
            VAR9->VAR60.VAR16 = FUN10(VAR7);
            VAR9->VAR22->VAR59 = 24;
            break;
        case VAR75:
            if (VAR13 < 4)
                return VAR37;
            VAR9->VAR22->VAR57 = FUN9(VAR7);
            VAR9->VAR22->VAR58 = FUN9(VAR7);
            break;
        case VAR76:
        case VAR77:
            VAR33 = "";
            break;
        case VAR78:
            VAR33 = "";
            break;
        case VAR79:
            VAR33 = "";
            break;
        case VAR80:
            VAR33 = "";
            break;
        }
        if (VAR33)
        {
            if ((VAR32 = FUN14(VAR2, VAR33, VAR13)) < 0)
            {
                FUN15(VAR2, VAR81, "", VAR33);
                return VAR32;
            }
        }
        FUN4(VAR7, VAR13 - (FUN8(VAR7) - VAR31) + (VAR13 & 1));
    }
    FUN16(VAR7, VAR4->VAR45, VAR82);
    switch (VAR9->VAR22->VAR35)
    {
    case VAR36:
        FUN17(VAR9, 32, 1, VAR9->VAR22->VAR38);
        if (VAR9->VAR22->VAR26 == VAR83)
            VAR9->VAR22->VAR84 = VAR85;
        else if (VAR9->VAR22->VAR26 == VAR86)
        {
            if (VAR4->VAR29 == 8 && !VAR4->VAR30)
            {
                VAR9->VAR22->VAR84 = VAR87;
            }
            else if (VAR4->VAR29 == 16 && !VAR4->VAR30)
            {
                VAR9->VAR22->VAR84 = VAR88;
            }
            else if (VAR4->VAR29 == 8 && VAR4->VAR30 == 2)
            {
                VAR9->VAR22->VAR84 = VAR89;
            }
            else if (VAR4->VAR29 == 8 && VAR4->VAR30 == 3)
            {
                VAR9->VAR22->VAR84 = VAR90;
            }
            else
            {
                FUN13(VAR2, "", VAR4->VAR30, VAR4->VAR29);
                return VAR73;
            }
            VAR9->VAR22->VAR59 = FUN18(VAR9->VAR22->VAR84);
            VAR9->VAR22->VAR91 = VAR9->VAR22->VAR59 * VAR9->VAR22->VAR23 / 8;
        }
        else
        {
            switch (VAR4->VAR28)
            {
            case VAR92:
                VAR9->VAR22->VAR84 = VAR93;
                break;
            case VAR94:
                VAR9->VAR22->VAR84 = VAR95;
                break;
            case VAR96:
                VAR9->VAR22->VAR84 = VAR97;
                break;
            default:
                FUN15(VAR2, VAR81, "", VAR4->VAR28);
                return -1;
            }
        }
        VAR9->VAR22->VAR59 = FUN18(VAR9->VAR22->VAR84);
        VAR9->VAR22->VAR98 = VAR9->VAR22->VAR23 * VAR9->VAR22->VAR38 * VAR9->VAR22->VAR59;
        VAR9->VAR22->VAR91 = VAR9->VAR22->VAR23 * VAR9->VAR22->VAR59;
        break;
    case VAR56:
        VAR4->VAR99 = VAR9->VAR22->VAR59;
        if ((VAR14 & 0x800) && VAR4->VAR99 <= 8)
        {
            VAR4->VAR100 = VAR4->VAR99 > 6 ? 6 : 4;
            VAR9->VAR22->VAR59 = 24;
        }
        VAR4->VAR101 = (VAR14 & 0x80) && VAR4->VAR99 <= 8;
        VAR4->VAR18 = VAR18;
        VAR4->VAR17 = VAR17;
        if (!VAR9->VAR22->VAR52)
        {
            VAR9->VAR22->VAR50 = VAR51;
            VAR9->VAR22->VAR52 = FUN11(VAR51 + VAR53);
            if (!VAR9->VAR22->VAR52)
                return FUN3(VAR21);
        }
        VAR11 = VAR9->VAR22->VAR52;
        FUN19(&VAR11, VAR51);
        FUN20(&VAR11, VAR4->VAR27);
        FUN20(&VAR11, VAR4->VAR99);
        FUN20(&VAR11, VAR4->VAR100);
        FUN20(&VAR11, VAR4->VAR101);
        FUN19(&VAR11, VAR4->VAR17);
        FUN20(&VAR11, VAR4->VAR18);
        VAR9->VAR22->VAR84 = VAR102;
        break;
    default:
        return -1;
    }
    return 0;
}
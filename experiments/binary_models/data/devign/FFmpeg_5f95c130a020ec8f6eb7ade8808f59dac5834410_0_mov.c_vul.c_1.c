int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        enum CodecID VAR16;
        int VAR17 = 1;
        MOVAtom VAR18 = {FUN2("")};
        int64_t VAR19 = FUN3(VAR4);
        int VAR20 = FUN4(VAR4);
        uint32_t VAR21 = FUN5(VAR4);
        if (VAR20 >= 16)
        {
            FUN4(VAR4);
            FUN6(VAR4);
            VAR17 = FUN6(VAR4);
        }
        if (VAR7->VAR22->VAR23 && VAR7->VAR22->VAR23 != VAR21 && (VAR2->VAR12->VAR24 ? FUN7(VAR25, VAR21) != VAR2->VAR12->VAR24 : VAR7->VAR22->VAR23 != FUN8('', '', '', '')))
        {
        VAR26:
            FUN9(VAR2->VAR12, VAR27, "");
            FUN10(VAR4, VAR20 - (FUN3(VAR4) - VAR19));
            continue;
        }
        if (VAR7->VAR22->VAR23 && VAR7->VAR22->VAR23 == FUN2(""))
            goto VAR26;
        VAR9->VAR11 = VAR7->VAR22->VAR23 ? -1 : VAR11;
        VAR9->VAR17 = VAR17;
        VAR7->VAR22->VAR23 = VAR21;
        VAR16 = FUN7(VAR28, VAR21);
        if (VAR16 <= 0 && ((VAR21 & 0xFFFF) == '' + ('' << 8) || (VAR21 & 0xFFFF) == '' + ('' << 8)))
            VAR16 = FUN7(VAR29, FUN11(VAR21) & 0xFFFF);
        if (VAR7->VAR22->VAR30 != VAR31 && VAR16 > 0)
        {
            VAR7->VAR22->VAR30 = VAR32;
        }
        else if (VAR7->VAR22->VAR30 != VAR32 && VAR21 && VAR21 != FUN8('', '', '', ''))
        {
            VAR16 = FUN7(VAR25, VAR21);
            if (VAR16 <= 0)
                VAR16 = FUN7(VAR33, VAR21);
            if (VAR16 > 0)
                VAR7->VAR22->VAR30 = VAR31;
            else if (VAR7->VAR22->VAR30 == VAR34)
            {
                VAR16 = FUN7(VAR35, VAR21);
                if (VAR16 > 0)
                    VAR7->VAR22->VAR30 = VAR36;
            }
        }
        FUN12(VAR2->VAR12, "", VAR20, (VAR21 >> 0) & 0xff, (VAR21 >> 8) & 0xff, (VAR21 >> 16) & 0xff, (VAR21 >> 24) & 0xff, VAR7->VAR22->VAR30);
        if (VAR7->VAR22->VAR30 == VAR31)
        {
            unsigned int VAR37, VAR38;
            int VAR39;
            VAR7->VAR22->VAR40 = VAR16;
            FUN6(VAR4);
            FUN6(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            VAR7->VAR22->VAR41 = FUN6(VAR4);
            VAR7->VAR22->VAR42 = FUN6(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN6(VAR4);
            VAR38 = FUN13(VAR4);
            if (VAR38 > 31)
                VAR38 = 31;
            FUN14(VAR2, VAR4, VAR38, VAR7->VAR22->VAR43, 32);
            if (VAR38 < 31)
                FUN10(VAR4, 31 - VAR38);
            if (!memcmp(VAR7->VAR22->VAR43, "", 25))
                VAR7->VAR22->VAR23 = FUN8('', '', '', '');
            VAR7->VAR22->VAR44 = FUN6(VAR4);
            VAR7->VAR22->VAR45 = FUN6(VAR4);
            FUN12(VAR2->VAR12, "", VAR7->VAR22->VAR44, VAR7->VAR22->VAR45);
            VAR37 = VAR7->VAR22->VAR44 & 0x1F;
            VAR39 = VAR7->VAR22->VAR44 & 0x20;
            if ((VAR37 == 2) || (VAR37 == 4) || (VAR37 == 8))
            {
                unsigned int VAR46, VAR47, VAR48;
                unsigned char VAR49, VAR50, VAR51;
                if (VAR39)
                {
                    int VAR52, VAR53;
                    VAR7->VAR22->VAR44 = VAR37;
                    VAR47 = 1 << VAR37;
                    VAR52 = 255;
                    VAR53 = 256 / (VAR47 - 1);
                    for (VAR10 = 0; VAR10 < VAR47; VAR10++)
                    {
                        if (VAR16 == VAR54)
                        {
                            VAR49 = VAR50 = VAR51 = VAR47 - 1 - VAR52;
                        }
                        else
                            VAR49 = VAR50 = VAR51 = VAR52;
                        VAR9->VAR55[VAR10] = (VAR49 << 16) | (VAR50 << 8) | (VAR51);
                        VAR52 -= VAR53;
                        if (VAR52 < 0)
                            VAR52 = 0;
                    }
                }
                else if (VAR7->VAR22->VAR45)
                {
                    const VAR56 *VAR57;
                    VAR47 = 1 << VAR37;
                    if (VAR37 == 2)
                        VAR57 = VAR58;
                    else if (VAR37 == 4)
                        VAR57 = VAR59;
                    else
                        VAR57 = VAR60;
                    for (VAR10 = 0; VAR10 < VAR47; VAR10++)
                    {
                        VAR49 = VAR57[VAR10 * 3 + 0];
                        VAR50 = VAR57[VAR10 * 3 + 1];
                        VAR51 = VAR57[VAR10 * 3 + 2];
                        VAR9->VAR55[VAR10] = (VAR49 << 16) | (VAR50 << 8) | (VAR51);
                    }
                }
                else
                {
                    VAR46 = FUN4(VAR4);
                    VAR47 = FUN6(VAR4);
                    VAR48 = FUN6(VAR4);
                    if ((VAR46 <= 255) && (VAR48 <= 255))
                    {
                        for (VAR10 = VAR46; VAR10 <= VAR48; VAR10++)
                        {
                            FUN13(VAR4);
                            FUN13(VAR4);
                            VAR49 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR50 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR51 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR9->VAR55[VAR10] = (VAR49 << 16) | (VAR50 << 8) | (VAR51);
                        }
                    }
                }
                VAR9->VAR61 = 1;
            }
        }
        else if (VAR7->VAR22->VAR30 == VAR32)
        {
            int VAR62, VAR63;
            uint16_t VAR64 = FUN6(VAR4);
            VAR7->VAR22->VAR40 = VAR16;
            FUN6(VAR4);
            FUN4(VAR4);
            VAR7->VAR22->VAR65 = FUN6(VAR4);
            FUN12(VAR2->VAR12, "", VAR7->VAR22->VAR65);
            VAR7->VAR22->VAR44 = FUN6(VAR4);
            VAR9->VAR66 = FUN6(VAR4);
            FUN6(VAR4);
            VAR7->VAR22->VAR67 = ((FUN4(VAR4) >> 16));
            FUN12(VAR2->VAR12, "", VAR64, VAR2->VAR68);
            if (!VAR2->VAR68)
            {
                if (VAR64 == 1)
                {
                    VAR9->VAR69 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR9->VAR70 = FUN4(VAR4);
                    FUN4(VAR4);
                }
                else if (VAR64 == 2)
                {
                    FUN4(VAR4);
                    VAR7->VAR22->VAR67 = FUN15(FUN16(VAR4));
                    VAR7->VAR22->VAR65 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR7->VAR22->VAR44 = FUN4(VAR4);
                    VAR63 = FUN4(VAR4);
                    VAR9->VAR70 = FUN4(VAR4);
                    VAR9->VAR69 = FUN4(VAR4);
                    if (VAR21 == FUN8('', '', '', ''))
                        VAR7->VAR22->VAR40 = FUN17(VAR7->VAR22->VAR44, VAR63);
                }
            }
            switch (VAR7->VAR22->VAR40)
            {
            case VAR71:
            case VAR72:
                if (VAR7->VAR22->VAR44 == 16)
                    VAR7->VAR22->VAR40 = VAR73;
                break;
            case VAR74:
            case VAR73:
                if (VAR7->VAR22->VAR44 == 8)
                    VAR7->VAR22->VAR40 = VAR71;
                else if (VAR7->VAR22->VAR44 == 24)
                    VAR7->VAR22->VAR40 = VAR7->VAR22->VAR40 == VAR73 ? VAR75 : VAR76;
                break;
            case VAR77:
                VAR9->VAR69 = 6;
                VAR9->VAR70 = 2 * VAR7->VAR22->VAR65;
                break;
            case VAR78:
                VAR9->VAR69 = 6;
                VAR9->VAR70 = 1 * VAR7->VAR22->VAR65;
                break;
            case VAR79:
                VAR9->VAR69 = 64;
                VAR9->VAR70 = 34 * VAR7->VAR22->VAR65;
                break;
            case VAR80:
                VAR9->VAR69 = 160;
                VAR9->VAR70 = 33;
                break;
            default:
                break;
            }
            VAR62 = FUN18(VAR7->VAR22->VAR40);
            if (VAR62)
            {
                VAR7->VAR22->VAR44 = VAR62;
                VAR9->VAR81 = (VAR62 >> 3) * VAR7->VAR22->VAR65;
            }
        }
        else if (VAR7->VAR22->VAR30 == VAR36)
        {
            MOVAtom VAR82 = {.VAR20 = VAR20 - (FUN3(VAR4) - VAR19)};
            if (VAR21 != FUN2(""))
                FUN19(VAR2, VAR4, VAR82);
            VAR7->VAR22->VAR40 = VAR16;
            VAR7->VAR22->VAR41 = VAR9->VAR41;
            VAR7->VAR22->VAR42 = VAR9->VAR42;
        }
        else
        {
            if (VAR7->VAR22->VAR23 == FUN8('', '', '', ''))
            {
                int VAR83;
                FUN4(VAR4);
                VAR83 = FUN4(VAR4);
                if (VAR83 & 1)
                    VAR7->VAR22->VAR84 |= VAR85;
                FUN4(VAR4);
                FUN4(VAR4);
                VAR7->VAR22->VAR86.VAR87 = FUN13(VAR4);
                VAR7->VAR22->VAR86.VAR88 = 1;
            }
            FUN10(VAR4, VAR20 - (FUN3(VAR4) - VAR19));
        }
        VAR18.VAR20 = VAR20 - (FUN3(VAR4) - VAR19);
        if (VAR18.VAR20 > 8)
        {
            if (FUN20(VAR2, VAR4, VAR18) < 0)
        }
        else if (VAR18.VAR20 > 0)
            FUN10(VAR4, VAR18.VAR20);
    }
    if (VAR7->VAR22->VAR30 == VAR32 && VAR7->VAR22->VAR67 == 0 && VAR9->VAR89 > 1)
        VAR7->VAR22->VAR67 = VAR9->VAR89;
    switch (VAR7->VAR22->VAR40)
    {
    case VAR90:
        VAR2->VAR91 = FUN21();
        VAR2->VAR92 = FUN22(VAR2->VAR91);
        if (!VAR2->VAR92)
        {
            FUN9(VAR2->VAR12, VAR93, "");
        }
        VAR9->VAR94 = 1;
        VAR7->VAR22->VAR40 = VAR74;
        break;
    case VAR95:
        if (VAR7->VAR22->VAR23 != FUN8('', '', '', ''))
            VAR7->VAR22->VAR67 = 8000;
        VAR7->VAR22->VAR96 = 160;
        VAR7->VAR22->VAR65 = 1;
        break;
    case VAR97:
        VAR7->VAR22->VAR65 = 1;
        VAR7->VAR22->VAR67 = 8000;
        VAR7->VAR22->VAR96 = 160;
        break;
    case VAR98:
        VAR7->VAR22->VAR65 = 1;
        VAR7->VAR22->VAR67 = 16000;
        VAR7->VAR22->VAR96 = 320;
        break;
    case VAR99:
    case VAR100:
        VAR7->VAR22->VAR30 = VAR32;
        VAR7->VAR101 = VAR102;
        break;
    case VAR80:
    case VAR103:
    case VAR104:
        VAR7->VAR22->VAR96 = VAR9->VAR69;
        VAR7->VAR22->VAR105 = VAR9->VAR70;
        break;
    case VAR106:
        if (VAR7->VAR22->VAR107 == 36)
        {
            VAR7->VAR22->VAR96 = FUN23(VAR7->VAR22->VAR108 + 12);
            VAR7->VAR22->VAR65 = FUN24(VAR7->VAR22->VAR108 + 21);
            VAR7->VAR22->VAR67 = FUN23(VAR7->VAR22->VAR108 + 32);
        }
        break;
    case VAR109:
        VAR7->VAR101 = VAR102;
        break;
    case VAR110:
        VAR7->VAR101 = VAR102;
        break;
    default:
        break;
    }
    return 0;
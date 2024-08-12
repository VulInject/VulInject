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
        enum AVCodecID VAR16;
        int VAR17 = 1;
        MOVAtom VAR18 = {FUN2("")};
        int64_t VAR19 = FUN3(VAR4);
        uint32_t VAR20 = FUN4(VAR4);
        uint32_t VAR21 = FUN5(VAR4);
        if (VAR20 >= 16)
        {
            FUN4(VAR4);
            FUN6(VAR4);
            VAR17 = FUN6(VAR4);
        }
        else
        {
            FUN7(VAR2->VAR12, VAR22, "", VAR20);
            return VAR23;
        }
        if (VAR7->VAR24->VAR25 && VAR7->VAR24->VAR25 != VAR21 && (VAR2->VAR12->VAR26 ? FUN8(VAR27, VAR21) != VAR2->VAR12->VAR26 : VAR7->VAR24->VAR25 != FUN9('', '', '', '')))
        {
        VAR28:
            FUN7(VAR2->VAR12, VAR29, "");
            FUN10(VAR4, VAR20 - (FUN3(VAR4) - VAR19));
            continue;
        }
        if (VAR7->VAR24->VAR25 && VAR7->VAR24->VAR25 == FUN2(""))
            goto VAR28;
        VAR9->VAR11 = VAR7->VAR24->VAR25 ? -1 : VAR11;
        VAR9->VAR17 = VAR17;
        VAR7->VAR24->VAR25 = VAR21;
        VAR16 = FUN8(VAR30, VAR21);
        if (VAR16 <= 0 && ((VAR21 & 0xFFFF) == '' + ('' << 8) || (VAR21 & 0xFFFF) == '' + ('' << 8)))
            VAR16 = FUN8(VAR31, FUN11(VAR21) & 0xFFFF);
        if (VAR7->VAR24->VAR32 != VAR33 && VAR16 > 0)
        {
            VAR7->VAR24->VAR32 = VAR34;
        }
        else if (VAR7->VAR24->VAR32 != VAR34 && VAR21 && VAR21 != FUN9('', '', '', ''))
        {
            VAR16 = FUN8(VAR27, VAR21);
            if (VAR16 <= 0)
                VAR16 = FUN8(VAR35, VAR21);
            if (VAR16 > 0)
                VAR7->VAR24->VAR32 = VAR33;
            else if (VAR7->VAR24->VAR32 == VAR36)
            {
                VAR16 = FUN8(VAR37, VAR21);
                if (VAR16 > 0)
                    VAR7->VAR24->VAR32 = VAR38;
            }
        }
        FUN12(VAR2->VAR12, "", VAR20, (VAR21 >> 0) & 0xff, (VAR21 >> 8) & 0xff, (VAR21 >> 16) & 0xff, (VAR21 >> 24) & 0xff, VAR7->VAR24->VAR32);
        if (VAR7->VAR24->VAR32 == VAR33)
        {
            unsigned int VAR39, VAR40;
            int VAR41;
            int VAR42;
            VAR7->VAR24->VAR43 = VAR16;
            FUN6(VAR4);
            FUN6(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            VAR7->VAR24->VAR44 = FUN6(VAR4);
            VAR7->VAR24->VAR45 = FUN6(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN6(VAR4);
            VAR40 = FUN13(VAR4);
            if (VAR40 > 31)
                VAR40 = 31;
            FUN14(VAR2, VAR4, VAR40, VAR7->VAR24->VAR46, 32);
            if (VAR40 < 31)
                FUN10(VAR4, 31 - VAR40);
            if (!memcmp(VAR7->VAR24->VAR46, "", 25))
                VAR7->VAR24->VAR25 = FUN9('', '', '', '');
            VAR7->VAR24->VAR47 = FUN6(VAR4);
            VAR42 = FUN6(VAR4);
            FUN12(VAR2->VAR12, "", VAR7->VAR24->VAR47, VAR42);
            VAR39 = VAR7->VAR24->VAR47 & 0x1F;
            VAR41 = VAR7->VAR24->VAR47 & 0x20;
            if ((VAR39 == 2) || (VAR39 == 4) || (VAR39 == 8))
            {
                unsigned int VAR48, VAR49, VAR50;
                unsigned char VAR51, VAR52, VAR53;
                if (VAR41)
                {
                    int VAR54, VAR55;
                    VAR7->VAR24->VAR47 = VAR39;
                    VAR49 = 1 << VAR39;
                    VAR54 = 255;
                    VAR55 = 256 / (VAR49 - 1);
                    for (VAR10 = 0; VAR10 < VAR49; VAR10++)
                    {
                        VAR51 = VAR52 = VAR53 = VAR54;
                        VAR9->VAR56[VAR10] = (VAR51 << 16) | (VAR52 << 8) | (VAR53);
                        VAR54 -= VAR55;
                        if (VAR54 < 0)
                            VAR54 = 0;
                    }
                }
                else if (VAR42)
                {
                    const VAR57 *VAR58;
                    VAR49 = 1 << VAR39;
                    if (VAR39 == 2)
                        VAR58 = VAR59;
                    else if (VAR39 == 4)
                        VAR58 = VAR60;
                    else
                        VAR58 = VAR61;
                    for (VAR10 = 0; VAR10 < VAR49; VAR10++)
                    {
                        VAR51 = VAR58[VAR10 * 3 + 0];
                        VAR52 = VAR58[VAR10 * 3 + 1];
                        VAR53 = VAR58[VAR10 * 3 + 2];
                        VAR9->VAR56[VAR10] = (VAR51 << 16) | (VAR52 << 8) | (VAR53);
                    }
                }
                else
                {
                    VAR48 = FUN4(VAR4);
                    VAR49 = FUN6(VAR4);
                    VAR50 = FUN6(VAR4);
                    if ((VAR48 <= 255) && (VAR50 <= 255))
                    {
                        for (VAR10 = VAR48; VAR10 <= VAR50; VAR10++)
                        {
                            FUN13(VAR4);
                            FUN13(VAR4);
                            VAR51 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR52 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR53 = FUN13(VAR4);
                            FUN13(VAR4);
                            VAR9->VAR56[VAR10] = (VAR51 << 16) | (VAR52 << 8) | (VAR53);
                        }
                    }
                }
                VAR9->VAR62 = 1;
            }
        }
        else if (VAR7->VAR24->VAR32 == VAR34)
        {
            int VAR63, VAR64;
            uint16_t VAR65 = FUN6(VAR4);
            VAR7->VAR24->VAR43 = VAR16;
            FUN6(VAR4);
            FUN4(VAR4);
            VAR7->VAR24->VAR66 = FUN6(VAR4);
            FUN12(VAR2->VAR12, "", VAR7->VAR24->VAR66);
            VAR7->VAR24->VAR47 = FUN6(VAR4);
            VAR9->VAR67 = FUN6(VAR4);
            FUN6(VAR4);
            VAR7->VAR24->VAR68 = ((FUN4(VAR4) >> 16));
            FUN12(VAR2->VAR12, "", VAR65, VAR2->VAR69);
            if (!VAR2->VAR69)
            {
                if (VAR65 == 1)
                {
                    VAR9->VAR70 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR9->VAR71 = FUN4(VAR4);
                    FUN4(VAR4);
                }
                else if (VAR65 == 2)
                {
                    FUN4(VAR4);
                    VAR7->VAR24->VAR68 = FUN15(FUN16(VAR4));
                    VAR7->VAR24->VAR66 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR7->VAR24->VAR47 = FUN4(VAR4);
                    VAR64 = FUN4(VAR4);
                    VAR9->VAR71 = FUN4(VAR4);
                    VAR9->VAR70 = FUN4(VAR4);
                    if (VAR21 == FUN9('', '', '', ''))
                        VAR7->VAR24->VAR43 = FUN17(VAR7->VAR24->VAR47, VAR64);
                }
            }
            switch (VAR7->VAR24->VAR43)
            {
            case VAR72:
            case VAR73:
                if (VAR7->VAR24->VAR47 == 16)
                    VAR7->VAR24->VAR43 = VAR74;
                break;
            case VAR75:
            case VAR74:
                if (VAR7->VAR24->VAR47 == 8)
                    VAR7->VAR24->VAR43 = VAR72;
                else if (VAR7->VAR24->VAR47 == 24)
                    VAR7->VAR24->VAR43 = VAR7->VAR24->VAR43 == VAR74 ? VAR76 : VAR77;
                break;
            case VAR78:
                VAR9->VAR70 = 6;
                VAR9->VAR71 = 2 * VAR7->VAR24->VAR66;
                break;
            case VAR79:
                VAR9->VAR70 = 6;
                VAR9->VAR71 = 1 * VAR7->VAR24->VAR66;
                break;
            case VAR80:
                VAR9->VAR70 = 64;
                VAR9->VAR71 = 34 * VAR7->VAR24->VAR66;
                break;
            case VAR81:
                VAR9->VAR70 = 160;
                VAR9->VAR71 = 33;
                break;
            default:
                break;
            }
            VAR63 = FUN18(VAR7->VAR24->VAR43);
            if (VAR63)
            {
                VAR7->VAR24->VAR47 = VAR63;
                VAR9->VAR82 = (VAR63 >> 3) * VAR7->VAR24->VAR66;
            }
        }
        else if (VAR7->VAR24->VAR32 == VAR38)
        {
            MOVAtom VAR83 = {.VAR20 = VAR20 - (FUN3(VAR4) - VAR19)};
            if (VAR21 != FUN2(""))
                FUN19(VAR2, VAR4, VAR83);
            VAR7->VAR24->VAR43 = VAR16;
            VAR7->VAR24->VAR44 = VAR9->VAR44;
            VAR7->VAR24->VAR45 = VAR9->VAR45;
        }
        else
        {
            FUN10(VAR4, VAR20 - (FUN3(VAR4) - VAR19));
        }
        VAR18.VAR20 = VAR20 - (FUN3(VAR4) - VAR19);
        if (VAR18.VAR20 > 8)
        {
            int VAR84;
            if ((VAR84 = FUN20(VAR2, VAR4, VAR18)) < 0)
                return VAR84;
        }
        else if (VAR18.VAR20 > 0)
            FUN10(VAR4, VAR18.VAR20);
    }
    if (VAR7->VAR24->VAR32 == VAR34 && VAR7->VAR24->VAR68 == 0 && VAR9->VAR85 > 1)
        VAR7->VAR24->VAR68 = VAR9->VAR85;
    switch (VAR7->VAR24->VAR43)
    {
    case VAR86:
        VAR2->VAR87 = FUN21();
        VAR2->VAR88 = FUN22(VAR2->VAR87);
        if (!VAR2->VAR88)
        {
            FUN7(VAR2->VAR12, VAR22, "");
            return FUN23(VAR89);
        }
        VAR9->VAR90 = 1;
        VAR7->VAR24->VAR43 = VAR75;
        break;
    case VAR91:
        if (VAR7->VAR24->VAR25 != FUN9('', '', '', ''))
            VAR7->VAR24->VAR68 = 8000;
        VAR7->VAR24->VAR66 = 1;
        break;
    case VAR92:
        VAR7->VAR24->VAR66 = 1;
        VAR7->VAR24->VAR68 = 8000;
        break;
    case VAR93:
        VAR7->VAR24->VAR66 = 1;
        VAR7->VAR24->VAR68 = 16000;
        break;
    case VAR94:
    case VAR95:
        VAR7->VAR24->VAR32 = VAR34;
        VAR7->VAR96 = VAR97;
        break;
    case VAR81:
    case VAR98:
    case VAR99:
    case VAR100:
        VAR7->VAR24->VAR101 = VAR9->VAR71;
        break;
    case VAR102:
        if (VAR7->VAR24->VAR103 == 36)
        {
            VAR7->VAR24->VAR66 = FUN24(VAR7->VAR24->VAR104 + 21);
            VAR7->VAR24->VAR68 = FUN25(VAR7->VAR24->VAR104 + 32);
        }
        break;
    case VAR105:
        VAR7->VAR96 = VAR97;
        break;
    default:
        break;
    }
    return 0;
}
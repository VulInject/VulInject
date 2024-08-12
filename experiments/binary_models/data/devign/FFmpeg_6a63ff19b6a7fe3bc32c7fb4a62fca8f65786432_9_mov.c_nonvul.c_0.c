static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    if (VAR2->VAR13->VAR14 < 1)
        return 0;
    VAR7 = VAR2->VAR13->VAR15[VAR2->VAR13->VAR14 - 1];
    VAR9 = VAR7->VAR16;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        enum CodecID VAR17;
        int VAR18 = 1;
        MOVAtom VAR19 = {0, 0, 0};
        int64_t VAR20 = FUN5(VAR4);
        int VAR21 = FUN4(VAR4);
        uint32_t VAR22 = FUN6(VAR4);
        if (VAR21 >= 16)
        {
            FUN4(VAR4);
            FUN7(VAR4);
            VAR18 = FUN7(VAR4);
        }
        if (VAR7->VAR23->VAR24 && VAR7->VAR23->VAR24 != VAR22 && (VAR2->VAR13->VAR25 ? FUN8(VAR26, VAR22) != VAR2->VAR13->VAR25 : VAR7->VAR23->VAR24 != FUN9('', '', '', '')))
        {
            FUN10(VAR2->VAR13, VAR27, "");
            FUN11(VAR4, VAR21 - (FUN5(VAR4) - VAR20));
            continue;
        }
        VAR9->VAR12 = VAR7->VAR23->VAR24 ? -1 : VAR12;
        VAR9->VAR18 = VAR18;
        VAR7->VAR23->VAR24 = VAR22;
        VAR17 = FUN8(VAR28, VAR22);
        if (VAR17 <= 0 && ((VAR22 & 0xFFFF) == '' + ('' << 8) || (VAR22 & 0xFFFF) == '' + ('' << 8)))
            VAR17 = FUN8(VAR29, FUN12(VAR22) & 0xFFFF);
        if (VAR7->VAR23->VAR30 != VAR31 && VAR17 > 0)
        {
            VAR7->VAR23->VAR30 = VAR32;
        }
        else if (VAR7->VAR23->VAR30 != VAR32 && VAR22 && VAR22 != FUN9('', '', '', ''))
        {
            VAR17 = FUN8(VAR26, VAR22);
            if (VAR17 <= 0)
                VAR17 = FUN8(VAR33, VAR22);
            if (VAR17 > 0)
                VAR7->VAR23->VAR30 = VAR31;
            else if (VAR7->VAR23->VAR30 == VAR34)
            {
                VAR17 = FUN8(VAR35, VAR22);
                if (VAR17 > 0)
                    VAR7->VAR23->VAR30 = VAR36;
            }
        }
        FUN13(VAR2->VAR13, "", VAR21, (VAR22 >> 0) & 0xff, (VAR22 >> 8) & 0xff, (VAR22 >> 16) & 0xff, (VAR22 >> 24) & 0xff, VAR7->VAR23->VAR30);
        if (VAR7->VAR23->VAR30 == VAR31)
        {
            uint8_t VAR37[32];
            unsigned int VAR38;
            int VAR39;
            VAR7->VAR23->VAR40 = VAR17;
            FUN7(VAR4);
            FUN7(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            VAR7->VAR23->VAR41 = FUN7(VAR4);
            VAR7->VAR23->VAR42 = FUN7(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN7(VAR4);
            FUN14(VAR4, VAR37, 32);
            if (VAR37[0] <= 31)
            {
                memcpy(VAR7->VAR23->VAR37, &VAR37[1], VAR37[0]);
                VAR7->VAR23->VAR37[VAR37[0]] = 0;
            }
            VAR7->VAR23->VAR43 = FUN7(VAR4);
            VAR7->VAR23->VAR44 = FUN7(VAR4);
            FUN13(VAR2->VAR13, "", VAR7->VAR23->VAR43, VAR7->VAR23->VAR44);
            VAR38 = VAR7->VAR23->VAR43 & 0x1F;
            VAR39 = VAR7->VAR23->VAR43 & 0x20;
            if ((VAR38 == 2) || (VAR38 == 4) || (VAR38 == 8))
            {
                unsigned int VAR45, VAR46, VAR47;
                unsigned char VAR48, VAR49, VAR50;
                VAR7->VAR23->VAR51 = FUN15(sizeof(*VAR7->VAR23->VAR51));
                if (VAR39)
                {
                    int VAR52, VAR53;
                    VAR7->VAR23->VAR43 = VAR38;
                    VAR46 = 1 << VAR38;
                    VAR52 = 255;
                    VAR53 = 256 / (VAR46 - 1);
                    for (VAR10 = 0; VAR10 < VAR46; VAR10++)
                    {
                        VAR48 = VAR49 = VAR50 = VAR52;
                        VAR7->VAR23->VAR51->VAR54[VAR10] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                        VAR52 -= VAR53;
                        if (VAR52 < 0)
                            VAR52 = 0;
                    }
                }
                else if (VAR7->VAR23->VAR44)
                {
                    const VAR55 *VAR56;
                    VAR46 = 1 << VAR38;
                    if (VAR38 == 2)
                        VAR56 = VAR57;
                    else if (VAR38 == 4)
                        VAR56 = VAR58;
                    else
                        VAR56 = VAR59;
                    for (VAR10 = 0; VAR10 < VAR46; VAR10++)
                    {
                        VAR48 = VAR56[VAR10 * 3 + 0];
                        VAR49 = VAR56[VAR10 * 3 + 1];
                        VAR50 = VAR56[VAR10 * 3 + 2];
                        VAR7->VAR23->VAR51->VAR54[VAR10] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                    }
                }
                else
                {
                    VAR45 = FUN4(VAR4);
                    VAR46 = FUN7(VAR4);
                    VAR47 = FUN7(VAR4);
                    if ((VAR45 <= 255) && (VAR47 <= 255))
                    {
                        for (VAR10 = VAR45; VAR10 <= VAR47; VAR10++)
                        {
                            FUN2(VAR4);
                            FUN2(VAR4);
                            VAR48 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR49 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR50 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR7->VAR23->VAR51->VAR54[VAR10] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                        }
                    }
                }
                VAR7->VAR23->VAR51->VAR60 = 1;
            }
        }
        else if (VAR7->VAR23->VAR30 == VAR32)
        {
            int VAR61, VAR62;
            uint16_t VAR63 = FUN7(VAR4);
            VAR7->VAR23->VAR40 = VAR17;
            FUN7(VAR4);
            FUN4(VAR4);
            VAR7->VAR23->VAR64 = FUN7(VAR4);
            FUN13(VAR2->VAR13, "", VAR7->VAR23->VAR64);
            VAR7->VAR23->VAR43 = FUN7(VAR4);
            VAR9->VAR65 = FUN7(VAR4);
            FUN7(VAR4);
            VAR7->VAR23->VAR66 = ((FUN4(VAR4) >> 16));
            FUN13(VAR2->VAR13, "", VAR63, VAR2->VAR67);
            if (!VAR2->VAR67)
            {
                if (VAR63 == 1)
                {
                    VAR9->VAR68 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR9->VAR69 = FUN4(VAR4);
                    FUN4(VAR4);
                }
                else if (VAR63 == 2)
                {
                    FUN4(VAR4);
                    VAR7->VAR23->VAR66 = FUN16(FUN17(VAR4));
                    VAR7->VAR23->VAR64 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR7->VAR23->VAR43 = FUN4(VAR4);
                    VAR62 = FUN4(VAR4);
                    VAR9->VAR69 = FUN4(VAR4);
                    VAR9->VAR68 = FUN4(VAR4);
                    if (VAR22 == FUN9('', '', '', ''))
                        VAR7->VAR23->VAR40 = FUN18(VAR7->VAR23->VAR43, VAR62);
                }
            }
            switch (VAR7->VAR23->VAR40)
            {
            case VAR70:
            case VAR71:
                if (VAR7->VAR23->VAR43 == 16)
                    VAR7->VAR23->VAR40 = VAR72;
                break;
            case VAR73:
            case VAR72:
                if (VAR7->VAR23->VAR43 == 8)
                    VAR7->VAR23->VAR40 = VAR70;
                else if (VAR7->VAR23->VAR43 == 24)
                    VAR7->VAR23->VAR40 = VAR7->VAR23->VAR40 == VAR72 ? VAR74 : VAR75;
                break;
            case VAR76:
                VAR9->VAR68 = 6;
                VAR9->VAR69 = 2 * VAR7->VAR23->VAR64;
                break;
            case VAR77:
                VAR9->VAR68 = 6;
                VAR9->VAR69 = 1 * VAR7->VAR23->VAR64;
                break;
            case VAR78:
                VAR9->VAR68 = 64;
                VAR9->VAR69 = 34 * VAR7->VAR23->VAR64;
                break;
            case VAR79:
                VAR9->VAR68 = 160;
                VAR9->VAR69 = 33;
                break;
            default:
                break;
            }
            VAR61 = FUN19(VAR7->VAR23->VAR40);
            if (VAR61)
            {
                VAR7->VAR23->VAR43 = VAR61;
                VAR9->VAR80 = (VAR61 >> 3) * VAR7->VAR23->VAR64;
            }
        }
        else if (VAR7->VAR23->VAR30 == VAR36)
        {
            MOVAtom VAR81 = {.VAR21 = VAR21 - (FUN5(VAR4) - VAR20)};
            if (VAR22 != FUN20(""))
                FUN21(VAR2, VAR4, VAR81);
            VAR7->VAR23->VAR40 = VAR17;
            VAR7->VAR23->VAR41 = VAR9->VAR41;
            VAR7->VAR23->VAR42 = VAR9->VAR42;
        }
        else
        {
            FUN11(VAR4, VAR21 - (FUN5(VAR4) - VAR20));
        }
        VAR19.VAR21 = VAR21 - (FUN5(VAR4) - VAR20);
        if (VAR19.VAR21 > 8)
        {
            if (FUN22(VAR2, VAR4, VAR19) < 0)
                return -1;
        }
        else if (VAR19.VAR21 > 0)
            FUN11(VAR4, VAR19.VAR21);
    }
    if (VAR7->VAR23->VAR30 == VAR32 && VAR7->VAR23->VAR66 == 0 && VAR9->VAR82 > 1)
        VAR7->VAR23->VAR66 = VAR9->VAR82;
    switch (VAR7->VAR23->VAR40)
    {
    case VAR83:
        VAR2->VAR84 = FUN23();
        VAR2->VAR85 = FUN24(VAR2->VAR84);
        if (!VAR2->VAR85)
        {
            FUN10(VAR2->VAR13, VAR86, "");
            return -1;
        }
        VAR9->VAR87 = 1;
        VAR7->VAR23->VAR40 = VAR73;
        break;
    case VAR88:
        if (VAR7->VAR23->VAR24 != FUN9('', '', '', ''))
            VAR7->VAR23->VAR66 = 8000;
        VAR7->VAR23->VAR89 = 160;
        VAR7->VAR23->VAR64 = 1;
        break;
    case VAR90:
    case VAR91:
        VAR7->VAR23->VAR89 = VAR9->VAR68;
        VAR7->VAR23->VAR64 = 1;
        if (VAR7->VAR23->VAR40 == VAR90)
            VAR7->VAR23->VAR66 = 8000;
        else if (VAR7->VAR23->VAR40 == VAR91)
            VAR7->VAR23->VAR66 = 16000;
        break;
    case VAR92:
    case VAR93:
        VAR7->VAR23->VAR30 = VAR32;
        VAR7->VAR94 = VAR95;
        break;
    case VAR79:
    case VAR96:
    case VAR97:
        VAR7->VAR23->VAR98 = VAR9->VAR69;
        break;
    case VAR99:
        if (VAR7->VAR23->VAR100 == 36)
        {
            VAR7->VAR23->VAR89 = FUN25(VAR7->VAR23->VAR101 + 12);
            VAR7->VAR23->VAR64 = FUN26(VAR7->VAR23->VAR101 + 21);
        }
        break;
    default:
        break;
    }
    return 0;
}
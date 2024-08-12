static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = VAR7->VAR13;
    int VAR14, VAR15, VAR16;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR15 = FUN4(VAR4);
    for (VAR16 = 0; VAR16 < VAR15; VAR16++)
    {
        enum CodecID VAR17;
        int VAR18;
        MOV_atom_t VAR19 = {0, 0, 0};
        offset_t VAR20 = FUN5(VAR4);
        int VAR21 = FUN4(VAR4);
        uint32_t VAR22 = FUN6(VAR4);
        FUN4(VAR4);
        FUN7(VAR4);
        VAR18 = FUN7(VAR4);
        if (VAR7->VAR23->VAR24 && VAR7->VAR23->VAR24 != VAR22 && (VAR2->VAR8->VAR25 ? FUN8(VAR26, VAR22) != VAR2->VAR8->VAR25 : VAR7->VAR23->VAR24 != FUN9('', '', '', '')))
        {
            FUN10(VAR2->VAR8, VAR27, "");
            FUN11(VAR4, VAR21 - (FUN5(VAR4) - VAR20));
            continue;
        }
        VAR12->VAR16 = VAR7->VAR23->VAR24 ? -1 : VAR16;
        VAR12->VAR18 = VAR18;
        VAR7->VAR23->VAR24 = VAR22;
        VAR17 = FUN8(VAR28, VAR22);
        if (VAR17 <= 0 && (VAR22 & 0xFFFF) == '' + ('' << 8))
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
        FUN13(VAR2->VAR8, "", VAR21, (VAR22 >> 0) & 0xff, (VAR22 >> 8) & 0xff, (VAR22 >> 16) & 0xff, (VAR22 >> 24) & 0xff, VAR7->VAR23->VAR30);
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
            FUN13(VAR2->VAR8, "", VAR7->VAR23->VAR43, VAR7->VAR23->VAR44);
            VAR38 = VAR7->VAR23->VAR43 & 0x1F;
            VAR39 = VAR7->VAR23->VAR43 & 0x20;
            if ((VAR38 == 2) || (VAR38 == 4) || (VAR38 == 8))
            {
                unsigned int VAR45, VAR46, VAR47;
                unsigned char VAR48, VAR49, VAR50;
                if (VAR39)
                {
                    int VAR51, VAR52;
                    VAR7->VAR23->VAR43 = VAR38;
                    VAR46 = 1 << VAR38;
                    VAR51 = 255;
                    VAR52 = 256 / (VAR46 - 1);
                    for (VAR14 = 0; VAR14 < VAR46; VAR14++)
                    {
                        VAR48 = VAR49 = VAR50 = VAR51;
                        VAR2->VAR53.VAR54[VAR14] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                        VAR51 -= VAR52;
                        if (VAR51 < 0)
                            VAR51 = 0;
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
                    for (VAR14 = 0; VAR14 < VAR46; VAR14++)
                    {
                        VAR48 = VAR56[VAR14 * 4 + 0];
                        VAR49 = VAR56[VAR14 * 4 + 1];
                        VAR50 = VAR56[VAR14 * 4 + 2];
                        VAR2->VAR53.VAR54[VAR14] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                    }
                }
                else
                {
                    VAR45 = FUN4(VAR4);
                    VAR46 = FUN7(VAR4);
                    VAR47 = FUN7(VAR4);
                    if ((VAR45 <= 255) && (VAR47 <= 255))
                    {
                        for (VAR14 = VAR45; VAR14 <= VAR47; VAR14++)
                        {
                            FUN2(VAR4);
                            FUN2(VAR4);
                            VAR48 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR49 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR50 = FUN2(VAR4);
                            FUN2(VAR4);
                            VAR2->VAR53.VAR54[VAR14] = (VAR48 << 16) | (VAR49 << 8) | (VAR50);
                        }
                    }
                }
                VAR7->VAR23->VAR60 = &VAR2->VAR53;
                VAR7->VAR23->VAR60->VAR61 = 1;
            }
            else
                VAR7->VAR23->VAR60 = NULL;
        }
        else if (VAR7->VAR23->VAR30 == VAR32)
        {
            int VAR62, VAR63;
            uint16_t VAR64 = FUN7(VAR4);
            VAR7->VAR23->VAR40 = VAR17;
            FUN7(VAR4);
            FUN4(VAR4);
            VAR7->VAR23->VAR65 = FUN7(VAR4);
            FUN13(VAR2->VAR8, "", VAR7->VAR23->VAR65);
            VAR7->VAR23->VAR43 = FUN7(VAR4);
            VAR12->VAR66 = FUN7(VAR4);
            FUN7(VAR4);
            VAR7->VAR23->VAR67 = ((FUN4(VAR4) >> 16));
            FUN13(VAR2->VAR8, "", VAR64, VAR2->VAR68);
            if (!VAR2->VAR68)
            {
                if (VAR64 == 1)
                {
                    VAR12->VAR69 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR12->VAR70 = FUN4(VAR4);
                    FUN4(VAR4);
                }
                else if (VAR64 == 2)
                {
                    FUN4(VAR4);
                    VAR7->VAR23->VAR67 = FUN15(FUN16(VAR4));
                    VAR7->VAR23->VAR65 = FUN4(VAR4);
                    FUN4(VAR4);
                    VAR7->VAR23->VAR43 = FUN4(VAR4);
                    VAR63 = FUN4(VAR4);
                    VAR12->VAR70 = FUN4(VAR4);
                    VAR12->VAR69 = FUN4(VAR4);
                    if (VAR22 == FUN9('', '', '', ''))
                        VAR7->VAR23->VAR40 = FUN17(VAR7->VAR23->VAR43, VAR63);
                }
            }
            switch (VAR7->VAR23->VAR40)
            {
            case VAR71:
            case VAR72:
                if (VAR7->VAR23->VAR43 == 16)
                    VAR7->VAR23->VAR40 = VAR73;
                break;
            case VAR74:
            case VAR73:
                if (VAR7->VAR23->VAR43 == 8)
                    VAR7->VAR23->VAR40 = VAR71;
                else if (VAR7->VAR23->VAR43 == 24)
                    VAR7->VAR23->VAR40 = VAR7->VAR23->VAR40 == VAR73 ? VAR75 : VAR76;
                break;
            case VAR77:
                VAR12->VAR69 = 6;
                VAR12->VAR70 = 2 * VAR7->VAR23->VAR65;
                break;
            case VAR78:
                VAR12->VAR69 = 6;
                VAR12->VAR70 = 1 * VAR7->VAR23->VAR65;
                break;
            case VAR79:
                VAR12->VAR69 = 64;
                VAR12->VAR70 = 34 * VAR7->VAR23->VAR65;
                break;
            case VAR80:
                VAR12->VAR69 = 160;
                VAR12->VAR70 = 33;
                break;
            default:
                break;
            }
            VAR62 = FUN18(VAR7->VAR23->VAR40);
            if (VAR62)
            {
                VAR7->VAR23->VAR43 = VAR62;
                VAR12->VAR81 = (VAR62 >> 3) * VAR7->VAR23->VAR65;
            }
        }
        else if (VAR7->VAR23->VAR30 == VAR36)
        {
            VAR7->VAR23->VAR40 = VAR17;
        }
        else
        {
            FUN11(VAR4, VAR21 - (FUN5(VAR4) - VAR20));
        }
        VAR19.VAR21 = VAR21 - (FUN5(VAR4) - VAR20);
        if (VAR19.VAR21 > 8)
        {
            if (FUN19(VAR2, VAR4, VAR19) < 0)
                return -1;
        }
        else if (VAR19.VAR21 > 0)
            FUN11(VAR4, VAR19.VAR21);
    }
    if (VAR7->VAR23->VAR30 == VAR32 && VAR7->VAR23->VAR67 == 0 && VAR12->VAR82 > 1)
        VAR7->VAR23->VAR67 = VAR12->VAR82;
    switch (VAR7->VAR23->VAR40)
    {
    case VAR83:
        VAR2->VAR84 = FUN20();
        VAR2->VAR85 = FUN21(VAR2->VAR84);
        if (!VAR2->VAR85)
        {
            FUN10(VAR2->VAR8, VAR86, "");
            return -1;
        }
        VAR12->VAR87 = 1;
        VAR7->VAR23->VAR40 = VAR74;
        break;
    case VAR88:
        VAR7->VAR23->VAR65 = 1;
        break;
    case VAR89:
    case VAR90:
        VAR7->VAR23->VAR91 = VAR12->VAR69;
        VAR7->VAR23->VAR65 = 1;
        break;
    case VAR92:
    case VAR93:
        VAR7->VAR23->VAR30 = VAR32;
        VAR7->VAR94 = VAR95;
        break;
    case VAR80:
    case VAR96:
    case VAR97:
        VAR7->VAR23->VAR98 = VAR12->VAR70;
        break;
    case VAR99:
        if (VAR7->VAR23->VAR100 == 36)
            VAR7->VAR23->VAR91 = FUN22((VAR7->VAR23->VAR101 + 12));
        break;
    default:
        break;
    }
    return 0;
}
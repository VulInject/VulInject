static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    VAR8 *const VAR9 = VAR7->VAR9;
    VAR1 *VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14 = !(VAR9->VAR15 & VAR16);
    int VAR17 = 0;
    int VAR18;
    VAR2->VAR19 = 0;
    VAR2->VAR20 = (VAR21 && (VAR7->VAR9->VAR15 & VAR22)) ? VAR9->VAR23 : 1;
    if (!(VAR7->VAR24 & VAR25))
    {
        VAR2->VAR26 = 0;
        if (!VAR7->VAR27)
            VAR7->VAR28 = NULL;
        FUN2(VAR2);
    }
    for (; VAR14 <= 1; VAR14++)
    {
        VAR11 = 0;
        VAR12 = 0;
        VAR13 = VAR2->VAR29 ? 0 : VAR5;
        VAR18 = 0;
        for (;;)
        {
            int VAR30;
            int VAR31;
            int VAR32;
            VAR3 *VAR33;
            int VAR34, VAR35 = 0;
            int VAR36;
            if (VAR11 >= VAR13)
            {
                if (VAR11 >= VAR5 - VAR2->VAR37)
                    break;
                VAR35 = 0;
                for (VAR34 = 0; VAR34 < VAR2->VAR37; VAR34++)
                    VAR35 = (VAR35 << 8) | VAR4[VAR11++];
                if (VAR35 <= 0 || VAR35 > VAR5 - VAR11)
                {
                    FUN3(VAR2->VAR7.VAR9, VAR38, "", VAR35);
                    break;
                }
                VAR13 = VAR11 + VAR35;
            }
            else
            {
                for (; VAR11 + 3 < VAR13; VAR11++)
                {
                    if (VAR4[VAR11] == 0 && VAR4[VAR11 + 1] == 0 && VAR4[VAR11 + 2] == 1)
                        break;
                }
                if (VAR11 + 3 >= VAR5)
                    break;
                VAR11 += 3;
                if (VAR11 >= VAR13)
                    continue;
            }
            VAR10 = VAR2->VAR39[VAR12];
            VAR33 = FUN4(VAR10, VAR4 + VAR11, &VAR31, &VAR30, VAR13 - VAR11);
            if (VAR33 == NULL || VAR31 < 0)
            {
                return -1;
            }
            VAR34 = VAR11 + VAR30;
            if ((VAR7->VAR40 & VAR41) && VAR34 + 3 < VAR13 && VAR4[VAR34] == 0x00 && VAR4[VAR34 + 1] == 0x00 && VAR4[VAR34 + 2] == 0x01 && VAR4[VAR34 + 3] == 0xE0)
                VAR7->VAR40 |= VAR42;
            if (!(VAR7->VAR40 & VAR42))
            {
                while (VAR31 > 0 && VAR33[VAR31 - 1] == 0)
                    VAR31--;
            }
            VAR32 = !VAR31 ? 0 : (8 * VAR31 - FUN5(VAR2, VAR33 + VAR31 - 1));
            if (VAR7->VAR9->VAR43 & VAR44)
            {
                FUN3(VAR2->VAR7.VAR9, VAR45, "", VAR10->VAR19, VAR10->VAR46, VAR11, VAR5, VAR31, VAR14);
            }
            if (VAR2->VAR29 && (VAR35 != VAR30) && VAR35)
            {
                FUN3(VAR2->VAR7.VAR9, VAR45, "", VAR30, VAR35);
            }
            VAR11 += VAR30;
            VAR18++;
            if (VAR14 == 0)
            {
                switch (VAR10->VAR19)
                {
                case VAR47:
                case VAR48:
                    VAR17 = VAR18;
                    break;
                case VAR49:
                case VAR50:
                    FUN6(&VAR10->VAR7.VAR51, VAR33, VAR32);
                    if (!FUN7(&VAR10->VAR7.VAR51))
                        VAR17 = VAR18;
                }
                continue;
            }
            if (VAR9->VAR52 >= VAR53 && VAR2->VAR46 == 0)
                continue;
        VAR54:
            VAR36 = 0;
            switch (VAR10->VAR19)
            {
            case VAR49:
                if (VAR2->VAR19 != VAR49)
                {
                    FUN3(VAR2->VAR7.VAR9, VAR38, "");
                    return -1;
                }
                FUN8(VAR2);
            case VAR50:
                FUN6(&VAR10->VAR7.VAR51, VAR33, VAR32);
                VAR10->VAR55 = VAR10->VAR56 = &VAR10->VAR7.VAR51;
                VAR10->VAR7.VAR57 = 0;
                if ((VAR36 = FUN9(VAR10, VAR2)))
                    break;
                if (VAR2->VAR58 >= 0 && ((VAR2->VAR59 - VAR2->VAR60) & ((1 << VAR2->VAR61.VAR62) - 1)) > VAR2->VAR58)
                {
                    VAR2->VAR59 = (VAR2->VAR60 + VAR2->VAR58) % (1 << VAR2->VAR61.VAR62);
                }
                VAR7->VAR28->VAR63.VAR64 |= (VAR10->VAR19 == VAR49);
                if (VAR2->VAR59 == VAR2->VAR60)
                {
                    VAR2->VAR65 |= 1;
                    VAR2->VAR59 = -1;
                }
                VAR2->VAR65 |= !!VAR7->VAR28->VAR63.VAR64;
                VAR2->VAR65 |= 3 * !!(VAR7->VAR24 & VAR66);
                VAR7->VAR28->VAR65 = VAR2->VAR65;
                if (VAR2->VAR26 == 1)
                {
                    if (!(VAR7->VAR24 & VAR25))
                    {
                        FUN10(VAR2, VAR18 >= VAR17);
                    }
                    if (VAR7->VAR9->VAR67 && VAR7->VAR9->VAR67->FUN11(VAR7->VAR9, NULL, 0) < 0)
                        return -1;
                    if (VAR68 && VAR7->VAR9->VAR69->VAR70 & VAR71)
                        FUN12(VAR7);
                }
                if (VAR10->VAR72 == 0 && (VAR9->VAR52 < VAR53 || VAR10->VAR46) && (VAR9->VAR52 < VAR73 || VAR10->VAR74 != VAR75) && (VAR9->VAR52 < VAR76 || VAR10->VAR74 == VAR77) && VAR9->VAR52 < VAR78)
                {
                    if (VAR9->VAR67)
                    {
                        if (VAR9->VAR67->FUN13(VAR9, &VAR4[VAR11 - VAR30], VAR30) < 0)
                            return -1;
                    }
                    else if (VAR68 && VAR7->VAR9->VAR69->VAR70 & VAR71)
                    {
                        static const uint8_t VAR79[] = {0x00, 0x00, 0x01};
                        FUN14(VAR7, VAR79, sizeof(VAR79));
                        FUN14(VAR7, &VAR4[VAR11 - VAR30], VAR30);
                    }
                    else
                        VAR12++;
                }
                break;
            case VAR80:
                FUN6(&VAR10->VAR7.VAR51, VAR33, VAR32);
                VAR10->VAR55 = VAR10->VAR56 = NULL;
                if ((VAR36 = FUN9(VAR10, VAR2)) < 0)
                    break;
                VAR10->VAR7.VAR57 = 1;
                break;
            case VAR81:
                FUN6(&VAR10->VAR82, VAR33, VAR32);
                VAR10->VAR55 = &VAR10->VAR82;
                break;
            case VAR83:
                FUN6(&VAR10->VAR84, VAR33, VAR32);
                VAR10->VAR56 = &VAR10->VAR84;
                if (VAR10->VAR72 == 0 && VAR10->VAR55 && VAR10->VAR7.VAR57 && VAR7->VAR85 && (VAR9->VAR52 < VAR53 || VAR10->VAR46) && (VAR9->VAR52 < VAR73 || VAR10->VAR74 != VAR75) && (VAR9->VAR52 < VAR76 || VAR10->VAR74 == VAR77) && VAR9->VAR52 < VAR78)
                    VAR12++;
                break;
            case VAR86:
                FUN6(&VAR7->VAR51, VAR33, VAR32);
                FUN15(VAR2);
                break;
            case VAR47:
                FUN6(&VAR7->VAR51, VAR33, VAR32);
                if (FUN16(VAR2) < 0 && (VAR2->VAR29 ? (VAR35 != VAR30) && VAR35 : 1))
                {
                    FUN3(VAR2->VAR7.VAR9, VAR45, "");
                    if (VAR2->VAR29)
                        FUN17(VAR13 - VAR11 + VAR30 == VAR35);
                    FUN6(&VAR7->VAR51, &VAR4[VAR11 + 1 - VAR30], 8 * (VAR13 - VAR11 + VAR30));
                    FUN16(VAR2);
                }
                if (VAR7->VAR87 & VAR88 || (VAR2->VAR61.VAR89 && !VAR2->VAR61.VAR90))
                    VAR7->VAR91 = 1;
                if (VAR9->VAR92 < 2)
                    VAR9->VAR92 = !VAR7->VAR91;
                break;
            case VAR48:
                FUN6(&VAR7->VAR51, VAR33, VAR32);
                FUN18(VAR2, VAR32);
                break;
            case VAR93:
            case VAR94:
            case VAR95:
            case VAR96:
            case VAR97:
            case VAR98:
                break;
            default:
                FUN3(VAR9, VAR45, "", VAR10->VAR19, VAR32);
            }
            if (VAR12 == VAR2->VAR20)
            {
                FUN19(VAR2, VAR12);
                VAR12 = 0;
            }
            if (VAR36 < 0)
                FUN3(VAR2->VAR7.VAR9, VAR38, "");
            else if (VAR36 == 1)
            {
                VAR2->VAR19 = VAR10->VAR19;
                VAR2->VAR46 = VAR10->VAR46;
                VAR10 = VAR2;
                goto VAR54;
            }
        }
    }
    if (VAR12)
        FUN19(VAR2, VAR12);
    return VAR11;
}
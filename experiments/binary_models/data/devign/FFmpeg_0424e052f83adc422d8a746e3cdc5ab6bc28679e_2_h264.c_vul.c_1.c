static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    VAR8 *const VAR9 = VAR7->VAR9;
    int VAR10 = 0;
    VAR1 *VAR11;
    int VAR12 = 0;
    int VAR13 = VAR2->VAR14 ? 0 : VAR5;
    VAR2->VAR15 = (VAR16 && (VAR7->VAR9->VAR17 & VAR18)) ? VAR9->VAR19 : 1;
    int VAR20;
    for (VAR20 = 0; VAR20 < 50; VAR20++)
    {
        FUN2(NULL, VAR21, "", VAR4[VAR20]);
    }
    if (!(VAR7->VAR22 & VAR23))
    {
        VAR2->VAR24 = 0;
        if (!VAR7->VAR25)
            VAR7->VAR26 = NULL;
        FUN3(VAR2);
    }
    for (;;)
    {
        int VAR27;
        int VAR28;
        int VAR29;
        const VAR3 *VAR30;
        int VAR20, VAR31 = 0;
        int VAR32;
        if (VAR10 >= VAR13)
        {
            if (VAR10 >= VAR5)
                break;
            VAR31 = 0;
            for (VAR20 = 0; VAR20 < VAR2->VAR33; VAR20++)
                VAR31 = (VAR31 << 8) | VAR4[VAR10++];
            if (VAR31 <= 0 || VAR31 > VAR5 - VAR10)
            {
                FUN2(VAR2->VAR7.VAR9, VAR21, "", VAR31);
                break;
            }
            VAR13 = VAR10 + VAR31;
        }
        else
        {
            for (; VAR10 + 3 < VAR13; VAR10++)
            {
                if (VAR4[VAR10] == 0 && VAR4[VAR10 + 1] == 0 && VAR4[VAR10 + 2] == 1)
                    break;
            }
            if (VAR10 + 3 >= VAR5)
                break;
            VAR10 += 3;
            if (VAR10 >= VAR13)
                continue;
        }
        VAR11 = VAR2->VAR34[VAR12];
        VAR30 = FUN4(VAR11, VAR4 + VAR10, &VAR28, &VAR27, VAR13 - VAR10);
        if (VAR30 == NULL || VAR28 < 0)
        {
            return -1;
        }
        VAR20 = VAR10 + VAR27;
        if ((VAR7->VAR35 & VAR36) && VAR20 + 3 < VAR13 && VAR4[VAR20] == 0x00 && VAR4[VAR20 + 1] == 0x00 && VAR4[VAR20 + 2] == 0x01 && VAR4[VAR20 + 3] == 0xE0)
            VAR7->VAR35 |= VAR37;
        if (!(VAR7->VAR35 & VAR37))
        {
            while (VAR30[VAR28 - 1] == 0 && VAR28 > 0)
                VAR28--;
        }
        VAR29 = !VAR28 ? 0 : (8 * VAR28 - FUN5(VAR2, VAR30 + VAR28 - 1));
        if (VAR7->VAR9->VAR38 & VAR39)
        {
            FUN2(VAR2->VAR7.VAR9, VAR40, "", VAR11->VAR41, VAR11->VAR42, VAR10, VAR5, VAR28);
        }
        if (VAR2->VAR14 && (VAR31 != VAR27) && VAR31)
        {
            FUN2(VAR2->VAR7.VAR9, VAR40, "", VAR27, VAR31);
        }
        VAR10 += VAR27;
        if (VAR9->VAR43 >= VAR44 && VAR2->VAR42 == 0)
            continue;
    VAR45:
        VAR32 = 0;
        switch (VAR11->VAR41)
        {
        case VAR46:
            if (VAR2->VAR41 != VAR46)
            {
                FUN2(VAR2->VAR7.VAR9, VAR21, "");
                return -1;
            }
            FUN6(VAR2);
        case VAR47:
            FUN7(&VAR11->VAR7.VAR48, VAR30, VAR29);
            VAR11->VAR49 = VAR11->VAR50 = &VAR11->VAR7.VAR48;
            VAR11->VAR7.VAR51 = 0;
            if ((VAR32 = FUN8(VAR11, VAR2)))
                break;
            VAR7->VAR26->VAR52 |= (VAR11->VAR41 == VAR46) || (VAR2->VAR53 >= 0);
            if (VAR2->VAR24 == 1)
            {
                if (!(VAR7->VAR22 & VAR23))
                {
                    FUN9(VAR2);
                }
                if (VAR7->VAR9->VAR54 && VAR7->VAR9->VAR54->FUN10(VAR7->VAR9, NULL, 0) < 0)
                    return -1;
                if (VAR55 && VAR7->VAR9->VAR56->VAR57 & VAR58)
                    FUN11(VAR7);
            }
            if (VAR11->VAR59 == 0 && (VAR9->VAR43 < VAR44 || VAR11->VAR42) && (VAR9->VAR43 < VAR60 || VAR11->VAR61 != VAR62) && (VAR9->VAR43 < VAR63 || VAR11->VAR61 == VAR64) && VAR9->VAR43 < VAR65)
            {
                if (VAR9->VAR54)
                {
                    if (VAR9->VAR54->FUN12(VAR9, &VAR4[VAR10 - VAR27], VAR27) < 0)
                        return -1;
                }
                else if (VAR55 && VAR7->VAR9->VAR56->VAR57 & VAR58)
                {
                    static const uint8_t VAR66[] = {0x00, 0x00, 0x01};
                    FUN13(VAR7, VAR66, sizeof(VAR66));
                    FUN13(VAR7, &VAR4[VAR10 - VAR27], VAR27);
                }
                else
                    VAR12++;
            }
            break;
        case VAR67:
            FUN7(&VAR11->VAR7.VAR48, VAR30, VAR29);
            VAR11->VAR49 = VAR11->VAR50 = NULL;
            if ((VAR32 = FUN8(VAR11, VAR2)) < 0)
                break;
            VAR11->VAR7.VAR51 = 1;
            break;
        case VAR68:
            FUN7(&VAR11->VAR69, VAR30, VAR29);
            VAR11->VAR49 = &VAR11->VAR69;
            break;
        case VAR70:
            FUN7(&VAR11->VAR71, VAR30, VAR29);
            VAR11->VAR50 = &VAR11->VAR71;
            if (VAR11->VAR59 == 0 && VAR11->VAR49 && VAR11->VAR7.VAR51 && VAR7->VAR72 && (VAR9->VAR43 < VAR44 || VAR11->VAR42) && (VAR9->VAR43 < VAR60 || VAR11->VAR61 != VAR62) && (VAR9->VAR43 < VAR63 || VAR11->VAR61 == VAR64) && VAR9->VAR43 < VAR65)
                VAR12++;
            break;
        case VAR73:
            FUN7(&VAR7->VAR48, VAR30, VAR29);
            FUN14(VAR2);
            break;
        case VAR74:
            FUN7(&VAR7->VAR48, VAR30, VAR29);
            FUN15(VAR2);
            if (VAR7->VAR75 & VAR76 || (VAR2->VAR77.VAR78 && !VAR2->VAR77.VAR79))
                VAR7->VAR80 = 1;
            if (VAR9->VAR81 < 2)
                VAR9->VAR81 = !VAR7->VAR80;
            if (VAR9->VAR82 != VAR2->VAR77.VAR83)
            {
                if (VAR2->VAR77.VAR83 >= 8 && VAR2->VAR77.VAR83 <= 10)
                {
                    VAR9->VAR82 = VAR2->VAR77.VAR83;
                    VAR2->VAR84 = VAR2->VAR77.VAR83 > 8;
                    FUN16(&VAR2->VAR85, VAR2->VAR77.VAR83);
                    FUN17(&VAR2->VAR86, VAR7->VAR87, VAR2->VAR77.VAR83);
                    FUN18(&VAR7->VAR88, VAR7->VAR9);
                }
                else
                {
                    FUN2(VAR9, VAR40, "", VAR2->VAR77.VAR83);
                    return -1;
                }
            }
            break;
        case VAR89:
            FUN7(&VAR7->VAR48, VAR30, VAR29);
            FUN19(VAR2, VAR29);
            break;
        case VAR90:
        case VAR91:
        case VAR92:
        case VAR93:
        case VAR94:
        case VAR95:
            break;
        default:
            FUN2(VAR9, VAR40, "", VAR11->VAR41, VAR29);
        }
        if (VAR12 == VAR2->VAR15)
        {
            FUN20(VAR2, VAR12);
            VAR12 = 0;
        }
        if (VAR32 < 0)
            FUN2(VAR2->VAR7.VAR9, VAR21, "");
        else if (VAR32 == 1)
        {
            VAR2->VAR41 = VAR11->VAR41;
            VAR2->VAR42 = VAR11->VAR42;
            VAR11 = VAR2;
            goto VAR45;
        }
    }
    if (VAR12)
        FUN20(VAR2, VAR12);
    return VAR10;
}
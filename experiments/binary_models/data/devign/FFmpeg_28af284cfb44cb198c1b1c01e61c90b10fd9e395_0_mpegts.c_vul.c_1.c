static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
    SectionHeader VAR11, *VAR12 = &VAR11;
    VAR13 *VAR14;
    VAR15 *VAR16;
    const VAR3 *VAR17, *VAR18, *VAR19, *VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    int VAR25, VAR26, VAR27;
    int VAR28 = 0, VAR29 = 0;
    char VAR30[4] = {0};
    FUN2(VAR7->VAR31, VAR32, "", VAR5);
    FUN3(VAR7->VAR31, VAR32, (VAR3 *)VAR4, VAR5);
    VAR18 = VAR4 + VAR5 - 4;
    VAR17 = VAR4;
    if (FUN4(VAR12, &VAR17, VAR18) < 0)
        return;
    FUN2(VAR7->VAR31, VAR32, "", VAR12->VAR33, VAR12->VAR34, VAR12->VAR35);
    if (VAR12->VAR36 != VAR37)
        return;
    FUN5(VAR7, VAR12->VAR33);
    VAR22 = FUN6(&VAR17, VAR18) & 0x1fff;
    if (VAR22 < 0)
        return;
    FUN7(VAR7, VAR12->VAR33, VAR22);
    FUN2(VAR7->VAR31, VAR32, "", VAR22);
    VAR21 = FUN6(&VAR17, VAR18) & 0xfff;
    if (VAR21 < 0)
        return;
    VAR17 += VAR21;
    if (VAR17 >= VAR18)
        return;
    for (;;)
    {
        VAR30[0] = 0;
        VAR16 = 0;
        VAR24 = FUN8(&VAR17, VAR18);
        if (VAR24 < 0)
            break;
        VAR23 = FUN6(&VAR17, VAR18) & 0x1fff;
        if (VAR23 < 0)
            break;
        VAR25 = FUN6(&VAR17, VAR18) & 0xfff;
        if (VAR25 < 0)
            break;
        VAR19 = VAR17 + VAR25;
        if (VAR19 > VAR18)
            break;
        for (;;)
        {
            VAR27 = FUN8(&VAR17, VAR19);
            if (VAR27 < 0)
                break;
            if (VAR24 == VAR38)
            {
                if ((VAR27 == 0x6A) || (VAR27 == 0x7A))
                {
                    VAR24 = VAR39;
                }
                else if (VAR27 == 0x7B)
                {
                    VAR24 = VAR40;
                }
            }
            VAR26 = FUN8(&VAR17, VAR19);
            VAR20 = VAR17 + VAR26;
            if (VAR20 > VAR19)
                break;
            FUN2(VAR7->VAR31, VAR32, "", VAR27, VAR26);
            switch (VAR27)
            {
            case VAR41:
                if (VAR24 == VAR38)
                    VAR24 = VAR42;
                VAR30[0] = FUN8(&VAR17, VAR20);
                VAR30[1] = FUN8(&VAR17, VAR20);
                VAR30[2] = FUN8(&VAR17, VAR20);
                VAR30[3] = 0;
                FUN8(&VAR17, VAR20);
                VAR28 = FUN6(&VAR17, VAR20);
                VAR29 = FUN6(&VAR17, VAR20);
                break;
            case 0x0a:
                VAR30[0] = FUN8(&VAR17, VAR20);
                VAR30[1] = FUN8(&VAR17, VAR20);
                VAR30[2] = FUN8(&VAR17, VAR20);
                VAR30[3] = 0;
                break;
            default:
                break;
            }
            VAR17 = VAR20;
        }
        VAR17 = VAR19;
        FUN2(VAR7->VAR31, VAR32, "", VAR24, VAR23);
        switch (VAR24)
        {
        case VAR43:
        case VAR44:
        case VAR45:
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
        case VAR39:
        case VAR40:
        case VAR42:
            if (VAR7->VAR51[VAR23])
            {
                assert(VAR7->VAR51[VAR23]->VAR52 == VAR53);
                VAR14 = VAR7->VAR51[VAR23]->VAR8.VAR54.VAR10;
                VAR16 = VAR14->VAR16;
            }
            else
            {
                VAR14 = FUN9(VAR7, VAR23, VAR22, VAR24);
                if (VAR14)
                    VAR16 = FUN10(VAR14, 0);
            }
            FUN7(VAR7, VAR12->VAR33, VAR23);
            if (VAR16)
                FUN11(VAR7->VAR31, VAR12->VAR33, VAR16->VAR55);
            break;
        default:
            break;
        }
        if (VAR16)
        {
            if (VAR30[0] != 0)
            {
                memcpy(VAR16->VAR30, VAR30, 4);
            }
            if (VAR24 == VAR42)
            {
                VAR16->VAR56->VAR57 = (VAR29 << 16) | VAR28;
            }
        }
    }
    VAR7->VAR58++;
    FUN12(VAR7, VAR2);
}
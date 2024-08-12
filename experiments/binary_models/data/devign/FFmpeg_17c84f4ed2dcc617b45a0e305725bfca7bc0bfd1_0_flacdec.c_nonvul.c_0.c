static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 0, VAR7, VAR8, VAR9 = 0;
    uint8_t VAR10[4];
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = FUN2(VAR2, NULL);
    if (!VAR14)
        return FUN3(VAR15);
    VAR14->VAR16->VAR17 = VAR18;
    VAR14->VAR16->VAR19 = VAR20;
    VAR14->VAR21 = VAR22;
    if (FUN4(VAR2->VAR23) != FUN5('', '', '', ''))
    {
        FUN6(VAR2->VAR23, -4, VAR24);
        return 0;
    }
    while (!VAR2->VAR23->VAR25 && !VAR6)
    {
        FUN7(VAR2->VAR23, VAR10, 4);
        FUN8(VAR10, &VAR6, &VAR7, &VAR8);
        switch (VAR7)
        {
        case VAR26:
        case VAR27:
        case VAR28:
            VAR12 = FUN9(VAR8 + VAR29);
            if (!VAR12)
            {
                return FUN3(VAR15);
            }
            if (FUN7(VAR2->VAR23, VAR12, VAR8) != VAR8)
            {
                FUN10(&VAR12);
                return FUN3(VAR30);
            }
            break;
        default:
            VAR5 = FUN11(VAR2->VAR23, VAR8);
            if (VAR5 < 0)
                return VAR5;
        }
        if (VAR7 == VAR26)
        {
            FLACStreaminfo VAR31;
            if (VAR9)
            {
                FUN10(&VAR12);
                return VAR32;
            }
            if (VAR8 != VAR33)
            {
                FUN10(&VAR12);
                return VAR32;
            }
            VAR9 = 1;
            VAR14->VAR16->VAR34 = VAR12;
            VAR14->VAR16->VAR35 = VAR8;
            VAR12 = NULL;
            FUN12(VAR14->VAR16, &VAR31, VAR14->VAR16->VAR34);
            if (VAR31.VAR36 > 0)
            {
                FUN13(VAR14, 64, 1, VAR31.VAR36);
                if (VAR31.VAR37 > 0)
                    VAR14->VAR38 = VAR31.VAR37;
            }
        }
        else if (VAR7 == VAR27)
        {
            uint8_t VAR39[13];
            uint64_t VAR40;
            const VAR11 *VAR41;
            int VAR42, VAR43, VAR44, VAR45;
            if (VAR8 < 431)
                return VAR32;
            VAR41 = VAR12 + 395;
            VAR43 = FUN14(&VAR41) - 1;
            if (VAR43 <= 0)
                return VAR32;
            for (VAR42 = 0; VAR42 < VAR43; VAR42++)
            {
                if (VAR41 + 36 - VAR12 > VAR8)
                    return VAR32;
                VAR40 = FUN15(&VAR41);
                VAR44 = FUN14(&VAR41);
                FUN16(&VAR41, VAR39, 12);
                VAR39[12] = 0;
                VAR41 += 14;
                VAR45 = FUN14(&VAR41);
                if (VAR45 <= 0)
                    return VAR32;
                VAR41 += VAR45 * 12;
                FUN17(VAR2, VAR44, VAR14->VAR46, VAR40, VAR47, VAR39);
            }
        }
        else
        {
            if (!VAR9)
            {
                FUN10(&VAR12);
                return VAR32;
            }
            if (VAR7 == VAR28)
            {
                if (FUN18(VAR2, &VAR2->VAR48, VAR12, VAR8))
                {
                    FUN19(VAR2, VAR49, "");
                }
            }
            FUN10(&VAR12);
        }
    }
    return 0;
}
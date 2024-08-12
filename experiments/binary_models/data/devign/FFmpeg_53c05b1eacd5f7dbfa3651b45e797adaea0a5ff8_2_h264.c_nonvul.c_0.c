static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    VAR8 *const VAR9 = VAR7->VAR9;
    int VAR10 = 0;
    int VAR11;
    for (VAR11 = 0; VAR11 < 32; VAR11++)
    {
        FUN2("", VAR4[VAR11]);
    }
    for (;;)
    {
        int VAR12;
        int VAR13;
        int VAR14;
        VAR3 *VAR15;
        for (; VAR10 + 3 < VAR5; VAR10++)
        {
            if (VAR4[VAR10] == 0 && VAR4[VAR10 + 1] == 0 && VAR4[VAR10 + 2] == 1)
                break;
        }
        if (VAR10 + 3 >= VAR5)
            break;
        VAR10 += 3;
        VAR15 = FUN3(VAR2, VAR4 + VAR10, &VAR13, &VAR12, VAR5 - VAR10);
        if (VAR15[VAR13 - 1] == 0)
            VAR13--;
        VAR14 = 8 * VAR13 - FUN4(VAR15 + VAR13 - 1);
        if (VAR7->VAR9->VAR16 & VAR17)
        {
            FUN5(VAR2->VAR7.VAR9, VAR18, "", VAR2->VAR19, VAR10, VAR13);
        }
        VAR10 += VAR12;
        if (VAR2->VAR20 < VAR7->VAR21)
            continue;
        switch (VAR2->VAR19)
        {
        case VAR22:
            FUN6(VAR2);
        case VAR23:
            FUN7(&VAR7->VAR24, VAR15, VAR14);
            VAR2->VAR25 = VAR2->VAR26 = &VAR7->VAR24;
            VAR7->VAR27 = 0;
            if (FUN8(VAR2) < 0)
                return -1;
            if (VAR2->VAR28 == 0)
                FUN9(VAR2);
            break;
        case VAR29:
            FUN7(&VAR7->VAR24, VAR15, VAR14);
            VAR2->VAR25 = VAR2->VAR26 = NULL;
            VAR7->VAR27 = 1;
            if (FUN8(VAR2) < 0)
                return -1;
            break;
        case VAR30:
            FUN7(&VAR2->VAR31, VAR15, VAR14);
            VAR2->VAR25 = &VAR2->VAR31;
            break;
        case VAR32:
            FUN7(&VAR2->VAR33, VAR15, VAR14);
            VAR2->VAR26 = &VAR2->VAR33;
            if (VAR2->VAR28 == 0 && VAR2->VAR25 && VAR7->VAR27)
                FUN9(VAR2);
            break;
        case VAR34:
            break;
        case VAR35:
            FUN7(&VAR7->VAR24, VAR15, VAR14);
            FUN10(VAR2);
            if (VAR7->VAR36 & VAR37)
                VAR7->VAR38 = 1;
            VAR9->VAR39 = !VAR7->VAR38;
            break;
        case VAR40:
            FUN7(&VAR7->VAR24, VAR15, VAR14);
            FUN11(VAR2);
            break;
        case VAR41:
            break;
        case VAR42:
            break;
        }
        VAR7->VAR43.VAR44 = VAR7->VAR44;
        VAR7->VAR43.VAR45 = VAR7->VAR44 == VAR46;
    }
    if (!VAR7->VAR47)
        return VAR10;
    VAR2->VAR48 = VAR2->VAR49;
    VAR2->VAR50 = VAR2->VAR51;
    if (VAR7->VAR47->VAR52)
    {
        VAR2->VAR53 = VAR2->VAR54;
        VAR2->VAR55 = VAR2->VAR56;
    }
    if (VAR7->VAR47->VAR52)
        FUN12(VAR2, VAR2->VAR57, VAR2->VAR58);
    else
        assert(VAR2->VAR58 == 0);
    FUN13(VAR7);
    FUN14(VAR7);
    return VAR10;
}
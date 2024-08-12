static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    GetByteContext VAR16, VAR17;
    int VAR18;
    int VAR19 = 0;
    uint32_t VAR20, VAR21;
    int VAR22;
    int VAR23;
    int VAR24;
    int VAR25, VAR26, VAR27, VAR28, VAR29;
    if (VAR9 < 12)
    {
        FUN2(VAR2, VAR30, "", VAR9);
        return VAR31;
    }
    FUN3(&VAR16, VAR8, VAR9);
    VAR18 = FUN4(&VAR16);
    if ((VAR18 & ~0xF) != FUN5('', '', '', '') || (VAR18 & 0xF) < 2 || (VAR18 & 0xF) > 4)
    {
        FUN2(VAR2, VAR30, "", VAR18);
        return VAR31;
    }
    if ((VAR18 & 0xF) != 4)
    {
        FUN2(VAR2, VAR30, "");
        return FUN6(VAR32);
    }
    while (FUN7(&VAR16) > 5)
    {
        VAR20 = FUN8(&VAR16) - 1;
        VAR22 = FUN9(&VAR16);
        if (VAR20 > FUN7(&VAR16))
        {
            FUN2(VAR2, VAR30, "", VAR20, VAR22);
            break;
        }
        switch (VAR22)
        {
        case VAR33:
            VAR12->VAR19 = 0;
            if (VAR20 < 21)
            {
                FUN2(VAR2, VAR30, "", VAR20);
                break;
            }
            VAR12->VAR34 = FUN4(&VAR16);
            VAR12->VAR35 = FUN4(&VAR16);
            if (VAR12->VAR34 < 16 || VAR12->VAR34 > VAR2->VAR34 || VAR12->VAR35 < 16 || VAR12->VAR35 > VAR2->VAR35)
            {
                FUN2(VAR2, VAR30, "", VAR12->VAR34, VAR12->VAR35);
                VAR12->VAR34 = VAR12->VAR35 = 0;
                FUN10(&VAR16, FUN7(&VAR16));
            }
            if (VAR12->VAR34 != VAR2->VAR34 || VAR12->VAR35 != VAR2->VAR35)
                FUN11(VAR2, VAR12->VAR34, VAR12->VAR35);
            VAR12->VAR36 = FUN4(&VAR16);
            if (VAR12->VAR36 != 2 && VAR12->VAR36 != 3)
            {
                FUN2(VAR2, VAR30, "", VAR12->VAR36);
                return VAR37;
            }
            VAR12->VAR38 = FUN4(&VAR16);
            VAR12->VAR39 = FUN4(&VAR16);
            if (!VAR12->VAR38 || !VAR12->VAR39)
            {
                FUN2(VAR2, VAR30, "", VAR12->VAR38, VAR12->VAR39);
                return VAR31;
            }
            VAR12->VAR40 = (VAR12->VAR34 + VAR12->VAR38 - 1) / VAR12->VAR38;
            VAR12->VAR41 = (VAR12->VAR35 + VAR12->VAR39 - 1) / VAR12->VAR39;
            VAR12->VAR42 = FUN9(&VAR16);
            VAR20 -= 21;
            FUN10(&VAR16, VAR20);
            if (FUN12(VAR12))
                return FUN6(VAR43);
            VAR19 = 1;
            break;
        case VAR44:
            if (!VAR12->VAR40 || !VAR12->VAR41)
            {
                FUN2(VAR2, VAR45, "");
                FUN10(&VAR16, FUN7(&VAR16));
                break;
            }
            if (VAR20 < 2)
            {
                FUN2(VAR2, VAR30, "", VAR20);
                break;
            }
            VAR12->VAR46 = FUN9(&VAR16);
            VAR12->VAR47 = FUN9(&VAR16);
            if (VAR12->VAR46 >= VAR12->VAR40 || VAR12->VAR47 >= VAR12->VAR41)
            {
                FUN2(VAR2, VAR30, "", VAR12->VAR46, VAR12->VAR47, VAR12->VAR40, VAR12->VAR41);
                break;
            }
            VAR20 -= 2;
            VAR24 = 0;
            switch (VAR12->VAR36)
            {
            case VAR48:
                FUN2(VAR2, VAR30, "");
                return FUN6(VAR32);
            case VAR49:
                VAR24 = FUN13(VAR12, VAR12->VAR46, VAR12->VAR47, VAR8 + FUN14(&VAR16), VAR20);
                break;
            }
            if (VAR24 && VAR12->VAR50)
                FUN2(VAR2, VAR30, "", VAR12->VAR46, VAR12->VAR47);
            FUN10(&VAR16, VAR20);
            break;
        case VAR51:
            if (VAR20 < 5)
            {
                FUN2(VAR2, VAR30, "", VAR20);
                break;
            }
            VAR12->VAR52 = FUN15(&VAR16);
            VAR12->VAR53 = FUN15(&VAR16);
            FUN10(&VAR16, VAR20 - 4);
            break;
        case VAR54:
            if (VAR20 < 8)
            {
                FUN2(VAR2, VAR30, "", VAR20);
                break;
            }
            FUN3(&VAR17, VAR8 + FUN14(&VAR16), VAR20 - 4);
            VAR21 = FUN4(&VAR17);
            VAR25 = FUN9(&VAR17);
            VAR26 = FUN9(&VAR17);
            VAR27 = FUN9(&VAR17);
            VAR28 = FUN9(&VAR17);
            VAR29 = FUN9(&VAR17);
            if (VAR21 >= VAR20 || VAR12->VAR25 * VAR12->VAR26 / 4 > VAR21)
            {
                FUN2(VAR2, VAR30, "", VAR20);
                break;
            }
            VAR12->VAR25 = VAR25;
            VAR12->VAR26 = VAR26;
            VAR12->VAR27 = VAR27;
            VAR12->VAR28 = VAR28;
            VAR12->VAR29 = VAR29;
            FUN16(VAR12, &VAR17);
            FUN10(&VAR16, VAR20);
            break;
        case VAR55:
        case VAR56:
            FUN10(&VAR16, VAR20);
            break;
        default:
            FUN2(VAR2, VAR45, "", VAR22);
            FUN10(&VAR16, VAR20);
        }
    }
    if (VAR19)
        VAR12->VAR19 = 1;
    if (VAR12->VAR34 && VAR12->VAR35 && VAR12->VAR50)
    {
        if ((VAR24 = FUN17(VAR2, VAR15, 0)) < 0)
        {
            FUN2(VAR2, VAR30, "");
            return VAR24;
        }
        VAR15->VAR57 = VAR19;
        VAR15->VAR58 = VAR19 ? VAR59 : VAR60;
        for (VAR23 = 0; VAR23 < VAR2->VAR35; VAR23++)
            memcpy(VAR15->VAR3[0] + VAR23 * VAR15->VAR61[0], VAR12->VAR50 + VAR23 * VAR12->VAR62, VAR12->VAR34 * 3);
        FUN18(VAR12, VAR15->VAR3[0], VAR15->VAR61[0]);
        *VAR4 = 1;
    }
    return VAR9;
}
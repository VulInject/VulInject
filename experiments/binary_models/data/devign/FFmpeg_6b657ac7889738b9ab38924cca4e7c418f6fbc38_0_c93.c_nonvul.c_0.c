static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = &VAR12->VAR16[VAR12->VAR17];
    VAR14 *const VAR18 = &VAR12->VAR16[VAR12->VAR17 ^ 1];
    GetByteContext VAR19;
    VAR7 *VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27 = 0;
    VAR12->VAR17 ^= 1;
    if ((VAR22 = FUN2(VAR2, VAR15)) < 0)
        return VAR22;
    VAR21 = VAR15->VAR28[0];
    FUN3(&VAR19, VAR8, VAR9);
    VAR26 = FUN4(&VAR19);
    if (VAR26 & VAR29)
    {
        VAR15->VAR30 = VAR31;
        VAR15->VAR32 = 1;
    }
    else
    {
        VAR15->VAR30 = VAR33;
        VAR15->VAR32 = 0;
    }
    for (VAR25 = 0; VAR25 < VAR34; VAR25 += 8)
    {
        VAR20 = VAR15->VAR3[0] + VAR25 * VAR21;
        for (VAR24 = 0; VAR24 < VAR35; VAR24 += 8)
        {
            VAR7 *VAR36 = VAR18->VAR3[0];
            unsigned int VAR37, VAR38;
            uint8_t VAR39[4], VAR40[4];
            C93BlockType VAR41;
            if (!VAR27)
                VAR27 = FUN4(&VAR19);
            VAR41 = VAR27 & 0x0F;
            switch (VAR41)
            {
            case VAR42:
                VAR37 = FUN5(&VAR19);
                if ((VAR22 = FUN6(VAR2, VAR20, VAR36, VAR37, 8, VAR21)) < 0)
                    return VAR22;
                break;
            case VAR43:
                VAR36 = VAR15->VAR3[0];
            case VAR44:
                for (VAR38 = 0; VAR38 < 8; VAR38 += 4)
                {
                    for (VAR23 = 0; VAR23 < 8; VAR23 += 4)
                    {
                        int VAR37 = FUN5(&VAR19);
                        int VAR45 = VAR37 % VAR35;
                        int VAR46 = VAR37 / VAR35;
                        if (VAR41 == VAR43 && VAR46 == VAR25 + VAR38 && (FUN7(VAR45 - VAR24 - VAR23) < 4 || FUN7(VAR45 - VAR24 - VAR23) > VAR35 - 4))
                        {
                            FUN8(VAR2, "", VAR45, VAR24 + VAR23, VAR46, VAR25 + VAR38);
                            return VAR47;
                        }
                        if ((VAR22 = FUN6(VAR2, &VAR20[VAR38 * VAR21 + VAR23], VAR36, VAR37, 4, VAR21)) < 0)
                            return VAR22;
                    }
                }
                break;
            case VAR48:
                FUN9(&VAR19, VAR39, 2);
                for (VAR23 = 0; VAR23 < 8; VAR23++)
                {
                    FUN10(VAR20 + VAR23 * VAR21, VAR21, 8, 1, 1, VAR39, NULL, FUN4(&VAR19));
                }
                break;
            case VAR49:
            case VAR50:
            case VAR51:
                for (VAR38 = 0; VAR38 < 8; VAR38 += 4)
                {
                    for (VAR23 = 0; VAR23 < 8; VAR23 += 4)
                    {
                        if (VAR41 == VAR49)
                        {
                            FUN9(&VAR19, VAR39, 2);
                            FUN10(VAR20 + VAR23 + VAR38 * VAR21, VAR21, 4, 4, 1, VAR39, NULL, FUN5(&VAR19));
                        }
                        else if (VAR41 == VAR50)
                        {
                            FUN9(&VAR19, VAR39, 4);
                            FUN10(VAR20 + VAR23 + VAR38 * VAR21, VAR21, 4, 4, 2, VAR39, NULL, FUN11(&VAR19));
                        }
                        else
                        {
                            FUN9(&VAR19, VAR40, 4);
                            FUN10(VAR20 + VAR23 + VAR38 * VAR21, VAR21, 4, 4, 1, VAR39, VAR40, FUN5(&VAR19));
                        }
                    }
                }
                break;
            case VAR52:
                break;
            case VAR53:
                for (VAR38 = 0; VAR38 < 8; VAR38++)
                    FUN9(&VAR19, VAR20 + VAR38 * VAR21, 8);
                break;
            default:
                FUN12(VAR2, VAR54, "", VAR41, VAR24, VAR25);
                return VAR47;
            }
            VAR27 >>= 4;
            VAR20 += 8;
        }
    }
    if (VAR26 & VAR55)
    {
        VAR56 *VAR57 = (VAR56 *)VAR15->VAR3[1];
        for (VAR23 = 0; VAR23 < 256; VAR23++)
        {
            VAR57[VAR23] = 0xFFU << 24 | FUN13(&VAR19);
        }
        VAR15->VAR58 = 1;
    }
    else
    {
        if (VAR18->VAR3[1])
            memcpy(VAR15->VAR3[1], VAR18->VAR3[1], 256 * 4);
    }
    if ((VAR22 = FUN14(VAR3, VAR15)) < 0)
        return VAR22;
    *VAR4 = 1;
    return VAR9;
}
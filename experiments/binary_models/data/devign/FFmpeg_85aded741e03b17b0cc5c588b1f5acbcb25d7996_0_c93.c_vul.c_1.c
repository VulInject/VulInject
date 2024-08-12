static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = &VAR12->VAR16[VAR12->VAR17];
    VAR14 *const VAR18 = &VAR12->VAR16[VAR12->VAR17 ^ 1];
    VAR14 *VAR19 = VAR3;
    VAR7 *VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25 = 0;
    VAR12->VAR17 ^= 1;
    VAR15->VAR26 = 1;
    VAR15->VAR27 = VAR28 | VAR29 | VAR30 | VAR31;
    if (VAR2->FUN2(VAR2, VAR15))
    {
        FUN3(VAR2, VAR32, "");
        return -1;
    }
    VAR21 = VAR15->VAR33[0];
    if (VAR8[0] & VAR34)
    {
        VAR15->VAR35 = VAR36;
        VAR15->VAR37 = 1;
    }
    else
    {
        VAR15->VAR35 = VAR38;
        VAR15->VAR37 = 0;
    }
    if (*VAR8++ & VAR39)
    {
        VAR40 *VAR41 = (VAR40 *)VAR15->VAR3[1];
        const VAR7 *VAR42 = VAR8 + VAR9 - 768 - 1;
        for (VAR22 = 0; VAR22 < 256; VAR22++)
        {
            VAR41[VAR22] = FUN4(&VAR42);
        }
    }
    else
    {
        if (VAR18->VAR3[1])
            memcpy(VAR15->VAR3[1], VAR18->VAR3[1], 256 * 4);
    }
    for (VAR24 = 0; VAR24 < VAR43; VAR24 += 8)
    {
        VAR20 = VAR15->VAR3[0] + VAR24 * VAR21;
        for (VAR23 = 0; VAR23 < VAR44; VAR23 += 8)
        {
            VAR7 *VAR45 = VAR18->VAR3[0];
            unsigned int VAR46, VAR47;
            uint8_t VAR48[4], VAR49[4];
            C93BlockType VAR50;
            if (!VAR25)
                VAR25 = *VAR8++;
            VAR50 = VAR25 & 0x0F;
            switch (VAR50)
            {
            case VAR51:
                VAR46 = FUN5(&VAR8);
                if (FUN6(VAR2, VAR20, VAR45, VAR46, 8, VAR21))
                    return -1;
                break;
            case VAR52:
                VAR45 = VAR15->VAR3[0];
            case VAR53:
                for (VAR47 = 0; VAR47 < 8; VAR47 += 4)
                {
                    for (VAR22 = 0; VAR22 < 8; VAR22 += 4)
                    {
                        VAR46 = FUN5(&VAR8);
                        if (FUN6(VAR2, &VAR20[VAR47 * VAR21 + VAR22], VAR45, VAR46, 4, VAR21))
                            return -1;
                    }
                }
                break;
            case VAR54:
                FUN7(&VAR8, VAR48, 2);
                for (VAR22 = 0; VAR22 < 8; VAR22++)
                {
                    FUN8(VAR20 + VAR22 * VAR21, VAR21, 8, 1, 1, VAR48, NULL, *VAR8++);
                }
                break;
            case VAR55:
            case VAR56:
            case VAR57:
                for (VAR47 = 0; VAR47 < 8; VAR47 += 4)
                {
                    for (VAR22 = 0; VAR22 < 8; VAR22 += 4)
                    {
                        if (VAR50 == VAR55)
                        {
                            FUN7(&VAR8, VAR48, 2);
                            FUN8(VAR20 + VAR22 + VAR47 * VAR21, VAR21, 4, 4, 1, VAR48, NULL, FUN5(&VAR8));
                        }
                        else if (VAR50 == VAR56)
                        {
                            FUN7(&VAR8, VAR48, 4);
                            FUN8(VAR20 + VAR22 + VAR47 * VAR21, VAR21, 4, 4, 2, VAR48, NULL, FUN9(&VAR8));
                        }
                        else
                        {
                            FUN7(&VAR8, VAR49, 4);
                            FUN8(VAR20 + VAR22 + VAR47 * VAR21, VAR21, 4, 4, 1, VAR48, VAR49, FUN5(&VAR8));
                        }
                    }
                }
                break;
            case VAR58:
                break;
            case VAR59:
                for (VAR47 = 0; VAR47 < 8; VAR47++)
                    FUN7(&VAR8, VAR20 + VAR47 * VAR21, 8);
                break;
            default:
                FUN3(VAR2, VAR32, "", VAR50, VAR23, VAR24);
                return -1;
            }
            VAR25 >>= 4;
            VAR20 += 8;
        }
    }
    *VAR19 = *VAR15;
    *VAR4 = sizeof(VAR14);
    return VAR9;
}
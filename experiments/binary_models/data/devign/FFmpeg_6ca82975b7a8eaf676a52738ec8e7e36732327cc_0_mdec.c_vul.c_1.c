static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13 = &VAR14;
    VAR15 *const VAR16 = VAR2->VAR16.VAR17;
    const VAR18 *VAR19 = VAR20;
    const int VAR21 = VAR2->VAR21;
    if (VAR2->VAR22 == 2)
    {
        VAR4[0] = 2 * FUN2(&VAR2->VAR23, 10) + 1024;
    }
    else
    {
        VAR11 = (VAR5 <= 3 ? 0 : VAR5 - 4 + 1);
        VAR7 = FUN3(&VAR2->VAR23, VAR11);
        if (VAR7 >= 0xffff)
            return VAR24;
        VAR2->VAR25[VAR11] += VAR7;
        VAR4[0] = VAR2->VAR25[VAR11] << 3;
    }
    VAR8 = 0;
    {
        FUN4(VAR26, &VAR2->VAR23);
        for (;;)
        {
            FUN5(VAR26, &VAR2->VAR23);
            FUN6(VAR6, VAR10, VAR26, &VAR2->VAR23, VAR13->VAR27[0], VAR28, 2, 0);
            if (VAR6 == 127)
            {
                break;
            }
            else if (VAR6 != 0)
            {
                VAR8 += VAR10;
                if (VAR8 > 63)
                {
                    FUN7(VAR2->VAR29, VAR30, "", VAR2->VAR31, VAR2->VAR32);
                    return VAR24;
                }
                VAR9 = VAR16[VAR8];
                VAR6 = (VAR6 * VAR21 * VAR19[VAR9]) >> 3;
                VAR6 = (VAR6 ^ FUN8(VAR26, &VAR2->VAR23, 1)) - FUN8(VAR26, &VAR2->VAR23, 1);
                FUN9(VAR26, &VAR2->VAR23, 1);
            }
            else
            {
                VAR10 = FUN10(VAR26, &VAR2->VAR23, 6) + 1;
                FUN9(VAR26, &VAR2->VAR23, 6);
                FUN5(VAR26, &VAR2->VAR23);
                VAR6 = FUN8(VAR26, &VAR2->VAR23, 10);
                FUN11(VAR26, &VAR2->VAR23, 10);
                VAR8 += VAR10;
                if (VAR8 > 63)
                {
                    FUN7(VAR2->VAR29, VAR30, "", VAR2->VAR31, VAR2->VAR32);
                    return VAR24;
                }
                VAR9 = VAR16[VAR8];
                if (VAR6 < 0)
                {
                    VAR6 = -VAR6;
                    VAR6 = (VAR6 * VAR21 * VAR19[VAR9]) >> 3;
                    VAR6 = (VAR6 - 1) | 1;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = (VAR6 * VAR21 * VAR19[VAR9]) >> 3;
                    VAR6 = (VAR6 - 1) | 1;
                }
            }
            VAR4[VAR9] = VAR6;
        }
        FUN12(VAR26, &VAR2->VAR23);
    }
    VAR2->VAR33[VAR5] = VAR8;
    return 0;
}
static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = VAR2->VAR16.VAR17;
    const VAR18 *VAR19;
    const int VAR20 = VAR2->VAR20;
    if (VAR5 < 4)
    {
        VAR19 = VAR2->VAR21;
        VAR11 = 0;
    }
    else
    {
        VAR19 = VAR2->VAR22;
        VAR11 = (VAR5 & 1) + 1;
    }
    VAR8 = FUN2(&VAR2->VAR23, VAR11);
    if (VAR8 >= 0xffff)
        return -1;
    VAR7 = VAR2->VAR24[VAR11];
    VAR7 += VAR8;
    VAR2->VAR24[VAR11] = VAR7;
    VAR4[0] = VAR7 << (3 - VAR2->VAR25);
    if (VAR2->VAR26)
        VAR13 = &VAR27;
    else
        VAR13 = &VAR28;
    {
        FUN3(VAR29, &VAR2->VAR23);
        for (;;)
        {
            FUN4(VAR29, &VAR2->VAR23);
            FUN5(VAR6, VAR10, VAR29, &VAR2->VAR23, VAR13->VAR30[0], VAR31, 2, 0);
            if (VAR6 >= 64)
            {
                break;
            }
            else if (VAR6 != 0)
            {
                VAR15 += VAR10;
                VAR9 = *VAR15;
                VAR6 = (VAR6 * VAR20 * VAR19[VAR9]) >> 4;
                VAR6 = (VAR6 ^ FUN6(VAR29, &VAR2->VAR23, 1)) - FUN6(VAR29, &VAR2->VAR23, 1);
                FUN7(VAR29, &VAR2->VAR23, 1);
            }
            else
            {
                VAR10 = FUN8(VAR29, &VAR2->VAR23, 6) + 1;
                FUN7(VAR29, &VAR2->VAR23, 6);
                FUN4(VAR29, &VAR2->VAR23);
                VAR6 = FUN6(VAR29, &VAR2->VAR23, 12);
                FUN9(VAR29, &VAR2->VAR23, 12);
                VAR15 += VAR10;
                VAR9 = *VAR15;
                if (VAR6 < 0)
                {
                    VAR6 = (-VAR6 * VAR20 * VAR19[VAR9]) >> 4;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = (VAR6 * VAR20 * VAR19[VAR9]) >> 4;
                }
            }
            VAR4[VAR9] = VAR6;
        }
        FUN10(VAR29, &VAR2->VAR23);
    }
    VAR2->VAR32[VAR5] = VAR15 - VAR2->VAR16.VAR17;
    return 0;
}
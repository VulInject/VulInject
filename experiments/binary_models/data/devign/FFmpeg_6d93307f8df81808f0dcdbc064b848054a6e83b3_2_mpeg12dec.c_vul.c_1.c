static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *const VAR16 = VAR2->VAR17.VAR18;
    const VAR19 *VAR20;
    const int VAR21 = VAR2->VAR21;
    int VAR22;
    if (VAR5 < 4)
    {
        VAR20 = VAR2->VAR23;
        VAR12 = 0;
    }
    else
    {
        VAR20 = VAR2->VAR24;
        VAR12 = (VAR5 & 1) + 1;
    }
    VAR8 = FUN2(&VAR2->VAR25, VAR12);
    if (VAR8 >= 0xffff)
        return -1;
    VAR7 = VAR2->VAR26[VAR12];
    VAR7 += VAR8;
    VAR2->VAR26[VAR12] = VAR7;
    VAR4[0] = VAR7 << (3 - VAR2->VAR27);
    FUN3(VAR2->VAR28, "", VAR4[0]);
    VAR22 = VAR4[0] ^ 1;
    VAR9 = 0;
    if (VAR2->VAR29)
        VAR14 = &VAR30;
    else
        VAR14 = &VAR31;
    {
        FUN4(VAR32, &VAR2->VAR25);
        for (;;)
        {
            FUN5(VAR32, &VAR2->VAR25);
            FUN6(VAR6, VAR11, VAR32, &VAR2->VAR25, VAR14->VAR33[0], VAR34, 2, 0);
            if (VAR6 == 127)
            {
                break;
            }
            else if (VAR6 != 0)
            {
                VAR9 += VAR11;
                VAR10 = VAR16[VAR9];
                VAR6 = (VAR6 * VAR21 * VAR20[VAR10]) >> 4;
                VAR6 = (VAR6 ^ FUN7(VAR32, &VAR2->VAR25, 1)) - FUN7(VAR32, &VAR2->VAR25, 1);
                FUN8(VAR32, &VAR2->VAR25, 1);
            }
            else
            {
                VAR11 = FUN9(VAR32, &VAR2->VAR25, 6) + 1;
                FUN8(VAR32, &VAR2->VAR25, 6);
                FUN5(VAR32, &VAR2->VAR25);
                VAR6 = FUN7(VAR32, &VAR2->VAR25, 12);
                FUN10(VAR32, &VAR2->VAR25, 12);
                VAR9 += VAR11;
                VAR10 = VAR16[VAR9];
                if (VAR6 < 0)
                {
                    VAR6 = (-VAR6 * VAR21 * VAR20[VAR10]) >> 4;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = (VAR6 * VAR21 * VAR20[VAR10]) >> 4;
                }
            }
            if (VAR9 > 63)
            {
                FUN11(VAR2->VAR28, VAR35, "", VAR2->VAR36, VAR2->VAR37);
                return -1;
            }
            VAR22 ^= VAR6;
            VAR4[VAR10] = VAR6;
        }
        FUN12(VAR32, &VAR2->VAR25);
    }
    VAR4[63] ^= VAR22 & 1;
    VAR2->VAR38[VAR5] = VAR9;
    return 0;
}
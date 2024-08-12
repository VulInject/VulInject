static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14 = &VAR15;
    VAR16 *const VAR17 = VAR2->VAR18.VAR19;
    const VAR20 *VAR21 = VAR2->VAR22;
    const int VAR23 = VAR2->VAR23;
    VAR12 = (VAR5 <= 3 ? 0 : VAR5 - 4 + 1);
    VAR8 = FUN2(&VAR2->VAR24, VAR12);
    if (VAR8 >= 0xffff)
        return -1;
    VAR7 = VAR2->VAR25[VAR12];
    VAR7 += VAR8;
    VAR2->VAR25[VAR12] = VAR7;
    VAR4[0] = VAR7 * VAR21[0];
    FUN3(VAR2->VAR26, "", VAR7, VAR8);
    VAR9 = 0;
    {
        FUN4(VAR27, &VAR2->VAR24);
        for (;;)
        {
            FUN5(VAR27, &VAR2->VAR24);
            FUN6(VAR6, VAR11, VAR27, &VAR2->VAR24, VAR14->VAR28[0], VAR29, 2, 0);
            if (VAR6 == 127)
            {
                break;
            }
            else if (VAR6 != 0)
            {
                VAR9 += VAR11;
                VAR10 = VAR17[VAR9];
                VAR6 = (VAR6 * VAR23 * VAR21[VAR10]) >> 4;
                VAR6 = (VAR6 - 1) | 1;
                VAR6 = (VAR6 ^ FUN7(VAR27, &VAR2->VAR24, 1)) - FUN7(VAR27, &VAR2->VAR24, 1);
                FUN8(VAR27, &VAR2->VAR24, 1);
            }
            else
            {
                VAR11 = FUN9(VAR27, &VAR2->VAR24, 6) + 1;
                FUN8(VAR27, &VAR2->VAR24, 6);
                FUN5(VAR27, &VAR2->VAR24);
                VAR6 = FUN7(VAR27, &VAR2->VAR24, 8);
                FUN10(VAR27, &VAR2->VAR24, 8);
                if (VAR6 == -128)
                {
                    VAR6 = FUN9(VAR27, &VAR2->VAR24, 8) - 256;
                    FUN8(VAR27, &VAR2->VAR24, 8);
                }
                else if (VAR6 == 0)
                {
                    VAR6 = FUN9(VAR27, &VAR2->VAR24, 8);
                    FUN8(VAR27, &VAR2->VAR24, 8);
                }
                VAR9 += VAR11;
                VAR10 = VAR17[VAR9];
                if (VAR6 < 0)
                {
                    VAR6 = -VAR6;
                    VAR6 = (VAR6 * VAR23 * VAR21[VAR10]) >> 4;
                    VAR6 = (VAR6 - 1) | 1;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = (VAR6 * VAR23 * VAR21[VAR10]) >> 4;
                    VAR6 = (VAR6 - 1) | 1;
                }
            }
            if (VAR9 > 63)
            {
                FUN11(VAR2->VAR26, VAR30, "", VAR2->VAR31, VAR2->VAR32);
                return -1;
            }
            VAR4[VAR10] = VAR6;
        }
        FUN12(VAR27, &VAR2->VAR24);
    }
    VAR2->VAR33[VAR5] = VAR9;
    return 0;
}
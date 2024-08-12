static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11 = &VAR12;
    VAR13 *const VAR14 = VAR2->VAR15.VAR16;
    const VAR17 *VAR18 = VAR2->VAR19;
    const int VAR20 = VAR2->VAR20;
    {
        FUN2(VAR21, &VAR2->VAR22);
        VAR7 = -1;
        FUN3(VAR21, &VAR2->VAR22);
        if (((VAR23)FUN4(VAR21, &VAR2->VAR22)) < 0)
        {
            VAR6 = (3 * VAR20 * VAR18[0]) >> 5;
            VAR6 = (VAR6 - 1) | 1;
            if (FUN4(VAR21, &VAR2->VAR22) & 0x40000000)
                VAR6 = -VAR6;
            VAR4[0] = VAR6;
            VAR7++;
            FUN5(VAR21, &VAR2->VAR22, 2);
            if (((VAR23)FUN4(VAR21, &VAR2->VAR22)) <= (VAR23)0xBFFFFFFF)
                goto VAR24;
        }
        for (;;)
        {
            FUN6(VAR6, VAR9, VAR21, &VAR2->VAR22, VAR11->VAR25[0], VAR26, 2, 0);
            if (VAR6 != 0)
            {
                VAR7 += VAR9;
                VAR8 = VAR14[VAR7];
                VAR6 = ((VAR6 * 2 + 1) * VAR20 * VAR18[VAR8]) >> 5;
                VAR6 = (VAR6 - 1) | 1;
                VAR6 = (VAR6 ^ FUN7(VAR21, &VAR2->VAR22, 1)) - FUN7(VAR21, &VAR2->VAR22, 1);
                FUN5(VAR21, &VAR2->VAR22, 1);
            }
            else
            {
                VAR9 = FUN8(VAR21, &VAR2->VAR22, 6) + 1;
                FUN9(VAR21, &VAR2->VAR22, 6);
                FUN3(VAR21, &VAR2->VAR22);
                VAR6 = FUN7(VAR21, &VAR2->VAR22, 8);
                FUN5(VAR21, &VAR2->VAR22, 8);
                if (VAR6 == -128)
                {
                    VAR6 = FUN8(VAR21, &VAR2->VAR22, 8) - 256;
                    FUN5(VAR21, &VAR2->VAR22, 8);
                }
                else if (VAR6 == 0)
                {
                    VAR6 = FUN8(VAR21, &VAR2->VAR22, 8);
                    FUN5(VAR21, &VAR2->VAR22, 8);
                }
                VAR7 += VAR9;
                VAR8 = VAR14[VAR7];
                if (VAR6 < 0)
                {
                    VAR6 = -VAR6;
                    VAR6 = ((VAR6 * 2 + 1) * VAR20 * VAR18[VAR8]) >> 5;
                    VAR6 = (VAR6 - 1) | 1;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = ((VAR6 * 2 + 1) * VAR20 * VAR18[VAR8]) >> 5;
                    VAR6 = (VAR6 - 1) | 1;
                }
            }
            if (VAR7 > 63)
            {
                FUN10(VAR2->VAR27, VAR28, "", VAR2->VAR29, VAR2->VAR30);
                return -1;
            }
            VAR4[VAR8] = VAR6;
            if (((VAR23)FUN4(VAR21, &VAR2->VAR22)) <= (VAR23)0xBFFFFFFF)
                break;
            FUN3(VAR21, &VAR2->VAR22);
        }
    VAR24:
        FUN9(VAR21, &VAR2->VAR22, 2);
        FUN11(VAR21, &VAR2->VAR22);
    }
    VAR2->VAR31[VAR5] = VAR7;
    return 0;
}
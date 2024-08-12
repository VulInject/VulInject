static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10 = &VAR11;
    const VAR12 *VAR13 = VAR2->VAR13.VAR14;
    VAR3 *VAR15 = VAR2->VAR15;
    VAR4[0] = (128 + FUN2(&VAR2->VAR16, 8)) * VAR15[0];
    VAR6 = 0;
    {
        FUN3(VAR17, &VAR2->VAR16);
        for (;;)
        {
            FUN4(VAR17, &VAR2->VAR16);
            FUN5(VAR5, VAR8, VAR17, &VAR2->VAR16, VAR10->VAR18[0], VAR19, 2, 0);
            if (VAR5 == 127)
            {
                break;
            }
            else if (VAR5 != 0)
            {
                VAR6 += VAR8;
                VAR7 = VAR13[VAR6];
                VAR5 = (VAR5 * VAR15[VAR7]) >> 4;
                VAR5 = (VAR5 - 1) | 1;
                VAR5 = (VAR5 ^ FUN6(VAR17, &VAR2->VAR16, 1)) - FUN6(VAR17, &VAR2->VAR16, 1);
                FUN7(VAR17, &VAR2->VAR16, 1);
            }
            else
            {
                FUN4(VAR17, &VAR2->VAR16);
                VAR5 = FUN6(VAR17, &VAR2->VAR16, 10);
                FUN8(VAR17, &VAR2->VAR16, 10);
                FUN4(VAR17, &VAR2->VAR16);
                VAR8 = FUN9(VAR17, &VAR2->VAR16, 6) + 1;
                FUN7(VAR17, &VAR2->VAR16, 6);
                VAR6 += VAR8;
                VAR7 = VAR13[VAR6];
                if (VAR5 < 0)
                {
                    VAR5 = -VAR5;
                    VAR5 = (VAR5 * VAR15[VAR7]) >> 4;
                    VAR5 = (VAR5 - 1) | 1;
                    VAR5 = -VAR5;
                }
                else
                {
                    VAR5 = (VAR5 * VAR15[VAR7]) >> 4;
                    VAR5 = (VAR5 - 1) | 1;
                }
            }
            if (VAR6 > 63)
            {
                FUN10(VAR2->VAR20, VAR21, "", VAR2->VAR22, VAR2->VAR23);
                return;
            }
            VAR4[VAR7] = VAR5;
        }
        FUN11(VAR17, &VAR2->VAR16);
    }
}
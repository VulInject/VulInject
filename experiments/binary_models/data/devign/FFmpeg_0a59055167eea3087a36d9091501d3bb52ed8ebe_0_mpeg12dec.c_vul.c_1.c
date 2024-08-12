static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11 = &VAR12;
    VAR13 *const VAR14 = VAR2->VAR15.VAR16;
    const int VAR17 = VAR2->VAR17;
    {
        FUN2(VAR18, &VAR2->VAR19);
        VAR7 = -1;
        FUN3(VAR18, &VAR2->VAR19);
        if (((VAR20)FUN4(VAR18, &VAR2->VAR19)) < 0)
        {
            VAR6 = (3 * VAR17) >> 1;
            VAR6 = (VAR6 - 1) | 1;
            if (FUN4(VAR18, &VAR2->VAR19) & 0x40000000)
                VAR6 = -VAR6;
            VAR4[0] = VAR6;
            VAR7++;
            FUN5(VAR18, &VAR2->VAR19, 2);
            if (((VAR20)FUN4(VAR18, &VAR2->VAR19)) <= (VAR20)0xBFFFFFFF)
                goto VAR21;
        }
        for (;;)
        {
            FUN6(VAR6, VAR9, VAR18, &VAR2->VAR19, VAR11->VAR22[0], VAR23, 2, 0);
            if (VAR6 != 0)
            {
                VAR7 += VAR9;
                VAR8 = VAR14[VAR7];
                VAR6 = ((VAR6 * 2 + 1) * VAR17) >> 1;
                VAR6 = (VAR6 - 1) | 1;
                VAR6 = (VAR6 ^ FUN7(VAR18, &VAR2->VAR19, 1)) - FUN7(VAR18, &VAR2->VAR19, 1);
                FUN5(VAR18, &VAR2->VAR19, 1);
            }
            else
            {
                VAR9 = FUN8(VAR18, &VAR2->VAR19, 6) + 1;
                FUN9(VAR18, &VAR2->VAR19, 6);
                FUN3(VAR18, &VAR2->VAR19);
                VAR6 = FUN7(VAR18, &VAR2->VAR19, 8);
                FUN5(VAR18, &VAR2->VAR19, 8);
                if (VAR6 == -128)
                {
                    VAR6 = FUN8(VAR18, &VAR2->VAR19, 8) - 256;
                    FUN5(VAR18, &VAR2->VAR19, 8);
                }
                else if (VAR6 == 0)
                {
                    VAR6 = FUN8(VAR18, &VAR2->VAR19, 8);
                    FUN5(VAR18, &VAR2->VAR19, 8);
                }
                VAR7 += VAR9;
                VAR8 = VAR14[VAR7];
                if (VAR6 < 0)
                {
                    VAR6 = -VAR6;
                    VAR6 = ((VAR6 * 2 + 1) * VAR17) >> 1;
                    VAR6 = (VAR6 - 1) | 1;
                    VAR6 = -VAR6;
                }
                else
                {
                    VAR6 = ((VAR6 * 2 + 1) * VAR17) >> 1;
                    VAR6 = (VAR6 - 1) | 1;
                }
            }
            VAR4[VAR8] = VAR6;
            if (((VAR20)FUN4(VAR18, &VAR2->VAR19)) <= (VAR20)0xBFFFFFFF)
                break;
            FUN3(VAR18, &VAR2->VAR19);
        }
    VAR21:
        FUN9(VAR18, &VAR2->VAR19, 2);
        FUN10(VAR18, &VAR2->VAR19);
    }
    VAR2->VAR24[VAR5] = VAR7;
    return 0;
}
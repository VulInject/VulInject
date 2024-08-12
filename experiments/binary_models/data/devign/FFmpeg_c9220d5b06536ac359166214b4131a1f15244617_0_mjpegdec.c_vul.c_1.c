static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR3 *VAR8, int VAR9, int VAR10, int VAR11, int *VAR12)
{
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    if (*VAR12)
    {
        (*VAR12)--;
        return 0;
    }
    {
        FUN2(VAR19, &VAR2->VAR20);
        for (VAR14 = VAR9;; VAR14++)
        {
            FUN3(VAR19, &VAR2->VAR20);
            FUN4(VAR13, VAR19, &VAR2->VAR20, VAR2->VAR21[2][VAR7].VAR22, 9, 2);
            VAR18 = ((unsigned)VAR13) >> 4;
            VAR13 &= 0xF;
            if (VAR13)
            {
                VAR14 += VAR18;
                if (VAR13 > VAR23 - 16)
                    FUN3(VAR19, &VAR2->VAR20);
                {
                    int VAR24 = FUN5(VAR19, &VAR2->VAR20);
                    int VAR25 = (~VAR24) >> 31;
                    VAR16 = (FUN6(VAR25 ^ VAR24, VAR13) ^ VAR25) - VAR25;
                }
                FUN7(VAR19, &VAR2->VAR20, VAR13);
                if (VAR14 >= VAR10)
                {
                    if (VAR14 == VAR10)
                    {
                        VAR15 = VAR2->VAR26.VAR27[VAR10];
                        VAR4[VAR15] = VAR16 * VAR8[VAR15] << VAR11;
                        break;
                    }
                    FUN8(VAR2->VAR28, VAR29, "", VAR14);
                    return VAR30;
                }
                VAR15 = VAR2->VAR26.VAR27[VAR14];
                VAR4[VAR15] = VAR16 * VAR8[VAR15] << VAR11;
            }
            else
            {
                if (VAR18 == 0xF)
                {
                    VAR14 += 15;
                    if (VAR14 >= VAR10)
                    {
                        FUN8(VAR2->VAR28, VAR29, "", VAR14);
                        return VAR30;
                    }
                }
                else
                {
                    VAR17 = (1 << VAR18);
                    if (VAR18)
                    {
                        FUN3(VAR19, &VAR2->VAR20);
                        VAR17 += FUN6(FUN5(VAR19, &VAR2->VAR20), VAR18);
                        FUN7(VAR19, &VAR2->VAR20, VAR18);
                    }
                    *VAR12 = VAR17 - 1;
                    break;
                }
            }
        }
        FUN9(VAR19, &VAR2->VAR20);
    }
    if (VAR14 > *VAR6)
        *VAR6 = VAR14;
    return 0;
}
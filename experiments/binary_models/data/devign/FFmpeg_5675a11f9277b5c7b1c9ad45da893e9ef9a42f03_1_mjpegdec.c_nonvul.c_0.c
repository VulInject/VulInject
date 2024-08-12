static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int *VAR13)
{
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    if (*VAR13)
    {
        (*VAR13)--;
        return 0;
    }
    {
        FUN2(VAR20, &VAR2->VAR21)
        for (VAR15 = VAR10;; VAR15++)
        {
            FUN3(VAR20, &VAR2->VAR21);
            FUN4(VAR14, VAR20, &VAR2->VAR21, VAR2->VAR22[2][VAR7].VAR23, 9, 2)
            VAR19 = ((unsigned)VAR14) >> 4;
            VAR14 &= 0xF;
            if (VAR14)
            {
                VAR15 += VAR19;
                if (VAR14 > VAR24 - 16)
                {
                    FUN3(VAR20, &VAR2->VAR21)
                }
                {
                    int VAR25 = FUN5(VAR20, &VAR2->VAR21);
                    int VAR26 = (~VAR25) >> 31;
                    VAR17 = (FUN6(VAR26 ^ VAR25, VAR14) ^ VAR26) - VAR26;
                }
                FUN7(VAR20, &VAR2->VAR21, VAR14)
                if (VAR15 >= VAR11)
                {
                    if (VAR15 == VAR11)
                    {
                        VAR16 = VAR2->VAR27.VAR28[VAR11];
                        VAR4[VAR16] = VAR17 * VAR9[VAR16] << VAR12;
                        break;
                    }
                    FUN8(VAR2->VAR29, VAR30, "", VAR15);
                    return -1;
                }
                VAR16 = VAR2->VAR27.VAR28[VAR15];
                VAR4[VAR16] = VAR17 * VAR9[VAR16] << VAR12;
            }
            else
            {
                if (VAR19 == 0xF)
                {
                    VAR15 += 15;
                }
                else
                {
                    VAR18 = (1 << VAR19);
                    if (VAR19)
                    {
                        FUN3(VAR20, &VAR2->VAR21);
                        VAR18 += FUN6(FUN5(VAR20, &VAR2->VAR21), VAR19);
                        FUN7(VAR20, &VAR2->VAR21, VAR19);
                    }
                    *VAR13 = VAR18 - 1;
                    break;
                }
            }
        }
        FUN9(VAR20, &VAR2->VAR21)
    }
    if (VAR15 > *VAR6)
        *VAR6 = VAR15;
    return 0;
}
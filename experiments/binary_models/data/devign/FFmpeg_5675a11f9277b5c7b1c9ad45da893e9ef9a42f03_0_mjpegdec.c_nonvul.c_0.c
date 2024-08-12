static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int *VAR13)
{
    int VAR14, VAR15 = VAR10, VAR16, VAR17, VAR18, VAR19;
    int VAR20 = FUN2(VAR11, *VAR6);
    FUN3(VAR21, &VAR2->VAR22);
    if (*VAR13)
        (*VAR13)--;
    else
    {
        for (;; VAR15++)
        {
            FUN4(VAR21, &VAR2->VAR22);
            FUN5(VAR14, VAR21, &VAR2->VAR22, VAR2->VAR23[2][VAR7].VAR24, 9, 2)
            if (VAR14 & 0xF)
            {
                VAR19 = ((unsigned)VAR14) >> 4;
                FUN4(VAR21, &VAR2->VAR22);
                VAR18 = FUN6(VAR21, &VAR2->VAR22, 1);
                FUN7(VAR21, &VAR2->VAR22, 1);
                VAR25;
                VAR16 = VAR2->VAR26.VAR27[VAR15];
                VAR18--;
                VAR4[VAR16] = ((VAR9[VAR16] ^ VAR18) - VAR18) << VAR12;
                if (VAR15 == VAR11)
                {
                    if (VAR15 > *VAR6)
                        *VAR6 = VAR15;
                    FUN8(VAR21, &VAR2->VAR22)
                    return 0;
                }
            }
            else
            {
                VAR19 = ((unsigned)VAR14) >> 4;
                if (VAR19 == 0xF)
                {
                    VAR25;
                }
                else
                {
                    VAR18 = VAR19;
                    VAR19 = (1 << VAR19);
                    if (VAR18)
                    {
                        FUN4(VAR21, &VAR2->VAR22);
                        VAR19 += FUN6(VAR21, &VAR2->VAR22, VAR18);
                        FUN7(VAR21, &VAR2->VAR22, VAR18);
                    }
                    *VAR13 = VAR19 - 1;
                    break;
                }
            }
        }
        if (VAR15 > *VAR6)
            *VAR6 = VAR15;
    }
    for (; VAR15 <= VAR20; VAR15++)
    {
        VAR16 = VAR2->VAR26.VAR27[VAR15];
        if (VAR4[VAR16])
            FUN9(VAR16)
    }
    FUN8(VAR21, &VAR2->VAR22);
    return 0;
}
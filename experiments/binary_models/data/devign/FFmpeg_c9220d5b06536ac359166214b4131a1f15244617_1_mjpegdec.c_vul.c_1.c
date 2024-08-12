static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR3 *VAR8, int VAR9, int VAR10, int VAR11, int *VAR12)
{
    int VAR13, VAR14 = VAR9, VAR15, VAR16, VAR17, VAR18;
    int VAR19 = FUN2(VAR10, *VAR6);
    FUN3(VAR20, &VAR2->VAR21);
    if (*VAR12)
    {
        (*VAR12)--;
    }
    else
    {
        for (;; VAR14++)
        {
            FUN4(VAR20, &VAR2->VAR21);
            FUN5(VAR13, VAR20, &VAR2->VAR21, VAR2->VAR22[2][VAR7].VAR23, 9, 2);
            if (VAR13 & 0xF)
            {
                VAR18 = ((unsigned)VAR13) >> 4;
                FUN4(VAR20, &VAR2->VAR21);
                VAR17 = FUN6(VAR20, &VAR2->VAR21, 1);
                FUN7(VAR20, &VAR2->VAR21, 1);
                VAR24;
                VAR15 = VAR2->VAR25.VAR26[VAR14];
                VAR17--;
                VAR4[VAR15] = ((VAR8[VAR15] ^ VAR17) - VAR17) << VAR11;
                if (VAR14 == VAR10)
                {
                    if (VAR14 > *VAR6)
                        *VAR6 = VAR14;
                    FUN8(VAR20, &VAR2->VAR21);
                    return 0;
                }
            }
            else
            {
                VAR18 = ((unsigned)VAR13) >> 4;
                if (VAR18 == 0xF)
                {
                    VAR24;
                }
                else
                {
                    VAR17 = VAR18;
                    VAR18 = (1 << VAR18);
                    if (VAR17)
                    {
                        FUN4(VAR20, &VAR2->VAR21);
                        VAR18 += FUN6(VAR20, &VAR2->VAR21, VAR17);
                        FUN7(VAR20, &VAR2->VAR21, VAR17);
                    }
                    *VAR12 = VAR18 - 1;
                    break;
                }
            }
        }
        if (VAR14 > *VAR6)
            *VAR6 = VAR14;
    }
    for (; VAR14 <= VAR19; VAR14++)
    {
        VAR15 = VAR2->VAR25.VAR26[VAR14];
        if (VAR4[VAR15])
            FUN9(VAR15)
    }
    FUN8(VAR20, &VAR2->VAR21);
    return 0;
}
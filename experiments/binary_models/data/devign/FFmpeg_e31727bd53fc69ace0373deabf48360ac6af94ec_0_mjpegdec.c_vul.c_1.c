static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9 = 0;
    int VAR10 = VAR2->VAR11[0];
    VAR12 *VAR13 = VAR2->VAR14->VAR13[VAR10];
    int VAR15 = VAR2->VAR15[VAR10];
    int VAR16 = 0;
    VAR17 *VAR18 = VAR2->VAR19[VAR2->VAR20[0]];
    int VAR21 = 1 + (VAR2->VAR22 > 8);
    FUN2(VAR3 >= 0 && VAR5 >= 0 && VAR6 >= 0);
    if (VAR4 < VAR3 || VAR4 > 63)
    {
        FUN3(VAR2->VAR23, VAR24, "", VAR3, VAR4);
        return VAR25;
    }
    if (!VAR6)
    {
        VAR2->VAR26[VAR10] |= (2LL << VAR4) - (1LL << VAR3);
        VAR16 = !~VAR2->VAR26[VAR10];
    }
    if (VAR2->VAR27 && VAR2->VAR28)
        VAR13 += VAR15 >> 1;
    VAR2->VAR29 = 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR30; VAR8++)
    {
        VAR12 *VAR31 = VAR13 + (VAR8 * VAR15 * 8 >> VAR2->VAR23->VAR32);
        int VAR33 = VAR8 * VAR2->VAR34[VAR10];
        FUN4(*VAR35)[64] = &VAR2->VAR36[VAR10][VAR33];
        VAR12 *VAR37 = &VAR2->VAR37[VAR10][VAR33];
        for (VAR7 = 0; VAR7 < VAR2->VAR38; VAR7++, VAR35++, VAR37++)
        {
            int VAR39;
            if (VAR2->VAR40 && !VAR2->VAR29)
                VAR2->VAR29 = VAR2->VAR40;
            if (VAR5)
                VAR39 = FUN5(VAR2, *VAR35, VAR37, VAR2->VAR41[0], VAR18, VAR3, VAR4, VAR6, &VAR9);
            else
                VAR39 = FUN6(VAR2, *VAR35, VAR37, VAR2->VAR41[0], VAR18, VAR3, VAR4, VAR6, &VAR9);
            if (VAR39 < 0)
            {
                FUN3(VAR2->VAR23, VAR24, "", VAR8, VAR7);
                return VAR25;
            }
            if (VAR16)
            {
                VAR2->VAR42.FUN7(VAR31, VAR15, *VAR35);
                if (VAR2->VAR22 & 7)
                    FUN8(VAR2, VAR31, VAR15);
                VAR31 += VAR21 * 8 >> VAR2->VAR23->VAR32;
            }
            if (FUN9(VAR2, 0))
                VAR9 = 0;
        }
    }
    return 0;
}
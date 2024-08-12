static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, int VAR10, int VAR11)
{
    VAR12 *const VAR13 = &VAR2->VAR13;
    const VAR14 *VAR15 = VAR16[VAR10];
    static const int VAR17[17] = {0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int VAR18[16], VAR19[16];
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    if (VAR7 == VAR27)
    {
        VAR23 = FUN2(VAR4, VAR28.VAR29, VAR30, 1);
        VAR24 = VAR23 >> 2;
    }
    else
    {
        if (VAR7 == VAR31)
        {
            VAR24 = FUN3(VAR2, 0);
            VAR23 = FUN2(VAR4, VAR32[VAR17[VAR24]].VAR29, VAR33, 2);
            VAR24 = VAR23 >> 2;
        }
        else
        {
            VAR24 = FUN3(VAR2, VAR7);
            VAR23 = FUN2(VAR4, VAR32[VAR17[VAR24]].VAR29, VAR33, 2);
            VAR24 = VAR23 >> 2;
            VAR2->VAR34[VAR35[VAR7]] = VAR24;
        }
    }
    if (VAR24 == 0)
        return 0;
    VAR26 = VAR23 & 3;
    FUN4("", VAR26, VAR24);
    assert(VAR24 <= 16);
    for (VAR25 = 0; VAR25 < VAR26; VAR25++)
    {
        VAR18[VAR25] = 1 - 2 * FUN5(VAR4);
    }
    VAR20 = VAR24 > 10 && VAR26 < 3;
    for (; VAR25 < VAR24; VAR25++)
    {
        const int VAR36 = FUN6(VAR4);
        int VAR37, VAR38;
        if (VAR36 < 14)
        {
            if (VAR20)
                VAR37 = (VAR36 << VAR20) + FUN7(VAR4, VAR20);
            else
                VAR37 = (VAR36 << VAR20);
        }
        else if (VAR36 == 14)
        {
            if (VAR20)
                VAR37 = (VAR36 << VAR20) + FUN7(VAR4, VAR20);
            else
                VAR37 = VAR36 + FUN7(VAR4, 4);
        }
        else if (VAR36 == 15)
        {
            VAR37 = (VAR36 << VAR20) + FUN7(VAR4, 12);
            if (VAR20 == 0)
                VAR37 += 15;
        }
        else
        {
            FUN8(VAR2->VAR13.VAR39, VAR40, "", VAR13->VAR41, VAR13->VAR42);
            return -1;
        }
        if (VAR25 == VAR26 && VAR25 < 3)
            VAR37 += 2;
        VAR38 = -(VAR37 & 1);
        VAR18[VAR25] = (((2 + VAR37) >> 1) ^ VAR38) - VAR38;
        if (VAR20 == 0)
            VAR20 = 1;
        if (FUN9(VAR18[VAR25]) > (3 << (VAR20 - 1)) && VAR20 < 6)
            VAR20++;
        if ((2 + VAR37) >> 1) > ( 3 << ( VAR20 - 1 ) ) && VAR20 < 6 ) VAR20 ++ ;
        FUN4("", VAR18[VAR25], VAR20);
    }
    if (VAR24 == VAR11)
        VAR21 = 0;
    else
    {
        if (VAR7 == VAR27)
            VAR21 = FUN2(VAR4, VAR43[VAR24 - 1].VAR29, VAR44, 1);
        else
            VAR21 = FUN2(VAR4, VAR45[VAR24 - 1].VAR29, VAR46, 1);
    }
    for (VAR25 = 0; VAR25 < VAR24 - 1; VAR25++)
    {
        if (VAR21 <= 0)
            break;
        else if (VAR21 < 7)
        {
            VAR19[VAR25] = FUN2(VAR4, VAR47[VAR21 - 1].VAR29, VAR48, 1);
        }
        else
        {
            VAR19[VAR25] = FUN2(VAR4, VAR49.VAR29, VAR50, 2);
        }
        VAR21 -= VAR19[VAR25];
    }
    if (VAR21 < 0)
    {
        FUN8(VAR2->VAR13.VAR39, VAR40, "", VAR13->VAR41, VAR13->VAR42);
        return -1;
    }
    for (; VAR25 < VAR24 - 1; VAR25++)
    {
        VAR19[VAR25] = 0;
    }
    VAR19[VAR25] = VAR21;
    VAR22 = -1;
    if (VAR7 > 24)
    {
        for (VAR25 = VAR24 - 1; VAR25 >= 0; VAR25--)
        {
            int VAR51;
            VAR22 += VAR19[VAR25] + 1;
            VAR51 = VAR9[VAR22];
            VAR6[VAR51] = VAR18[VAR25];
        }
    }
    else
    {
        for (VAR25 = VAR24 - 1; VAR25 >= 0; VAR25--)
        {
            int VAR51;
            VAR22 += VAR19[VAR25] + 1;
            VAR51 = VAR9[VAR22];
            VAR6[VAR51] = VAR18[VAR25] * VAR15[VAR51];
        }
    }
    return 0;
}
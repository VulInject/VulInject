static int FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5)
{
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    uint16_t VAR11[4] = {256, 128, 86, 64};
    unsigned VAR12 = VAR11[VAR7->VAR13 - 1];
    uint16_t VAR14[258];
    uint16_t VAR15[258];
    int VAR16[258];
    unsigned class, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    if (!FUN2(VAR10))
        return 1;
    VAR14[0] = FUN3(VAR10, FUN4(VAR12 - 1));
    VAR14[1] = FUN3(VAR10, FUN4(VAR12 - 1));
    FUN5(NULL, "", VAR14[0], VAR14[1]);
    VAR21 = 2;
    for (VAR22 = 0; VAR22 < VAR7->VAR31; ++VAR22)
    {
        class = VAR7->VAR32[VAR22];
        VAR17 = VAR7->VAR33[class];
        VAR18 = VAR7->VAR34[class];
        VAR19 = (1 << VAR18) - 1;
        VAR20 = 0;
        FUN5(NULL, "", VAR18);
        if (VAR18)
            VAR20 = FUN6(VAR10, VAR2->VAR35[VAR7->VAR36[class]].VAR37.VAR38, VAR2->VAR35[VAR7->VAR36[class]].VAR39, 3);
        for (VAR23 = 0; VAR23 < VAR17; ++VAR23)
        {
            VAR24 = VAR7->VAR40[class][VAR20 & VAR19];
            FUN5(NULL, "", VAR24, VAR18, VAR20, FUN7(VAR10));
            VAR20 = VAR20 >> VAR18;
            if (VAR24 > -1)
            {
                VAR14[VAR21 + VAR23] = FUN6(VAR10, VAR2->VAR35[VAR24].VAR37.VAR38, VAR2->VAR35[VAR24].VAR39, 3);
            }
            else
            {
                VAR14[VAR21 + VAR23] = 0;
            }
            FUN5(NULL, "", VAR7->VAR41[VAR21 + VAR23].VAR42, VAR14[VAR21 + VAR23]);
        }
        VAR21 += VAR17;
    }
    VAR16[0] = 1;
    VAR16[1] = 1;
    VAR15[0] = VAR14[0];
    VAR15[1] = VAR14[1];
    for (VAR22 = 2; VAR22 < VAR7->VAR43; ++VAR22)
    {
        unsigned VAR44, VAR45, VAR46, VAR47, VAR48, VAR49;
        VAR49 = VAR7->VAR41[VAR22].VAR50;
        VAR48 = VAR7->VAR41[VAR22].VAR51;
        VAR27 = VAR15[VAR48] - VAR15[VAR49];
        VAR25 = VAR7->VAR41[VAR48].VAR42 - VAR7->VAR41[VAR49].VAR42;
        VAR26 = FUN8(VAR27);
        VAR30 = VAR26 * (VAR7->VAR41[VAR22].VAR42 - VAR7->VAR41[VAR49].VAR42);
        VAR28 = VAR30 / VAR25;
        if (VAR27 < 0)
        {
            VAR29 = VAR15[VAR49] - VAR28;
        }
        else
        {
            VAR29 = VAR15[VAR49] + VAR28;
        }
        VAR44 = VAR14[VAR22];
        VAR45 = VAR12 - VAR29;
        VAR46 = VAR29;
        if (VAR45 < VAR46)
        {
            VAR47 = VAR45 * 2;
        }
        else
        {
            VAR47 = VAR46 * 2;
        }
        if (VAR44)
        {
            VAR16[VAR49] = 1;
            VAR16[VAR48] = 1;
            VAR16[VAR22] = 1;
            if (VAR44 >= VAR47)
            {
                if (VAR45 > VAR46)
                {
                    VAR15[VAR22] = VAR44 - VAR46 + VAR29;
                }
                else
                {
                    VAR15[VAR22] = VAR29 - VAR44 + VAR45 - 1;
                }
            }
            else
            {
                if (VAR44 & 1)
                {
                    VAR15[VAR22] = VAR29 - (VAR44 + 1) / 2;
                }
                else
                {
                    VAR15[VAR22] = VAR29 + VAR44 / 2;
                }
            }
        }
        else
        {
            VAR16[VAR22] = 0;
            VAR15[VAR22] = VAR29;
        }
        FUN5(NULL, "", VAR7->VAR41[VAR22].VAR42, VAR15[VAR22], VAR44);
    }
    FUN9(VAR7->VAR41, VAR7->VAR43, VAR15, VAR16, VAR7->VAR13, VAR5, VAR7->VAR41[1].VAR42);
    FUN5(NULL, "");
    return 0;
}
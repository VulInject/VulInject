static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6 = VAR4->VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    unsigned VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    const VAR5 *VAR19, *VAR20;
    const VAR5 *VAR21;
    int VAR22, VAR23, VAR24;
    VAR13 = FUN2(VAR6 + 4);
    if (!VAR13)
        return 0;
    if (VAR13 + 10 >= VAR4->VAR25)
    {
        FUN3(VAR2, VAR26, "");
        return -1;
    }
    VAR19 = VAR4->VAR7 + 4 + VAR13;
    VAR21 = VAR19 + 2;
    VAR22 = FUN4(&VAR19);
    VAR23 = FUN4(&VAR19) * 2;
    if (VAR19 - VAR4->VAR7 >= VAR4->VAR25 - VAR23)
    {
        FUN3(VAR2, VAR26, "");
        return -1;
    }
    memset(VAR9->VAR27, 0, VAR9->VAR28);
    VAR24 = FUN5(VAR9->VAR27, VAR9->VAR28, VAR19 + VAR23, VAR4->VAR25 - VAR23 - (VAR19 - VAR4->VAR7));
    if (VAR24 < 0)
    {
        FUN3(VAR2, VAR26, "");
        return -1;
    }
    VAR11 = VAR9->VAR29.VAR7[1];
    VAR12 = VAR9->VAR29.VAR7[2];
    VAR19 = VAR9->VAR27;
    VAR20 = VAR19 + VAR24;
    if (VAR22)
    {
        for (VAR18 = 0; VAR18 < VAR2->VAR30 >> 1; VAR18++)
        {
            for (VAR17 = 0; VAR17 < VAR2->VAR31 >> 1; VAR17++)
            {
                VAR14 = *VAR19++;
                if (VAR14)
                {
                    VAR14 = FUN6(VAR21 + (VAR14 << 1));
                    VAR15 = (VAR14 >> 3) & 0xF8;
                    VAR16 = (VAR14 >> 8) & 0xF8;
                    VAR11[VAR17] = VAR15 | (VAR15 >> 5);
                    VAR12[VAR17] = VAR16 | (VAR16 >> 5);
                }
                if (VAR19 == VAR20)
                    return 0;
            }
            VAR11 += VAR9->VAR29.VAR32[1];
            VAR12 += VAR9->VAR29.VAR32[2];
        }
    }
    else
    {
        VAR5 *VAR33 = VAR11 + VAR9->VAR29.VAR32[1];
        VAR5 *VAR34 = VAR12 + VAR9->VAR29.VAR32[2];
        for (VAR18 = 0; VAR18 < VAR2->VAR30 >> 2; VAR18++)
        {
            for (VAR17 = 0; VAR17 < VAR2->VAR31 >> 1; VAR17 += 2)
            {
                VAR14 = *VAR19++;
                if (VAR14)
                {
                    VAR14 = FUN6(VAR21 + (VAR14 << 1));
                    VAR15 = (VAR14 >> 3) & 0xF8;
                    VAR16 = (VAR14 >> 8) & 0xF8;
                    VAR11[VAR17] = VAR11[VAR17 + 1] = VAR33[VAR17] = VAR33[VAR17 + 1] = VAR15 | (VAR15 >> 5);
                    VAR12[VAR17] = VAR12[VAR17 + 1] = VAR34[VAR17] = VAR34[VAR17 + 1] = VAR16 | (VAR16 >> 5);
                }
            }
            VAR11 += VAR9->VAR29.VAR32[1] * 2;
            VAR12 += VAR9->VAR29.VAR32[2] * 2;
            VAR33 += VAR9->VAR29.VAR32[1] * 2;
            VAR34 += VAR9->VAR29.VAR32[2] * 2;
        }
    }
    return 0;
}
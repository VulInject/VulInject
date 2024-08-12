static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5[3] = {0, VAR2->VAR6, VAR2->VAR7};
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12, VAR13;
    int VAR14;
    int VAR15;
    if (VAR2->VAR16)
    {
        memset(VAR2->VAR17, VAR18, VAR2->VAR19);
    }
    else
    {
        VAR8 = FUN2(VAR4);
        while (VAR9 < VAR2->VAR19)
        {
            VAR10 = FUN3(VAR4, VAR2->VAR20.VAR21, 6, 2) + 1;
            if (VAR10 == 34)
                VAR10 += FUN4(VAR4, 12);
            if (VAR9 + VAR10 > VAR2->VAR19)
            {
                FUN5(VAR2->VAR22, VAR23, "");
                return -1;
            }
            memset(VAR2->VAR17 + VAR9, VAR8, VAR10);
            VAR9 += VAR10;
            if (VAR8)
                VAR11 += VAR10;
            if (VAR2->VAR24 && VAR10 == VAR25)
                VAR8 = FUN2(VAR4);
            else
                VAR8 ^= 1;
        }
        if (VAR11 < VAR2->VAR19)
        {
            int VAR26 = 0;
            VAR9 = 0;
            VAR8 = FUN2(VAR4);
            while (VAR26 < VAR2->VAR19 - VAR11)
            {
                VAR10 = FUN3(VAR4, VAR2->VAR20.VAR21, 6, 2) + 1;
                if (VAR10 == 34)
                    VAR10 += FUN4(VAR4, 12);
                for (VAR13 = 0; VAR13 < VAR10; VAR9++)
                {
                    if (VAR9 >= VAR2->VAR19)
                    {
                        FUN5(VAR2->VAR22, VAR23, "");
                        return -1;
                    }
                    if (VAR2->VAR17[VAR9] == VAR27)
                    {
                        VAR2->VAR17[VAR9] = 2 * VAR8;
                        VAR13++;
                    }
                }
                VAR26 += VAR10;
                if (VAR2->VAR24 && VAR10 == VAR25)
                    VAR8 = FUN2(VAR4);
                else
                    VAR8 ^= 1;
            }
        }
        if (VAR11)
        {
            VAR10 = 0;
            VAR8 = FUN2(VAR4);
            VAR8 ^= 1;
        }
    }
    VAR2->VAR28 = 0;
    memset(VAR2->VAR29, VAR30, VAR2->VAR31);
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        int VAR32 = VAR5[VAR15];
        int VAR33 = VAR32 + (VAR15 ? VAR2->VAR34 : VAR2->VAR35);
        int VAR36 = 0;
        for (VAR12 = VAR32; VAR12 < VAR33; VAR12++)
        {
            for (VAR13 = 0; VAR13 < 16; VAR13++)
            {
                VAR14 = VAR2->VAR37[VAR12 * 16 + VAR13];
                if (VAR14 != -1)
                {
                    int VAR38 = VAR2->VAR17[VAR12];
                    if (VAR2->VAR17[VAR12] == VAR39)
                    {
                        if (VAR10-- == 0)
                        {
                            VAR8 ^= 1;
                            VAR10 = FUN3(VAR4, VAR2->VAR40.VAR21, 5, 2);
                        }
                        VAR38 = VAR8;
                    }
                    if (VAR38)
                    {
                        VAR2->VAR41[VAR14].VAR42 = VAR43;
                        VAR2->VAR44[VAR15][VAR36++] = VAR14;
                    }
                    else
                    {
                        VAR2->VAR41[VAR14].VAR42 = VAR30;
                    }
                }
            }
        }
        VAR2->VAR28 += VAR36;
        for (VAR12 = 0; VAR12 < 64; VAR12++)
            VAR2->VAR36[VAR15][VAR12] = VAR36;
        if (VAR15 < 2)
            VAR2->VAR44[VAR15 + 1] = VAR2->VAR44[VAR15] + VAR36;
    }
    return 0;
}
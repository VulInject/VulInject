static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR4->VAR11;
    const int VAR12 = VAR4->VAR13;
    int VAR14, VAR15;
    if (1)
    {
        int VAR16 = 0;
        int VAR17[VAR10 * VAR12];
        int VAR18 = 0;
        int VAR19;
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            for (VAR14 = 0; VAR14 < VAR10; VAR14++)
            {
                int VAR20, VAR21 = 0;
                int VAR22 = 0, VAR23 = 0, VAR24 = 0, VAR25 = 0;
                VAR20 = VAR6[VAR14 + VAR15 * VAR8];
                if (VAR15)
                {
                    VAR24 = VAR6[VAR14 + (VAR15 - 1) * VAR8];
                    if (VAR14)
                    {
                        VAR23 = VAR6[VAR14 - 1 + (VAR15 - 1) * VAR8];
                    }
                    if (VAR14 + 1 < VAR10)
                    {
                        VAR25 = VAR6[VAR14 + 1 + (VAR15 - 1) * VAR8];
                    }
                }
                if (VAR14)
                {
                    VAR22 = VAR6[VAR14 - 1 + VAR15 * VAR8];
                }
                if (VAR7)
                {
                    int VAR26 = VAR14 >> 1;
                    int VAR27 = VAR15 >> 1;
                    if (VAR26 < VAR4->VAR7->VAR11 && VAR27 < VAR4->VAR7->VAR13)
                        VAR21 = VAR7[VAR26 + VAR27 * 2 * VAR8];
                }
                if (!(VAR22 | VAR23 | VAR24 | VAR25 | VAR21))
                {
                    if (VAR20)
                    {
                        VAR17[VAR18++] = VAR16;
                        VAR16 = 0;
                    }
                    else
                    {
                        VAR16++;
                    }
                }
            }
        }
        VAR19 = VAR18;
        VAR17[VAR18++] = VAR16;
        VAR18 = 0;
        VAR16 = VAR17[VAR18++];
        FUN2(&VAR2->VAR28, VAR4->VAR29[30], VAR19, 0);
        if (VAR18 <= VAR19)
            FUN2(&VAR2->VAR28, VAR4->VAR29[1], VAR16, 3);
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            if (VAR2->VAR28.VAR30 - VAR2->VAR28.VAR31 < VAR10 * 40)
            {
                FUN3(VAR2->VAR32, VAR33, "");
                return -1;
            }
            for (VAR14 = 0; VAR14 < VAR10; VAR14++)
            {
                int VAR20, VAR21 = 0;
                int VAR22 = 0, VAR23 = 0, VAR24 = 0, VAR25 = 0;
                VAR20 = VAR6[VAR14 + VAR15 * VAR8];
                if (VAR15)
                {
                    VAR24 = VAR6[VAR14 + (VAR15 - 1) * VAR8];
                    if (VAR14)
                    {
                        VAR23 = VAR6[VAR14 - 1 + (VAR15 - 1) * VAR8];
                    }
                    if (VAR14 + 1 < VAR10)
                    {
                        VAR25 = VAR6[VAR14 + 1 + (VAR15 - 1) * VAR8];
                    }
                }
                if (VAR14)
                {
                    VAR22 = VAR6[VAR14 - 1 + VAR15 * VAR8];
                }
                if (VAR7)
                {
                    int VAR26 = VAR14 >> 1;
                    int VAR27 = VAR15 >> 1;
                    if (VAR26 < VAR4->VAR7->VAR11 && VAR27 < VAR4->VAR7->VAR13)
                        VAR21 = VAR7[VAR26 + VAR27 * 2 * VAR8];
                }
                if (VAR22 | VAR23 | VAR24 | VAR25 | VAR21)
                {
                    int VAR34 = FUN4(3 * FUN5(VAR22) + FUN5(VAR23) + 2 * FUN5(VAR24) + FUN5(VAR25) + FUN5(VAR21));
                    FUN6(&VAR2->VAR28, &VAR4->VAR29[0][VAR34], !!VAR20);
                }
                else
                {
                    if (!VAR16)
                    {
                        VAR16 = VAR17[VAR18++];
                        if (VAR18 <= VAR19)
                            FUN2(&VAR2->VAR28, VAR4->VAR29[1], VAR16, 3);
                        assert(VAR20);
                    }
                    else
                    {
                        VAR16--;
                        assert(!VAR20);
                    }
                }
                if (VAR20)
                {
                    int VAR34 = FUN4(3 * FUN5(VAR22) + FUN5(VAR23) + 2 * FUN5(VAR24) + FUN5(VAR25) + FUN5(VAR21));
                    int VAR35 = 2 * FUN5(VAR22) + (VAR22 < 0);
                    int VAR36 = 2 * FUN5(VAR24) + (VAR24 < 0);
                    FUN2(&VAR2->VAR28, VAR4->VAR29[VAR34 + 2], FUN5(VAR20) - 1, VAR34 - 4);
                    FUN6(&VAR2->VAR28, &VAR4->VAR29[0][16 + 1 + 3 + VAR37[VAR35 & 0xFF] + 3 * VAR37[VAR36 & 0xFF]], VAR20 < 0);
                }
            }
        }
    }
    return 0;
}
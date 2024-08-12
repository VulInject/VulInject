static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    const int VAR8 = 3;
    for (VAR7 = 0; VAR7 < VAR2->VAR9; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
        {
            if (VAR2->VAR11 && !VAR2->VAR12)
                VAR2->VAR12 = VAR2->VAR11;
            if (VAR6 == 0 || VAR7 == 0 || VAR2->VAR13)
            {
                for (VAR5 = 0; VAR5 < VAR8; VAR5++)
                {
                    VAR14 *VAR15;
                    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
                    VAR16 = VAR2->VAR24[VAR5];
                    VAR21 = VAR2->VAR25[VAR5];
                    VAR17 = VAR2->VAR26[VAR5];
                    VAR18 = VAR2->VAR27[VAR5];
                    VAR19 = 0;
                    VAR20 = 0;
                    VAR23 = VAR2->VAR23[VAR21];
                    for (VAR22 = 0; VAR22 < VAR16; VAR22++)
                    {
                        int VAR28, VAR29;
                        VAR15 = VAR2->VAR30.VAR31[VAR21] + (VAR23 * (VAR18 * VAR7 + VAR20)) + (VAR17 * VAR6 + VAR19);
                        if (VAR20 == 0 && VAR7 == 0)
                        {
                            if (VAR19 == 0 && VAR6 == 0)
                            {
                                VAR28 = 128 << VAR4;
                            }
                            else
                            {
                                VAR28 = VAR15[-1];
                            }
                        }
                        else
                        {
                            if (VAR19 == 0 && VAR6 == 0)
                            {
                                VAR28 = VAR15[-VAR23];
                            }
                            else
                            {
                                FUN2(VAR28, VAR15[-VAR23 - 1], VAR15[-VAR23], VAR15[-1], VAR3);
                            }
                        }
                        if (VAR2->VAR13 && VAR2->VAR32)
                            VAR15 += VAR23 >> 1;
                        VAR29 = FUN3(VAR2, VAR2->VAR33[VAR5]);
                        if (VAR29 == 0xFFFF)
                            return -1;
                        *VAR15 = VAR28 + (VAR29 << VAR4);
                        if (++VAR19 == VAR17)
                        {
                            VAR19 = 0;
                            VAR20++;
                        }
                    }
                }
            }
            else
            {
                for (VAR5 = 0; VAR5 < VAR8; VAR5++)
                {
                    VAR14 *VAR15;
                    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR29;
                    VAR16 = VAR2->VAR24[VAR5];
                    VAR21 = VAR2->VAR25[VAR5];
                    VAR17 = VAR2->VAR26[VAR5];
                    VAR18 = VAR2->VAR27[VAR5];
                    VAR19 = 0;
                    VAR20 = 0;
                    VAR23 = VAR2->VAR23[VAR21];
                    for (VAR22 = 0; VAR22 < VAR16; VAR22++)
                    {
                        int VAR28;
                        VAR15 = VAR2->VAR30.VAR31[VAR21] + (VAR23 * (VAR18 * VAR7 + VAR20)) + (VAR17 * VAR6 + VAR19);
                        FUN2(VAR28, VAR15[-VAR23 - 1], VAR15[-VAR23], VAR15[-1], VAR3);
                        VAR29 = FUN3(VAR2, VAR2->VAR33[VAR5]);
                        if (VAR29 == 0xFFFF)
                            return -1;
                        *VAR15 = VAR28 + (VAR29 << VAR4);
                        if (++VAR19 == VAR17)
                        {
                            VAR19 = 0;
                            VAR20++;
                        }
                    }
                }
            }
            if (VAR2->VAR11 && !--VAR2->VAR12)
            {
                FUN4(&VAR2->VAR34);
                FUN5(&VAR2->VAR34, 16);
            }
        }
    }
    return 0;
}
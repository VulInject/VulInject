static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    const int VAR7 = VAR4->VAR8;
    const int VAR9 = VAR4->VAR10;
    int VAR11, VAR12;
    if (1)
    {
        int VAR13, VAR14;
        VAR15 *VAR16 = VAR4->VAR17;
        VAR15 *VAR18 = NULL;
        VAR15 *VAR19 = VAR16;
        VAR15 *VAR20 = VAR5 ? VAR5->VAR17 : NULL;
        VAR15 *VAR21 = VAR20;
        VAR14 = FUN2(&VAR2->VAR22, VAR4->VAR23[30], 0);
        if (VAR14-- > 0)
            VAR13 = FUN2(&VAR2->VAR22, VAR4->VAR23[1], 3);
        else
            VAR13 = VAR24;
        for (VAR12 = 0; VAR12 < VAR9; VAR12++)
        {
            int VAR25 = 0;
            int VAR26 = 0, VAR27 = 0, VAR28 = 0;
            if (VAR12 && VAR18->VAR11 == 0)
            {
                VAR28 = VAR18->VAR29;
            }
            for (VAR11 = 0; VAR11 < VAR7; VAR11++)
            {
                int VAR30 = 0;
                const int VAR31 = VAR25;
                VAR26 = VAR27;
                VAR27 = VAR28;
                if (VAR12)
                {
                    if (VAR18->VAR11 <= VAR11)
                        VAR18++;
                    if (VAR18->VAR11 == VAR11 + 1)
                        VAR28 = VAR18->VAR29;
                    else
                        VAR28 = 0;
                }
                if (VAR20)
                {
                    if (VAR11 >> 1 > VAR20->VAR11)
                    {
                        VAR20++;
                    }
                    if (VAR11 >> 1 == VAR20->VAR11)
                    {
                        VAR30 = VAR20->VAR29;
                    }
                }
                if (VAR31 | VAR26 | VAR27 | VAR28 | VAR30)
                {
                    int VAR32 = FUN3(3 * (VAR31 >> 1) + (VAR26 >> 1) + (VAR27 & ~1) + (VAR28 >> 1) + (VAR30 >> 1));
                    VAR25 = FUN4(&VAR2->VAR22, &VAR4->VAR23[0][VAR32]);
                    if (VAR25)
                    {
                        VAR25 = 2 * (FUN2(&VAR2->VAR22, VAR4->VAR23[VAR32 + 2], VAR32 - 4) + 1);
                        VAR25 += FUN4(&VAR2->VAR22, &VAR4->VAR23[0][16 + 1 + 3 + VAR33[VAR31 & 0xFF] + 3 * VAR33[VAR27 & 0xFF]]);
                        VAR16->VAR11 = VAR11;
                        (VAR16++)->VAR29 = VAR25;
                    }
                }
                else
                {
                    if (!VAR13)
                    {
                        if (VAR14-- > 0)
                            VAR13 = FUN2(&VAR2->VAR22, VAR4->VAR23[1], 3);
                        else
                            VAR13 = VAR24;
                        VAR25 = 2 * (FUN2(&VAR2->VAR22, VAR4->VAR23[0 + 2], 0 - 4) + 1);
                        VAR25 += FUN4(&VAR2->VAR22, &VAR4->VAR23[0][16 + 1 + 3]);
                        VAR16->VAR11 = VAR11;
                        (VAR16++)->VAR29 = VAR25;
                    }
                    else
                    {
                        int VAR34;
                        VAR13--;
                        VAR25 = 0;
                        if (VAR12)
                            VAR34 = FUN5(VAR13, VAR18->VAR11 - VAR11 - 2);
                        else
                            VAR34 = FUN5(VAR13, VAR7 - VAR11 - 1);
                        if (VAR20)
                            VAR34 = FUN5(VAR34, 2 * VAR20->VAR11 - VAR11 - 1);
                        VAR11 += VAR34;
                        VAR13 -= VAR34;
                    }
                }
            }
            (VAR16++)->VAR11 = VAR7 + 1;
            VAR18 = VAR19;
            VAR19 = VAR16;
            if (VAR20)
            {
                if (VAR12 & 1)
                {
                    while (VAR20->VAR11 != VAR5->VAR8 + 1)
                        VAR20++;
                    VAR20++;
                    VAR21 = VAR20;
                }
                else
                {
                    VAR20 = VAR21;
                }
            }
        }
        (VAR16++)->VAR11 = VAR7 + 1;
    }
}
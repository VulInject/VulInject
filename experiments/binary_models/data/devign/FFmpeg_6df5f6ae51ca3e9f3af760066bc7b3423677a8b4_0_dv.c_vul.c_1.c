static inline void FUN1(VAR1 *VAR2, int *VAR3)
{
    int VAR4[5];
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR1 *VAR11;
    VAR4[4] = 1 << 24;
    do
    {
        VAR11 = VAR2;
        for (VAR5 = 0; VAR5 < 5; VAR5++)
        {
            if (!VAR3[VAR5])
                continue;
            VAR3[VAR5]--;
            VAR4[VAR5] = 0;
            for (VAR6 = 0; VAR6 < 6; VAR6++, VAR11++)
            {
                for (VAR8 = 0; VAR8 < 4; VAR8++)
                {
                    if (VAR11->VAR12[VAR8] != VAR13[VAR3[VAR5] + VAR14[VAR11->VAR15]][VAR8])
                    {
                        VAR11->VAR16[VAR8] = 1;
                        VAR11->VAR12[VAR8]++;
                        VAR9 = VAR11->VAR9[VAR8];
                        for (VAR7 = VAR11->VAR17[VAR9]; VAR7 < VAR18[VAR8 + 1]; VAR7 = VAR11->VAR17[VAR7])
                        {
                            VAR11->VAR19[VAR7] >>= 1;
                            if (VAR11->VAR19[VAR7])
                            {
                                VAR11->VAR16[VAR8] += FUN2(VAR7 - VAR9 - 1, VAR11->VAR19[VAR7]);
                                VAR9 = VAR7;
                            }
                            else
                            {
                                if (VAR11->VAR17[VAR7] >= VAR18[VAR8 + 1] && VAR11->VAR17[VAR7] < 64)
                                {
                                    for (VAR10 = VAR8 + 1; VAR11->VAR17[VAR7] >= VAR18[VAR10 + 1]; VAR10++)
                                        ;
                                    assert(VAR10 < 4);
                                    assert(VAR11->VAR19[VAR11->VAR17[VAR7]]);
                                    VAR11->VAR16[VAR10] += FUN2(VAR11->VAR17[VAR7] - VAR9 - 1, VAR11->VAR19[VAR11->VAR17[VAR7]]) - FUN2(VAR11->VAR17[VAR7] - VAR7 - 1, VAR11->VAR19[VAR11->VAR17[VAR7]]);
                                }
                                VAR11->VAR17[VAR9] = VAR11->VAR17[VAR7];
                            }
                        }
                        VAR11->VAR9[VAR8 + 1] = VAR9;
                    }
                    VAR4[VAR5] += VAR11->VAR16[VAR8];
                }
            }
            if (VAR20 >= VAR4[0] + VAR4[1] + VAR4[2] + VAR4[3] + VAR4[4])
                return;
        }
    } while (VAR3[0] | VAR3[1] | VAR3[2] | VAR3[3] | VAR3[4]);
    for (VAR8 = 2; VAR8 == 2 || VAR20 < VAR4[0]; VAR8 += VAR8)
    {
        VAR11 = VAR2;
        VAR4[0] = 5 * 6 * 4;
        for (VAR6 = 0; VAR6 < 6 * 5; VAR6++, VAR11++)
        {
            VAR9 = VAR11->VAR9[0];
            for (VAR7 = VAR11->VAR17[VAR9]; VAR7 < 64; VAR7 = VAR11->VAR17[VAR7])
            {
                if (VAR11->VAR19[VAR7] < VAR8 && VAR11->VAR19[VAR7] > -VAR8)
                {
                    VAR11->VAR17[VAR9] = VAR11->VAR17[VAR7];
                }
                else
                {
                    VAR4[0] += FUN2(VAR7 - VAR9 - 1, VAR11->VAR19[VAR7]);
                    VAR9 = VAR7;
                }
            }
        }
    }
}
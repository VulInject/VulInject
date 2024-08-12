static void FUN1(VAR1 *VAR2, const int VAR3, const VAR1 *VAR4, const int VAR5, const int VAR6, const int VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11;
    FilterParam VAR12 = *VAR9;
    const int VAR13 = VAR12.VAR14 / 2;
    const VAR1 *const VAR15[VAR16] = {VAR4};
    int VAR17[VAR16] = {VAR5};
    VAR1 *VAR18[VAR16] = {VAR12.VAR19};
    int VAR20[VAR16] = {VAR12.VAR21};
    FUN2(VAR12.VAR22, VAR15, VAR17, 0, VAR7, VAR18, VAR20);
    int VAR23;
    VAR23 = VAR12.VAR24[VAR25 / 2 + VAR26 - VAR12.VAR19[VAR27 + VAR28 * VAR12.VAR21]] * VAR12.VAR29[VAR30 + VAR31 * VAR12.VAR32];
    VAR33 += VAR4[VAR27 + VAR28 * VAR5] * VAR23;
    VAR34 += VAR23;
}
while (0)
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            int VAR33 = 0;
            int VAR34 = 0;
            int VAR31;
            const int VAR26 = VAR12.VAR19[VAR10 + VAR11 * VAR12.VAR21];
            if (VAR10 >= VAR13 && VAR10 < VAR6 - VAR13)
            {
                for (VAR31 = 0; VAR31 < VAR13 * 2 + 1; VAR31++)
                {
                    int VAR30;
                    int VAR28 = VAR11 + VAR31 - VAR13;
                    VAR28 = FUN3(VAR28, VAR7 - 1);
                    for (VAR30 = 0; VAR30 < VAR13 * 2 + 1; VAR30++)
                    {
                        const int VAR27 = VAR10 + VAR30 - VAR13;
                        VAR35;
                    }
                }
            }
            else
            {
                for (VAR31 = 0; VAR31 < VAR13 * 2 + 1; VAR31++)
                {
                    int VAR30;
                    int VAR28 = VAR11 + VAR31 - VAR13;
                    VAR28 = FUN3(VAR28, VAR7 - 1);
                    for (VAR30 = 0; VAR30 < VAR13 * 2 + 1; VAR30++)
                    {
                        int VAR27 = VAR10 + VAR30 - VAR13;
                        VAR27 = FUN3(VAR27, VAR6 - 1);
                        VAR35;
                    }
                }
            }
            VAR2[VAR10 + VAR11 * VAR3] = (VAR33 + VAR34 / 2) / VAR34;
        }
    }
}
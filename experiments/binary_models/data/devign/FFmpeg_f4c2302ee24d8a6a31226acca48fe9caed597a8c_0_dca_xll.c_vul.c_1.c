static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR4->VAR8[VAR5];
    int VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
    {
        VAR15 *VAR16 = VAR7->VAR17[VAR11];
        int VAR18 = VAR7->VAR19[VAR11];
        if (VAR18 > 0)
        {
            int VAR20[VAR21];
            for (VAR12 = 0; VAR12 < VAR18; VAR12++)
            {
                int VAR22 = VAR7->VAR23[VAR11][VAR12];
                for (VAR13 = 0; VAR13 < (VAR12 + 1) / 2; VAR13++)
                {
                    int VAR24 = VAR20[VAR13];
                    int VAR25 = VAR20[VAR12 - VAR13 - 1];
                    VAR20[VAR13] = VAR24 + FUN2(VAR22, VAR25);
                    VAR20[VAR12 - VAR13 - 1] = VAR25 + FUN2(VAR22, VAR24);
                }
                VAR20[VAR12] = VAR22;
            }
            for (VAR12 = 0; VAR12 < VAR9 - VAR18; VAR12++)
            {
                int64_t VAR26 = 0;
                for (VAR13 = 0; VAR13 < VAR18; VAR13++)
                    VAR26 += (VAR27)VAR16[VAR12 + VAR13] * VAR20[VAR18 - VAR13 - 1];
                VAR16[VAR12 + VAR13] -= (VAR28)FUN3(FUN4(VAR26));
            }
        }
        else
        {
            for (VAR12 = 0; VAR12 < VAR7->VAR29[VAR11]; VAR12++)
                for (VAR13 = 1; VAR13 < VAR9; VAR13++)
                    VAR16[VAR13] += VAR16[VAR13 - 1];
        }
    }
    if (VAR7->VAR30)
    {
        VAR15 *VAR31[VAR32];
        for (VAR11 = 0; VAR11 < VAR4->VAR14 / 2; VAR11++)
        {
            int VAR20 = VAR7->VAR33[VAR11];
            if (VAR20)
            {
                VAR2->VAR34->FUN5(VAR7->VAR17[VAR11 * 2 + 1], VAR7->VAR17[VAR11 * 2], VAR20, VAR9);
            }
        }
        for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
            VAR31[VAR11] = VAR7->VAR17[VAR11];
        for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
            VAR7->VAR17[VAR7->VAR35[VAR11]] = VAR31[VAR11];
    }
    if (VAR4->VAR36 == 1)
        for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
            VAR2->VAR37[VAR4->VAR38[VAR11]] = VAR7->VAR17[VAR11];
}
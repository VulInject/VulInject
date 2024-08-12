static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14[VAR15];
    const int *VAR16;
    if (VAR2->VAR17)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR18; VAR5++)
            VAR2->VAR19[VAR5].VAR20 = VAR21;
    }
    else
    {
        VAR10 = FUN2(VAR4, 3);
        if (VAR10 == 0)
        {
            for (VAR5 = 0; VAR5 < 8; VAR5++)
                VAR14[VAR5] = VAR22;
            for (VAR5 = 0; VAR5 < 8; VAR5++)
                VAR14[FUN2(VAR4, 3)] = VAR5;
            VAR16 = VAR14;
        }
        else
            VAR16 = VAR23[VAR10 - 1];
        for (VAR9 = 0; VAR9 < VAR2->VAR24; VAR9++)
        {
            for (VAR8 = 0; VAR8 < VAR2->VAR25; VAR8++)
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    int VAR26 = 2 * VAR8 + (VAR6 >> 1);
                    int VAR27 = 2 * VAR9 + (((VAR6 >> 1) + VAR6) & 1);
                    int VAR28 = 0;
                    VAR11 = VAR27 * VAR2->VAR29 + VAR26;
                    if (VAR26 >= VAR2->VAR29 || VAR27 >= VAR2->VAR30)
                        continue;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR12 = VAR31 * VAR2->VAR32 + VAR33;
                        if (VAR2->VAR19[VAR12].VAR20 != VAR34)
                            break;
                    }
                    if (VAR7 == 4)
                    {
                        VAR2->VAR35[VAR11] = VAR22;
                        continue;
                    }
                    if (VAR10 == 7)
                        VAR13 = FUN2(VAR4, 3);
                    else
                        VAR13 = VAR16[FUN3(VAR4, VAR2->VAR36.VAR37, 3, 3)];
                    VAR2->VAR35[VAR11] = VAR13;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR12 = VAR31 * VAR2->VAR32 + VAR33;
                        if (VAR2->VAR19[VAR12].VAR20 != VAR34)
                            VAR2->VAR19[VAR12].VAR20 = VAR13;
                    }
                    for (VAR7 = 0; VAR7 < 2; VAR7++)
                    {
                        VAR12 = VAR2->VAR38[VAR7 + 1] + VAR27 * (VAR2->VAR32 >> 1) + VAR26;
                        if (VAR2->VAR19[VAR12].VAR20 != VAR34)
                            VAR2->VAR19[VAR12].VAR20 = VAR13;
                    }
                }
            }
        }
    }
    return 0;
}
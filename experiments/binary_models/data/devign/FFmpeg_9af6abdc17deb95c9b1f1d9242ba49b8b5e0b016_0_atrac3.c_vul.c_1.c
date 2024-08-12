static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19[4], VAR20[8];
    float *VAR21;
    float VAR22;
    int VAR23 = 0;
    VAR10 = FUN2(VAR2, 5);
    if (VAR10 == 0)
        return 0;
    VAR11 = FUN2(VAR2, 2);
    if (VAR11 == 2)
        VAR12 = VAR11 & 1;
    for (VAR6 = 0; VAR6 < VAR10; VAR6++)
    {
        for (VAR9 = 0; VAR9 <= VAR5; VAR9++)
            VAR19[VAR9] = FUN3(VAR2);
        VAR13 = FUN2(VAR2, 3);
        VAR17 = FUN2(VAR2, 3);
        if (VAR17 <= 1)
            if (VAR11 == 3)
                VAR12 = FUN3(VAR2);
        for (VAR7 = 0; VAR7 < (VAR5 + 1) * 4; VAR7++)
        {
            if (VAR19[VAR7 >> 2] == 0)
                continue;
            VAR18 = FUN2(VAR2, 3);
            for (VAR8 = 0; VAR8 < VAR18; VAR8++)
            {
                VAR14 = FUN2(VAR2, 6);
                VAR4[VAR23].VAR24 = VAR7 * 64 + (FUN2(VAR2, 6));
                VAR16 = VAR25 - VAR4[VAR23].VAR24;
                VAR15 = VAR13 + 1;
                VAR15 = FUN4(VAR16, VAR15);
                VAR22 = VAR26[VAR14] * VAR27[VAR17];
                FUN5(VAR2, VAR17, VAR12, VAR20, VAR15);
                VAR4[VAR23].VAR28 = VAR15;
                VAR21 = VAR4[VAR23].VAR29;
                for (VAR9 = 0; VAR9 < VAR15; VAR9++)
                    VAR21[VAR9] = VAR20[VAR9] * VAR22;
                VAR23++;
            }
        }
    }
    return VAR23;
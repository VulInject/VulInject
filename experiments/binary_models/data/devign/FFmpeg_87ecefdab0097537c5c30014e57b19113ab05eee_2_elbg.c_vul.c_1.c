void FUN1(int *VAR1, int VAR2, int VAR3, int *VAR4, int VAR5, int VAR6, int *VAR7, VAR8 *VAR9)
{
    int VAR10;
    elbg_data VAR11;
    VAR12 *VAR13 = &VAR11;
    int VAR14, VAR15, VAR16, VAR17, VAR18 = 0;
    int *VAR19 = FUN2(VAR3 * sizeof(int));
    int *VAR20 = FUN2(VAR5 * sizeof(int));
    VAR21 *VAR22 = FUN2(VAR3 * sizeof(VAR21));
    VAR21 *VAR23;
    int VAR24, VAR25 = 0;
    VAR13->VAR26 = VAR27;
    VAR13->VAR2 = VAR2;
    VAR13->VAR5 = VAR5;
    VAR13->VAR4 = VAR4;
    VAR13->VAR28 = FUN2(VAR5 * sizeof(VAR21 *));
    VAR13->VAR29 = FUN2(VAR5 * sizeof(int));
    VAR13->VAR30 = VAR7;
    VAR13->VAR1 = VAR1;
    VAR13->VAR31 = FUN2(VAR5 * sizeof(int));
    VAR13->VAR32 = FUN2(5 * VAR2 * sizeof(int));
    VAR13->VAR9 = VAR9;
    do
    {
        VAR23 = VAR22;
        VAR17 = VAR13->VAR26;
        VAR18++;
        memset(VAR13->VAR29, 0, VAR5 * sizeof(int));
        memset(VAR13->VAR28, 0, VAR5 * sizeof(VAR21 *));
        VAR13->VAR26 = 0;
        for (VAR14 = 0; VAR14 < VAR3; VAR14++)
        {
            VAR24 = FUN3(VAR13->VAR1 + VAR14 * VAR13->VAR2, VAR13->VAR4 + VAR25 * VAR13->VAR2, VAR2, VAR27);
            for (VAR16 = 0; VAR16 < VAR13->VAR5; VAR16++)
            {
                VAR10 = FUN3(VAR13->VAR1 + VAR14 * VAR13->VAR2, VAR13->VAR4 + VAR16 * VAR13->VAR2, VAR2, VAR24);
                if (VAR10 < VAR24)
                {
                    VAR24 = VAR10;
                    VAR25 = VAR16;
                }
            }
            VAR13->VAR30[VAR14] = VAR25;
            VAR19[VAR14] = VAR24;
            VAR13->VAR26 += VAR19[VAR14];
            VAR13->VAR29[VAR13->VAR30[VAR14]] += VAR19[VAR14];
            VAR23->VAR33 = VAR14;
            VAR23->VAR34 = VAR13->VAR28[VAR13->VAR30[VAR14]];
            VAR13->VAR28[VAR13->VAR30[VAR14]] = VAR23;
            VAR23++;
        }
        FUN4(VAR13);
        memset(VAR20, 0, VAR5 * sizeof(int));
        memset(VAR13->VAR4, 0, VAR13->VAR5 * VAR2 * sizeof(int));
        for (VAR14 = 0; VAR14 < VAR3; VAR14++)
        {
            VAR20[VAR13->VAR30[VAR14]]++;
            for (VAR15 = 0; VAR15 < VAR13->VAR2; VAR15++)
                VAR13->VAR4[VAR13->VAR30[VAR14] * VAR13->VAR2 + VAR15] += VAR13->VAR1[VAR14 * VAR13->VAR2 + VAR15];
        }
        for (VAR14 = 0; VAR14 < VAR13->VAR5; VAR14++)
            FUN5(VAR13->VAR4 + VAR14 * VAR13->VAR2, VAR13->VAR4 + VAR14 * VAR13->VAR2, VAR20[VAR14], VAR13->VAR2);
    } while (((VAR17 - VAR13->VAR26) > VAR35 * VAR13->VAR26) && (VAR18 < VAR6));
    FUN6(VAR19);
    FUN6(VAR20);
    FUN6(VAR13->VAR29);
    FUN6(VAR22);
    FUN6(VAR13->VAR28);
    FUN6(VAR13->VAR31);
    FUN6(VAR13->VAR32);
}
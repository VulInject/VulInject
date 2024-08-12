static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    int VAR12;
    int VAR13 = 0;
    DCTELEM VAR14 = 0;
    VAR15 *VAR16;
    int VAR17;
    VAR18 *VAR19 = VAR2->VAR20.VAR21;
    int *VAR22 = VAR2->VAR22;
    VAR15 *VAR23 = VAR2->VAR23;
    VAR18 *VAR24 = VAR2->VAR24;
    FUN2(*VAR25)
    [2] = VAR6->VAR6;
    if ((VAR8 >= VAR2->VAR26) || (VAR9 >= VAR2->VAR26))
    {
        FUN3(VAR2->VAR27, VAR28, "", VAR8, VAR9);
        return 0;
    }
    for (VAR11 = VAR8; VAR11 <= VAR9; VAR11++)
    {
        int VAR29 = VAR22[VAR11];
        if (VAR24[VAR29] > VAR7)
            continue;
        VAR16 = &VAR23[VAR29];
        if (!VAR10)
        {
            VAR12 = FUN4(VAR4, VAR25, 5, 3);
            if (VAR12 <= 6)
            {
                VAR10 = VAR30[VAR12];
                if (VAR31[VAR12])
                    VAR10 += FUN5(VAR4, VAR31[VAR12]);
                VAR14 = VAR13 = 0;
            }
            else
            {
                VAR17 = VAR32[VAR12];
                if (!VAR17)
                    VAR14 = VAR33[VAR12][0];
                else
                    VAR14 = VAR33[VAR12][FUN5(VAR4, VAR17)];
                VAR13 = VAR34[VAR12];
                if (VAR35[VAR12])
                    VAR13 += FUN5(VAR4, VAR35[VAR12]);
            }
        }
        if (!VAR10)
        {
            VAR24[VAR29] += VAR13;
            if (VAR24[VAR29] < 64)
            {
                VAR16->VAR36->VAR14 = VAR14;
                VAR16->VAR36->VAR37 = VAR19[VAR24[VAR29]++];
                VAR16->VAR36->VAR38 = VAR2->VAR36;
                VAR2->VAR36->VAR38 = NULL;
                VAR16->VAR36 = VAR2->VAR36++;
            }
        }
        else
        {
            VAR24[VAR29] |= 128;
            VAR10--;
        }
    }
    return VAR10;
}
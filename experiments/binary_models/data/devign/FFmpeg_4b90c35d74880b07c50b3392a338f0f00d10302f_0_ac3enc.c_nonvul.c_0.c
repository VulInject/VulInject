static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    VAR8 = 0;
    for (VAR3 = 0; VAR3 < VAR16; VAR3++)
    {
        VAR17 *VAR18 = &VAR2->VAR19[VAR3];
        for (VAR4 = 0; VAR4 < VAR2->VAR20; VAR4++)
        {
            int VAR21 = VAR2->VAR21[VAR4][VAR3];
            if (VAR21 == VAR22)
                continue;
            VAR6 = VAR21 + (VAR21 == VAR23);
            VAR7 = VAR24[VAR21 - 1][VAR2->VAR25[VAR4]];
            VAR8 += 4 + (VAR7 * 7);
            VAR10 = VAR18->VAR26[VAR4];
            VAR15 = *VAR10++;
            VAR18->VAR27[VAR4][0] = VAR15;
            for (VAR5 = 1; VAR5 <= VAR7; VAR5++)
            {
                VAR14 = VAR15;
                VAR15 = VAR10[0];
                VAR10 += VAR6;
                VAR11 = VAR15 - VAR14 + 2;
                VAR14 = VAR15;
                VAR15 = VAR10[0];
                VAR10 += VAR6;
                VAR12 = VAR15 - VAR14 + 2;
                VAR14 = VAR15;
                VAR15 = VAR10[0];
                VAR10 += VAR6;
                VAR13 = VAR15 - VAR14 + 2;
                VAR18->VAR27[VAR4][VAR5] = ((VAR11 * 5 + VAR12) * 5) + VAR13;
            }
        }
    }
    VAR2->VAR28 = VAR8;
}
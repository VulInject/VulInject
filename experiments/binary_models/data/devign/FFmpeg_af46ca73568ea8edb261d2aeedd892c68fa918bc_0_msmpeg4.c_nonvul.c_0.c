static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = 0, VAR5 = VAR6;
    int VAR7 = 0, VAR8 = VAR6;
    for (VAR3 = 0; VAR3 < 3; VAR3++)
    {
        int VAR9;
        int VAR10 = 0;
        int VAR11 = 0;
        if (VAR3 > 0)
        {
            VAR11++;
            VAR10++;
        }
        for (VAR9 = 0; VAR9 <= VAR12; VAR9++)
        {
            int VAR13;
            for (VAR13 = 0; VAR13 <= VAR14; VAR13++)
            {
                int VAR15;
                const int VAR16 = VAR11 + VAR10;
                for (VAR15 = 0; VAR15 < 2; VAR15++)
                {
                    int VAR17 = VAR2->VAR18[0][0][VAR9][VAR13][VAR15] + VAR2->VAR18[0][1][VAR9][VAR13][VAR15];
                    int VAR19 = VAR2->VAR18[1][0][VAR9][VAR13][VAR15];
                    int VAR20 = VAR2->VAR18[1][1][VAR9][VAR13][VAR15];
                    if (VAR2->VAR21 == VAR22)
                    {
                        VAR11 += VAR19 * VAR23[VAR3][VAR9][VAR13][VAR15];
                        VAR10 += VAR20 * VAR23[VAR3 + 3][VAR9][VAR13][VAR15];
                    }
                    else
                    {
                        VAR11 += VAR19 * VAR23[VAR3][VAR9][VAR13][VAR15] + VAR20 * VAR23[VAR3 + 3][VAR9][VAR13][VAR15] + VAR17 * VAR23[VAR3 + 3][VAR9][VAR13][VAR15];
                    }
                }
                if (VAR16 == VAR11 + VAR10)
                    break;
            }
        }
        if (VAR11 < VAR5)
        {
            VAR5 = VAR11;
            VAR4 = VAR3;
        }
        if (VAR10 < VAR8)
        {
            VAR8 = VAR10;
            VAR7 = VAR3;
        }
    }
    if (VAR2->VAR21 == VAR24)
        VAR7 = VAR4;
    memset(VAR2->VAR18, 0, sizeof(int) * (VAR12 + 1) * (VAR14 + 1) * 2 * 2 * 2);
    VAR2->VAR25 = VAR4;
    VAR2->VAR26 = VAR7;
    if (VAR2->VAR21 != VAR2->VAR27)
    {
        VAR2->VAR25 = 2;
        if (VAR2->VAR21 == VAR22)
            VAR2->VAR26 = 1;
        else
            VAR2->VAR26 = 2;
    }
}
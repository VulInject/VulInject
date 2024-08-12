int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int *VAR5, int VAR6, VAR7 *VAR8, int VAR9, void *VAR10)
{
    int VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    VAR8->VAR16 = 0;
    VAR8->VAR17 = 0;
    VAR8->VAR18 = FUN2(VAR2);
    if (VAR4->VAR19)
        VAR8->VAR20 = FUN2(VAR2);
    if (VAR8->VAR18 > 7U)
    {
        FUN3(VAR10, VAR21, "", VAR8->VAR18);
        VAR8->VAR18 = 0;
    }
    if (VAR8->VAR20 > 7U)
    {
        FUN3(VAR10, VAR21, "", VAR8->VAR20);
        VAR8->VAR20 = 0;
    }
    VAR14 = 1 << VAR8->VAR18;
    VAR15 = 1 << VAR8->VAR20;
    for (VAR11 = 0; VAR11 < 2; VAR11++)
    {
        VAR8->VAR22[VAR11] = 0;
        VAR8->VAR23[VAR11] = 0;
        for (VAR12 = 0; VAR12 < VAR5[VAR11]; VAR12++)
        {
            int VAR22, VAR23;
            VAR22 = FUN4(VAR2);
            if (VAR22)
            {
                VAR8->VAR24[VAR12][VAR11][0] = FUN5(VAR2);
                VAR8->VAR24[VAR12][VAR11][1] = FUN5(VAR2);
                if ((VAR25)VAR8->VAR24[VAR12][VAR11][0] != VAR8->VAR24[VAR12][VAR11][0] || (VAR25)VAR8->VAR24[VAR12][VAR11][1] != VAR8->VAR24[VAR12][VAR11][1])
                    goto VAR26;
                if (VAR8->VAR24[VAR12][VAR11][0] != VAR14 || VAR8->VAR24[VAR12][VAR11][1] != 0)
                {
                    VAR8->VAR16 = 1;
                    VAR8->VAR22[VAR11] = 1;
                }
            }
            else
            {
                VAR8->VAR24[VAR12][VAR11][0] = VAR14;
                VAR8->VAR24[VAR12][VAR11][1] = 0;
            }
            if (VAR4->VAR19)
            {
                VAR23 = FUN4(VAR2);
                if (VAR23)
                {
                    int VAR13;
                    for (VAR13 = 0; VAR13 < 2; VAR13++)
                    {
                        VAR8->VAR27[VAR12][VAR11][VAR13][0] = FUN5(VAR2);
                        VAR8->VAR27[VAR12][VAR11][VAR13][1] = FUN5(VAR2);
                        if ((VAR25)VAR8->VAR27[VAR12][VAR11][VAR13][0] != VAR8->VAR27[VAR12][VAR11][VAR13][0] || (VAR25)VAR8->VAR27[VAR12][VAR11][VAR13][1] != VAR8->VAR27[VAR12][VAR11][VAR13][1])
                            goto VAR26;
                        if (VAR8->VAR27[VAR12][VAR11][VAR13][0] != VAR15 || VAR8->VAR27[VAR12][VAR11][VAR13][1] != 0)
                        {
                            VAR8->VAR17 = 1;
                            VAR8->VAR23[VAR11] = 1;
                        }
                    }
                }
                else
                {
                    int VAR13;
                    for (VAR13 = 0; VAR13 < 2; VAR13++)
                    {
                        VAR8->VAR27[VAR12][VAR11][VAR13][0] = VAR15;
                        VAR8->VAR27[VAR12][VAR11][VAR13][1] = 0;
                    }
                }
            }
            if (VAR9 == VAR28)
            {
                VAR8->VAR24[16 + 2 * VAR12][VAR11][0] = VAR8->VAR24[16 + 2 * VAR12 + 1][VAR11][0] = VAR8->VAR24[VAR12][VAR11][0];
                VAR8->VAR24[16 + 2 * VAR12][VAR11][1] = VAR8->VAR24[16 + 2 * VAR12 + 1][VAR11][1] = VAR8->VAR24[VAR12][VAR11][1];
                for (VAR13 = 0; VAR13 < 2; VAR13++)
                {
                    VAR8->VAR27[16 + 2 * VAR12][VAR11][VAR13][0] = VAR8->VAR27[16 + 2 * VAR12 + 1][VAR11][VAR13][0] = VAR8->VAR27[VAR12][VAR11][VAR13][0];
                    VAR8->VAR27[16 + 2 * VAR12][VAR11][VAR13][1] = VAR8->VAR27[16 + 2 * VAR12 + 1][VAR11][VAR13][1] = VAR8->VAR27[VAR12][VAR11][VAR13][1];
                }
            }
        }
        if (VAR6 != VAR29)
            break;
    }
    VAR8->VAR16 = VAR8->VAR16 || VAR8->VAR17;
    return 0;
VAR26:
    FUN6(VAR10, "");
    return VAR30;
}
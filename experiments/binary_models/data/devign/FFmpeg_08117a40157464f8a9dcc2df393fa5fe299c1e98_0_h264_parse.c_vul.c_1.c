int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int *VAR5, int VAR6, VAR7 *VAR8, void *VAR9)
{
    int VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    VAR8->VAR15 = 0;
    VAR8->VAR16 = 0;
    VAR8->VAR17 = FUN2(VAR2);
    if (VAR4->VAR18)
        VAR8->VAR19 = FUN2(VAR2);
    if (VAR8->VAR17 > 7U)
    {
        FUN3(VAR9, VAR20, "", VAR8->VAR17);
        VAR8->VAR17 = 0;
    }
    if (VAR8->VAR19 > 7U)
    {
        FUN3(VAR9, VAR20, "", VAR8->VAR19);
        VAR8->VAR19 = 0;
    }
    VAR13 = 1 << VAR8->VAR17;
    VAR14 = 1 << VAR8->VAR19;
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        VAR8->VAR21[VAR10] = 0;
        VAR8->VAR22[VAR10] = 0;
        for (VAR11 = 0; VAR11 < VAR5[VAR10]; VAR11++)
        {
            int VAR21, VAR22;
            VAR21 = FUN4(VAR2);
            if (VAR21)
            {
                VAR8->VAR23[VAR11][VAR10][0] = FUN5(VAR2);
                VAR8->VAR23[VAR11][VAR10][1] = FUN5(VAR2);
                if (VAR8->VAR23[VAR11][VAR10][0] != VAR13 || VAR8->VAR23[VAR11][VAR10][1] != 0)
                {
                    VAR8->VAR15 = 1;
                    VAR8->VAR21[VAR10] = 1;
                }
            }
            else
            {
                VAR8->VAR23[VAR11][VAR10][0] = VAR13;
                VAR8->VAR23[VAR11][VAR10][1] = 0;
            }
            if (VAR4->VAR18)
            {
                VAR22 = FUN4(VAR2);
                if (VAR22)
                {
                    int VAR12;
                    for (VAR12 = 0; VAR12 < 2; VAR12++)
                    {
                        VAR8->VAR24[VAR11][VAR10][VAR12][0] = FUN5(VAR2);
                        VAR8->VAR24[VAR11][VAR10][VAR12][1] = FUN5(VAR2);
                        if ((VAR25)VAR8->VAR24[VAR11][VAR10][VAR12][0] != VAR8->VAR24[VAR11][VAR10][VAR12][0] || (VAR25)VAR8->VAR24[VAR11][VAR10][VAR12][1] != VAR8->VAR24[VAR11][VAR10][VAR12][1])
                            if (VAR8->VAR24[VAR11][VAR10][VAR12][0] != VAR14 || VAR8->VAR24[VAR11][VAR10][VAR12][1] != 0)
                            {
                                VAR8->VAR16 = 1;
                                VAR8->VAR22[VAR10] = 1;
                            }
                    }
                }
                else
                {
                    int VAR12;
                    for (VAR12 = 0; VAR12 < 2; VAR12++)
                    {
                        VAR8->VAR24[VAR11][VAR10][VAR12][0] = VAR14;
                        VAR8->VAR24[VAR11][VAR10][VAR12][1] = 0;
                    }
                }
            }
            VAR8->VAR23[16 + 2 * VAR11][VAR10][0] = VAR8->VAR23[16 + 2 * VAR11 + 1][VAR10][0] = VAR8->VAR23[VAR11][VAR10][0];
            VAR8->VAR23[16 + 2 * VAR11][VAR10][1] = VAR8->VAR23[16 + 2 * VAR11 + 1][VAR10][1] = VAR8->VAR23[VAR11][VAR10][1];
            for (VAR12 = 0; VAR12 < 2; VAR12++)
            {
                VAR8->VAR24[16 + 2 * VAR11][VAR10][VAR12][0] = VAR8->VAR24[16 + 2 * VAR11 + 1][VAR10][VAR12][0] = VAR8->VAR24[VAR11][VAR10][VAR12][0];
                VAR8->VAR24[16 + 2 * VAR11][VAR10][VAR12][1] = VAR8->VAR24[16 + 2 * VAR11 + 1][VAR10][VAR12][1] = VAR8->VAR24[VAR11][VAR10][VAR12][1];
            }
        }
        if (VAR6 != VAR26)
            break;
    }
    VAR8->VAR15 = VAR8->VAR15 || VAR8->VAR16;
    return 0;
VAR27:
    FUN6(VAR9, "");
    return VAR28;
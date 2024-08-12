static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8;
    int VAR9[6];
    int VAR10[6];
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15;
    int VAR16;
    FUN2("");
    if (VAR2->VAR17)
    {
        FUN2("");
    }
    else
    {
        memset(VAR9, 0, 6 * sizeof(int));
        memset(VAR10, 0, 6 * sizeof(int));
        VAR8 = FUN3(VAR4, 1);
        FUN4("", (VAR8 == 0) ? "" : "");
        for (VAR5 = 0; VAR5 < VAR2->VAR18; VAR5++)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR15 = VAR2->VAR19[VAR5 * 4 + VAR6];
                if ((VAR15 == -1) || (!VAR2->VAR20[VAR15]))
                    continue;
                VAR16 = VAR2->VAR21[VAR15 * 6];
                switch (VAR2->VAR22[VAR16].VAR23)
                {
                case VAR24:
                case VAR25:
                    if (VAR8 == 0)
                    {
                        VAR9[0] = FUN5(VAR4);
                        VAR10[0] = FUN5(VAR4);
                    }
                    else
                    {
                        VAR9[0] = FUN6(VAR4);
                        VAR10[0] = FUN6(VAR4);
                    }
                    for (VAR7 = 1; VAR7 < 6; VAR7++)
                    {
                        VAR9[VAR7] = VAR9[0];
                        VAR10[VAR7] = VAR10[0];
                    }
                    if (VAR2->VAR22[VAR16].VAR23 == VAR24)
                    {
                        VAR13 = VAR11;
                        VAR14 = VAR12;
                        VAR11 = VAR9[0];
                        VAR12 = VAR10[0];
                    }
                    break;
                case VAR26:
                    VAR9[4] = VAR10[4] = 0;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        if (VAR8 == 0)
                        {
                            VAR9[VAR7] = FUN5(VAR4);
                            VAR10[VAR7] = FUN5(VAR4);
                        }
                        else
                        {
                            VAR9[VAR7] = FUN6(VAR4);
                            VAR10[VAR7] = FUN6(VAR4);
                        }
                        VAR9[4] += VAR9[VAR7];
                        VAR10[4] += VAR10[VAR7];
                    }
                    if (VAR9[4] >= 0)
                        VAR9[4] = (VAR9[4] + 2) / 4;
                    else
                        VAR9[4] = (VAR9[4] - 2) / 4;
                    VAR9[5] = VAR9[4];
                    if (VAR10[4] >= 0)
                        VAR10[4] = (VAR10[4] + 2) / 4;
                    else
                        VAR10[4] = (VAR10[4] - 2) / 4;
                    VAR10[5] = VAR10[4];
                    VAR13 = VAR11;
                    VAR14 = VAR12;
                    VAR11 = VAR9[3];
                    VAR12 = VAR10[3];
                    break;
                case VAR27:
                    VAR9[0] = VAR11;
                    VAR10[0] = VAR12;
                    for (VAR7 = 1; VAR7 < 6; VAR7++)
                    {
                        VAR9[VAR7] = VAR9[0];
                        VAR10[VAR7] = VAR10[0];
                    }
                    break;
                case VAR28:
                    VAR9[0] = VAR13;
                    VAR10[0] = VAR14;
                    for (VAR7 = 1; VAR7 < 6; VAR7++)
                    {
                        VAR9[VAR7] = VAR9[0];
                        VAR10[VAR7] = VAR10[0];
                    }
                    VAR13 = VAR11;
                    VAR14 = VAR12;
                    VAR11 = VAR9[0];
                    VAR12 = VAR10[0];
                    break;
                }
                FUN4("", VAR16, VAR2->VAR22[VAR16].VAR23);
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                {
                    VAR16 = VAR2->VAR21[VAR15 * 6 + VAR7];
                    VAR2->VAR22[VAR16].VAR9 = VAR9[VAR7];
                    VAR2->VAR22[VAR16].VAR9 = VAR10[VAR7];
                    FUN4("", VAR7, VAR16, VAR9[VAR7], VAR10[VAR7]);
                }
            }
        }
    }
}
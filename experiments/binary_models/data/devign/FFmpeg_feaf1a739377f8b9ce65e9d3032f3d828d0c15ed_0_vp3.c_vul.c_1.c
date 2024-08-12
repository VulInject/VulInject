static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
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
        VAR8 = FUN3(VAR4);
        FUN4("", (VAR8 == 0) ? "" : "");
        for (VAR5 = 0; VAR5 < VAR2->VAR18; VAR5++)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR15 = VAR2->VAR19[VAR5 * 4 + VAR6];
                if ((VAR15 == -1) || (VAR2->VAR20[VAR15] == VAR21))
                    continue;
                if (VAR15 >= VAR2->VAR22)
                {
                    FUN5(VAR2->VAR23, VAR24, "", VAR15, VAR2->VAR22);
                    return 1;
                }
                VAR16 = VAR2->VAR25[VAR15 * 6];
                if (VAR16 >= VAR2->VAR26)
                {
                    FUN5(VAR2->VAR23, VAR24, "", VAR16, VAR2->VAR26);
                    return 1;
                }
                switch (VAR2->VAR20[VAR15])
                {
                case VAR27:
                case VAR28:
                    if (VAR8 == 0)
                    {
                        VAR9[0] = VAR29[FUN6(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                        VAR10[0] = VAR29[FUN6(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                    }
                    else
                    {
                        VAR9[0] = VAR32[FUN7(VAR4, 6)];
                        VAR10[0] = VAR32[FUN7(VAR4, 6)];
                    }
                    for (VAR7 = 1; VAR7 < 6; VAR7++)
                    {
                        VAR9[VAR7] = VAR9[0];
                        VAR10[VAR7] = VAR10[0];
                    }
                    if (VAR2->VAR20[VAR15] == VAR27)
                    {
                        VAR13 = VAR11;
                        VAR14 = VAR12;
                        VAR11 = VAR9[0];
                        VAR12 = VAR10[0];
                    }
                    break;
                case VAR33:
                    VAR13 = VAR11;
                    VAR14 = VAR12;
                    VAR9[4] = VAR10[4] = 0;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        if (VAR8 == 0)
                        {
                            VAR9[VAR7] = VAR29[FUN6(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                            VAR10[VAR7] = VAR29[FUN6(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                        }
                        else
                        {
                            VAR9[VAR7] = VAR32[FUN7(VAR4, 6)];
                            VAR10[VAR7] = VAR32[FUN7(VAR4, 6)];
                        }
                        VAR11 = VAR9[VAR7];
                        VAR12 = VAR10[VAR7];
                        VAR9[4] += VAR9[VAR7];
                        VAR10[4] += VAR10[VAR7];
                    }
                    VAR9[5] = VAR9[4] = FUN8(VAR9[4], 2);
                    VAR10[5] = VAR10[4] = FUN8(VAR10[4], 2);
                    break;
                case VAR34:
                    VAR9[0] = VAR11;
                    VAR10[0] = VAR12;
                    for (VAR7 = 1; VAR7 < 6; VAR7++)
                    {
                        VAR9[VAR7] = VAR9[0];
                        VAR10[VAR7] = VAR10[0];
                    }
                    break;
                case VAR35:
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
                default:
                    memset(VAR9, 0, 6 * sizeof(int));
                    memset(VAR10, 0, 6 * sizeof(int));
                    break;
                }
                FUN4("", VAR16, VAR2->VAR20[VAR15]);
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                {
                    VAR16 = VAR2->VAR25[VAR15 * 6 + VAR7];
                    if (VAR16 == -1)
                        continue;
                    if (VAR16 >= VAR2->VAR26)
                    {
                        FUN5(VAR2->VAR23, VAR24, "", VAR16, VAR2->VAR26);
                        return 1;
                    }
                    VAR2->VAR36[VAR16].VAR9 = VAR9[VAR7];
                    VAR2->VAR36[VAR16].VAR10 = VAR10[VAR7];
                    FUN4("", VAR7, VAR16, VAR9[VAR7], VAR10[VAR7]);
                }
            }
        }
    }
    return 0;
}
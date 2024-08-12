static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6[4], int VAR7)
{
    int VAR8, VAR9;
    const int VAR10 = FUN2(VAR7 + VAR2->VAR11, 0, 51);
    const int VAR12 = VAR13[VAR10];
    const int VAR14 = VAR15[FUN2(VAR7 + VAR2->VAR16, 0, 51)];
    const int VAR17 = VAR5;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        if (VAR6[VAR8] == 0)
        {
            VAR4 += 4;
            continue;
        }
        if (VAR6[VAR8] < 4)
        {
            const int VAR18 = VAR19[VAR10][VAR6[VAR8] - 1];
            for (VAR9 = 0; VAR9 < 4; VAR9++)
            {
                const int VAR20 = VAR4[-1 * VAR17];
                const int VAR21 = VAR4[-2 * VAR17];
                const int VAR22 = VAR4[-3 * VAR17];
                const int VAR23 = VAR4[0];
                const int VAR24 = VAR4[1 * VAR17];
                const int VAR25 = VAR4[2 * VAR17];
                if (FUN3(VAR20 - VAR23) < VAR12 && FUN3(VAR21 - VAR20) < VAR14 && FUN3(VAR24 - VAR23) < VAR14)
                {
                    int VAR26 = VAR18;
                    int VAR27;
                    if (FUN3(VAR22 - VAR20) < VAR14)
                    {
                        VAR4[-2 * VAR17] = VAR21 + FUN2((VAR22 + ((VAR20 + VAR23 + 1) >> 1) - (VAR21 << 1)) >> 1, -VAR18, VAR18);
                        VAR26++;
                    }
                    if (FUN3(VAR25 - VAR23) < VAR14)
                    {
                        VAR4[VAR17] = VAR24 + FUN2((VAR25 + ((VAR20 + VAR23 + 1) >> 1) - (VAR24 << 1)) >> 1, -VAR18, VAR18);
                        VAR26++;
                    }
                    VAR27 = FUN2((((VAR23 - VAR20) << 2) + (VAR21 - VAR24) + 4) >> 3, -VAR26, VAR26);
                    VAR4[-VAR17] = FUN4(VAR20 + VAR27);
                    VAR4[0] = FUN4(VAR23 - VAR27);
                }
                VAR4++;
            }
        }
        else
        {
            for (VAR9 = 0; VAR9 < 4; VAR9++)
            {
                const int VAR20 = VAR4[-1 * VAR17];
                const int VAR21 = VAR4[-2 * VAR17];
                const int VAR22 = VAR4[-3 * VAR17];
                const int VAR23 = VAR4[0];
                const int VAR24 = VAR4[1 * VAR17];
                const int VAR25 = VAR4[2 * VAR17];
                if (FUN3(VAR20 - VAR23) < VAR12 && FUN3(VAR21 - VAR20) < VAR14 && FUN3(VAR24 - VAR23) < VAR14)
                {
                    const int VAR28 = VAR4[-4 * VAR17];
                    const int VAR29 = VAR4[3 * VAR17];
                    if (FUN3(VAR20 - VAR23) < ((VAR12 >> 2) + 2))
                    {
                        if (FUN3(VAR22 - VAR20) < VAR14)
                        {
                            VAR4[-1 * VAR17] = (VAR22 + 2 * VAR21 + 2 * VAR20 + 2 * VAR23 + VAR24 + 4) >> 3;
                            VAR4[-2 * VAR17] = (VAR22 + VAR21 + VAR20 + VAR23 + 2) >> 2;
                            VAR4[-3 * VAR17] = (2 * VAR28 + 3 * VAR22 + VAR21 + VAR20 + VAR23 + 4) >> 3;
                        }
                        else
                        {
                            VAR4[-1 * VAR17] = (2 * VAR21 + VAR20 + VAR24 + 2) >> 2;
                        }
                        if (FUN3(VAR25 - VAR23) < VAR14)
                        {
                            VAR4[0 * VAR17] = (VAR21 + 2 * VAR20 + 2 * VAR23 + 2 * VAR24 + VAR25 + 4) >> 3;
                            VAR4[1 * VAR17] = (VAR20 + VAR23 + VAR24 + VAR25 + 2) >> 2;
                            VAR4[2 * VAR17] = (2 * VAR29 + 3 * VAR25 + VAR24 + VAR23 + VAR20 + 4) >> 3;
                        }
                        else
                        {
                            VAR4[0 * VAR17] = (2 * VAR24 + VAR23 + VAR21 + 2) >> 2;
                        }
                    }
                    else
                    {
                        VAR4[-1 * VAR17] = (2 * VAR21 + VAR20 + VAR24 + 2) >> 2;
                        VAR4[0 * VAR17] = (2 * VAR24 + VAR23 + VAR21 + 2) >> 2;
                    }
                }
                VAR4++;
            }
        }
    }
}
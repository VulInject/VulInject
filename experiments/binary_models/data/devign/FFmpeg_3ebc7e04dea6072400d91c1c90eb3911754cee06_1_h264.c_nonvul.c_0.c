static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6[4], int VAR7)
{
    int VAR8, VAR9;
    const int VAR10 = FUN2(VAR7 + VAR2->VAR11, 0, 51);
    const int VAR12 = VAR13[VAR10];
    const int VAR14 = VAR15[FUN2(VAR7 + VAR2->VAR16, 0, 51)];
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        if (VAR6[VAR8] == 0)
        {
            VAR4 += 4 * VAR5;
            continue;
        }
        if (VAR6[VAR8] < 4)
        {
            const int VAR17 = VAR18[VAR10][VAR6[VAR8] - 1];
            for (VAR9 = 0; VAR9 < 4; VAR9++)
            {
                const int VAR19 = VAR4[-1];
                const int VAR20 = VAR4[-2];
                const int VAR21 = VAR4[-3];
                const int VAR22 = VAR4[0];
                const int VAR23 = VAR4[1];
                const int VAR24 = VAR4[2];
                if (FUN3(VAR19 - VAR22) < VAR12 && FUN3(VAR20 - VAR19) < VAR14 && FUN3(VAR23 - VAR22) < VAR14)
                {
                    int VAR25 = VAR17;
                    int VAR26;
                    if (FUN3(VAR21 - VAR19) < VAR14)
                    {
                        VAR4[-2] = VAR20 + FUN2((VAR21 + ((VAR19 + VAR22 + 1) >> 1) - (VAR20 << 1)) >> 1, -VAR17, VAR17);
                        VAR25++;
                    }
                    if (FUN3(VAR24 - VAR22) < VAR14)
                    {
                        VAR4[1] = VAR23 + FUN2((VAR24 + ((VAR19 + VAR22 + 1) >> 1) - (VAR23 << 1)) >> 1, -VAR17, VAR17);
                        VAR25++;
                    }
                    VAR26 = FUN2((((VAR22 - VAR19) << 2) + (VAR20 - VAR23) + 4) >> 3, -VAR25, VAR25);
                    VAR4[-1] = FUN4(VAR19 + VAR26);
                    VAR4[0] = FUN4(VAR22 - VAR26);
                }
                VAR4 += VAR5;
            }
        }
        else
        {
            for (VAR9 = 0; VAR9 < 4; VAR9++)
            {
                const int VAR19 = VAR4[-1];
                const int VAR20 = VAR4[-2];
                const int VAR21 = VAR4[-3];
                const int VAR22 = VAR4[0];
                const int VAR23 = VAR4[1];
                const int VAR24 = VAR4[2];
                if (FUN3(VAR19 - VAR22) < VAR12 && FUN3(VAR20 - VAR19) < VAR14 && FUN3(VAR23 - VAR22) < VAR14)
                {
                    if (FUN3(VAR19 - VAR22) < ((VAR12 >> 2) + 2))
                    {
                        if (FUN3(VAR21 - VAR19) < VAR14)
                        {
                            const int VAR27 = VAR4[-4];
                            VAR4[-1] = (VAR21 + 2 * VAR20 + 2 * VAR19 + 2 * VAR22 + VAR23 + 4) >> 3;
                            VAR4[-2] = (VAR21 + VAR20 + VAR19 + VAR22 + 2) >> 2;
                            VAR4[-3] = (2 * VAR27 + 3 * VAR21 + VAR20 + VAR19 + VAR22 + 4) >> 3;
                        }
                        else
                        {
                            VAR4[-1] = (2 * VAR20 + VAR19 + VAR23 + 2) >> 2;
                        }
                        if (FUN3(VAR24 - VAR22) < VAR14)
                        {
                            const int VAR28 = VAR4[3];
                            VAR4[0] = (VAR20 + 2 * VAR19 + 2 * VAR22 + 2 * VAR23 + VAR24 + 4) >> 3;
                            VAR4[1] = (VAR19 + VAR22 + VAR23 + VAR24 + 2) >> 2;
                            VAR4[2] = (2 * VAR28 + 3 * VAR24 + VAR23 + VAR22 + VAR19 + 4) >> 3;
                        }
                        else
                        {
                            VAR4[0] = (2 * VAR23 + VAR22 + VAR20 + 2) >> 2;
                        }
                    }
                    else
                    {
                        VAR4[-1] = (2 * VAR20 + VAR19 + VAR23 + 2) >> 2;
                        VAR4[0] = (2 * VAR23 + VAR22 + VAR20 + 2) >> 2;
                    }
                }
                VAR4 += VAR5;
            }
        }
    }
}
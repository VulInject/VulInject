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
            VAR4 += 2;
            continue;
        }
        if (VAR6[VAR8] < 4)
        {
            int VAR18 = VAR19[VAR10][VAR6[VAR8] - 1] + 1;
            for (VAR9 = 0; VAR9 < 2; VAR9++)
            {
                const int VAR20 = VAR4[-1 * VAR17];
                const int VAR21 = VAR4[-2 * VAR17];
                const int VAR22 = VAR4[0];
                const int VAR23 = VAR4[1 * VAR17];
                if (FUN3(VAR20 - VAR22) < VAR12 && FUN3(VAR21 - VAR20) < VAR14 && FUN3(VAR23 - VAR22) < VAR14)
                {
                    int VAR24 = FUN2((((VAR22 - VAR20) << 2) + (VAR21 - VAR23) + 4) >> 3, -VAR18, VAR18);
                    VAR4[-VAR17] = FUN4(VAR20 + VAR24);
                    VAR4[0] = FUN4(VAR22 - VAR24);
                }
                VAR4++;
            }
        }
        else
        {
            for (VAR9 = 0; VAR9 < 2; VAR9++)
            {
                const int VAR20 = VAR4[-1 * VAR17];
                const int VAR21 = VAR4[-2 * VAR17];
                const int VAR22 = VAR4[0];
                const int VAR23 = VAR4[1 * VAR17];
                if (FUN3(VAR20 - VAR22) < VAR12 && FUN3(VAR21 - VAR20) < VAR14 && FUN3(VAR23 - VAR22) < VAR14)
                {
                    VAR4[-VAR17] = (2 * VAR21 + VAR20 + VAR23 + 2) >> 2;
                    VAR4[0] = (2 * VAR23 + VAR22 + VAR21 + 2) >> 2;
                }
                VAR4++;
            }
        }
    }
}
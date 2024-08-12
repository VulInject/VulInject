static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[4], int VAR7, int VAR8)
{
    int VAR9;
    int VAR10 = VAR8 + VAR2->VAR11;
    int VAR12 = VAR13[VAR10];
    int VAR14 = VAR15[VAR8 + VAR2->VAR16];
    for (VAR9 = 0; VAR9 < 8; VAR9++, VAR4 += VAR5)
    {
        const int VAR17 = (VAR9 >> 1) * VAR7;
        if (VAR6[VAR17] == 0)
        {
            continue;
        }
        if (VAR6[VAR17] < 4)
        {
            const int VAR18 = VAR19[VAR10][VAR6[VAR17]];
            const int VAR20 = VAR4[-1];
            const int VAR21 = VAR4[-2];
            const int VAR22 = VAR4[-3];
            const int VAR23 = VAR4[0];
            const int VAR24 = VAR4[1];
            const int VAR25 = VAR4[2];
            if (FUN2(VAR20 - VAR23) < VAR12 && FUN2(VAR21 - VAR20) < VAR14 && FUN2(VAR24 - VAR23) < VAR14)
            {
                int VAR26 = VAR18;
                int VAR27;
                if (FUN2(VAR22 - VAR20) < VAR14)
                {
                    if (VAR18)
                        VAR4[-2] = VAR21 + FUN3((VAR22 + ((VAR20 + VAR23 + 1) >> 1) - (VAR21 << 1)) >> 1, -VAR18, VAR18);
                    VAR26++;
                }
                if (FUN2(VAR25 - VAR23) < VAR14)
                {
                    if (VAR18)
                        VAR4[1] = VAR24 + FUN3((VAR25 + ((VAR20 + VAR23 + 1) >> 1) - (VAR24 << 1)) >> 1, -VAR18, VAR18);
                    VAR26++;
                }
                VAR27 = FUN3((((VAR23 - VAR20) << 2) + (VAR21 - VAR24) + 4) >> 3, -VAR26, VAR26);
                VAR4[-1] = FUN4(VAR20 + VAR27);
                VAR4[0] = FUN4(VAR23 - VAR27);
                FUN5(VAR2->VAR28.VAR29, "", VAR9, VAR8[VAR30], VAR10, VAR12, VAR14, VAR26, VAR6[VAR17], VAR4[-3], VAR21, VAR20, VAR23, VAR24, VAR4[2], VAR21, VAR4[-1], VAR4[0], VAR24);
            }
        }
        else
        {
            const int VAR20 = VAR4[-1];
            const int VAR21 = VAR4[-2];
            const int VAR22 = VAR4[-3];
            const int VAR23 = VAR4[0];
            const int VAR24 = VAR4[1];
            const int VAR25 = VAR4[2];
            if (FUN2(VAR20 - VAR23) < VAR12 && FUN2(VAR21 - VAR20) < VAR14 && FUN2(VAR24 - VAR23) < VAR14)
            {
                if (FUN2(VAR20 - VAR23) < ((VAR12 >> 2) + 2))
                {
                    if (FUN2(VAR22 - VAR20) < VAR14)
                    {
                        const int VAR31 = VAR4[-4];
                        VAR4[-1] = (VAR22 + 2 * VAR21 + 2 * VAR20 + 2 * VAR23 + VAR24 + 4) >> 3;
                        VAR4[-2] = (VAR22 + VAR21 + VAR20 + VAR23 + 2) >> 2;
                        VAR4[-3] = (2 * VAR31 + 3 * VAR22 + VAR21 + VAR20 + VAR23 + 4) >> 3;
                    }
                    else
                    {
                        VAR4[-1] = (2 * VAR21 + VAR20 + VAR24 + 2) >> 2;
                    }
                    if (FUN2(VAR25 - VAR23) < VAR14)
                    {
                        const int VAR32 = VAR4[3];
                        VAR4[0] = (VAR21 + 2 * VAR20 + 2 * VAR23 + 2 * VAR24 + VAR25 + 4) >> 3;
                        VAR4[1] = (VAR20 + VAR23 + VAR24 + VAR25 + 2) >> 2;
                        VAR4[2] = (2 * VAR32 + 3 * VAR25 + VAR24 + VAR23 + VAR20 + 4) >> 3;
                    }
                    else
                    {
                        VAR4[0] = (2 * VAR24 + VAR23 + VAR21 + 2) >> 2;
                    }
                }
                else
                {
                    VAR4[-1] = (2 * VAR21 + VAR20 + VAR24 + 2) >> 2;
                    VAR4[0] = (2 * VAR24 + VAR23 + VAR21 + 2) >> 2;
                }
                FUN5(VAR2->VAR28.VAR29, "", VAR9, VAR8[VAR30], VAR10, VAR12, VAR14, VAR22, VAR21, VAR20, VAR23, VAR24, VAR25, VAR4[-3], VAR4[-2], VAR4[-1], VAR4[0], VAR4[1], VAR4[2]);
            }
        }
    }
}
static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7, VAR5 *VAR8, int VAR9, const VAR5 *VAR10, int VAR11, int VAR12, int VAR13)
{
    GetBitContext VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22;
    int VAR23;
    int VAR24;
    if ((VAR24 = FUN2(&VAR2->VAR25, VAR7 + VAR26)) < 0)
        return VAR24;
    FUN3(VAR6, VAR7, VAR2->VAR25, &VAR23);
    memset(VAR2->VAR25 + VAR23, 0, VAR26);
    if ((VAR24 = FUN4(&VAR14, VAR2->VAR25, VAR23)) < 0)
        return VAR24;
    VAR3 = FUN5(VAR3, 16);
    VAR15 = VAR3 >> 4;
    VAR16 = (VAR4 + 15) >> 4;
    if (!VAR12)
        VAR12 = VAR15 * VAR16 * 4;
    for (VAR19 = 0; VAR19 < 3; VAR19++)
        VAR2->VAR27[VAR19] = 1024;
    VAR21 = VAR22 = 0;
    VAR2->VAR28.FUN6(VAR2->VAR29[0]);
    for (VAR18 = 0; VAR18 < VAR16; VAR18++)
    {
        for (VAR17 = 0; VAR17 < VAR15; VAR17++)
        {
            if (VAR10 && !VAR10[VAR17 * 2] && !VAR10[VAR17 * 2 + 1] && !VAR10[VAR17 * 2 + VAR11] && !VAR10[VAR17 * 2 + 1 + VAR11])
            {
                VAR21 += 16;
                continue;
            }
            for (VAR20 = 0; VAR20 < 2; VAR20++)
            {
                for (VAR19 = 0; VAR19 < 2; VAR19++)
                {
                    if (VAR10 && !VAR10[VAR17 * 2 + VAR19 + VAR20 * VAR11])
                        continue;
                    VAR12--;
                    if ((VAR24 = FUN7(VAR2, &VAR14, 0, VAR2->VAR29[VAR19 + VAR20 * 2])) != 0)
                        return VAR24;
                    VAR2->VAR30.FUN8(VAR2->VAR29[VAR19 + VAR20 * 2]);
                }
            }
            for (VAR19 = 1; VAR19 < 3; VAR19++)
            {
                if ((VAR24 = FUN7(VAR2, &VAR14, VAR19, VAR2->VAR29[VAR19 + 3])) != 0)
                    return VAR24;
                VAR2->VAR30.FUN8(VAR2->VAR29[VAR19 + 3]);
            }
            for (VAR20 = 0; VAR20 < 16; VAR20++)
            {
                VAR5 *VAR31 = VAR8 + VAR21 * 3 + (VAR22 + VAR20) * VAR9;
                for (VAR19 = 0; VAR19 < 16; VAR19++)
                {
                    int VAR32, VAR33, VAR34;
                    VAR32 = VAR2->VAR29[(VAR20 >> 3) * 2 + (VAR19 >> 3)][(VAR19 & 7) + (VAR20 & 7) * 8];
                    VAR33 = VAR2->VAR29[4 ^ VAR13][(VAR19 >> 1) + (VAR20 >> 1) * 8] - 128;
                    VAR34 = VAR2->VAR29[5 ^ VAR13][(VAR19 >> 1) + (VAR20 >> 1) * 8] - 128;
                    FUN9(VAR31 + VAR19 * 3, VAR32, VAR33, VAR34);
                }
            }
            if (!VAR12)
                return 0;
            VAR21 += 16;
        }
        VAR21 = 0;
        VAR22 += 16;
        if (VAR10)
            VAR10 += VAR11 * 2;
    }
    return 0;
}
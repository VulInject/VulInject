static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, const VAR5 *VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    GetBitContext VAR16;
    int VAR17;
    const VAR5 *VAR18;
    if (VAR7 - VAR6 < 12)
        return VAR19;
    VAR8 = FUN2(&VAR6[0]);
    VAR9 = FUN2(&VAR6[2]);
    VAR10 = FUN2(&VAR6[4]);
    VAR11 = FUN2(&VAR6[6]);
    VAR6 += 12;
    if (VAR11 > VAR20 || !VAR11)
    {
        FUN3(VAR2->VAR21, VAR22, "", VAR11);
        return VAR19;
    }
    if (VAR8 > VAR2->VAR8)
    {
        if (FUN4(&VAR2->VAR23, VAR8, sizeof(*VAR2->VAR23)))
        {
            VAR2->VAR8 = 0;
            return FUN5(VAR24);
        }
        VAR2->VAR8 = VAR8;
    }
    if (VAR10 > VAR2->VAR10)
    {
        if (FUN4(&VAR2->VAR25, VAR10, sizeof(*VAR2->VAR25)))
        {
            VAR2->VAR10 = 0;
            return FUN5(VAR24);
        }
        VAR2->VAR10 = VAR10;
    }
    VAR17 = (VAR8 * 2 * 10 + 31) & ~31;
    if (VAR7 - VAR6 < (VAR17 >> 3) + 16 * VAR9 + 8 * VAR10)
        return VAR19;
    FUN6(&VAR16, VAR6, VAR17);
    for (VAR12 = 0; VAR12 < VAR8; VAR12++)
    {
        VAR2->VAR23[VAR12][0] = FUN7(&VAR16, 10);
        VAR2->VAR23[VAR12][1] = FUN7(&VAR16, 10);
    }
    VAR6 += VAR17 >> 3;
    VAR18 = VAR6;
    VAR6 += VAR9 * 16;
    FUN6(&VAR16, VAR6, (VAR7 - VAR6) << 3);
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        int VAR26[4];
        for (VAR13 = 0; VAR13 < 4; VAR13++)
            VAR26[VAR13] = FUN8(&VAR16, 8);
        for (VAR13 = 0; VAR13 < 16; VAR13++)
            VAR2->VAR25[VAR12][15 - VAR13] = VAR26[FUN8(&VAR16, 2)];
    }
    if (FUN9(&VAR16) < VAR11 * (VAR2->VAR21->VAR27 / 4) * (VAR2->VAR21->VAR28 / 4))
        return VAR19;
    for (VAR15 = 0; VAR15 < VAR2->VAR21->VAR27 / 4; VAR15++)
        for (VAR14 = 0; VAR14 < VAR2->VAR21->VAR28 / 4; VAR14++)
        {
            unsigned int VAR29 = FUN8(&VAR16, VAR11);
            const VAR5 *VAR30;
            int VAR31;
            if (VAR29 < VAR8)
            {
                int VAR32 = VAR14 * 4 + VAR2->VAR23[VAR29][0];
                int VAR33 = VAR15 * 4 + VAR2->VAR23[VAR29][1];
                if (VAR32 < 0 || VAR32 + 4 > VAR2->VAR21->VAR28 || VAR33 < 0 || VAR33 + 4 > VAR2->VAR21->VAR27)
                {
                    FUN3(VAR2->VAR21, VAR22, "", VAR32, VAR33);
                    continue;
                }
                VAR30 = VAR2->VAR34.VAR35[0] + VAR32 + VAR33 * VAR2->VAR34.VAR36[0];
                VAR31 = VAR2->VAR34.VAR36[0];
            }
            else
            {
                int VAR37 = VAR29 - VAR8;
                if (VAR37 < VAR9)
                    VAR30 = VAR18 + 16 * VAR37;
                else if (VAR37 - VAR9 < VAR10)
                    VAR30 = VAR2->VAR25[VAR37 - VAR9];
                else
                    continue;
                VAR31 = 4;
            }
            for (VAR13 = 0; VAR13 < 4; VAR13++)
                for (VAR12 = 0; VAR12 < 4; VAR12++)
                    VAR4->VAR35[0][(VAR15 * 4 + VAR13) * VAR4->VAR36[0] + (VAR14 * 4 + VAR12)] = VAR30[VAR13 * VAR31 + VAR12];
        }
    return 0;
}
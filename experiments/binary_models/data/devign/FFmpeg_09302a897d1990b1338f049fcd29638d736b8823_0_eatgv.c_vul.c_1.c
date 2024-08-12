static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    unsigned char *VAR6 = VAR2->VAR7.VAR8[0] + VAR2->VAR9->VAR10 * VAR2->VAR7.VAR11[0];
    int VAR12;
    int VAR13;
    int VAR14;
    int VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    GetBitContext VAR20;
    int VAR21;
    const unsigned char *VAR22;
    if (VAR4 + 12 > VAR5)
        return -1;
    VAR12 = FUN2(&VAR4[0]);
    VAR13 = FUN2(&VAR4[2]);
    VAR14 = FUN2(&VAR4[4]);
    VAR15 = FUN2(&VAR4[6]);
    VAR4 += 12;
    if (VAR12 > VAR2->VAR12)
    {
        VAR2->VAR23 = FUN3(VAR2->VAR23, VAR12 * 2 * sizeof(int));
        VAR2->VAR12 = VAR12;
    }
    if (VAR14 > VAR2->VAR14)
    {
        VAR2->VAR24 = FUN3(VAR2->VAR24, VAR14 * 16 * sizeof(unsigned char));
        VAR2->VAR14 = VAR14;
    }
    VAR21 = (VAR12 * 2 * 10 + 31) & ~31;
    if (VAR4 + (VAR21 >> 3) + 16 * VAR13 + 8 * VAR14 > VAR5)
        return -1;
    FUN4(&VAR20, VAR4, VAR21);
    for (VAR16 = 0; VAR16 < VAR12; VAR16++)
    {
        VAR2->VAR23[VAR16][0] = FUN5(&VAR20, 10);
        VAR2->VAR23[VAR16][1] = FUN5(&VAR20, 10);
    }
    VAR4 += VAR21 >> 3;
    VAR22 = VAR4;
    VAR4 += VAR13 * 16;
    FUN4(&VAR20, VAR4, (VAR5 - VAR4) << 3);
    for (VAR16 = 0; VAR16 < VAR14; VAR16++)
    {
        int VAR25[4];
        for (VAR17 = 0; VAR17 < 4; VAR17++)
            VAR25[VAR17] = FUN6(&VAR20, 8);
        for (VAR17 = 0; VAR17 < 16; VAR17++)
            VAR2->VAR24[VAR16][15 - VAR17] = VAR25[FUN6(&VAR20, 2)];
    }
    if (FUN7(&VAR20) < VAR15 * (VAR2->VAR9->VAR26 / 4) * (VAR2->VAR9->VAR10 / 4))
        return -1;
    for (VAR19 = 0; VAR19 < VAR2->VAR9->VAR26 / 4; VAR19++)
        for (VAR18 = 0; VAR18 < VAR2->VAR9->VAR10 / 4; VAR18++)
        {
            unsigned int VAR27 = FUN6(&VAR20, VAR15);
            const unsigned char *VAR28;
            int VAR29;
            if (VAR27 < VAR12)
            {
                VAR28 = VAR2->VAR7.VAR8[0] + (VAR19 * 4 + VAR2->VAR23[VAR27][1]) * VAR2->VAR7.VAR11[0] + VAR18 * 4 + VAR2->VAR23[VAR27][0];
                VAR29 = VAR2->VAR7.VAR11[0];
                if (VAR28 + 3 * VAR29 + 3 >= VAR6)
                    continue;
            }
            else
            {
                int VAR30 = VAR27 - VAR12;
                if (VAR30 < VAR13)
                    VAR28 = VAR22 + 16 * VAR30;
                else if (VAR30 - VAR13 < VAR14)
                    VAR28 = VAR2->VAR24[VAR30 - VAR13];
                else
                    continue;
                VAR29 = 4;
            }
            for (VAR17 = 0; VAR17 < 4; VAR17++)
                for (VAR16 = 0; VAR16 < 4; VAR16++)
                    VAR2->VAR31.VAR8[0][(VAR19 * 4 + VAR17) * VAR2->VAR31.VAR11[0] + (VAR18 * 4 + VAR16)] = VAR28[VAR17 * VAR29 + VAR16];
        }
    return 0;
}
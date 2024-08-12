static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    GetBitContext VAR14;
    int VAR15;
    const unsigned char *VAR16;
    if (VAR4 + 12 > VAR5)
        return -1;
    VAR6 = FUN2(&VAR4[0]);
    VAR7 = FUN2(&VAR4[2]);
    VAR8 = FUN2(&VAR4[4]);
    VAR9 = FUN2(&VAR4[6]);
    VAR4 += 12;
    if (VAR6 > VAR2->VAR6)
    {
        VAR2->VAR17 = FUN3(VAR2->VAR17, VAR6 * 2 * sizeof(int));
        VAR2->VAR6 = VAR6;
    }
    if (VAR8 > VAR2->VAR8)
    {
        VAR2->VAR18 = FUN3(VAR2->VAR18, VAR8 * 16 * sizeof(unsigned char));
        VAR2->VAR8 = VAR8;
    }
    VAR15 = (VAR6 * 2 * 10 + 31) & ~31;
    if (VAR4 + (VAR15 >> 3) + 16 * VAR7 + 8 * VAR8 > VAR5)
        return -1;
    FUN4(&VAR14, VAR4, VAR15);
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        VAR2->VAR17[VAR10][0] = FUN5(&VAR14, 10);
        VAR2->VAR17[VAR10][1] = FUN5(&VAR14, 10);
    }
    VAR4 += VAR15 >> 3;
    VAR16 = VAR4;
    VAR4 += VAR7 * 16;
    FUN4(&VAR14, VAR4, (VAR5 - VAR4) << 3);
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        int VAR19[4];
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            VAR19[VAR11] = FUN6(&VAR14, 8);
        for (VAR11 = 0; VAR11 < 16; VAR11++)
            VAR2->VAR18[VAR10][15 - VAR11] = VAR19[FUN6(&VAR14, 2)];
    }
    if (FUN7(&VAR14) < VAR9 * (VAR2->VAR20->VAR21 / 4) * (VAR2->VAR20->VAR22 / 4))
        return -1;
    for (VAR13 = 0; VAR13 < VAR2->VAR20->VAR21 / 4; VAR13++)
        for (VAR12 = 0; VAR12 < VAR2->VAR20->VAR22 / 4; VAR12++)
        {
            unsigned int VAR23 = FUN6(&VAR14, VAR9);
            const unsigned char *VAR24;
            int VAR25;
            if (VAR23 < VAR6)
            {
                int VAR26 = VAR12 * 4 + VAR2->VAR17[VAR23][0];
                int VAR27 = VAR13 * 4 + VAR2->VAR17[VAR23][1];
                if (VAR26 < 0 || VAR26 + 4 > VAR2->VAR20->VAR22 || VAR27 < 0 || VAR27 + 4 > VAR2->VAR20->VAR21)
                    continue;
                VAR24 = VAR2->VAR28.VAR29[0] + VAR26 + VAR27 * VAR2->VAR28.VAR30[0];
                VAR25 = VAR2->VAR28.VAR30[0];
            }
            else
            {
                int VAR31 = VAR23 - VAR6;
                if (VAR31 < VAR7)
                    VAR24 = VAR16 + 16 * VAR31;
                else if (VAR31 - VAR7 < VAR8)
                    VAR24 = VAR2->VAR18[VAR31 - VAR7];
                else
                    continue;
                VAR25 = 4;
            }
            for (VAR11 = 0; VAR11 < 4; VAR11++)
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                    VAR2->VAR32.VAR29[0][(VAR13 * 4 + VAR11) * VAR2->VAR32.VAR30[0] + (VAR12 * 4 + VAR10)] = VAR24[VAR11 * VAR25 + VAR10];
        }
    return 0;
}
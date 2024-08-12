static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    const int VAR8 = 2 + FUN2(&VAR6[0]);
    int VAR9, VAR10, VAR11;
    VAR9 = VAR8;
    VAR10 = 2;
    VAR11 = 0;
    while (VAR10 < VAR8)
    {
        int VAR12, VAR13;
        int VAR14 = VAR6[VAR10] & 0x7f;
        int VAR15 = VAR6[VAR10 + 1] + ((VAR6[VAR10] & 0x80) << 1);
        VAR10 += 2;
        if (VAR14 == 0)
        {
            VAR11 += VAR15;
            continue;
        }
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            for (VAR13 = 0; VAR13 < 8; VAR13++)
            {
                int VAR16 = (VAR6[VAR10 + VAR12] >> (7 - VAR13)) & 1;
                if (VAR16)
                {
                    int VAR17 = VAR6[VAR9];
                    VAR2->VAR18.VAR19[0][VAR11 * VAR2->VAR18.VAR20[0] + VAR15] = VAR17;
                    if (VAR3)
                        VAR2->VAR18.VAR19[0][VAR11 * VAR2->VAR18.VAR20[0] + VAR15 + 1] = VAR17;
                    if (VAR4)
                    {
                        VAR2->VAR18.VAR19[0][(VAR11 + 1) * VAR2->VAR18.VAR20[0] + VAR15] = VAR17;
                        if (VAR3)
                            VAR2->VAR18.VAR19[0][(VAR11 + 1) * VAR2->VAR18.VAR20[0] + VAR15 + 1] = VAR17;
                    }
                    VAR9++;
                }
                VAR15 += 1 + VAR3;
            }
        }
        VAR10 += VAR14;
        VAR11 += 1 + VAR4;
    }
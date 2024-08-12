static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    uint8_t VAR5[256] = {0};
    uint8_t VAR6[256];
    int VAR7[256] = {0};
    int VAR8, VAR9, VAR10, VAR11;
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
        {
            int VAR12 = FUN2(VAR10, VAR11) + 1;
            int VAR13 = VAR10 ? FUN2(VAR10 - 1, VAR11) + 1 : 0;
            int VAR14 = VAR10 + 1 < VAR3 ? FUN2(VAR10 + 1, VAR11) + 1 : 0;
            int VAR15 = VAR11 ? FUN2(VAR10, VAR11 - 1) + 1 : 0;
            int VAR16 = VAR11 + 1 < VAR4 ? FUN2(VAR10, VAR11 + 1) + 1 : 0;
            VAR7[VAR12 - 1] += !!((VAR12 != VAR13) + (VAR12 != VAR14) + (VAR12 != VAR15) + (VAR12 != VAR16));
        }
    }
    for (VAR9 = 0; VAR9 < 256; VAR9++)
    {
        int VAR17[256] = {0};
        int VAR18 = 0;
        int VAR19 = 0;
        for (VAR11 = 0; VAR11 < VAR4; VAR11++)
        {
            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            {
                int VAR12 = VAR2->VAR20[0][VAR10 + VAR11 * VAR2->VAR21[0]];
                int VAR22 = VAR5[VAR12];
                int VAR23 = VAR10 ? FUN3(VAR10 - 1, VAR11) : 1;
                int VAR24 = VAR10 + 1 < VAR3 ? FUN3(VAR10 + 1, VAR11) : 1;
                int VAR25 = VAR11 ? FUN3(VAR10, VAR11 - 1) : 1;
                int VAR26 = VAR11 + 1 < VAR4 ? FUN3(VAR10, VAR11 + 1) : 1;
                int VAR27;
                if (VAR22)
                    continue;
                VAR17[VAR12] += VAR23 + VAR24 + VAR25 + VAR26;
                VAR27 = 1024LL * VAR17[VAR12] / VAR7[VAR12];
                if (VAR27 > VAR18)
                {
                    VAR18 = VAR27;
                    VAR19 = VAR12;
                }
            }
        }
        if (!VAR18)
            break;
        VAR5[VAR19] = 1;
        VAR6[VAR9] = VAR19;
    }
    VAR8 = VAR9 - 1;
    for (VAR9--; VAR9 >= 0; VAR9--)
    {
        int VAR12 = VAR9 * 255 / VAR8;
        FUN4(VAR2->VAR20[1] + 4 * VAR6[VAR9], FUN5(VAR12 / 2, VAR12, VAR12 / 2, VAR12));
    }
}
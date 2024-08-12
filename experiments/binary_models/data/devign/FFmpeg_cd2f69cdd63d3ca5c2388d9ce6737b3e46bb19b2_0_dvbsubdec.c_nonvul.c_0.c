static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    uint8_t VAR5[256] = {0};
    uint8_t VAR6[256];
    int VAR7[256] = {0};
    int VAR8, VAR9, VAR10, VAR11;
    ptrdiff_t VAR12 = VAR2->VAR13[0];
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
        {
            int VAR14 = FUN2(VAR10, VAR11) + 1;
            int VAR15 = VAR10 ? FUN2(VAR10 - 1, VAR11) + 1 : 0;
            int VAR16 = VAR10 + 1 < VAR3 ? FUN2(VAR10 + 1, VAR11) + 1 : 0;
            int VAR17 = VAR11 ? FUN2(VAR10, VAR11 - 1) + 1 : 0;
            int VAR18 = VAR11 + 1 < VAR4 ? FUN2(VAR10, VAR11 + 1) + 1 : 0;
            VAR7[VAR14 - 1] += !!((VAR14 != VAR15) + (VAR14 != VAR16) + (VAR14 != VAR17) + (VAR14 != VAR18));
        }
    }
    for (VAR9 = 0; VAR9 < 256; VAR9++)
    {
        int VAR19[256] = {0};
        int VAR20 = 0;
        int VAR21 = 0;
        for (VAR11 = 0; VAR11 < VAR4; VAR11++)
        {
            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            {
                VAR22 *VAR23 = &VAR2->VAR24[0][VAR10 + VAR11 * VAR12];
                int VAR14 = *VAR23;
                int VAR25 = VAR5[VAR14];
                int VAR26 = VAR10 ? FUN3(-1, 0) : 1;
                int VAR27 = VAR10 + 1 < VAR3 ? FUN3(1, 0) : 1;
                int VAR28 = VAR11 ? FUN3(0, -1) : 1;
                int VAR29 = VAR11 + 1 < VAR4 ? FUN3(0, 1) : 1;
                int VAR30;
                if (VAR25)
                    continue;
                VAR19[VAR14] += VAR26 + VAR27 + VAR28 + VAR29;
                VAR30 = 1024LL * VAR19[VAR14] / VAR7[VAR14];
                if (VAR30 > VAR20)
                {
                    VAR20 = VAR30;
                    VAR21 = VAR14;
                }
            }
        }
        if (!VAR20)
            break;
        VAR5[VAR21] = 1;
        VAR6[VAR9] = VAR21;
    }
    VAR8 = FUN4(VAR9 - 1, 1);
    for (VAR9--; VAR9 >= 0; VAR9--)
    {
        int VAR14 = VAR9 * 255 / VAR8;
        FUN5(VAR2->VAR24[1] + 4 * VAR6[VAR9], FUN6(VAR14 / 2, VAR14, VAR14 / 2, VAR14));
    }
}
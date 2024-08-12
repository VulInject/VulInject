static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, VAR2 *VAR6, unsigned VAR7, unsigned VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    unsigned long VAR13, VAR14, VAR15, VAR16;
    VAR15 = VAR7 / 2;
    VAR16 = VAR8;
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        const VAR2 *VAR17 = VAR3 + VAR9 * VAR13;
        const VAR2 *VAR18 = VAR4 + VAR10 * (VAR13 >> 2);
        const VAR2 *VAR19 = VAR5 + VAR11 * (VAR13 >> 2);
        VAR2 *VAR20 = VAR6 + VAR12 * VAR13;
        VAR14 = 0;
        for (; VAR14 < VAR15 - 7; VAR14 += 8)
        {
            asm volatile(VAR21 "" VAR21 "" VAR21 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR22 "" VAR22 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR22 "" VAR22 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR22 "" VAR22 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR22 "" VAR22 ""
                         : ""(VAR14)
                         : ""(VAR17), ""(VAR18), ""(VAR19), ""(VAR20)
                         : "");
        }
        for (; VAR14 < VAR15; VAR14++)
        {
            const int VAR23 = VAR14 << 2;
            VAR20[8 * VAR14 + 0] = VAR17[VAR23];
            VAR20[8 * VAR14 + 1] = VAR18[VAR14];
            VAR20[8 * VAR14 + 2] = VAR17[VAR23 + 1];
            VAR20[8 * VAR14 + 3] = VAR19[VAR14];
            VAR20[8 * VAR14 + 4] = VAR17[VAR23 + 2];
            VAR20[8 * VAR14 + 5] = VAR18[VAR14];
            VAR20[8 * VAR14 + 6] = VAR17[VAR23 + 3];
            VAR20[8 * VAR14 + 7] = VAR19[VAR14];
        }
    }
    asm(VAR24 "" VAR25 ""
        :
        :
        : "");
}
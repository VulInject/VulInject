static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11, long VAR12)
{
    x86_reg VAR13;
    long VAR14, VAR15, VAR16;
    VAR15 = VAR7 / 2;
    VAR16 = VAR8;
    for (VAR14 = 0; VAR14 < VAR16; VAR14++)
    {
        const VAR2 *VAR17 = VAR3 + VAR9 * VAR14;
        const VAR2 *VAR18 = VAR4 + VAR10 * (VAR14 >> 2);
        const VAR2 *VAR19 = VAR5 + VAR11 * (VAR14 >> 2);
        VAR2 *VAR20 = VAR6 + VAR12 * VAR14;
        VAR13 = 0;
        for (; VAR13 < VAR15 - 7; VAR13 += 8)
        {
            VAR21 volatile(VAR22 "" VAR22 "" VAR22 ""
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
                                      "" VAR23 "" VAR23 ""
                                      ""
                                      ""
                                      ""
                                      ""
                                      "" VAR23 "" VAR23 ""
                                      ""
                                      ""
                                      ""
                                      ""
                                      ""
                                      "" VAR23 "" VAR23 ""
                                      ""
                                      ""
                                      ""
                                      ""
                                      "" VAR23 "" VAR23 ""
                             : ""(VAR13)
                             : ""(VAR17), ""(VAR18), ""(VAR19), ""(VAR20)
                             : "");
        }
        for (; VAR13 < VAR15; VAR13++)
        {
            const long VAR24 = VAR13 << 2;
            VAR20[8 * VAR13 + 0] = VAR17[VAR24];
            VAR20[8 * VAR13 + 1] = VAR18[VAR13];
            VAR20[8 * VAR13 + 2] = VAR17[VAR24 + 1];
            VAR20[8 * VAR13 + 3] = VAR19[VAR13];
            VAR20[8 * VAR13 + 4] = VAR17[VAR24 + 2];
            VAR20[8 * VAR13 + 5] = VAR18[VAR13];
            VAR20[8 * VAR13 + 6] = VAR17[VAR24 + 3];
            VAR20[8 * VAR13 + 7] = VAR19[VAR13];
        }
    }
    FUN2(VAR25 "" VAR26 ""
            :
            :
            : "");
}
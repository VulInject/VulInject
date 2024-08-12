static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11, long VAR12)
{
    x86_reg VAR13;
    long VAR14, VAR15, VAR16;
    VAR15 = VAR7 / 2;
    VAR16 = VAR8 / 2;
    VAR17 volatile(VAR18 "" VAR18 ""
                     :
                     : ""(*(VAR3 + VAR9)), ""(*(VAR4 + VAR10))
                     : "");
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        const VAR2 *VAR19 = VAR3 + VAR9 * (VAR13 >> 1);
        VAR2 *VAR20 = VAR5 + VAR11 * VAR13;
        VAR14 = 0;
        for (; VAR14 < VAR15 - 31; VAR14 += 32)
        {
            VAR17 volatile(VAR18 ""
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
                                      ""
                                      ""
                                      "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 ""
                             : ""(VAR20[2 * VAR14])
                             : ""(VAR19[VAR14])
                             : "");
        }
        for (; VAR14 < VAR15; VAR14++)
            VAR20[2 * VAR14] = VAR20[2 * VAR14 + 1] = VAR19[VAR14];
    }
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        const VAR2 *VAR22 = VAR4 + VAR10 * (VAR13 >> 1);
        VAR2 *VAR20 = VAR6 + VAR12 * VAR13;
        VAR14 = 0;
        for (; VAR14 < VAR15 - 31; VAR14 += 32)
        {
            VAR17 volatile(VAR18 ""
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
                                      ""
                                      ""
                                      "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 "" VAR21 ""
                             : ""(VAR20[2 * VAR14])
                             : ""(VAR22[VAR14])
                             : "");
        }
        for (; VAR14 < VAR15; VAR14++)
            VAR20[2 * VAR14] = VAR20[2 * VAR14 + 1] = VAR22[VAR14];
    }
    FUN2(VAR23 "" VAR24 ""
            :
            :
            : "");
}
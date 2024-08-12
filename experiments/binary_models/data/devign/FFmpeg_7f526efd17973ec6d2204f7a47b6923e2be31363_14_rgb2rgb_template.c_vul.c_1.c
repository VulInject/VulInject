static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, unsigned VAR7, unsigned VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    unsigned int VAR13, VAR14, VAR15;
    int VAR16;
    VAR16 = VAR7 / 2;
    VAR15 = VAR8 / 2;
    asm volatile(VAR17 "" VAR17 ""
                 :
                 : ""(*(VAR3 + VAR9)), ""(*(VAR4 + VAR10))
                 : "");
    for (VAR13 = 0; VAR13 < VAR15; VAR13++)
    {
        const VAR2 *VAR18 = VAR3 + VAR9 * (VAR13 >> 1);
        VAR2 *VAR19 = VAR5 + VAR11 * VAR13;
        VAR14 = 0;
        for (; VAR14 < VAR16 - 31; VAR14 += 32)
        {
            asm volatile(VAR17 ""
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
                                  "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 ""
                         : ""(VAR19[2 * VAR14])
                         : ""(VAR18[VAR14])
                         : "");
        }
        for (; VAR14 < VAR16; VAR14++)
            VAR19[2 * VAR14] = VAR19[2 * VAR14 + 1] = VAR18[VAR14];
    }
    for (VAR13 = 0; VAR13 < VAR15; VAR13++)
    {
        const VAR2 *VAR21 = VAR4 + VAR10 * (VAR13 >> 1);
        VAR2 *VAR19 = VAR6 + VAR12 * VAR13;
        VAR14 = 0;
        for (; VAR14 < VAR16 - 31; VAR14 += 32)
        {
            asm volatile(VAR17 ""
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
                                  "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 "" VAR20 ""
                         : ""(VAR19[2 * VAR14])
                         : ""(VAR21[VAR14])
                         : "");
        }
        for (; VAR14 < VAR16; VAR14++)
            VAR19[2 * VAR14] = VAR19[2 * VAR14 + 1] = VAR21[VAR14];
    }
    asm(VAR22 "" VAR23 ""
        :
        :
        : "");
}
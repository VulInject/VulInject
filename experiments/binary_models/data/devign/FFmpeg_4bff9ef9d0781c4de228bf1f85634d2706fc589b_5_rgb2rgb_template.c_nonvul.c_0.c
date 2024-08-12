static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11)
{
    long VAR12;
    const long VAR13 = VAR7 >> 1;
    for (VAR12 = 0; VAR12 < VAR8; VAR12 += 2)
    {
        asm volatile("" VAR14 "" VAR14 ""
                     ""
                     "" FUN2(4) "" VAR15 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR16 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR16 "" VAR14 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR16 "" VAR14 "" VAR16 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 "" VAR14 ""
                                                                 ""
                     :
                     : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                     : "", "" VAR14);
        VAR4 += VAR9;
        VAR3 += VAR11;
        asm volatile("" VAR14 "" VAR14 "" FUN2(4) "" VAR15 "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      "" VAR16 "" VAR14 "" VAR16 "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      "" VAR14 ""
                                                                      ""
                     :
                     : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                     : "", "" VAR14);
        long VAR17;
        for (VAR17 = 0; VAR17 < VAR13; VAR17++)
        {
            VAR4[2 * VAR17 + 0] = VAR3[4 * VAR17 + 0];
            VAR5[VAR17] = VAR3[4 * VAR17 + 1];
            VAR4[2 * VAR17 + 1] = VAR3[4 * VAR17 + 2];
            VAR6[VAR17] = VAR3[4 * VAR17 + 3];
        }
        VAR4 += VAR9;
        VAR3 += VAR11;
        for (VAR17 = 0; VAR17 < VAR13; VAR17++)
        {
            VAR4[2 * VAR17 + 0] = VAR3[4 * VAR17 + 0];
            VAR4[2 * VAR17 + 1] = VAR3[4 * VAR17 + 2];
        }
        VAR5 += VAR10;
        VAR6 += VAR10;
        VAR4 += VAR9;
        VAR3 += VAR11;
    }
    asm volatile(VAR18 "" VAR19 ""
                 :
                 :
                 : "");
}
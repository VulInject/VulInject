static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11)
{
    long VAR12;
    const long VAR13 = VAR7 >> 1;
    for (VAR12 = 0; VAR12 < VAR8; VAR12 += 2)
    {
        asm volatile(""
                     ""
                     "" FUN2(4) "" VAR14 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR15 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR15 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 ""
                                                                 "" VAR15 "" VAR15 ""
                                                                 ""
                                                                 ""
                                                                 ""
                     :
                     : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                     : "", "");
        VAR4 += VAR9;
        VAR3 += VAR11;
        asm volatile("" FUN2(4) "" VAR14 ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         ""
                                                                         "" VAR15 "" VAR15 ""
                                                                         ""
                                                                         ""
                                                                         ""
                     :
                     : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                     : "", "");
        long VAR16;
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
        {
            VAR5[VAR16] = VAR3[4 * VAR16 + 0];
            VAR4[2 * VAR16 + 0] = VAR3[4 * VAR16 + 1];
            VAR6[VAR16] = VAR3[4 * VAR16 + 2];
            VAR4[2 * VAR16 + 1] = VAR3[4 * VAR16 + 3];
        }
        VAR4 += VAR9;
        VAR3 += VAR11;
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
        {
            VAR4[2 * VAR16 + 0] = VAR3[4 * VAR16 + 1];
            VAR4[2 * VAR16 + 1] = VAR3[4 * VAR16 + 3];
        }
        VAR5 += VAR10;
        VAR6 += VAR10;
        VAR4 += VAR9;
        VAR3 += VAR11;
    }
    asm volatile(VAR17 "" VAR18 ""
                 :
                 :
                 : "");
}
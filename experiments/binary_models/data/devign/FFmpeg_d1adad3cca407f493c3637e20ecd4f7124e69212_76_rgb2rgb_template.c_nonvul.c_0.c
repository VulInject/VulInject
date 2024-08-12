static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    unsigned VAR6;
    x86_reg VAR7 = 23 - VAR5;
    VAR8 volatile("" VAR9 "" VAR9 ""
                     ""
                     "" FUN2(VAR10) ""
                                                 "" FUN2(VAR11) ""
                                                                             "" FUN2(VAR12) ""
                                                                                                         ""
                                                                                                         "" VAR13 "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         "" VAR9 "" VAR14 "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         "" VAR9 "" VAR14 "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         ""
                                                                                                         "" VAR14 "" VAR9 ""
                                                                                                         "" VAR9 ""
                                                                                                         ""
                                                                                                         ""
                     : ""(VAR7)
                     : ""(VAR3 - VAR7), ""(VAR4 - VAR7));
    VAR8 volatile(VAR15
                     :
                     :
                     : "");
    VAR8 volatile(VAR16
                     :
                     :
                     : "");
    if (VAR7 == 23)
        return;
    VAR3 += VAR5;
    VAR4 += VAR5;
    VAR5 = 23 - VAR7;
    VAR3 -= VAR5;
    VAR4 -= VAR5;
    for (VAR6 = 0; VAR6 < VAR5; VAR6 += 3)
    {
        register uint8_t VAR17;
        VAR17 = VAR3[VAR6 + 2];
        VAR4[VAR6 + 1] = VAR3[VAR6 + 1];
        VAR4[VAR6 + 2] = VAR3[VAR6 + 0];
        VAR4[VAR6 + 0] = VAR17;
    }
}
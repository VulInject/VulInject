static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    unsigned VAR6;
    long VAR7 = 23 - VAR5;
    asm volatile("" VAR8 "" VAR8 ""
                 ""
                 "" FUN2(VAR9) ""
                                         "" FUN2(VAR10) ""
                                                                 "" FUN2(VAR11) "" FUN3(4) "" VAR12 "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          "" VAR8 "" VAR13 "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          "" VAR8 "" VAR13 "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          ""
                                                                                                                          "" VAR13 "" VAR8 ""
                                                                                                                          "" VAR8 ""
                                                                                                                          ""
                                                                                                                          ""
                 : ""(VAR7)
                 : ""(VAR3 - VAR7), ""(VAR4 - VAR7));
    __asm FUN4(VAR14
                     :
                     :
                     : "");
    __asm FUN4(VAR15
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
        register uint8_t VAR16;
        VAR16 = VAR3[VAR6 + 2];
        VAR4[VAR6 + 1] = VAR3[VAR6 + 1];
        VAR4[VAR6 + 2] = VAR3[VAR6 + 0];
        VAR4[VAR6 + 0] = VAR16;
    }
}
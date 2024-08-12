static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    VAR2 *VAR6 = VAR4;
    const VAR2 *VAR7 = VAR3;
    const VAR2 *VAR8;
    const VAR2 *VAR9;
    VAR8 = VAR7 + VAR5;
    __asm FUN2(VAR10 ""
                     :
                     : ""(*VAR7)
                     : "");
    VAR9 = VAR8 - 31;
    while (VAR7 < VAR9)
    {
        __asm FUN2(VAR10 ""
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
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR11 "" VAR11 "" VAR11 ""
                         : ""(*VAR6)
                         : ""(*VAR7), ""(VAR12), ""(VAR13), ""(VAR14), ""(VAR15), ""(VAR16)
                         : "");
        VAR6 += 24;
        VAR7 += 32;
    }
    __asm FUN2(VAR17
                     :
                     :
                     : "");
    __asm FUN2(VAR18
                     :
                     :
                     : "");
    while (VAR7 < VAR8)
    {
        VAR7++;
        VAR6[2] = *VAR7++;
        VAR6[1] = *VAR7++;
        VAR6[0] = *VAR7++;
        VAR6 += 3;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        VAR7++;
    }
}
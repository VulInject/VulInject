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
    VAR9 = VAR8 - 23;
    __asm FUN2(""
                     :
                     : ""(VAR11)
                     : "");
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
                                  "" VAR12 "" VAR12 "" VAR12 "" VAR12 ""
                         : ""(*VAR6)
                         : ""(*VAR7)
                         : "");
        VAR6 += 32;
        VAR7 += 24;
    }
    __asm FUN2(VAR13
                     :
                     :
                     : "");
    __asm FUN2(VAR14
                     :
                     :
                     : "");
    while (VAR7 < VAR8)
    {
        *VAR6++ = 0;
        *VAR6++ = VAR7[2];
        *VAR6++ = VAR7[1];
        *VAR6++ = VAR7[0];
        VAR7 += 3;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = 0;
    }
}
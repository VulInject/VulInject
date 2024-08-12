static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, int VAR5)
{
    VAR2 *VAR6 = VAR4;
    const VAR2 *VAR7 = VAR3;
    const VAR2 *VAR8;
    const VAR2 *VAR9;
    VAR8 = VAR7 + VAR5;
    VAR10 volatile(VAR11 ""
                     :
                     : ""(*VAR7)
                     : "");
    VAR9 = VAR8 - 23;
    VAR10 volatile(""
                     :
                     : ""(VAR12)
                     : "");
    while (VAR7 < VAR9)
    {
        VAR10 volatile(VAR11 ""
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
                                  "" VAR13 "" VAR13 "" VAR13 "" VAR13 ""
                         : ""(*VAR6)
                         : ""(*VAR7)
                         : "");
        VAR6 += 32;
        VAR7 += 24;
    }
    VAR10 volatile(VAR14
                     :
                     :
                     : "");
    VAR10 volatile(VAR15
                     :
                     :
                     : "");
    while (VAR7 < VAR8)
    {
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = 255;
    }
}
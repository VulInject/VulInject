static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
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
    VAR9 = VAR8 - 31;
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
                                  "" VAR12
                         : ""(*VAR6)
                         : ""(*VAR7)
                         : "");
        VAR6 += 24;
        VAR7 += 32;
    }
    VAR10 volatile(VAR13
                     :
                     :
                     : "");
    VAR10 volatile(VAR14
                     :
                     :
                     : "");
    while (VAR7 < VAR8)
    {
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        *VAR6++ = *VAR7++;
        VAR7++;
    }
}
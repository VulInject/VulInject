static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR2 *VAR6 = VAR3;
    const VAR2 *VAR7;
    const VAR2 *VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4;
    VAR7 = VAR6 + VAR5;
    __asm FUN2(VAR11 ""
                     :
                     : ""(*VAR3)
                     : "");
    __asm FUN2(""
                     ""
                     :
                     : ""(VAR12), ""(VAR13));
    VAR8 = VAR7 - 11;
    while (VAR6 < VAR8)
    {
        __asm FUN2(VAR11 ""
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
                                  "" VAR14 ""
                         : ""(*VAR10)
                         : ""(*VAR6), ""(VAR15)
                         : "");
        VAR10 += 4;
        VAR6 += 12;
    }
    __asm FUN2(VAR16
                     :
                     :
                     : "");
    __asm FUN2(VAR17
                     :
                     :
                     : "");
    while (VAR6 < VAR7)
    {
        const int VAR18 = *VAR6++;
        const int VAR19 = *VAR6++;
        const int VAR20 = *VAR6++;
        *VAR10++ = (VAR18 >> 3) | ((VAR19 & 0xF8) << 2) | ((VAR20 & 0xF8) << 7);
    }
}
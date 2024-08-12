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
    VAR8 = VAR7 - 15;
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
        VAR6 += 16;
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
        register int VAR18 = *(VAR19 *)VAR6;
        VAR6 += 4;
        *VAR10++ = ((VAR18 & 0xF8) << 8) + ((VAR18 & 0xFC00) >> 5) + ((VAR18 & 0xF80000) >> 19);
    }
}
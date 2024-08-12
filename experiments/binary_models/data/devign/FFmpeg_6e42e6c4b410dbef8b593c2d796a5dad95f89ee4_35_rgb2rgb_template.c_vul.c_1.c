static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR6 *VAR7;
    const VAR6 *VAR8;
    VAR2 *VAR9 = (VAR2 *)VAR4;
    const VAR6 *VAR10 = (VAR6 *)VAR3;
    VAR7 = VAR10 + VAR5 / 2;
    __asm FUN2(VAR11 ""
                     :
                     : ""(*VAR10)
                     : "");
    VAR8 = VAR7 - 7;
    while (VAR10 < VAR8)
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
                         : ""(*VAR9)
                         : ""(*VAR10), ""(VAR12), ""(VAR13), ""(VAR14), ""(VAR15)
                         : "");
        __asm FUN2(""
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
                         "" VAR16 "" VAR16 "" VAR16 ""
                         : ""(*VAR9)
                         : ""(*VAR10), ""(VAR17), ""(VAR18), ""(VAR19), ""(VAR20), ""(VAR21)
                         : "");
        VAR9 += 24;
        VAR10 += 8;
    }
    __asm FUN2(VAR22
                     :
                     :
                     : "");
    __asm FUN2(VAR23
                     :
                     :
                     : "");
    while (VAR10 < VAR7)
    {
        register uint16_t VAR24;
        VAR24 = *VAR10++;
        *VAR9++ = (VAR24 & 0x1F) << 3;
        *VAR9++ = (VAR24 & 0x3E0) >> 2;
        *VAR9++ = (VAR24 & 0x7C00) >> 7;
    }
}
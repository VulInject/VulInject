static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR6 *VAR7;
    const VAR6 *VAR8;
    VAR2 *VAR9 = (VAR2 *)VAR4;
    const VAR6 *VAR10 = (const VAR6 *)VAR3;
    VAR7 = VAR10 + VAR5 / 2;
    __asm FUN2(VAR11 ""
                     :
                     : ""(*VAR10)
                     : "");
    __asm FUN2(""
                     :
                     :
                     : "");
    VAR8 = VAR7 - 3;
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
                                  "" VAR12 "" VAR12 ""
                         : ""(*VAR9)
                         : ""(*VAR10), ""(VAR13), ""(VAR14), ""(VAR15)
                         : "");
        VAR9 += 16;
        VAR10 += 4;
    }
    __asm FUN2(VAR16
                     :
                     :
                     : "");
    __asm FUN2(VAR17
                     :
                     :
                     : "");
    while (VAR10 < VAR7)
    {
        int VAR18 = *VAR10++;
        *((VAR19 *)VAR9)++ = ((VAR18 & 0x1F) << 3) + ((VAR18 & 0x3E0) << 6) + ((VAR18 & 0x7C00) << 9);
        register uint16_t VAR18;
        VAR18 = *VAR10++;
        *VAR9++ = 0;
        *VAR9++ = (VAR18 & 0x7C00) >> 7;
        *VAR9++ = (VAR18 & 0x3E0) >> 2;
        *VAR9++ = (VAR18 & 0x1F) << 3;
        *VAR9++ = (VAR18 & 0x1F) << 3;
        *VAR9++ = (VAR18 & 0x3E0) >> 2;
        *VAR9++ = (VAR18 & 0x7C00) >> 7;
        *VAR9++ = 0;
    }
}
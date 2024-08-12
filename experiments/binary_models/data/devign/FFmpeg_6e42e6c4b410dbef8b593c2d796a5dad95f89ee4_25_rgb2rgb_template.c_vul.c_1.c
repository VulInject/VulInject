static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    register const VAR2 *VAR6 = VAR3;
    register VAR2 *VAR7 = VAR4;
    register const VAR2 *VAR8;
    const VAR2 *VAR9;
    VAR8 = VAR6 + VAR5;
    __asm FUN2(VAR10 ""
                     :
                     : ""(*VAR6));
    __asm FUN2(""
                     :
                     : ""(VAR11));
    __asm FUN2(""
                     :
                     : ""(VAR12));
    VAR9 = VAR8 - 15;
    while (VAR6 < VAR9)
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
                                  "" VAR13 "" VAR13 ""
                         : ""(*VAR7)
                         : ""(*VAR6));
        VAR7 += 16;
        VAR6 += 16;
    }
    __asm FUN2(VAR14
                     :
                     :
                     : "");
    __asm FUN2(VAR15
                     :
                     :
                     : "");
    VAR9 = VAR8 - 3;
    while (VAR6 < VAR9)
    {
        register uint32_t VAR16 = *((VAR17 *)VAR6);
        *((VAR17 *)VAR7) = ((VAR16 >> 1) & 0x7FE07FE0) | (VAR16 & 0x001F001F);
        VAR6 += 4;
        VAR7 += 4;
    }
    if (VAR6 < VAR8)
    {
        register uint16_t VAR16 = *((VAR18 *)VAR6);
        *((VAR18 *)VAR7) = ((VAR16 >> 1) & 0x7FE0) | (VAR16 & 0x001F);
        VAR6 += 2;
        VAR7 += 2;
    }
}
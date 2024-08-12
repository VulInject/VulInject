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
                                  "" VAR12 "" VAR12 ""
                         : ""(*VAR7)
                         : ""(*VAR6));
        VAR7 += 16;
        VAR6 += 16;
    }
    __asm FUN2(VAR13
                     :
                     :
                     : "");
    __asm FUN2(VAR14
                     :
                     :
                     : "");
    VAR9 = VAR8 - 3;
    while (VAR6 < VAR9)
    {
        register unsigned VAR15 = *((VAR16 *)VAR6);
        *((VAR16 *)VAR7) = (VAR15 & 0x7FFF7FFF) + (VAR15 & 0x7FE07FE0);
        VAR7 += 4;
        VAR6 += 4;
    }
    if (VAR6 < VAR8)
    {
        register unsigned short VAR15 = *((VAR17 *)VAR6);
        *((VAR17 *)VAR7) = (VAR15 & 0x7FFF) + (VAR15 & 0x7FE0);
    }
}
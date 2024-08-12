static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    register const VAR2 *VAR6 = VAR3;
    register VAR2 *VAR7 = VAR4;
    register const VAR2 *VAR8;
    const VAR2 *VAR9;
    VAR8 = VAR6 + VAR5;
    VAR10 volatile(VAR11 ""
                     :
                     : ""(*VAR6));
    VAR10 volatile(""
                     :
                     : ""(VAR12));
    VAR9 = VAR8 - 15;
    while (VAR6 < VAR9)
    {
        VAR10 volatile(VAR11 ""
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
    VAR10 volatile(VAR14
                     :
                     :
                     : "");
    VAR10 volatile(VAR15
                     :
                     :
                     : "");
    VAR9 = VAR8 - 3;
    while (VAR6 < VAR9)
    {
        register unsigned VAR16 = *((const VAR17 *)VAR6);
        *((VAR17 *)VAR7) = (VAR16 & 0x7FFF7FFF) + (VAR16 & 0x7FE07FE0);
        VAR7 += 4;
        VAR6 += 4;
    }
    if (VAR6 < VAR8)
    {
        register unsigned short VAR16 = *((const VAR18 *)VAR6);
        *((VAR18 *)VAR7) = (VAR16 & 0x7FFF) + (VAR16 & 0x7FE0);
    }
}
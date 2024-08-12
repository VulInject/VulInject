static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, int VAR5)
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
    VAR10 volatile(""
                     :
                     : ""(VAR13));
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
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR14 "" VAR14 ""
                         : ""(*VAR7)
                         : ""(*VAR6));
        VAR7 += 16;
        VAR6 += 16;
    }
    VAR10 volatile(VAR15
                     :
                     :
                     : "");
    VAR10 volatile(VAR16
                     :
                     :
                     : "");
    VAR9 = VAR8 - 3;
    while (VAR6 < VAR9)
    {
        register uint32_t VAR17 = *((const VAR18 *)VAR6);
        *((VAR18 *)VAR7) = ((VAR17 >> 1) & 0x7FE07FE0) | (VAR17 & 0x001F001F);
        VAR6 += 4;
        VAR7 += 4;
    }
    if (VAR6 < VAR8)
    {
        register uint16_t VAR17 = *((const VAR19 *)VAR6);
        *((VAR19 *)VAR7) = ((VAR17 >> 1) & 0x7FE0) | (VAR17 & 0x001F);
    }
}
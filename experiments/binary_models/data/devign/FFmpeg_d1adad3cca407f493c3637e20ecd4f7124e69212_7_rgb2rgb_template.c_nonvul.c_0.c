static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR6 *VAR7;
    const VAR6 *VAR8;
    VAR2 *VAR9 = VAR4;
    const VAR6 *VAR10 = (const VAR6 *)VAR3;
    VAR7 = VAR10 + VAR5 / 2;
    VAR11 volatile(VAR12 ""
                     :
                     : ""(*VAR10)
                     : "");
    VAR11 volatile(""
                     :
                     :
                     : "");
    VAR11 volatile(""
                     :
                     :
                     : "");
    VAR8 = VAR7 - 3;
    while (VAR10 < VAR8)
    {
        VAR11 volatile(VAR12 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR13
                         : ""(*VAR9)
                         : ""(*VAR10), ""(VAR14), ""(VAR15), ""(VAR16)
                         : "");
        VAR9 += 16;
        VAR10 += 4;
    }
    VAR11 volatile(VAR17
                     :
                     :
                     : "");
    VAR11 volatile(VAR18
                     :
                     :
                     : "");
    while (VAR10 < VAR7)
    {
        register uint16_t VAR19;
        VAR19 = *VAR10++;
        *VAR9++ = (VAR19 & 0x1F) << 3;
        *VAR9++ = (VAR19 & 0x3E0) >> 2;
        *VAR9++ = (VAR19 & 0x7C00) >> 7;
        *VAR9++ = 255;
    }
}
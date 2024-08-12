static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, int VAR5)
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
    VAR8 = VAR7 - 7;
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
                         : ""(*VAR10), ""(VAR13), ""(VAR14), ""(VAR15), ""(VAR16)
                         : "");
        VAR11 volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR17
                         : ""(*VAR9)
                         : ""(*VAR10)
                         : "");
        VAR9 += 24;
        VAR10 += 8;
    }
    VAR11 volatile(VAR18
                     :
                     :
                     : "");
    VAR11 volatile(VAR19
                     :
                     :
                     : "");
    while (VAR10 < VAR7)
    {
        register uint16_t VAR20;
        VAR20 = *VAR10++;
        *VAR9++ = (VAR20 & 0x1F) << 3;
        *VAR9++ = (VAR20 & 0x3E0) >> 2;
        *VAR9++ = (VAR20 & 0x7C00) >> 7;
    }
}
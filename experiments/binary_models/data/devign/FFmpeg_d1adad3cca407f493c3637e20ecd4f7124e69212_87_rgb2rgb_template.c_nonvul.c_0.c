static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR2 *VAR6 = VAR3;
    const VAR2 *VAR7;
    const VAR2 *VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4;
    VAR7 = VAR6 + VAR5;
    VAR11 volatile(VAR12 ""
                     :
                     : ""(*VAR3)
                     : "");
    VAR11 volatile(""
                     ""
                     :
                     : ""(VAR13), ""(VAR14));
    VAR8 = VAR7 - 15;
    while (VAR6 < VAR8)
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
                                  "" VAR15 ""
                         : ""(*VAR10)
                         : ""(*VAR6), ""(VAR16)
                         : "");
        VAR10 += 4;
        VAR6 += 16;
    }
    VAR11 volatile(VAR17
                     :
                     :
                     : "");
    VAR11 volatile(VAR18
                     :
                     :
                     : "");
    while (VAR6 < VAR7)
    {
        register int VAR19 = *(const VAR20 *)VAR6;
        VAR6 += 4;
        *VAR10++ = ((VAR19 & 0xF8) << 8) + ((VAR19 & 0xFC00) >> 5) + ((VAR19 & 0xF80000) >> 19);
    }
}
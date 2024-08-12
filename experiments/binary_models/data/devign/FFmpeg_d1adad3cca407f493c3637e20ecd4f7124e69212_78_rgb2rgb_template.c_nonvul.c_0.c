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
        VAR6 += 12;
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
        const int VAR19 = *VAR6++;
        const int VAR20 = *VAR6++;
        const int VAR21 = *VAR6++;
        *VAR10++ = (VAR21 >> 3) | ((VAR20 & 0xF8) << 2) | ((VAR19 & 0xF8) << 7);
    }
}
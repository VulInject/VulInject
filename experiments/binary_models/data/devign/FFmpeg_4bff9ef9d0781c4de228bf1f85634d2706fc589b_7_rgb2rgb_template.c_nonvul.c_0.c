static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    const VAR2 *VAR6 = VAR3;
    const VAR2 *VAR7;
    const VAR2 *VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4;
    VAR7 = VAR6 + VAR5;
    VAR8 = VAR7 - 15;
    asm volatile(""
                 ""
                 "" FUN2(4) "" VAR11 ""
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
                                                                     "" VAR12 ""
                                                                     ""
                                                                     ""
                                                                     ""
                                                                     ""
                 : ""(VAR10), ""(VAR6)
                 : ""(VAR8), ""(VAR13), ""(VAR14), ""(VAR15));
    __asm FUN3(VAR11 ""
                     :
                     : ""(*VAR3)
                     : "");
    __asm FUN3(""
                     ""
                     :
                     : ""(VAR16), ""(VAR17));
    while (VAR6 < VAR8)
    {
        __asm FUN3(VAR11 ""
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
                                  "" VAR12 ""
                         : ""(*VAR10)
                         : ""(*VAR6), ""(VAR18)
                         : "");
        VAR10 += 4;
        VAR6 += 16;
    }
    __asm FUN3(VAR19
                     :
                     :
                     : "");
    __asm FUN3(VAR20
                     :
                     :
                     : "");
    while (VAR6 < VAR7)
    {
        register int VAR21 = *(VAR22 *)VAR6;
        VAR6 += 4;
        *VAR10++ = ((VAR21 & 0xFF) >> 3) + ((VAR21 & 0xFC00) >> 5) + ((VAR21 & 0xF80000) >> 8);
    }
}
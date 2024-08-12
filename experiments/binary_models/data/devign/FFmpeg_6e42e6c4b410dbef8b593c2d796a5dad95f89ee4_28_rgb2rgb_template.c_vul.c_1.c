static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    long VAR6 = 15 - VAR5;
    VAR2 *VAR7 = (VAR2 *)VAR3 - VAR6, *VAR8 = VAR4 - VAR6;
    __asm FUN2(""
                     "" VAR9 ""
                     ""
                     ""
                     ""
                     "" FUN3(4) "" VAR9 ""
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
                                                                         "" VAR10 "" VAR10 ""
                                                                         ""
                                                                         "" VAR11 "" VAR12 ""
                                                                         ""
                     : ""(VAR6)
                     : ""(VAR7), ""(VAR8), ""(VAR13), ""(VAR14), ""(VAR15)
                     : "");
    for (; VAR6 < 15; VAR6 += 4)
    {
        register int VAR16 = *(VAR17 *)&VAR7[VAR6], VAR18 = VAR16 & 0xff00ff00;
        VAR16 &= 0xff00ff;
        *(VAR17 *)&VAR8[VAR6] = (VAR16 >> 16) + VAR18 + (VAR16 << 16);
    }
}
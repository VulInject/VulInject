static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    x86_reg VAR6 = 15 - VAR5;
    const VAR2 *VAR7 = VAR3 - VAR6;
    VAR2 *VAR8 = VAR4 - VAR6;
    VAR9 volatile(""
                     "" VAR10 ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     "" VAR10 ""
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
                     "" VAR11 "" VAR11 ""
                     ""
                     "" VAR12 "" VAR13 ""
                     ""
                     : ""(VAR6)
                     : ""(VAR7), ""(VAR8), ""(VAR14), ""(VAR15), ""(VAR16)
                     : "");
    for (; VAR6 < 15; VAR6 += 4)
    {
        register int VAR17 = *(const VAR18 *)&VAR7[VAR6], VAR19 = VAR17 & 0xff00ff00;
        VAR17 &= 0xff00ff;
        *(VAR18 *)&VAR8[VAR6] = (VAR17 >> 16) + VAR19 + (VAR17 << 16);
    }
}
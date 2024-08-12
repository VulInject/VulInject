void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, long VAR6, long VAR7, long VAR8, long VAR9, long VAR10)
{
    long VAR11;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        long VAR12;
        asm("" VAR13 "" VAR13 ""
            "" VAR14 "" VAR13 "" VAR14 "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            ""
            ""
            "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            ""
            :
            : ""(VAR5), ""(VAR3), ""(VAR4), ""(VAR6 - 15)
            : "", "" VAR13 "");
        asm("" VAR13 "" VAR13 ""
            "" VAR14 "" VAR13 "" VAR14 "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            ""
            ""
            "" VAR13 ""
            "" VAR13 ""
            ""
            ""
            ""
            "" VAR15 "" VAR13 "" VAR15 "" VAR13 "" VAR15 "" VAR13 "" VAR15 "" VAR13 ""
            "" VAR13 ""
            "" VAR13 ""
            ""
            :
            : ""(VAR5), ""(VAR3), ""(VAR4), ""(VAR6 - 15)
            : "", "" VAR13);
        for (VAR12 = (VAR6 & (~15)); VAR12 < VAR6; VAR12++)
        {
            VAR5[2 * VAR12 + 0] = VAR3[VAR12];
            VAR5[2 * VAR12 + 1] = VAR4[VAR12];
        }
        for (VAR12 = 0; VAR12 < VAR6; VAR12++)
        {
            VAR5[2 * VAR12 + 0] = VAR3[VAR12];
            VAR5[2 * VAR12 + 1] = VAR4[VAR12];
        }
        VAR5 += VAR10;
        VAR3 += VAR8;
        VAR4 += VAR9;
    }
    asm(VAR16 "" VAR17 ""
        :
        :
        : "");
}
static void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, VAR2 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        int VAR12;
        if (VAR6 >= 16)
            FUN2("" VAR13 "" VAR13 ""
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
                    : ""(VAR5), ""(VAR3), ""(VAR4), ""((VAR15)VAR6 - 15)
                    : "", FUN3("", "", "", ) "" VAR13);
        FUN2("" VAR13 "" VAR13 ""
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
                "" VAR16 "" VAR13 "" VAR16 "" VAR13 "" VAR16 "" VAR13 "" VAR16 "" VAR13 ""
                "" VAR13 ""
                "" VAR13 ""
                ""
                :
                : ""(VAR5), ""(VAR3), ""(VAR4), ""((VAR15)VAR6 - 15)
                : "", "" VAR13);
        for (VAR12 = (VAR6 & (~15)); VAR12 < VAR6; VAR12++)
        {
            VAR5[2 * VAR12 + 0] = VAR3[VAR12];
            VAR5[2 * VAR12 + 1] = VAR4[VAR12];
        }
        VAR5 += VAR10;
        VAR3 += VAR8;
        VAR4 += VAR9;
    }
    FUN2(VAR17 "" VAR18 ""
            :
            :
            : "");
}
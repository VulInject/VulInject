static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    asm volatile("" VAR6 ""
                 "" FUN2(VAR7) ""
                                            "" FUN2(VAR8) ""
                                                                  ""
                                                                  "" VAR6 "" VAR6 "" VAR9 "" FUN3(4) "" VAR10 "" VAR9 ""
                                                                                                                                   "" VAR9 ""
                                                                                                                                   "" VAR9 ""
                                                                                                                                   ""
                                                                                                                                   ""
                                                                                                                                   "" VAR9 ""
                                                                                                                                   "" VAR9 ""
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
                                                                                                                                   "" VAR9 ""
                                                                                                                                   "" VAR9 ""
                                                                                                                                   ""
                                                                                                                                   ""
                                                                                                                                   "" VAR9 ""
                                                                                                                                   "" VAR9 ""
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
                                                                                                                                   "" VAR9 ""
                                                                                                                                   ""
                                                                                                                                   ""
                                                                                                                                   ""
                                                                                                                                   "" FUN2(VAR11) ""
                                                                                                                                                                  "" VAR6 ""
                                                                                                                                                                  "" VAR6 ""
                                                                                                                                                                  ""
                 :
                 : ""(VAR4 + VAR5 * 3), ""(VAR3 + VAR5), ""(-VAR5)
                 : "" VAR6, "" VAR9);
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
    {
        int VAR13 = VAR4[VAR12 * 3 + 0];
        int VAR14 = VAR4[VAR12 * 3 + 1];
        int VAR15 = VAR4[VAR12 * 3 + 2];
        VAR3[VAR12] = ((VAR16 * VAR15 + VAR17 * VAR14 + VAR18 * VAR13 + (33 << (VAR19 - 1))) >> VAR19);
    }
}
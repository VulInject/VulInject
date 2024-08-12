static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    asm volatile("" VAR6 "" VAR6 "" FUN2(4) "" VAR7 "" VAR6 ""
                                                                       "" VAR6 ""
                                                                       ""
                                                                       ""
                                                                       ""
                                                                       ""
                                                                       "" FUN3(VAR8) ""
                                                                                               "" FUN3(VAR9) ""
                                                                                                                       "" FUN3(VAR10) ""
                                                                                                                                               ""
                                                                                                                                               "" VAR11 "" VAR6 ""
                                                                                                                                               "" VAR6 ""
                                                                                                                                               "" VAR6 ""
                                                                                                                                               ""
                 :
                 : ""(VAR3), ""(VAR4), ""(VAR5 - 7)
                 : "" VAR6);
    __asm FUN4(VAR12
                     :
                     :
                     : "");
    __asm FUN4(VAR13
                     :
                     :
                     : "");
    unsigned VAR14;
    unsigned VAR15 = VAR5 >> 2;
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        VAR4[4 * VAR14 + 1] = VAR3[4 * VAR14 + 3];
        VAR4[4 * VAR14 + 2] = VAR3[4 * VAR14 + 2];
        VAR4[4 * VAR14 + 3] = VAR3[4 * VAR14 + 1];
        VAR4[4 * VAR14 + 0] = VAR3[4 * VAR14 + 2];
        VAR4[4 * VAR14 + 1] = VAR3[4 * VAR14 + 1];
        VAR4[4 * VAR14 + 2] = VAR3[4 * VAR14 + 0];
    }
}
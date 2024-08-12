static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4, VAR5 *VAR6, int VAR7, int VAR8, VAR2 *VAR9, VAR2 *VAR10, long VAR11)
{
    assert(VAR11 % 4 == 0 && VAR11 > 0);
    if (VAR11 == 4)
    {
        long VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 2;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile("" VAR13 ""
                     ""
                     "" FUN2(VAR14) ""
                                         "" VAR15 ""
                                         "" VAR16 "" VAR15 "" FUN3(4) ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR16 ""
                                                                                             "" VAR13 ""
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
                                                                                             "" VAR15 ""
                                                                                             ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR13 ""
                     : ""(VAR12)
                     : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                     : "" VAR13);
    }
    else if (VAR11 == 8)
    {
        long VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile("" VAR13 ""
                     ""
                     "" FUN2(VAR14) ""
                                         "" VAR15 ""
                                         "" VAR16 "" VAR15 "" FUN3(4) ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR16 ""
                                                                                             "" VAR13 ""
                                                                                             ""
                                                                                             ""
                                                                                             ""
                                                                                             ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR16 ""
                                                                                             "" VAR13 ""
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
                                                                                             "" VAR15 ""
                                                                                             ""
                                                                                             "" VAR15 ""
                                                                                             "" VAR13 ""
                     : ""(VAR12)
                     : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                     : "" VAR13);
    }
    else
    {
        VAR5 *VAR17 = VAR6 + VAR11;
        long VAR12 = -2 * VAR4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile(""
                     "" FUN2(VAR14) "" FUN3(4) ""
                                                                      "" VAR18 ""
                                                                      "" VAR18 ""
                                                                      "" VAR18 ""
                                                                      "" VAR18 ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      "" VAR18 "" VAR16 ""
                                                                      "" VAR18 "" VAR19 ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      "" VAR18 ""
                                                                      "" VAR18 ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      ""
                                                                      "" VAR16 ""
                                                                      "" VAR16 ""
                                                                      ""
                                                                      ""
                     : ""(VAR12), ""(VAR9)
                     : ""(VAR10), ""(VAR3), ""(VAR17), ""(VAR6), ""(VAR11 * 2)
                     : "" VAR16, "" VAR18, "" VAR19);
    }
    FUN4(VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11);
    int VAR20;
    for (VAR20 = 0; VAR20 < VAR4; VAR20++)
    {
        int VAR21;
        int VAR22 = VAR10[VAR20];
        int VAR23 = 0;
        for (VAR21 = 0; VAR21 < VAR11; VAR21++)
        {
            VAR23 += ((int)VAR6[VAR22 + VAR21]) * VAR9[VAR11 * VAR20 + VAR21];
        }
        VAR3[VAR20] = FUN5(VAR23 >> 7, 0, (1 << 15) - 1);
    }
}
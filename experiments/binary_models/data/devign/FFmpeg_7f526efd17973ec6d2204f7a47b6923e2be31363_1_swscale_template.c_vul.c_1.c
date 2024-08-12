static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4, VAR5 *VAR6, int VAR7, int VAR8, VAR2 *VAR9, VAR2 *VAR10, int VAR11)
{
    assert(VAR11 % 4 == 0 && VAR11 > 0);
    if (VAR11 == 4)
    {
        long VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 2;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile(""
                     "" FUN2(VAR13) ""
                                         "" VAR14 ""
                                         "" VAR15 "" VAR14 ""
                                         ""
                                         ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR15 ""
                                         "" VAR16 ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         ""
                                         "" VAR14 ""
                     : ""(VAR12)
                     : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                     : "" VAR16);
    }
    else if (VAR11 == 8)
    {
        long VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile(""
                     "" FUN2(VAR13) ""
                                         "" VAR14 ""
                                         "" VAR15 "" VAR14 ""
                                         ""
                                         ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR15 ""
                                         "" VAR16 ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         "" VAR15 ""
                                         "" VAR16 ""
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
                                         "" VAR14 ""
                                         "" VAR14 ""
                                         ""
                                         "" VAR14 ""
                     : ""(VAR12)
                     : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                     : "" VAR16);
    }
    else
    {
        VAR5 *VAR17 = VAR6 + VAR11;
        long VAR12 = -2 * VAR4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        asm volatile(""
                     "" FUN2(VAR13) ""
                                         ""
                                         ""
                                         "" VAR18 ""
                                         "" VAR18 ""
                                         "" VAR18 ""
                                         "" VAR18 ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         ""
                                         "" VAR18 "" VAR15 ""
                                         "" VAR18 "" VAR16 ""
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
                                         "" VAR15 ""
                                         "" VAR15 ""
                                         ""
                                         ""
                     : ""(VAR12), ""(VAR9)
                     : ""(VAR10), ""(VAR3), ""(VAR17), ""(VAR6), ""((long)VAR11 * 2)
                     : "" VAR16, "" VAR15, "" VAR18);
    }
    FUN3(VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11);
    int VAR19;
    for (VAR19 = 0; VAR19 < VAR4; VAR19++)
    {
        int VAR20;
        int VAR21 = VAR10[VAR19];
        int VAR22 = 0;
        for (VAR20 = 0; VAR20 < VAR11; VAR20++)
        {
            VAR22 += ((int)VAR6[VAR21 + VAR20]) * VAR9[VAR11 * VAR19 + VAR20];
        }
        VAR3[VAR19] = FUN4(FUN5(0, VAR22 >> 7), (1 << 15) - 1);
    }
}
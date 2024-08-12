static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, long VAR7)
{
    asm volatile("" FUN2(VAR8) ""
                                            "" VAR9 ""
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
                                            "" VAR9 ""
                                            "" VAR9 ""
                                            "" VAR9 ""
                                            ""
                 :
                 : ""(-VAR7), ""(VAR5 + VAR7 * 4), ""(VAR3 + VAR7), ""(VAR4 + VAR7)
                 : "" VAR9);
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        VAR3[VAR10] = VAR5[4 * VAR10 + 0];
        VAR4[VAR10] = VAR5[4 * VAR10 + 2];
    }
    assert(VAR5 == VAR6);
}
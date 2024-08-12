static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, const VAR2 *VAR5, int VAR6)
{
    VAR7 volatile("" FUN2(VAR8) ""
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
                     : ""((VAR10)-VAR6), ""(VAR5 + VAR6 * 2), ""(VAR3 + VAR6), ""(VAR4 + VAR6)
                     : "" VAR9);
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        VAR3[VAR11] = VAR5[2 * VAR11 + 0];
        VAR4[VAR11] = VAR5[2 * VAR11 + 1];
    }
}
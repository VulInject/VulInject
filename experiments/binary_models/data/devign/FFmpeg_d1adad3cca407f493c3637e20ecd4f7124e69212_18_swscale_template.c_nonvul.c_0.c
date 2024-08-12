static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, const VAR2 *VAR5, const VAR2 *VAR6, long VAR7, VAR8 *VAR9)
{
    VAR10 volatile("" FUN2(VAR11) ""
                                                "" VAR12 ""
                                                ""
                                                "" VAR12 ""
                                                "" VAR12 ""
                                                ""
                                                ""
                                                ""
                                                ""
                                                ""
                                                ""
                                                ""
                                                ""
                                                "" VAR12 ""
                                                "" VAR12 ""
                                                "" VAR12 ""
                                                ""
                     :
                     : ""((VAR13)-VAR7), ""(VAR5 + VAR7 * 4), ""(VAR3 + VAR7), ""(VAR4 + VAR7)
                     : "" VAR12);
    assert(VAR5 == VAR6);
}
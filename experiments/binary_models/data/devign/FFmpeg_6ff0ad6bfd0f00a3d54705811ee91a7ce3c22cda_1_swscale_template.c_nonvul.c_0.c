static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, int VAR7)
{
    asm volatile("" FUN2(VAR8) ""
                                            ""
                                            ""
                                            ""
                                            ""
                                            ""
                                            "" FUN3(% % VAR9, % % VAR10) FUN3(% % VAR11, % % VAR12) ""
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
                 :
                 : ""(-VAR7), ""(VAR5 + VAR7 * 4), ""(VAR6 + VAR7 * 4), ""(VAR3 + VAR7), ""(VAR4 + VAR7)
                 : "");
    int VAR13;
    for (VAR13 = 0; VAR13 < VAR7; VAR13++)
    {
        VAR3[VAR13] = (VAR5[4 * VAR13 + 1] + VAR6[4 * VAR13 + 1]) >> 1;
        VAR4[VAR13] = (VAR5[4 * VAR13 + 3] + VAR6[4 * VAR13 + 3]) >> 1;
    }
}
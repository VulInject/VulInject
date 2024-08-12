static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    VAR4[0] = VAR3[0];
    for (VAR9 = 0; VAR9 < VAR5 - 1; VAR9++)
    {
        VAR4[2 * VAR9 + 1] = (3 * VAR3[VAR9] + VAR3[VAR9 + 1]) >> 2;
        VAR4[2 * VAR9 + 2] = (VAR3[VAR9] + 3 * VAR3[VAR9 + 1]) >> 2;
    }
    VAR4[2 * VAR5 - 1] = VAR3[VAR5 - 1];
    VAR4 += VAR8;
    for (VAR10 = 1; VAR10 < VAR6; VAR10++)
    {
        x86_reg VAR11 = VAR5 & ~15;
        if (VAR11)
        {
            VAR12 volatile("" VAR13 ""
                             "" FUN2(VAR14) ""
                                                           "" VAR13 ""
                                                           ""
                                                           ""
                                                           ""
                                                           ""
                                                           "" VAR13 ""
                                                           ""
                                                           ""
                                                           ""
                                                           ""
                                                           ""
                                                           "" VAR13 ""
                                                           "" VAR13 ""
                                                           "" VAR13 ""
                                                           "" VAR13 "" VAR15 "" VAR15 "" VAR15 "" VAR15 "" VAR15 "" VAR15 "" VAR15 "" VAR15 ""
                                                           ""
                                                           ""
                                                           ""
                                                           ""
                                                           ""
                                                           "" VAR16 "" VAR13 "" VAR16 "" VAR13 "" VAR16 "" VAR13 "" VAR16 "" VAR13 ""
                                                           "" VAR13 ""
                                                           "" VAR13 ""
                                                           "" VAR13 ""
                                                           ""
                             :
                             : ""(VAR3 + VAR11), ""(VAR3 + VAR7 + VAR11), ""(VAR4 + VAR11 * 2), ""(VAR4 + VAR8 + VAR11 * 2), ""(-VAR11)FUN3(VAR14)
                             : "" VAR13);
        }
        else
        {
            VAR11 = 1;
            VAR4[0] = (VAR3[0] * 3 + VAR3[VAR7]) >> 2;
            VAR4[VAR8] = (VAR3[0] + 3 * VAR3[VAR7]) >> 2;
        }
        for (VAR9 = VAR11 - 1; VAR9 < VAR5 - 1; VAR9++)
        {
            VAR4[2 * VAR9 + 1] = (3 * VAR3[VAR9 + 0] + VAR3[VAR9 + VAR7 + 1]) >> 2;
            VAR4[2 * VAR9 + VAR8 + 2] = (VAR3[VAR9 + 0] + 3 * VAR3[VAR9 + VAR7 + 1]) >> 2;
            VAR4[2 * VAR9 + VAR8 + 1] = (VAR3[VAR9 + 1] + 3 * VAR3[VAR9 + VAR7]) >> 2;
            VAR4[2 * VAR9 + 2] = (3 * VAR3[VAR9 + 1] + VAR3[VAR9 + VAR7]) >> 2;
        }
        VAR4[VAR5 * 2 - 1] = (3 * VAR3[VAR5 - 1] + VAR3[VAR5 - 1 + VAR7]) >> 2;
        VAR4[VAR5 * 2 - 1 + VAR8] = (VAR3[VAR5 - 1] + 3 * VAR3[VAR5 - 1 + VAR7]) >> 2;
        VAR4 += VAR8 * 2;
        VAR3 += VAR7;
    }
    VAR4[0] = VAR3[0];
    for (VAR9 = 0; VAR9 < VAR5 - 1; VAR9++)
    {
        VAR4[2 * VAR9 + 1] = (3 * VAR3[VAR9] + VAR3[VAR9 + 1]) >> 2;
        VAR4[2 * VAR9 + 2] = (VAR3[VAR9] + 3 * VAR3[VAR9 + 1]) >> 2;
    }
    VAR4[2 * VAR5 - 1] = VAR3[VAR5 - 1];
    VAR12 volatile(VAR17 "" VAR18 ""
                     :
                     :
                     : "");
}
static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, long VAR5)
{
    asm volatile("" VAR6 ""
                 ""
                 "" VAR6 ""
                 "" VAR6 ""
                 ""
                 ""
                 ""
                 "" VAR6 ""
                 "" VAR6 ""
                 ""
                 :
                 : ""(-VAR5), ""(VAR4 + VAR5 * 2), ""(VAR3 + VAR5)
                 : "" VAR6);
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        VAR3[VAR7] = VAR4[2 * VAR7 + 1];
}
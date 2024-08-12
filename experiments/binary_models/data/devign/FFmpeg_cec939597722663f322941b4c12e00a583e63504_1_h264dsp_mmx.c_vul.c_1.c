static inline void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12, VAR13;
    int VAR14 = ((VAR9 + VAR8 + 1) | 1) << VAR5;
    asm volatile(""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 :
                 : ""(VAR6), ""(VAR7), ""(VAR14), ""(VAR5 + 1));
    for (VAR13 = 0; VAR13 < VAR11; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR10; VAR12 += 4)
        {
            asm volatile(""
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
                         : ""(*(VAR15 *)(VAR2 + VAR12))
                         : ""(*(VAR15 *)(VAR3 + VAR12)));
        }
        VAR3 += VAR4;
        VAR2 += VAR4;
    }
}
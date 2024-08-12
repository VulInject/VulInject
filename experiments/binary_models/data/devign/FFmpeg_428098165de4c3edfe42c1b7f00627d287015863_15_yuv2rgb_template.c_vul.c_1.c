static inline int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5[], int VAR6[], int VAR7, int VAR8, VAR4 *VAR9[], int VAR10[])
{
    int VAR11, VAR12;
    if (VAR3->VAR13 == VAR14)
    {
        VAR6[1] *= 2;
        VAR6[2] *= 2;
    }
    VAR12 = (VAR3->VAR15 + 7) & ~7;
    if (VAR12 * 4 > FUN2(VAR10[0]))
        VAR12 -= 8;
    VAR16 FUN3("");
    for (VAR11 = 0; VAR11 < VAR8; VAR11++)
    {
        VAR4 *VAR17 = VAR9[0] + (VAR11 + VAR7) * VAR10[0];
        VAR4 *VAR18 = VAR5[0] + VAR11 * VAR6[0];
        VAR4 *VAR19 = VAR5[1] + (VAR11 >> 1) * VAR6[1];
        VAR4 *VAR20 = VAR5[2] + (VAR11 >> 1) * VAR6[2];
        long VAR21 = -VAR12 / 2;
        VAR16 FUN3(""
                             ""
                             ""
                             "" VAR22 ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             "" VAR23 ""
                             ""
                             ""
                             "" VAR23 ""
                             ""
                             ""
                             "" VAR23 ""
                             ""
                             ""
                             "" VAR23 ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             : ""(VAR21), ""(VAR17)
                             : ""(VAR19 - VAR21), ""(VAR20 - VAR21), ""(&VAR3->VAR24), ""(VAR18 - 2 * VAR21));
    }
    VAR16 FUN3(VAR25);
    return VAR8;
}
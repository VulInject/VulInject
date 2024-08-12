static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8[1];
    VAR6 *VAR9 = (VAR6 *)VAR2->VAR8[2];
    VAR10 *VAR11 = (VAR10 *)VAR2->VAR8[1];
    VAR10 *VAR12 = (VAR10 *)VAR2->VAR8[2];
    ptrdiff_t VAR13 = VAR2->VAR14[1] / 2;
    ptrdiff_t VAR15 = VAR2->VAR14[2] / 2;
    const int VAR16 = 1 << (VAR5 - 1);
    const int VAR17 = 16 - VAR5;
    int VAR18, VAR19;
    for (VAR19 = 0; VAR19 < VAR4; VAR19++)
    {
        for (VAR18 = 0; VAR18 < VAR3; VAR18++)
        {
            VAR7[VAR18] = (VAR16 + VAR11[VAR18]) << VAR17;
            VAR9[VAR18] = (VAR16 + VAR12[VAR18]) << VAR17;
        }
        VAR7 += VAR13;
        VAR9 += VAR15;
        VAR11 += VAR13;
        VAR12 += VAR15;
    }
}
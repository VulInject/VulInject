static void FUN1(VAR1)(VAR2 *VAR3, ptrdiff_t VAR4, VAR2 *VAR5, ptrdiff_t VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, intptr_t VAR15, intptr_t VAR16, int VAR17)
{
    int VAR18, VAR19;
    VAR20 *VAR21 = (VAR20 *)VAR5;
    ptrdiff_t VAR22 = VAR6 / sizeof(VAR20);
    VAR20 *VAR23 = (VAR20 *)VAR3;
    ptrdiff_t VAR24 = VAR4 / sizeof(VAR20);
    const VAR25 *VAR26 = VAR27[VAR15 - 1];
    int VAR28 = 14 + 1 - VAR29;
    int VAR30 = VAR10 + VAR28 - 1;
    VAR13 = VAR13 * (1 << (VAR29 - 8));
    VAR14 = VAR14 * (1 << (VAR29 - 8));
    for (VAR19 = 0; VAR19 < VAR9; VAR19++)
    {
        for (VAR18 = 0; VAR18 < VAR17; VAR18++)
            VAR23[VAR18] = FUN2(((FUN3(VAR21, 1) >> (VAR29 - 8)) * VAR12 + VAR8[VAR18] * VAR11 + ((VAR13 + VAR14 + 1) << VAR30)) >> (VAR30 + 1));
        VAR21 += VAR22;
        VAR23 += VAR24;
        VAR8 += VAR31;
    }
}
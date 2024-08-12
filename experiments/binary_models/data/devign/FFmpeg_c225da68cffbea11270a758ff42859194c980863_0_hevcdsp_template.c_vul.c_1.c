static void FUN1(VAR1)(VAR2 *VAR3, ptrdiff_t VAR4, VAR2 *VAR5, ptrdiff_t VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, intptr_t VAR15, intptr_t VAR16, int VAR17)
{
    int VAR18, VAR19;
    VAR20 *VAR21 = (VAR20 *)VAR5;
    ptrdiff_t VAR22 = VAR6 / sizeof(VAR20);
    VAR20 *VAR23 = (VAR20 *)VAR3;
    ptrdiff_t VAR24 = VAR4 / sizeof(VAR20);
    int VAR25 = 14 + 1 - VAR26;
    int VAR27 = VAR10 + VAR25 - 1;
    VAR13 = VAR13 * (1 << (VAR26 - 8));
    VAR14 = VAR14 * (1 << (VAR26 - 8));
    for (VAR19 = 0; VAR19 < VAR9; VAR19++)
    {
        for (VAR18 = 0; VAR18 < VAR17; VAR18++)
        {
            VAR23[VAR18] = FUN2(((VAR21[VAR18] << (14 - VAR26)) * VAR12 + VAR8[VAR18] * VAR11 + ((VAR13 + VAR14 + 1) << VAR27)) >> (VAR27 + 1));
        }
        VAR21 += VAR22;
        VAR23 += VAR24;
        VAR8 += VAR28;
    }
}
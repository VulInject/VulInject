static void FUN1(VAR1)(VAR2 *VAR3, ptrdiff_t VAR4, ptrdiff_t VAR5, int *VAR6, VAR2 *VAR7, VAR2 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14 = (VAR13 *)VAR3;
    ptrdiff_t VAR15 = VAR4 / sizeof(VAR13);
    ptrdiff_t VAR16 = VAR5 / sizeof(VAR13);
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        const int VAR17 = VAR6[VAR10] << (VAR18 - 8);
        if (VAR17 <= 0)
        {
            VAR14 += 4 * VAR16;
            continue;
        }
        VAR11 = VAR7[VAR10];
        VAR12 = VAR8[VAR10];
        for (VAR9 = 0; VAR9 < 4; VAR9++)
        {
            int VAR19;
            const int VAR20 = VAR21;
            const int VAR22 = VAR23;
            const int VAR24 = VAR25;
            const int VAR26 = VAR27;
            VAR19 = FUN2((((VAR24 - VAR22) * 4) + VAR20 - VAR26 + 4) >> 3, -VAR17, VAR17);
            if (!VAR11)
                VAR23 = FUN3(VAR22 + VAR19);
            if (!VAR12)
                VAR25 = FUN3(VAR24 - VAR19);
            VAR14 += VAR16;
        }
    }
}
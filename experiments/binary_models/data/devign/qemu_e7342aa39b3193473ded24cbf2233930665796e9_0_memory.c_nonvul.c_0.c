static void FUN1(hwaddr VAR1, VAR2 *VAR3, unsigned VAR4, unsigned VAR5, unsigned VAR6, void (*VAR7)(VAR8 *VAR9, hwaddr VAR1, VAR2 *VAR3, unsigned VAR4, unsigned VAR10, uint64_t VAR11), VAR8 *VAR9)
{
    uint64_t VAR12;
    unsigned VAR13;
    unsigned VAR14;
    if (!VAR5)
    {
        VAR5 = 1;
    }
    if (!VAR6)
    {
        VAR6 = 4;
    }
    VAR13 = FUN2(FUN3(VAR4, VAR6), VAR5);
    VAR12 = -1ULL >> (64 - VAR13 * 8);
    if (FUN4(VAR9))
    {
        for (VAR14 = 0; VAR14 < VAR4; VAR14 += VAR13)
        {
            FUN5(VAR9, VAR1 + VAR14, VAR3, VAR13, (VAR4 - VAR13 - VAR14) * 8, VAR12);
        }
    }
    else
    {
        for (VAR14 = 0; VAR14 < VAR4; VAR14 += VAR13)
        {
            FUN5(VAR9, VAR1 + VAR14, VAR3, VAR13, VAR14 * 8, VAR12);
        }
    }
}
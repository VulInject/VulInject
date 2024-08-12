static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, VAR6 *VAR7, int VAR8, int VAR9)
{
    int VAR10;
    *VAR3 = *VAR2;
    if (VAR4 <= 1)
        return;
    if (!VAR8)
    {
        memcpy(&VAR3[1], &VAR2[1], (VAR4 - 1) * sizeof(*VAR3));
        return;
    }
    if (VAR8 == 31)
    {
        for (VAR10 = 1; VAR10 < VAR4; VAR10++)
        {
            VAR3[VAR10] = FUN2(VAR3[VAR10 - 1] + VAR2[VAR10], VAR5);
        }
        return;
    }
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        VAR3[VAR10 + 1] = FUN2(VAR3[VAR10] + VAR2[VAR10 + 1], VAR5);
    }
    for (VAR10 = VAR8; VAR10 < VAR4 - 1; VAR10++)
    {
        int VAR11;
        int VAR12 = 0;
        int VAR13 = VAR2[VAR10 + 1];
        int VAR14;
        int VAR15 = VAR3[VAR10 - VAR8];
        for (VAR11 = 0; VAR11 < VAR8; VAR11++)
        {
            VAR12 += (VAR3[VAR10 - VAR11] - VAR15) * VAR7[VAR11];
        }
        VAR12 = (VAR12 + (1 << (VAR9 - 1))) >> VAR9;
        VAR12 += VAR15 + VAR13;
        VAR3[VAR10 + 1] = FUN2(VAR12, VAR5);
        VAR14 = FUN3(VAR13);
        if (VAR14)
        {
            for (VAR11 = VAR8 - 1; VAR11 >= 0 && VAR13 * VAR14 > 0; VAR11--)
            {
                int VAR16;
                VAR12 = VAR15 - VAR3[VAR10 - VAR11];
                VAR16 = FUN3(VAR12) * VAR14;
                VAR7[VAR11] -= VAR16;
                VAR12 *= VAR16;
                VAR13 -= ((VAR12 >> VAR9) * (VAR8 - VAR11));
            }
        }
    }
}
static void FUN1(const VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    const int VAR9 = VAR6 * VAR4;
    const VAR1 *VAR10, *VAR11, *VAR12 = VAR2 + VAR9, *VAR13 = VAR3 + VAR9;
    const VAR1 *VAR14 = VAR12 + VAR8 * VAR4;
    VAR1 *VAR15;
    for (; VAR12 < VAR14; VAR12 += VAR4, VAR13 += VAR4)
    {
        VAR10 = VAR12 + VAR5;
        VAR15 = (VAR1 *)VAR13 + VAR5;
        VAR11 = VAR10 + VAR7;
        for (; VAR10 < VAR11; VAR10++, VAR15++)
            *VAR15 = *VAR10;
    }
}
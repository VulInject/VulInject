static void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, const VAR1 *VAR4, ptrdiff_t VAR5, ptrdiff_t VAR6)
{
    const VAR1 *VAR7 = VAR4 + VAR5;
    const VAR1 *VAR8 = VAR4 + VAR6;
    const VAR1 *VAR9 = VAR4 + VAR5 * 2;
    const VAR1 *VAR10 = VAR4 + VAR6 * 2;
    int VAR11, VAR12, VAR13;
    for (VAR11 = 0; VAR11 < VAR3; VAR11++)
    {
        VAR12 = VAR4[VAR11] << 1;
        VAR13 = VAR7[VAR11] + VAR8[VAR11];
        VAR2[VAR11] = FUN2((4 + ((VAR4[VAR11] + VAR12 + VAR13) << 1) - VAR9[VAR11] - VAR10[VAR11]) >> 3);
        if (VAR13 > VAR12)
        {
            if (VAR2[VAR11] < VAR4[VAR11])
                VAR2[VAR11] = VAR4[VAR11];
        }
        else if (VAR2[VAR11] > VAR4[VAR11])
            VAR2[VAR11] = VAR4[VAR11];
    }
}
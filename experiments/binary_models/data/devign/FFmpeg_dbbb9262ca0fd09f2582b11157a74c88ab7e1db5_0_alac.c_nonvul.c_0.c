static void FUN1(VAR1 *VAR2[VAR3], VAR1 *VAR4, VAR1 *VAR5[VAR3], int VAR6, int VAR7, int VAR8, uint8_t VAR9, uint8_t VAR10)
{
    int VAR11;
    if (VAR10)
    {
        for (VAR11 = 0; VAR11 < VAR8; VAR11++)
        {
            int32_t VAR12, VAR13;
            VAR12 = VAR2[0][VAR11];
            VAR13 = VAR2[1][VAR11];
            VAR12 -= (VAR13 * VAR10) >> VAR9;
            VAR13 += VAR12;
            if (VAR6)
            {
                VAR13 = (VAR13 << VAR6) | VAR5[0][VAR11];
                VAR12 = (VAR12 << VAR6) | VAR5[1][VAR11];
            }
            VAR4[VAR11 * VAR7] = VAR13 << 8;
            VAR4[VAR11 * VAR7 + 1] = VAR12 << 8;
        }
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR8; VAR11++)
        {
            int32_t VAR14, VAR15;
            VAR14 = VAR2[0][VAR11];
            VAR15 = VAR2[1][VAR11];
            if (VAR6)
            {
                VAR14 = (VAR14 << VAR6) | VAR5[0][VAR11];
                VAR15 = (VAR15 << VAR6) | VAR5[1][VAR11];
            }
            VAR4[VAR11 * VAR7] = VAR14 << 8;
            VAR4[VAR11 * VAR7 + 1] = VAR15 << 8;
        }
    }
}
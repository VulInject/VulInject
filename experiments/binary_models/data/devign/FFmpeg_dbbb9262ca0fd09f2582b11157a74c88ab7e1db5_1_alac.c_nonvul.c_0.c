static void FUN1(VAR1 *VAR2[VAR3], VAR4 *VAR5, int VAR6, int VAR7, uint8_t VAR8, uint8_t VAR9)
{
    int VAR10;
    if (VAR9)
    {
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        {
            int32_t VAR11, VAR12;
            VAR11 = VAR2[0][VAR10];
            VAR12 = VAR2[1][VAR10];
            VAR11 -= (VAR12 * VAR9) >> VAR8;
            VAR12 += VAR11;
            VAR5[VAR10 * VAR6] = VAR12;
            VAR5[VAR10 * VAR6 + 1] = VAR11;
        }
        return;
    }
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        int16_t VAR13, VAR14;
        VAR13 = VAR2[0][VAR10];
        VAR14 = VAR2[1][VAR10];
        VAR5[VAR10 * VAR6] = VAR13;
        VAR5[VAR10 * VAR6 + 1] = VAR14;
    }
}
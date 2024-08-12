static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11;
    START_TIMER for (VAR11 = 0; VAR11 < VAR7 + 5; VAR11++)
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            int VAR12 = VAR3[VAR10];
            int VAR13 = VAR3[VAR10 + 1];
            int VAR14 = VAR3[VAR10 + 2];
            int VAR15 = VAR3[VAR10 + 3];
            int VAR16 = VAR3[VAR10 + 4];
            int VAR17 = VAR3[VAR10 + 5];
            int VAR18 = 20 * (VAR14 + VAR15) - 5 * (VAR13 + VAR16) + (VAR12 + VAR17);
            if (VAR8 < 8)
                VAR4[VAR10] = (32 * VAR14 * (8 - VAR8) + VAR18 * VAR8 + 128) >> 8;
            else
                VAR4[VAR10] = (VAR18 * (16 - VAR8) + 32 * VAR15 * (VAR8 - 8) + 128) >> 8;
        }
        VAR4 += VAR5;
        VAR3 += VAR5;
    }
    VAR4 -= (VAR7 + 5) * VAR5;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            int VAR12 = VAR4[VAR10 + 0 * VAR5];
            int VAR13 = VAR4[VAR10 + 1 * VAR5];
            int VAR14 = VAR4[VAR10 + 2 * VAR5];
            int VAR15 = VAR4[VAR10 + 3 * VAR5];
            int VAR16 = VAR4[VAR10 + 4 * VAR5];
            int VAR17 = VAR4[VAR10 + 5 * VAR5];
            int VAR18 = 20 * (VAR14 + VAR15) - 5 * (VAR13 + VAR16) + (VAR12 + VAR17);
            if (VAR9 < 8)
                VAR2[VAR10] = (32 * VAR14 * (8 - VAR9) + VAR18 * VAR9 + 128) >> 8;
            else
                VAR2[VAR10] = (VAR18 * (16 - VAR9) + 32 * VAR15 * (VAR9 - 8) + 128) >> 8;
        }
        VAR2 += VAR5;
        VAR4 += VAR5;
    }
    FUN2("")
}
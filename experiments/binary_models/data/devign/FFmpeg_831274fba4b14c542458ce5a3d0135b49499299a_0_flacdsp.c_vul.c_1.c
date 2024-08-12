static void FUN1(VAR1 *VAR2, const int VAR3[32], int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    for (VAR7 = VAR4; VAR7 < VAR6 - 1; VAR7 += 2, VAR2 += 2)
    {
        int VAR9 = VAR3[0];
        int VAR10 = VAR2[0];
        int VAR11 = 0, VAR12 = 0;
        for (VAR8 = 1; VAR8 < VAR4; VAR8++)
        {
            VAR11 += VAR9 * VAR10;
            VAR10 = VAR2[VAR8];
            VAR12 += VAR9 * VAR10;
            VAR9 = VAR3[VAR8];
        }
        VAR11 += VAR9 * VAR10;
        VAR10 = VAR2[VAR8] += VAR11 >> VAR5;
        VAR12 += VAR9 * VAR10;
        VAR2[VAR8 + 1] += VAR12 >> VAR5;
    }
    if (VAR7 < VAR6)
    {
        int VAR13 = 0;
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
            VAR13 += VAR3[VAR8] * VAR2[VAR8];
        VAR2[VAR8] += VAR13 >> VAR5;
    }
}
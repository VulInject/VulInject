static void FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR1 *VAR10, *VAR11, *VAR12;
    for (; VAR7 > 0; VAR7--)
    {
        VAR10 = VAR4;
        VAR11 = VAR4 + VAR5;
        VAR12 = VAR2;
        for (VAR8 = VAR6; VAR8 > 0; VAR8--)
        {
            VAR9 = (VAR10[0] + VAR11[0]) >> 1;
            VAR12[0] = VAR9;
            VAR12[1] = VAR9;
            VAR10++;
            VAR11++;
            VAR12 += 2;
        }
        VAR4 += VAR5 * 2;
        VAR2 += VAR3;
    }
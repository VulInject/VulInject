static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR1 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR6 = VAR4 + (VAR4 == VAR12);
    *VAR5 = (VAR3 + (VAR6 * 3) - 4) / (3 * VAR6);
    VAR7 = *VAR5 * 3;
    if (VAR4 > VAR13)
    {
        VAR10 = 1;
        for (VAR8 = 1; VAR8 <= VAR7; VAR8++)
        {
            VAR11 = VAR2[VAR10];
            assert(VAR11 >= 0 && VAR11 <= 24);
            for (VAR9 = 1; VAR9 < VAR6; VAR9++)
            {
                if (VAR2[VAR10 + VAR9] < VAR11)
                    VAR11 = VAR2[VAR10 + VAR9];
            }
            VAR2[VAR8] = VAR11;
            VAR10 += VAR6;
        }
    }
    if (VAR2[0] > 15)
        VAR2[0] = 15;
    for (VAR8 = 1; VAR8 <= VAR7; VAR8++)
        VAR2[VAR8] = FUN2(VAR2[VAR8], VAR2[VAR8 - 1] + 2);
    VAR8--;
    while (--VAR8 >= 0)
        VAR2[VAR8] = FUN2(VAR2[VAR8], VAR2[VAR8 + 1] + 2);
    if (VAR4 > VAR13)
    {
        VAR10 = VAR7 * VAR6;
        for (VAR8 = VAR7; VAR8 > 0; VAR8--)
        {
            for (VAR9 = 0; VAR9 < VAR6; VAR9++)
                VAR2[VAR10 - VAR9] = VAR2[VAR8];
            VAR10 -= VAR6;
        }
    }
}
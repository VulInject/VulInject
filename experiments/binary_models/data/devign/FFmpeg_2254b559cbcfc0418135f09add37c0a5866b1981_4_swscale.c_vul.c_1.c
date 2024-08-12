static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const VAR3 *VAR9, int VAR10)
{
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR12;
        int VAR13 = VAR9[VAR11];
        int VAR14 = 0;
        for (VAR12 = 0; VAR12 < VAR10; VAR12++)
        {
            VAR14 += ((int)VAR7[VAR13 + VAR12]) * VAR8[VAR10 * VAR11 + VAR12];
        }
        VAR4[VAR11] = FUN2(VAR14 >> 7, (1 << 15) - 1);
    }
}
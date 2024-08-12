static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const VAR3 *VAR9, int VAR10)
{
    int VAR11;
    VAR12 *VAR13 = (VAR12 *)VAR4;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR14;
        int VAR15 = VAR9[VAR11];
        int VAR16 = 0;
        for (VAR14 = 0; VAR14 < VAR10; VAR14++)
        {
            VAR16 += ((int)VAR7[VAR15 + VAR14]) * VAR8[VAR10 * VAR11 + VAR14];
        }
        VAR13[VAR11] = FUN2(VAR16 >> 3, (1 << 19) - 1);
    }
}
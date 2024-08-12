void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, const VAR8 *VAR9, VAR8 *VAR10)
{
    int VAR11, VAR12;
    if (VAR6 == -960)
    {
        memset(VAR10, 0, 256);
        return;
    }
    VAR11 = VAR4;
    VAR12 = VAR13[VAR4];
    do
    {
        int VAR14 = (FUN2(VAR2[VAR12] - VAR6 - VAR7, 0) & 0x1FE0) + VAR7;
        int VAR15 = FUN3(VAR16[VAR12] + VAR17[VAR12], VAR5);
        for (; VAR11 < VAR15; VAR11++)
        {
            int VAR18 = FUN4((VAR3[VAR11] - VAR14) >> 5, 0, 63);
            VAR10[VAR11] = VAR9[VAR18];
        }
    } while (VAR5 > VAR16[VAR12++]);
}
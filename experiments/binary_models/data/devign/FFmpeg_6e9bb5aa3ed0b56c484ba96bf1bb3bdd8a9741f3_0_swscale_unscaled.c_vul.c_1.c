static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    int VAR10, VAR11;
    int VAR12 = VAR5[0] >> 1;
    int VAR13 = VAR9[0] >> 1;
    VAR14 *VAR15 = (VAR14 *)VAR8[0];
    const VAR14 *VAR16 = (const VAR14 *)VAR4[0];
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        for (VAR11 = 0; VAR11 < VAR12; VAR11++)
        {
            VAR15[VAR11] = FUN2(VAR16[VAR11]);
        }
        VAR16 += VAR12;
        VAR15 += VAR13;
    }
    return VAR7;
}
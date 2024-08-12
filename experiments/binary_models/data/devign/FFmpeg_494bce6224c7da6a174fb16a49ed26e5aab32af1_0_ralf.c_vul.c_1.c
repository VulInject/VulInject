static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    uint8_t VAR6[VAR7];
    uint16_t VAR8[VAR7];
    int VAR9[17], VAR10[18];
    int VAR11, VAR12;
    int VAR13 = 0;
    GetBitContext VAR14;
    FUN2(&VAR14, VAR4, VAR5 * 4);
    for (VAR11 = 0; VAR11 <= 16; VAR11++)
        VAR9[VAR11] = 0;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        VAR12 = FUN3(&VAR14, 4) + 1;
        VAR9[VAR12]++;
        VAR13 = FUN4(VAR13, VAR12);
        VAR6[VAR11] = VAR12;
    }
    VAR10[1] = 0;
    for (VAR11 = 1; VAR11 <= 16; VAR11++)
        VAR10[VAR11 + 1] = (VAR10[VAR11] + VAR9[VAR11]) << 1;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
        VAR8[VAR11] = VAR10[VAR6[VAR11]]++;
    return FUN5(VAR2, FUN6(VAR13, 9), VAR5, VAR6, 1, 1, VAR8, 2, 2, NULL, 0, 0, 0);
}
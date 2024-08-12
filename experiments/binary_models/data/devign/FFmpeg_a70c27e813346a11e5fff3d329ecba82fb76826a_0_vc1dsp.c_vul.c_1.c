static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    uint8_t VAR9[8 * 11], *VAR10;
    int VAR11, VAR12;
    VAR11 = (VAR5 & 3);
    VAR12 = VAR6;
    VAR3 -= VAR4;
    VAR10 = VAR9;
    for (VAR8 = 0; VAR8 < 11; VAR8++)
    {
        for (VAR7 = 0; VAR7 < 8; VAR7++)
            VAR10[VAR7] = FUN2(VAR3 + VAR7, 1, VAR11, VAR12);
        VAR3 += VAR4;
        VAR10 += 8;
    }
    VAR12 = 1 - VAR6;
    VAR11 = (VAR5 >> 2) & 3;
    VAR10 = VAR9 + 8;
    for (VAR8 = 0; VAR8 < 8; VAR8++)
    {
        for (VAR7 = 0; VAR7 < 8; VAR7++)
            VAR2[VAR7] = FUN2(VAR10 + VAR7, 8, VAR11, VAR12);
        VAR2 += VAR4;
        VAR10 += 8;
    }
}
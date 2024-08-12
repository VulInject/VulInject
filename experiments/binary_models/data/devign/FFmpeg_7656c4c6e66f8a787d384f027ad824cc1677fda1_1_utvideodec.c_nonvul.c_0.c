static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    VAR1 *VAR15;
    int VAR16, VAR17;
    const int VAR18 = ~VAR8;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        VAR16 = ((VAR11 * VAR6) / VAR7) & VAR18;
        VAR17 = ((((VAR11 + 1) * VAR6) / VAR7) & VAR18) - VAR16;
        VAR15 = VAR2 + VAR16 * VAR4;
        VAR15[0] += 0x80;
        VAR12 = VAR15[0];
        for (VAR9 = VAR3; VAR9 < VAR5 * VAR3; VAR9 += VAR3)
        {
            VAR15[VAR9] += VAR12;
            VAR12 = VAR15[VAR9];
        }
        VAR15 += VAR4;
        if (VAR17 <= 1)
            continue;
        VAR14 = VAR15[-VAR4];
        VAR15[0] += VAR14;
        VAR12 = VAR15[0];
        for (VAR9 = VAR3; VAR9 < VAR5 * VAR3; VAR9 += VAR3)
        {
            VAR13 = VAR15[VAR9 - VAR4];
            VAR15[VAR9] += FUN2(VAR12, VAR13, (VAR1)(VAR12 + VAR13 - VAR14));
            VAR14 = VAR13;
            VAR12 = VAR15[VAR9];
        }
        VAR15 += VAR4;
        for (VAR10 = 2; VAR10 < VAR17; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR5 * VAR3; VAR9 += VAR3)
            {
                VAR13 = VAR15[VAR9 - VAR4];
                VAR15[VAR9] += FUN2(VAR12, VAR13, (VAR1)(VAR12 + VAR13 - VAR14));
                VAR14 = VAR13;
                VAR12 = VAR15[VAR9];
            }
            VAR15 += VAR4;
        }
    }
}
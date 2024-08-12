static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    int VAR6, VAR7, VAR8;
    pixel4 VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14 = (VAR13 *)VAR3;
    VAR4 /= sizeof(VAR13);
    VAR6 = VAR7 = VAR8 = 0;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 += VAR14[-1 + VAR5 * VAR4] + VAR14[VAR5 - VAR4];
        VAR7 += VAR14[4 + VAR5 - VAR4];
        VAR8 += VAR14[-1 + (VAR5 + 4) * VAR4];
    }
    VAR9 = FUN2((VAR6 + 4) >> 3);
    VAR10 = FUN2((VAR7 + 2) >> 2);
    VAR11 = FUN2((VAR8 + 2) >> 2);
    VAR12 = FUN2((VAR7 + VAR8 + 4) >> 3);
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        ((VAR15 *)(VAR14 + VAR5 * VAR4))[0] = VAR9;
        ((VAR15 *)(VAR14 + VAR5 * VAR4))[1] = VAR10;
    }
    for (VAR5 = 4; VAR5 < 8; VAR5++)
    {
        ((VAR15 *)(VAR14 + VAR5 * VAR4))[0] = VAR11;
        ((VAR15 *)(VAR14 + VAR5 * VAR4))[1] = VAR12;
    }
}
static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    int VAR6, VAR7;
    pixel4 VAR8, VAR9;
    VAR10 *VAR11 = (VAR10 *)VAR3;
    VAR4 /= sizeof(VAR10);
    VAR6 = VAR7 = 0;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 += VAR11[-1 + VAR5 * VAR4];
        VAR7 += VAR11[-1 + (VAR5 + 4) * VAR4];
    }
    VAR8 = FUN2((VAR6 + 2) >> 2);
    VAR9 = FUN2((VAR7 + 2) >> 2);
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        ((VAR12 *)(VAR11 + VAR5 * VAR4))[0] = ((VAR12 *)(VAR11 + VAR5 * VAR4))[1] = VAR8;
    }
    for (VAR5 = 4; VAR5 < 8; VAR5++)
    {
        ((VAR12 *)(VAR11 + VAR5 * VAR4))[0] = ((VAR12 *)(VAR11 + VAR5 * VAR4))[1] = VAR9;
    }
}
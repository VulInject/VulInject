void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9 = (((VAR10 *)VAR5)[0] + 32) >> 6;
    INIT_CLIP VAR11 *VAR12 = (VAR11 *)VAR3;
    VAR6 /= sizeof(VAR11);
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        for (VAR7 = 0; VAR7 < 4; VAR7++)
            VAR12[VAR7] = FUN2(VAR12[VAR7] + VAR9);
        VAR12 += VAR6;
    }
}
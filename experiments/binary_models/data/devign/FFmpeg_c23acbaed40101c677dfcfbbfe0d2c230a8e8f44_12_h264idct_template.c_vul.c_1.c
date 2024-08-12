void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    INIT_CLIP VAR8 *VAR9 = (VAR8 *)VAR3;
    VAR10 *VAR11 = (VAR10 *)VAR5;
    VAR6 /= sizeof(VAR8);
    VAR11[0] += 1 << 5;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        const int VAR12 = VAR11[VAR7 + 4 * 0] + VAR11[VAR7 + 4 * 2];
        const int VAR13 = VAR11[VAR7 + 4 * 0] - VAR11[VAR7 + 4 * 2];
        const int VAR14 = (VAR11[VAR7 + 4 * 1] >> 1) - VAR11[VAR7 + 4 * 3];
        const int VAR15 = VAR11[VAR7 + 4 * 1] + (VAR11[VAR7 + 4 * 3] >> 1);
        VAR11[VAR7 + 4 * 0] = VAR12 + VAR15;
        VAR11[VAR7 + 4 * 1] = VAR13 + VAR14;
        VAR11[VAR7 + 4 * 2] = VAR13 - VAR14;
        VAR11[VAR7 + 4 * 3] = VAR12 - VAR15;
    }
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        const int VAR12 = VAR11[0 + 4 * VAR7] + VAR11[2 + 4 * VAR7];
        const int VAR13 = VAR11[0 + 4 * VAR7] - VAR11[2 + 4 * VAR7];
        const int VAR14 = (VAR11[1 + 4 * VAR7] >> 1) - VAR11[3 + 4 * VAR7];
        const int VAR15 = VAR11[1 + 4 * VAR7] + (VAR11[3 + 4 * VAR7] >> 1);
        VAR9[VAR7 + 0 * VAR6] = FUN2(VAR9[VAR7 + 0 * VAR6] + ((VAR12 + VAR15) >> 6));
        VAR9[VAR7 + 1 * VAR6] = FUN2(VAR9[VAR7 + 1 * VAR6] + ((VAR13 + VAR14) >> 6));
        VAR9[VAR7 + 2 * VAR6] = FUN2(VAR9[VAR7 + 2 * VAR6] + ((VAR13 - VAR14) >> 6));
        VAR9[VAR7 + 3 * VAR6] = FUN2(VAR9[VAR7 + 3 * VAR6] + ((VAR12 - VAR15) >> 6));
    }
}
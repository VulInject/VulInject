static void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, VAR4 *VAR5)
{
    int VAR6[16];
    VAR1 *VAR7 = VAR8 + VAR9;
    int VAR10;
    FUN2(VAR6, VAR5);
    memset(VAR5, 0, 16 * sizeof(VAR4));
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        const int VAR11 = 13 * (VAR6[4 * 0 + VAR10] + VAR6[4 * 2 + VAR10]) + 0x200;
        const int VAR12 = 13 * (VAR6[4 * 0 + VAR10] - VAR6[4 * 2 + VAR10]) + 0x200;
        const int VAR13 = 7 * VAR6[4 * 1 + VAR10] - 17 * VAR6[4 * 3 + VAR10];
        const int VAR14 = 17 * VAR6[4 * 1 + VAR10] + 7 * VAR6[4 * 3 + VAR10];
        VAR2[0] = VAR7[VAR2[0] + ((VAR11 + VAR14) >> 10)];
        VAR2[1] = VAR7[VAR2[1] + ((VAR12 + VAR13) >> 10)];
        VAR2[2] = VAR7[VAR2[2] + ((VAR12 - VAR13) >> 10)];
        VAR2[3] = VAR7[VAR2[3] + ((VAR11 - VAR14) >> 10)];
        VAR2 += VAR3;
    }
}
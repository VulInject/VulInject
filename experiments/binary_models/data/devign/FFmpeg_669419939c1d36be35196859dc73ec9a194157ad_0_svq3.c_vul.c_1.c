static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    const int VAR5 = VAR6[VAR4];
    int VAR7;
    int VAR8[16];
    static const uint8_t VAR9[4] = {0, 1 * VAR10, 4 * VAR10, 5 * VAR10};
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        const int VAR11 = 13 * (VAR3[4 * VAR7 + 0] + VAR3[4 * VAR7 + 2]);
        const int VAR12 = 13 * (VAR3[4 * VAR7 + 0] - VAR3[4 * VAR7 + 2]);
        const int VAR13 = 7 * VAR3[4 * VAR7 + 1] - 17 * VAR3[4 * VAR7 + 3];
        const int VAR14 = 17 * VAR3[4 * VAR7 + 1] + 7 * VAR3[4 * VAR7 + 3];
        VAR8[4 * VAR7 + 0] = VAR11 + VAR14;
        VAR8[4 * VAR7 + 1] = VAR12 + VAR13;
        VAR8[4 * VAR7 + 2] = VAR12 - VAR13;
        VAR8[4 * VAR7 + 3] = VAR11 - VAR14;
    }
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        const int VAR15 = VAR9[VAR7];
        const int VAR11 = 13 * (VAR8[4 * 0 + VAR7] + VAR8[4 * 2 + VAR7]);
        const int VAR12 = 13 * (VAR8[4 * 0 + VAR7] - VAR8[4 * 2 + VAR7]);
        const int VAR13 = 7 * VAR8[4 * 1 + VAR7] - 17 * VAR8[4 * 3 + VAR7];
        const int VAR14 = 17 * VAR8[4 * 1 + VAR7] + 7 * VAR8[4 * 3 + VAR7];
        VAR2[VAR10 * 0 + VAR15] = (VAR11 + VAR14) * VAR5 + 0x80000 >> 20;
        VAR2[VAR10 * 2 + VAR15] = (VAR12 + VAR13) * VAR5 + 0x80000 >> 20;
        VAR2[VAR10 * 8 + VAR15] = (VAR12 - VAR13) * VAR5 + 0x80000 >> 20;
        VAR2[VAR10 * 10 + VAR15] = (VAR11 - VAR14) * VAR5 + 0x80000 >> 20;
    }
}
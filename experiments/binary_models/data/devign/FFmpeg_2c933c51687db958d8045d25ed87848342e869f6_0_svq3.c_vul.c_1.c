static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR9[VAR6];
    int VAR10;
    if (VAR7)
    {
        VAR7 = 13 * 13 * (VAR7 == 1 ? 1538U * VAR4[0] : VAR8 * (VAR4[0] >> 3) / 2);
        VAR4[0] = 0;
    }
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        const int VAR11 = 13 * (VAR4[0 + 4 * VAR10] + VAR4[2 + 4 * VAR10]);
        const int VAR12 = 13 * (VAR4[0 + 4 * VAR10] - VAR4[2 + 4 * VAR10]);
        const int VAR13 = 7 * VAR4[1 + 4 * VAR10] - 17 * VAR4[3 + 4 * VAR10];
        const int VAR14 = 17 * VAR4[1 + 4 * VAR10] + 7 * VAR4[3 + 4 * VAR10];
        VAR4[0 + 4 * VAR10] = VAR11 + VAR14;
        VAR4[1 + 4 * VAR10] = VAR12 + VAR13;
        VAR4[2 + 4 * VAR10] = VAR12 - VAR13;
        VAR4[3 + 4 * VAR10] = VAR11 - VAR14;
    }
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        const unsigned VAR11 = 13 * (VAR4[VAR10 + 4 * 0] + VAR4[VAR10 + 4 * 2]);
        const unsigned VAR12 = 13 * (VAR4[VAR10 + 4 * 0] - VAR4[VAR10 + 4 * 2]);
        const unsigned VAR13 = 7 * VAR4[VAR10 + 4 * 1] - 17 * VAR4[VAR10 + 4 * 3];
        const unsigned VAR14 = 17 * VAR4[VAR10 + 4 * 1] + 7 * VAR4[VAR10 + 4 * 3];
        const int VAR15 = (VAR7 + 0x80000);
        VAR2[VAR10 + VAR5 * 0] = FUN2(VAR2[VAR10 + VAR5 * 0] + ((int)((VAR11 + VAR14) * VAR8 + VAR15) >> 20));
        VAR2[VAR10 + VAR5 * 1] = FUN2(VAR2[VAR10 + VAR5 * 1] + ((int)((VAR12 + VAR13) * VAR8 + VAR15) >> 20));
        VAR2[VAR10 + VAR5 * 2] = FUN2(VAR2[VAR10 + VAR5 * 2] + ((int)((VAR12 - VAR13) * VAR8 + VAR15) >> 20));
        VAR2[VAR10 + VAR5 * 3] = FUN2(VAR2[VAR10 + VAR5 * 3] + ((int)((VAR11 - VAR14) * VAR8 + VAR15) >> 20));
    }
    memset(VAR4, 0, 16 * sizeof(VAR3));
}
void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7[16];
    static const uint8_t VAR8[4] = {0, 2 * VAR9, 8 * VAR9, 10 * VAR9};
    VAR10 *VAR11 = (VAR10 *)VAR4;
    VAR10 *VAR12 = (VAR10 *)VAR3;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        const int VAR13 = VAR11[4 * VAR6 + 0] + VAR11[4 * VAR6 + 1];
        const int VAR14 = VAR11[4 * VAR6 + 0] - VAR11[4 * VAR6 + 1];
        const int VAR15 = VAR11[4 * VAR6 + 2] - VAR11[4 * VAR6 + 3];
        const int VAR16 = VAR11[4 * VAR6 + 2] + VAR11[4 * VAR6 + 3];
        VAR7[4 * VAR6 + 0] = VAR13 + VAR16;
        VAR7[4 * VAR6 + 1] = VAR13 - VAR16;
        VAR7[4 * VAR6 + 2] = VAR14 - VAR15;
        VAR7[4 * VAR6 + 3] = VAR14 + VAR15;
    }
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        const int VAR17 = VAR8[VAR6];
        const int VAR13 = VAR7[4 * 0 + VAR6] + VAR7[4 * 2 + VAR6];
        const int VAR14 = VAR7[4 * 0 + VAR6] - VAR7[4 * 2 + VAR6];
        const int VAR15 = VAR7[4 * 1 + VAR6] - VAR7[4 * 3 + VAR6];
        const int VAR16 = VAR7[4 * 1 + VAR6] + VAR7[4 * 3 + VAR6];
        VAR12[VAR9 * 0 + VAR17] = ((((VAR13 + VAR16) * VAR5 + 128) >> 8));
        VAR12[VAR9 * 1 + VAR17] = ((((VAR14 + VAR15) * VAR5 + 128) >> 8));
        VAR12[VAR9 * 4 + VAR17] = ((((VAR14 - VAR15) * VAR5 + 128) >> 8));
        VAR12[VAR9 * 5 + VAR17] = ((((VAR13 - VAR16) * VAR5 + 128) >> 8));
    }
}
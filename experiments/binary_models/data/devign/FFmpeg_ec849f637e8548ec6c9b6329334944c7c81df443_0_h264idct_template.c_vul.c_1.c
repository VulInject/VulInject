void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    const int VAR5 = 16 * 2;
    const int VAR6 = 16;
    int VAR7;
    int VAR8[8];
    static const uint8_t VAR9[2] = {0, 16};
    VAR10 *VAR11 = (VAR10 *)VAR3;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        VAR8[2 * VAR7 + 0] = VAR11[VAR5 * VAR7 + VAR6 * 0] + VAR11[VAR5 * VAR7 + VAR6 * 1];
        VAR8[2 * VAR7 + 1] = VAR11[VAR5 * VAR7 + VAR6 * 0] - VAR11[VAR5 * VAR7 + VAR6 * 1];
    }
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        const int VAR12 = VAR9[VAR7];
        const int VAR13 = VAR8[2 * 0 + VAR7] + VAR8[2 * 2 + VAR7];
        const int VAR14 = VAR8[2 * 0 + VAR7] - VAR8[2 * 2 + VAR7];
        const int VAR15 = VAR8[2 * 1 + VAR7] - VAR8[2 * 3 + VAR7];
        const int VAR16 = VAR8[2 * 1 + VAR7] + VAR8[2 * 3 + VAR7];
        VAR11[VAR5 * 0 + VAR12] = ((VAR13 + VAR16) * VAR4 + 128) >> 8;
        VAR11[VAR5 * 1 + VAR12] = ((VAR14 + VAR15) * VAR4 + 128) >> 8;
        VAR11[VAR5 * 2 + VAR12] = ((VAR14 - VAR15) * VAR4 + 128) >> 8;
        VAR11[VAR5 * 3 + VAR12] = ((VAR13 - VAR16) * VAR4 + 128) >> 8;
    }
}
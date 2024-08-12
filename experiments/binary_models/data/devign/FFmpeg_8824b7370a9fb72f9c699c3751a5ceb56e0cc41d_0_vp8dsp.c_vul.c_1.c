static void FUN1(VAR1 *VAR2, int16_t VAR3[16], ptrdiff_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int16_t VAR10[16];
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 = (VAR3[VAR5 * 4 + 0] + VAR3[VAR5 * 4 + 2]) * 23170;
        VAR7 = (VAR3[VAR5 * 4 + 0] - VAR3[VAR5 * 4 + 2]) * 23170;
        VAR8 = VAR3[VAR5 * 4 + 1] * 12540 - VAR3[VAR5 * 4 + 3] * 30274;
        VAR9 = VAR3[VAR5 * 4 + 1] * 30274 + VAR3[VAR5 * 4 + 3] * 12540;
        FUN2(VAR3 + VAR5 * 4);
        VAR10[VAR5 * 4 + 0] = (VAR6 + VAR9) >> 14;
        VAR10[VAR5 * 4 + 3] = (VAR6 - VAR9) >> 14;
        VAR10[VAR5 * 4 + 1] = (VAR7 + VAR8) >> 14;
        VAR10[VAR5 * 4 + 2] = (VAR7 - VAR8) >> 14;
    }
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 = (VAR10[VAR5 + 0] + VAR10[VAR5 + 8]) * 23170;
        VAR7 = (VAR10[VAR5 + 0] - VAR10[VAR5 + 8]) * 23170;
        VAR8 = VAR10[VAR5 + 4] * 12540 - VAR10[VAR5 + 12] * 30274;
        VAR9 = VAR10[VAR5 + 4] * 30274 + VAR10[VAR5 + 12] * 12540;
        VAR2[0 * VAR4 + VAR5] = FUN3(VAR2[0 * VAR4 + VAR5] + ((VAR6 + VAR9 + 0x20000) >> 18));
        VAR2[3 * VAR4 + VAR5] = FUN3(VAR2[3 * VAR4 + VAR5] + ((VAR6 - VAR9 + 0x20000) >> 18));
        VAR2[1 * VAR4 + VAR5] = FUN3(VAR2[1 * VAR4 + VAR5] + ((VAR7 + VAR8 + 0x20000) >> 18));
        VAR2[2 * VAR4 + VAR5] = FUN3(VAR2[2 * VAR4 + VAR5] + ((VAR7 - VAR8 + 0x20000) >> 18));
    }
}
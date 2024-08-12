static void FUN1(VAR1 *VAR2, int VAR3)
{
    const int VAR4 = (215 - 2 * VAR3) * 5;
    int VAR5;
    VAR2->VAR6[0] = (VAR7[0] * VAR8[0]) >> 11;
    for (VAR5 = 1; VAR5 < 64; VAR5++)
        VAR2->VAR6[VAR5] = (VAR7[VAR5] * VAR8[VAR5] * VAR4 + 32) >> 14;
}
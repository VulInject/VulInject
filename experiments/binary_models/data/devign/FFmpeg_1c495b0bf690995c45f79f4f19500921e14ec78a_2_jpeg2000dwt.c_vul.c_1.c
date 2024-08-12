static void FUN1(int *VAR1, int VAR2, int VAR3)
{
    int VAR4;
    if (VAR3 <= VAR2 + 1)
    {
        if (VAR2 == 1)
            VAR1[1] = (VAR1[1] * VAR5 + (1 << 15)) >> 16;
        else
            VAR1[0] = (VAR1[0] * VAR6 + (1 << 15)) >> 16;
        return;
    }
    FUN2(VAR1, VAR2, VAR3);
    VAR2++;
    VAR3++;
    for (VAR4 = VAR2 / 2 - 2; VAR4 < VAR3 / 2 + 1; VAR4++)
        VAR1[2 * VAR4 + 1] -= (VAR7 * (VAR1[2 * VAR4] + VAR1[2 * VAR4 + 2]) + (1 << 15)) >> 16;
    for (VAR4 = VAR2 / 2 - 1; VAR4 < VAR3 / 2 + 1; VAR4++)
        VAR1[2 * VAR4] -= (VAR8 * (VAR1[2 * VAR4 - 1] + VAR1[2 * VAR4 + 1]) + (1 << 15)) >> 16;
    for (VAR4 = VAR2 / 2 - 1; VAR4 < VAR3 / 2; VAR4++)
        VAR1[2 * VAR4 + 1] += (VAR9 * (VAR1[2 * VAR4] + VAR1[2 * VAR4 + 2]) + (1 << 15)) >> 16;
    for (VAR4 = VAR2 / 2; VAR4 < VAR3 / 2; VAR4++)
        VAR1[2 * VAR4] += (VAR10 * (VAR1[2 * VAR4 - 1] + VAR1[2 * VAR4 + 1]) + (1 << 15)) >> 16;
}
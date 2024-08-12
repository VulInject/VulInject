static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR4 <= VAR3 + 1)
    {
        if (VAR3 == 1)
            VAR2[1] = (VAR2[1] * VAR6 + (1 << 16)) >> 17;
        else
            VAR2[0] = (VAR2[0] * VAR7 + (1 << 15)) >> 16;
        return;
    }
    FUN2(VAR2, VAR3, VAR4);
    for (VAR5 = (VAR3 >> 1) - 1; VAR5 < (VAR4 >> 1) + 2; VAR5++)
        VAR2[2 * VAR5] -= (VAR8 * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]) + (1 << 15)) >> 16;
    for (VAR5 = (VAR3 >> 1) - 1; VAR5 < (VAR4 >> 1) + 1; VAR5++)
        VAR2[2 * VAR5 + 1] -= (VAR9 * (VAR2[2 * VAR5] + VAR2[2 * VAR5 + 2]) + (1 << 15)) >> 16;
    for (VAR5 = (VAR3 >> 1); VAR5 < (VAR4 >> 1) + 1; VAR5++)
        VAR2[2 * VAR5] += (VAR10 * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]) + (1 << 15)) >> 16;
    for (VAR5 = (VAR3 >> 1); VAR5 < (VAR4 >> 1); VAR5++)
        VAR2[2 * VAR5 + 1] += (VAR11 * (VAR2[2 * VAR5] + VAR2[2 * VAR5 + 2]) + (1 << 15)) >> 16;
}
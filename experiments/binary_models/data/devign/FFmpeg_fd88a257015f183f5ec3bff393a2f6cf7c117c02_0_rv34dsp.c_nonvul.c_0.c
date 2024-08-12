static void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, VAR4 *VAR5)
{
    int VAR6[16];
    int VAR7;
    FUN2(VAR6, VAR5);
    memset(VAR5, 0, 16 * sizeof(VAR4));
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        const int VAR8 = 13 * (VAR6[4 * 0 + VAR7] + VAR6[4 * 2 + VAR7]) + 0x200;
        const int VAR9 = 13 * (VAR6[4 * 0 + VAR7] - VAR6[4 * 2 + VAR7]) + 0x200;
        const int VAR10 = 7 * VAR6[4 * 1 + VAR7] - 17 * VAR6[4 * 3 + VAR7];
        const int VAR11 = 17 * VAR6[4 * 1 + VAR7] + 7 * VAR6[4 * 3 + VAR7];
        VAR2[0] = FUN3(VAR2[0] + ((VAR8 + VAR11) >> 10));
        VAR2[1] = FUN3(VAR2[1] + ((VAR9 + VAR10) >> 10));
        VAR2[2] = FUN3(VAR2[2] + ((VAR9 - VAR10) >> 10));
        VAR2[3] = FUN3(VAR2[3] + ((VAR8 - VAR11) >> 10));
        VAR2 += VAR3;
    }
}
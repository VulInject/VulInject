static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    register int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR4 *VAR15, *VAR16;
    VAR15 = VAR5;
    VAR16 = VAR5;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR7 = 12 * (VAR15[0] + VAR15[4]) + 4;
        VAR8 = 12 * (VAR15[0] - VAR15[4]) + 4;
        VAR9 = 16 * VAR15[2] + 6 * VAR15[6];
        VAR10 = 6 * VAR15[2] - 16 * VAR15[6];
        VAR11 = VAR7 + VAR9;
        VAR12 = VAR8 + VAR10;
        VAR13 = VAR8 - VAR10;
        VAR14 = VAR7 - VAR9;
        VAR7 = 16 * VAR15[1] + 15 * VAR15[3] + 9 * VAR15[5] + 4 * VAR15[7];
        VAR8 = 15 * VAR15[1] - 4 * VAR15[3] - 16 * VAR15[5] - 9 * VAR15[7];
        VAR9 = 9 * VAR15[1] - 16 * VAR15[3] + 4 * VAR15[5] + 15 * VAR15[7];
        VAR10 = 4 * VAR15[1] - 9 * VAR15[3] + 15 * VAR15[5] - 16 * VAR15[7];
        VAR16[0] = (VAR11 + VAR7) >> 3;
        VAR16[1] = (VAR12 + VAR8) >> 3;
        VAR16[2] = (VAR13 + VAR9) >> 3;
        VAR16[3] = (VAR14 + VAR10) >> 3;
        VAR16[4] = (VAR14 - VAR10) >> 3;
        VAR16[5] = (VAR13 - VAR9) >> 3;
        VAR16[6] = (VAR12 - VAR8) >> 3;
        VAR16[7] = (VAR11 - VAR7) >> 3;
        VAR15 += 8;
        VAR16 += 8;
    }
    VAR15 = VAR5;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR7 = 17 * (VAR15[0] + VAR15[16]) + 64;
        VAR8 = 17 * (VAR15[0] - VAR15[16]) + 64;
        VAR9 = 22 * VAR15[8] + 10 * VAR15[24];
        VAR10 = 22 * VAR15[24] - 10 * VAR15[8];
        VAR2[0 * VAR3] = FUN2(VAR2[0 * VAR3] + ((VAR7 + VAR9) >> 7));
        VAR2[1 * VAR3] = FUN2(VAR2[1 * VAR3] + ((VAR8 - VAR10) >> 7));
        VAR2[2 * VAR3] = FUN2(VAR2[2 * VAR3] + ((VAR8 + VAR10) >> 7));
        VAR2[3 * VAR3] = FUN2(VAR2[3 * VAR3] + ((VAR7 - VAR9) >> 7));
        VAR15++;
        VAR2++;
    }
}
static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    register int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR4 *VAR15, *VAR16;
    const VAR1 *VAR17 = VAR18 + VAR19;
    VAR15 = VAR5;
    VAR16 = VAR5;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR7 = 17 * (VAR15[0] + VAR15[2]) + 4;
        VAR8 = 17 * (VAR15[0] - VAR15[2]) + 4;
        VAR9 = 22 * VAR15[1] + 10 * VAR15[3];
        VAR10 = 22 * VAR15[3] - 10 * VAR15[1];
        VAR16[0] = (VAR7 + VAR9) >> 3;
        VAR16[1] = (VAR8 - VAR10) >> 3;
        VAR16[2] = (VAR8 + VAR10) >> 3;
        VAR16[3] = (VAR7 - VAR9) >> 3;
        VAR15 += 8;
        VAR16 += 8;
    }
    VAR15 = VAR5;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR7 = 12 * (VAR15[0] + VAR15[32]) + 64;
        VAR8 = 12 * (VAR15[0] - VAR15[32]) + 64;
        VAR9 = 16 * VAR15[16] + 6 * VAR15[48];
        VAR10 = 6 * VAR15[16] - 16 * VAR15[48];
        VAR11 = VAR7 + VAR9;
        VAR12 = VAR8 + VAR10;
        VAR13 = VAR8 - VAR10;
        VAR14 = VAR7 - VAR9;
        VAR7 = 16 * VAR15[8] + 15 * VAR15[24] + 9 * VAR15[40] + 4 * VAR15[56];
        VAR8 = 15 * VAR15[8] - 4 * VAR15[24] - 16 * VAR15[40] - 9 * VAR15[56];
        VAR9 = 9 * VAR15[8] - 16 * VAR15[24] + 4 * VAR15[40] + 15 * VAR15[56];
        VAR10 = 4 * VAR15[8] - 9 * VAR15[24] + 15 * VAR15[40] - 16 * VAR15[56];
        VAR2[0 * VAR3] = VAR17[VAR2[0 * VAR3] + ((VAR11 + VAR7) >> 7)];
        VAR2[1 * VAR3] = VAR17[VAR2[1 * VAR3] + ((VAR12 + VAR8) >> 7)];
        VAR2[2 * VAR3] = VAR17[VAR2[2 * VAR3] + ((VAR13 + VAR9) >> 7)];
        VAR2[3 * VAR3] = VAR17[VAR2[3 * VAR3] + ((VAR14 + VAR10) >> 7)];
        VAR2[4 * VAR3] = VAR17[VAR2[4 * VAR3] + ((VAR14 - VAR10 + 1) >> 7)];
        VAR2[5 * VAR3] = VAR17[VAR2[5 * VAR3] + ((VAR13 - VAR9 + 1) >> 7)];
        VAR2[6 * VAR3] = VAR17[VAR2[6 * VAR3] + ((VAR12 - VAR8 + 1) >> 7)];
        VAR2[7 * VAR3] = VAR17[VAR2[7 * VAR3] + ((VAR11 - VAR7 + 1) >> 7)];
        VAR15++;
        VAR2++;
    }
}
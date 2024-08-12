static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    register int VAR7, VAR8, VAR9, VAR10;
    VAR4 *VAR11, *VAR12;
    const VAR1 *VAR13 = VAR14 + VAR15;
    VAR11 = VAR5;
    VAR12 = VAR5;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR7 = 17 * (VAR11[0] + VAR11[2]) + 4;
        VAR8 = 17 * (VAR11[0] - VAR11[2]) + 4;
        VAR9 = 22 * VAR11[1] + 10 * VAR11[3];
        VAR10 = 22 * VAR11[3] - 10 * VAR11[1];
        VAR12[0] = (VAR7 + VAR9) >> 3;
        VAR12[1] = (VAR8 - VAR10) >> 3;
        VAR12[2] = (VAR8 + VAR10) >> 3;
        VAR12[3] = (VAR7 - VAR9) >> 3;
        VAR11 += 8;
        VAR12 += 8;
    }
    VAR11 = VAR5;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR7 = 17 * (VAR11[0] + VAR11[16]) + 64;
        VAR8 = 17 * (VAR11[0] - VAR11[16]) + 64;
        VAR9 = 22 * VAR11[8] + 10 * VAR11[24];
        VAR10 = 22 * VAR11[24] - 10 * VAR11[8];
        VAR2[0 * VAR3] = VAR13[VAR2[0 * VAR3] + ((VAR7 + VAR9) >> 7)];
        VAR2[1 * VAR3] = VAR13[VAR2[1 * VAR3] + ((VAR8 - VAR10) >> 7)];
        VAR2[2 * VAR3] = VAR13[VAR2[2 * VAR3] + ((VAR8 + VAR10) >> 7)];
        VAR2[3 * VAR3] = VAR13[VAR2[3 * VAR3] + ((VAR7 - VAR9) >> 7)];
        VAR11++;
        VAR2++;
    }
}
static void FUN1(VAR1 *VAR2, DCTELEM VAR3[16], ptrdiff_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR1 *VAR10 = VAR11 + VAR12;
    DCTELEM VAR13[16];
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 = VAR3[0 * 4 + VAR5] + VAR3[2 * 4 + VAR5];
        VAR7 = VAR3[0 * 4 + VAR5] - VAR3[2 * 4 + VAR5];
        VAR8 = FUN2(VAR3[1 * 4 + VAR5]) - FUN3(VAR3[3 * 4 + VAR5]);
        VAR9 = FUN3(VAR3[1 * 4 + VAR5]) + FUN2(VAR3[3 * 4 + VAR5]);
        VAR3[0 * 4 + VAR5] = 0;
        VAR3[1 * 4 + VAR5] = 0;
        VAR3[2 * 4 + VAR5] = 0;
        VAR3[3 * 4 + VAR5] = 0;
        VAR13[VAR5 * 4 + 0] = VAR6 + VAR9;
        VAR13[VAR5 * 4 + 1] = VAR7 + VAR8;
        VAR13[VAR5 * 4 + 2] = VAR7 - VAR8;
        VAR13[VAR5 * 4 + 3] = VAR6 - VAR9;
    }
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR6 = VAR13[0 * 4 + VAR5] + VAR13[2 * 4 + VAR5];
        VAR7 = VAR13[0 * 4 + VAR5] - VAR13[2 * 4 + VAR5];
        VAR8 = FUN2(VAR13[1 * 4 + VAR5]) - FUN3(VAR13[3 * 4 + VAR5]);
        VAR9 = FUN3(VAR13[1 * 4 + VAR5]) + FUN2(VAR13[3 * 4 + VAR5]);
        VAR2[0] = VAR10[VAR2[0] + ((VAR6 + VAR9 + 4) >> 3)];
        VAR2[1] = VAR10[VAR2[1] + ((VAR7 + VAR8 + 4) >> 3)];
        VAR2[2] = VAR10[VAR2[2] + ((VAR7 - VAR8 + 4) >> 3)];
        VAR2[3] = VAR10[VAR2[3] + ((VAR6 - VAR9 + 4) >> 3)];
        VAR2 += VAR4;
    }
}
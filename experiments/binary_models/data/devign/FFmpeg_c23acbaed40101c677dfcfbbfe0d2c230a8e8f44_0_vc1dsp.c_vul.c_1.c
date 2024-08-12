static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    int VAR7 = VAR5[0];
    const VAR1 *VAR8;
    VAR7 = (3 * VAR7 + 1) >> 1;
    VAR7 = (3 * VAR7 + 16) >> 5;
    VAR8 = VAR9 + VAR10 + VAR7;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR2[0] = VAR8[VAR2[0]];
        VAR2[1] = VAR8[VAR2[1]];
        VAR2[2] = VAR8[VAR2[2]];
        VAR2[3] = VAR8[VAR2[3]];
        VAR2[4] = VAR8[VAR2[4]];
        VAR2[5] = VAR8[VAR2[5]];
        VAR2[6] = VAR8[VAR2[6]];
        VAR2[7] = VAR8[VAR2[7]];
        VAR2 += VAR3;
    }
}
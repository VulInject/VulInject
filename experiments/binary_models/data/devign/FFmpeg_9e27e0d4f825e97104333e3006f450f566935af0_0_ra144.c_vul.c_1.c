static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int *VAR5, const VAR1 *VAR6, const VAR7 *VAR8, const VAR7 *VAR9)
{
    int VAR10;
    int VAR11[3];
    VAR11[0] = 0;
    for (VAR10 = !VAR4; VAR10 < 3; VAR10++)
        VAR11[VAR10] = (VAR12[VAR3][VAR10] * VAR5[VAR10]) >> VAR13[VAR3];
    VAR2[VAR10] = (VAR6[VAR10] * VAR11[0] + VAR8[VAR10] * VAR11[1] + VAR9[VAR10] * VAR11[2]) >> 12;
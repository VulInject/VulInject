static void FUN1(const VAR1 *VAR2, VAR3 *restrict VAR4, int VAR5)
{
    int VAR6;
    VAR3 *VAR7 = VAR8 + VAR9;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR4[0] = VAR7[VAR4[0] + VAR2[0]];
        VAR4[1] = VAR7[VAR4[1] + VAR2[1]];
        VAR4[2] = VAR7[VAR4[2] + VAR2[2]];
        VAR4[3] = VAR7[VAR4[3] + VAR2[3]];
        VAR4 += VAR5;
        VAR2 += 8;
    }
}
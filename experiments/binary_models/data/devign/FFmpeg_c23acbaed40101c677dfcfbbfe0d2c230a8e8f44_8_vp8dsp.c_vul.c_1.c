static void FUN1(VAR1 *VAR2, DCTELEM VAR3[16], ptrdiff_t VAR4)
{
    int VAR5, VAR6 = (VAR3[0] + 4) >> 3;
    VAR1 *VAR7 = VAR8 + VAR9 + VAR6;
    VAR3[0] = 0;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR2[0] = VAR7[VAR2[0]];
        VAR2[1] = VAR7[VAR2[1]];
        VAR2[2] = VAR7[VAR2[2]];
        VAR2[3] = VAR7[VAR2[3]];
        VAR2 += VAR4;
    }
}
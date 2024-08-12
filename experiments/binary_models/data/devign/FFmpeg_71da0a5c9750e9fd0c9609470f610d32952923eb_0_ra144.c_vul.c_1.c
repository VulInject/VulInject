void FUN1(int *VAR1, const int *VAR2)
{
    int VAR3[VAR4];
    int *VAR5 = VAR3;
    int *VAR6 = VAR1;
    int VAR7, VAR8;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR5[VAR7] = VAR2[VAR7] * 16;
        for (VAR8 = 0; VAR8 < VAR7; VAR8++)
            VAR5[VAR8] = ((VAR2[VAR7] * VAR6[VAR7 - VAR8 - 1]) >> 12) + VAR6[VAR8];
        FUN2(int *, VAR5, VAR6);
    }
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        VAR1[VAR7] >>= 4;
}
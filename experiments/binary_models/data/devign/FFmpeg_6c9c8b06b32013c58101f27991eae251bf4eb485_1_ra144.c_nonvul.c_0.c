static void FUN1(int *VAR1, const int *VAR2)
{
    int VAR3[10];
    int *VAR4 = VAR3;
    int *VAR5 = VAR1;
    int VAR6, VAR7;
    for (VAR6 = 0; VAR6 < 10; VAR6++)
    {
        VAR4[VAR6] = VAR2[VAR6] << 4;
        for (VAR7 = 0; VAR7 < VAR6; VAR7++)
            VAR4[VAR7] = ((VAR2[VAR6] * VAR5[VAR6 - VAR7 - 1]) >> 12) + VAR5[VAR7];
        FUN2(int *, VAR4, VAR5);
    }
    for (VAR6 = 0; VAR6 < 10; VAR6++)
        VAR1[VAR6] >>= 4;
}
static int FUN1(int *VAR1, const VAR2 *VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9[10];
    int VAR10[10];
    int *VAR11 = VAR9;
    int *VAR12 = VAR10;
    for (VAR7 = 0; VAR7 < 10; VAR7++)
        VAR10[VAR7] = VAR3[VAR7];
    VAR1[9] = VAR12[9];
    if ((unsigned)VAR12[9] + 0x1000 > 0x1fff)
    {
        FUN2(VAR5, VAR13, "");
        return 1;
    }
    for (VAR7 = 8; VAR7 >= 0; VAR7--)
    {
        VAR6 = 0x1000 - ((VAR12[VAR7 + 1] * VAR12[VAR7 + 1]) >> 12);
        if (!VAR6)
            VAR6 = -2;
        for (VAR8 = 0; VAR8 <= VAR7; VAR8++)
            VAR11[VAR8] = ((VAR12[VAR8] - ((VAR1[VAR7 + 1] * VAR12[VAR7 - VAR8]) >> 12)) * (0x1000000 / VAR6)) >> 12;
        VAR1[VAR7] = VAR11[VAR7];
        if ((unsigned)VAR11[VAR7] + 0x1000 > 0x1fff)
            return 1;
        FUN3(int *, VAR11, VAR12);
    }
    return 0;
}
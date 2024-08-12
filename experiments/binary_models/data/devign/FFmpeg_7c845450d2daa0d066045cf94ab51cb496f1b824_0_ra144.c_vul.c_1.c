int FUN1(int *VAR1, const VAR2 *VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    int VAR11[VAR10];
    int *VAR12 = VAR9;
    int *VAR13 = VAR11;
    for (VAR7 = 0; VAR7 < VAR10; VAR7++)
        VAR11[VAR7] = VAR3[VAR7];
    VAR1[VAR10 - 1] = VAR13[VAR10 - 1];
    if ((unsigned)VAR13[VAR10 - 1] + 0x1000 > 0x1fff)
    {
        FUN2(VAR5, VAR14, "");
        return 1;
    }
    for (VAR7 = VAR10 - 2; VAR7 >= 0; VAR7--)
    {
        VAR6 = 0x1000 - ((VAR13[VAR7 + 1] * VAR13[VAR7 + 1]) >> 12);
        if (!VAR6)
            VAR6 = -2;
        VAR6 = 0x1000000 / VAR6;
        for (VAR8 = 0; VAR8 <= VAR7; VAR8++)
        {
            int VAR15 = VAR13[VAR8] - ((VAR1[VAR7 + 1] * VAR13[VAR7 - VAR8]) >> 12);
            if ((int)(VAR15 * (unsigned)VAR6) != VAR15 * (VAR16)VAR6)
                return 1;
            VAR12[VAR8] = ((VAR13[VAR8] - ((VAR1[VAR7 + 1] * VAR13[VAR7 - VAR8]) >> 12)) * VAR6) >> 12;
        }
        if ((unsigned)VAR12[VAR7] + 0x1000 > 0x1fff)
            return 1;
        VAR1[VAR7] = VAR12[VAR7];
        FUN3(int *, VAR12, VAR13);
    }
    return 0;
}
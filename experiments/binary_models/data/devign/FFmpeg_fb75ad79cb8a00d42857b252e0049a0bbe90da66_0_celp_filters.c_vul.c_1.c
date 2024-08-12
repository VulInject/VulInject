int FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR12 = -VAR9, VAR13;
        for (VAR10 = 1; VAR10 <= VAR6; VAR10++)
            VAR12 += VAR3[VAR10 - 1] * VAR2[VAR11 - VAR10];
        VAR13 = ((-VAR12 >> 12) + VAR4[VAR11]) >> VAR8;
        VAR12 = FUN2(VAR13);
        if (VAR7 && VAR12 != VAR13)
            return 1;
        VAR2[VAR11] = VAR12;
    }
    return 0;
}
void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    assert(VAR11 >= 0 && VAR11 < VAR5);
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        int VAR12 = 0;
        int VAR13 = 0x4000;
        for (VAR10 = 0; VAR10 < VAR7;)
        {
            VAR13 += VAR3[VAR9 + VAR10] * VAR4[VAR12 + VAR6];
            VAR12 += VAR5;
            VAR10++;
            VAR13 += VAR3[VAR9 - VAR10] * VAR4[VAR12 - VAR6];
        }
        if (FUN2(VAR13 >> 15) != (VAR13 >> 15))
            FUN3(NULL, VAR14, "");
        VAR2[VAR9] = VAR13 >> 15;
    }
}
FUN1(const VAR1 *VAR2, int VAR3, const VAR4 **VAR5, VAR6 *VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    int VAR12 = 15;
    FUN2(VAR10 == 16);
    for (VAR11 = 0; VAR11 < VAR8; VAR11++)
    {
        int VAR13 = 1 << (VAR12 - 1);
        int VAR14;
        VAR13 -= 0x40000000;
        for (VAR14 = 0; VAR14 < VAR3; VAR14++)
            VAR13 += VAR5[VAR14][VAR11] * VAR2[VAR14];
        FUN3(&VAR7[VAR11], VAR13, 0x8000, int);
    }
}
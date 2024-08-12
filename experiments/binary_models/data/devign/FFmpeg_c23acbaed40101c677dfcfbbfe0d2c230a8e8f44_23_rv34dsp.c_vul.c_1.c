static void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, int VAR4)
{
    const VAR1 *VAR5 = VAR6 + VAR7;
    int VAR8, VAR9;
    VAR5 += (13 * 13 * VAR4 + 0x200) >> 10;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        for (VAR9 = 0; VAR9 < 4; VAR9++)
            VAR2[VAR9] = VAR5[VAR2[VAR9]];
        VAR2 += VAR3;
    }
}
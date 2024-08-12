static void FUN1(VAR1 *VAR2, int VAR3, int *VAR4)
{
    int VAR5, VAR6;
    int VAR7 = VAR2->VAR8;
    int VAR9 = VAR2->VAR9;
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        VAR4[VAR5] = 0;
        if (!VAR2->VAR10[VAR5])
            continue;
        for (VAR6 = 0; VAR6 < VAR7 * VAR9; VAR6++)
            VAR4[VAR5] += VAR2->VAR11[VAR6 + VAR2->VAR12] * VAR2->VAR13[VAR6 + VAR7 * VAR9 * VAR5];
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
            VAR4[VAR5] += VAR2->VAR14[VAR6][VAR3] * VAR2->VAR15[VAR6 + VAR9 * VAR5];
        VAR4[VAR5] += 1 << VAR2->VAR16 - 1;
        VAR4[VAR5] >>= VAR2->VAR16;
        VAR2->VAR14[VAR5][VAR3] += VAR4[VAR5];
    }
}
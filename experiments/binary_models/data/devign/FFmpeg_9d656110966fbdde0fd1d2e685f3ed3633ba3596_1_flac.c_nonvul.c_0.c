static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10[VAR4];
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR2->VAR11[VAR3][VAR6] = FUN2(&VAR2->VAR12, VAR2->VAR13);
    }
    VAR8 = FUN3(&VAR2->VAR12, 4) + 1;
    if (VAR8 == 16)
    {
        FUN4(VAR2->VAR14, VAR15, "");
        return -1;
    }
    VAR9 = FUN2(&VAR2->VAR12, 5);
    if (VAR9 < 0)
    {
        FUN4(VAR2->VAR14, VAR15, "", VAR9);
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR10[VAR6] = FUN2(&VAR2->VAR12, VAR8);
    }
    if (FUN5(VAR2, VAR3, VAR4) < 0)
        return -1;
    for (VAR6 = VAR4; VAR6 < VAR2->VAR16; VAR6++)
    {
        VAR5 = 0;
        for (VAR7 = 0; VAR7 < VAR4; VAR7++)
            VAR5 += VAR10[VAR7] * VAR2->VAR11[VAR3][VAR6 - VAR7 - 1];
        VAR2->VAR11[VAR3][VAR6] += VAR5 >> VAR9;
    }
    return 0;
}
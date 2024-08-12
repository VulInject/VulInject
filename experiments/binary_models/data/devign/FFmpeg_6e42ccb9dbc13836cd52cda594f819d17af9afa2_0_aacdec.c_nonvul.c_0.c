static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR2->VAR10 = FUN2(VAR4, 2) + 1;
    VAR9 = FUN2(VAR4, 6);
    if (VAR9 >= VAR7)
        return -1;
    VAR2->VAR11[0] = VAR6[VAR9];
    VAR2->VAR11[0] += FUN2(VAR4, 5);
    if (VAR2->VAR11[0] >= VAR6[VAR7])
        return -1;
    VAR2->VAR12[0] = FUN2(VAR4, 4);
    for (VAR8 = 1; VAR8 < VAR2->VAR10; VAR8++)
    {
        VAR2->VAR11[VAR8] = FUN2(VAR4, 5) + VAR2->VAR11[VAR8 - 1];
        if (VAR2->VAR11[VAR8] >= VAR6[VAR7])
            return -1;
        VAR2->VAR12[VAR8] = FUN2(VAR4, 4);
    }
    return 0;
}
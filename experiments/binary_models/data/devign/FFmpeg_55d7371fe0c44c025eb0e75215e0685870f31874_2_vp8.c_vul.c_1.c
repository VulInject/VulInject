static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    const VAR3 *VAR6 = VAR4;
    int VAR7;
    VAR2->VAR8 = 1 << FUN2(&VAR2->VAR9, 2);
    VAR4 += 3 * (VAR2->VAR8 - 1);
    VAR5 -= 3 * (VAR2->VAR8 - 1);
    if (VAR5 < 0)
        return -1;
    for (VAR7 = 0; VAR7 < VAR2->VAR8 - 1; VAR7++)
    {
        int VAR10 = FUN3(VAR6 + 3 * VAR7);
        if (VAR5 - VAR10 < 0)
            return -1;
        FUN4(&VAR2->VAR11[VAR7], VAR4, VAR10);
        VAR4 += VAR10;
        VAR5 -= VAR10;
    }
    FUN4(&VAR2->VAR11[VAR7], VAR4, VAR5);
    return 0;
}
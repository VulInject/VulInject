static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR6 = FUN2(VAR4, 5);
    if (VAR2->VAR7 || VAR6 != VAR2->VAR8)
    {
        FUN3(&VAR2->VAR7);
    }
    if (!VAR2->VAR7)
        VAR2->VAR7 = FUN4(VAR6 * sizeof(VAR9));
    if (!VAR2->VAR7)
        return -1;
    if (VAR2->VAR10 || VAR6 != VAR2->VAR8)
    {
        FUN3(&VAR2->VAR10);
    }
    if (!VAR2->VAR10)
        VAR2->VAR10 = FUN4(VAR6 * sizeof(VAR9));
    if (!VAR2->VAR10)
        return -1;
    VAR2->VAR8 = VAR6;
    VAR2->VAR11 = FUN2(VAR4, 4);
    VAR2->VAR12 = FUN2(VAR4, 4);
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR2->VAR7[VAR5] = FUN2(VAR4, 16);
        if (VAR5 && VAR2->VAR7[VAR5 - 1] >= VAR2->VAR7[VAR5])
        {
            FUN5(VAR2, VAR13, ""
                                    "",
                   VAR2->VAR7[VAR5 - 1], VAR2->VAR7[VAR5]);
            return -1;
        }
        VAR2->VAR10[VAR5] = FUN2(VAR4, 16);
        if (VAR5 && VAR2->VAR10[VAR5 - 1] < VAR2->VAR10[VAR5])
        {
            FUN5(VAR2, VAR13, ""
                                    "",
                   VAR2->VAR10[VAR5 - 1], VAR2->VAR10[VAR5]);
            return -1;
        }
    }
    return 0;
}
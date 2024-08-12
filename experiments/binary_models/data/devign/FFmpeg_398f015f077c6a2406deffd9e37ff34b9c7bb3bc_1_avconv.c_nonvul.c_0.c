static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    AVSubtitle VAR6;
    int VAR7, VAR8 = FUN2(VAR2->VAR9, &VAR6, VAR5, VAR4);
    if (VAR8 < 0)
        return VAR8;
    if (!*VAR5)
        return VAR8;
    VAR2->VAR10++;
    for (VAR7 = 0; VAR7 < VAR11; VAR7++)
    {
        VAR12 *VAR13 = VAR14[VAR7];
        if (!FUN3(VAR2, VAR13) || !VAR13->VAR15)
            continue;
        FUN4(VAR16[VAR13->VAR17], VAR13, VAR2, &VAR6, VAR4->VAR18);
    }
    FUN5(&VAR6);
    return VAR8;
}
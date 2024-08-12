int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    int VAR8, VAR9, VAR10;
    if ((VAR9 = FUN2(VAR2, 0)) < 0)
        return VAR9;
    if (VAR9 > 0)
        return 0;
    if (VAR2->VAR11)
        return VAR12;
    VAR8 = VAR2->VAR13;
    for (VAR10 = 0; VAR10 < VAR2->VAR14; VAR10++)
        if (!FUN3(&VAR6->VAR15[VAR10]->VAR16) && VAR6->VAR15[VAR10]->VAR17 && !VAR6->VAR15[VAR10]->VAR18)
            VAR8 = VAR10;
    VAR9 = FUN4(VAR6->VAR15[VAR8]);
    if (VAR9 == VAR12)
    {
        if ((VAR9 = FUN5(VAR2, VAR8, NULL)) < 0)
            return VAR9;
        if ((VAR9 = FUN2(VAR2, 0)) < 0)
            return VAR9;
        VAR9 = 0;
    }
    return VAR9;
}
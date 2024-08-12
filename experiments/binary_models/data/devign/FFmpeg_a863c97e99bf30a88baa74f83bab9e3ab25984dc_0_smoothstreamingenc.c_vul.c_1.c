static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6[0]->VAR4;
    VAR7 *VAR8 = VAR4->VAR9;
    int VAR10 = VAR4->VAR11;
    int VAR12;
    if (VAR4->VAR13 == VAR14)
    {
        FUN2(VAR8, &VAR8, &VAR10);
        if (!VAR8)
            VAR8 = VAR4->VAR9;
    }
    if (!VAR8)
        return;
    VAR2->VAR15 = FUN3(2 * VAR10 + 1);
    if (!VAR2->VAR15)
        return;
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
        snprintf(&VAR2->VAR15[2 * VAR12], 3, "", VAR8[VAR12]);
    if (VAR8 != VAR4->VAR9)
        FUN4(VAR8);
}
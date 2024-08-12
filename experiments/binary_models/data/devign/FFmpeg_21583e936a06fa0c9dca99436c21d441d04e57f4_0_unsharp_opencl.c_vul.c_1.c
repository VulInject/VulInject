static int FUN1(int VAR1, VAR2 *VAR3)
{
    int VAR4, VAR5, VAR6 = 0;
    int VAR7 = sizeof(VAR2) * (2 * VAR1 + 1);
    VAR2 *VAR8, *VAR9, **VAR10;
    VAR8 = FUN2(VAR7);
    if (!VAR8)
    {
        VAR6 = FUN3(VAR11);
        goto VAR12;
    }
    VAR9 = FUN2(VAR7);
    if (!VAR9)
    {
        VAR6 = FUN3(VAR11);
        goto VAR12;
    }
    VAR10 = FUN4(2 * VAR1 + 1, sizeof(VAR2 *));
    if (!VAR10)
    {
        VAR6 = FUN3(VAR11);
        goto VAR12;
    }
    for (VAR4 = 0; VAR4 < 2 * VAR1 + 1; VAR4++)
    {
        VAR10[VAR4] = FUN2(VAR7);
        if (!VAR10[VAR4])
        {
            VAR6 = FUN3(VAR11);
            goto VAR12;
        }
    }
    for (VAR4 = 0; VAR4 < 2 * VAR1 + 1; VAR4++)
    {
        memset(VAR8, 0, VAR7);
        VAR8[VAR4] = 1;
        for (VAR5 = 0; VAR5 < VAR1 * 2; VAR5 += 2)
        {
            FUN5(VAR9, VAR10[VAR5], VAR8, VAR1 * 2);
            memcpy(VAR10[VAR5], VAR8, VAR7);
            FUN5(VAR8, VAR10[VAR5 + 1], VAR9, VAR1 * 2);
            memcpy(VAR10[VAR5 + 1], VAR9, VAR7);
        }
    }
    memcpy(VAR3, VAR8, VAR7);
VAR12:
    FUN6(&VAR8);
    FUN6(&VAR9);
    for (VAR4 = 0; VAR4 < 2 * VAR1 + 1; VAR4++)
    {
        FUN6(&VAR10[VAR4]);
    }
    FUN6(&VAR10);
    return VAR6;
}
void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    if (!VAR4)
        return;
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        VAR7 = &VAR4->VAR9[VAR5];
        if (VAR7->VAR10)
            FUN2(VAR7->VAR10);
    }
    FUN3(VAR4->VAR11);
    FUN3(VAR4->VAR12);
    FUN3(VAR4->VAR13);
    FUN4(VAR4->VAR9);
    FUN4(VAR4);
}
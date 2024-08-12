void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2();
    VAR1 *VAR7;
    if (FUN3(VAR6->VAR8))
    {
        FUN4(VAR4, VAR9);
        return;
    }
    if (!FUN5(VAR6->VAR10, VAR2, VAR4))
    {
        return;
    }
    for (VAR7 = VAR2; VAR7; VAR7 = VAR7->VAR11)
    {
        VAR6->VAR10[VAR7->VAR12->VAR13] = VAR7->VAR12->VAR8;
    }
}
static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN2(VAR5);
    FUN3(&VAR7->VAR8, 1, VAR9);
    if (VAR7->VAR10)
    {
        if (!FUN4(&VAR7->VAR8))
            FUN5(&VAR7->VAR11);
        return;
    }
    if (VAR5->VAR12->VAR13)
    {
        FUN6(VAR5);
        return;
    }
    if (!FUN4(&VAR7->VAR8))
        FUN7(VAR7->VAR14);
}
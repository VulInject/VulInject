void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9 = NULL;
    VAR6 = FUN2(NULL);
    for (VAR7 = VAR6; VAR7; VAR7 = VAR7->VAR10)
    {
        if (FUN3(VAR7->VAR11))
        {
            FUN4(VAR2, VAR7->VAR11->VAR12, VAR13, NULL);
            goto VAR14;
        }
    }
    FUN5(&VAR9);
    FUN6(VAR2, &VAR9);
VAR14:
    FUN7(VAR6);
}
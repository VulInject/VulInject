static void FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR7);
    VAR4 *VAR10 = NULL;
    if (VAR3 && !VAR7->VAR11)
    {
        if (VAR9->VAR12)
        {
            VAR9->FUN4(VAR7, &VAR10);
        }
    }
    else if (!VAR3 && VAR7->VAR11)
    {
        if (VAR9->VAR13)
        {
            VAR9->FUN5(VAR7, &VAR10);
        }
    }
    if (VAR10 != NULL)
    {
        FUN6(VAR5, VAR10);
        return;
    }
    VAR7->VAR11 = VAR3;
}
void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    static bool VAR7;
    FUN3(VAR2);
    if (FUN4() && !VAR7)
    {
        VAR7 = true;
        VAR6->FUN5();
    }
    if (FUN6(FUN7(VAR2)) == NULL)
    {
        FUN8(NULL, VAR2->VAR8, &VAR9, VAR2);
    }
    if (VAR6->VAR10 != NULL)
    {
        FUN8(NULL, VAR2->VAR8, VAR6->VAR10, VAR2);
    }
}
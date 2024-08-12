static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    FUN3(FUN4(VAR2));
    FUN5(VAR7, VAR2);
    if (VAR6->VAR8)
    {
        FUN6(FUN7(VAR6->VAR8));
        VAR6->VAR8 = NULL;
    }
    VAR9->FUN8(VAR2, &VAR10);
    if (VAR10 != NULL)
    {
        FUN9(VAR4, VAR10);
        return;
    }
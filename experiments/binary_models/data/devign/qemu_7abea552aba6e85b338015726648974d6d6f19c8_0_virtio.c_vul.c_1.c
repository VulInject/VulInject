static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    assert(!VAR8->VAR10 || !VAR8->VAR11);
    if (VAR8->VAR12 != NULL)
    {
        VAR8->FUN4(VAR2, &VAR9);
        if (VAR9 != NULL)
        {
            FUN5(VAR4, VAR9);
            return;
        }
    }
    FUN6(VAR6, &VAR9);
    if (VAR9 != NULL)
    {
        FUN5(VAR4, VAR9);
        return;
    }
    VAR6->VAR13.VAR14 = VAR15;
    FUN7(&VAR6->VAR13, VAR6->VAR16);
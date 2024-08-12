static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR1 *VAR7;
    if (VAR6->VAR8)
    {
        return;
    }
    VAR6->VAR8 = true;
    FUN2(VAR6);
    FUN3(VAR7, &VAR6->VAR9, VAR10)
    {
        VAR4 = FUN4(VAR7->VAR11);
        FUN5(VAR4);
    }
    FUN3(VAR7, &VAR6->VAR9, VAR10)
    {
        if (VAR7 != VAR2)
        {
            FUN6(VAR7);
        }
    }
    while (!FUN7(&VAR6->VAR9))
    {
        VAR7 = FUN8(&VAR6->VAR9);
        VAR4 = FUN4(VAR7->VAR11);
        if (!VAR7->VAR12)
        {
            assert(VAR7->VAR13);
            FUN9(VAR7, NULL, NULL);
        }
        FUN10(VAR7);
        FUN11(VAR4);
    }
    FUN12(VAR6);
}
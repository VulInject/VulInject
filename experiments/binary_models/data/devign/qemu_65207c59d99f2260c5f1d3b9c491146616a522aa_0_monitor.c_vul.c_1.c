static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    const VAR6 *VAR7;
    VAR5 = FUN2();
    VAR7 = FUN3(VAR2, VAR3, 0, VAR2->VAR8, VAR5);
    if (!VAR7)
        goto VAR9;
    if (FUN4(VAR7))
    {
        FUN5(VAR2, VAR7, VAR5);
    }
    else if (FUN6(VAR7))
    {
        VAR10 *VAR11 = NULL;
        VAR7->VAR12.FUN7(VAR2, VAR5, &VAR11);
        assert(!FUN8(VAR2));
        if (VAR11)
        {
            VAR7->FUN9(VAR2, VAR11);
            FUN10(VAR11);
        }
    }
    else
    {
        VAR7->VAR12.FUN11(VAR2, VAR5);
    }
VAR9:
    FUN12(VAR5);
}
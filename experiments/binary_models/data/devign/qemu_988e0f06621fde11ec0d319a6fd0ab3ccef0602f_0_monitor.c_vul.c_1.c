int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9 = NULL;
    int VAR10;
    FUN2(VAR4, NULL, &VAR9);
    if (!VAR9)
    {
        if (VAR6)
            FUN3(VAR7, 0);
        return 0;
    }
    if (FUN4(VAR2))
    {
        FUN5(VAR9);
        return -1;
    }
    FUN6(VAR2, "", FUN7(VAR4), FUN8(VAR4));
    VAR2->VAR11 = VAR6;
    VAR2->VAR12 = VAR7;
    VAR10 = FUN9(VAR2, VAR13, VAR4);
    if (VAR10 && VAR6)
        FUN3(VAR7, VAR10);
    return VAR10;
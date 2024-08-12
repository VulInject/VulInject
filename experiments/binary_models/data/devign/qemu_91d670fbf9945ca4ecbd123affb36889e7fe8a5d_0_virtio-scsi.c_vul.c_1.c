static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    static int VAR9;
    VAR3 *VAR10 = NULL;
    FUN4(VAR2, &VAR10);
    if (VAR10 != NULL)
    {
        FUN5(VAR4, VAR10);
        return;
    }
    FUN6(&VAR8->VAR11, sizeof(VAR8->VAR11), VAR2, &VAR12, VAR6->VAR13);
    if (!VAR2->VAR14)
    {
        FUN7(&VAR8->VAR11, &VAR10);
        if (VAR10 != NULL)
        {
            FUN5(VAR4, VAR10);
            return;
        }
    }
    FUN8(VAR2, "", VAR9++, 1, VAR15, VAR16, VAR8);
}
static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7 = -1;
    VAR8 *VAR9;
    VAR5 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2(VAR2);
    FUN3(VAR12, FUN4(VAR4), &VAR7);
    assert(VAR7 != -1);
    if (VAR7 == 0)
    {
        FUN5(&VAR10, "");
        goto VAR13;
    }
    VAR9 = FUN6(VAR12->VAR14);
    VAR9->FUN7(FUN8(VAR12->VAR14), VAR4, &VAR10);
    if (VAR10)
    {
        goto VAR13;
    }
VAR13:
    FUN9(VAR6, VAR10);
}
static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR5 *VAR9 = NULL;
    VAR10 *VAR11 = FUN2(VAR2);
    if (!VAR11->VAR12)
    {
        FUN3(&VAR9, "");
        goto VAR13;
    }
    if (FUN4(FUN5(VAR4), VAR14))
    {
        FUN3(&VAR9, "");
        goto VAR13;
    }
    VAR8 = FUN6(VAR11->VAR12);
    VAR8->FUN7(FUN8(VAR11->VAR12), VAR4, &VAR9);
VAR13:
    FUN9(VAR6, VAR9);
}
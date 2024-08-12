static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = FUN3(VAR6);
    void *VAR13 = NULL;
    int VAR14 = 0, VAR15;
    if (VAR12->VAR16)
    {
        VAR13 = FUN4(&VAR15);
        VAR14 = FUN5(VAR4, VAR6, VAR13, 0);
        if (!VAR14)
        {
            FUN6(VAR8, "");
            goto VAR17;
        }
    }
    VAR10->FUN7(VAR2, FUN3(VAR6), VAR13, VAR14, !VAR12->VAR16, VAR8);
VAR17:
    if (*VAR8)
    {
        FUN8(VAR13);
    }
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *const VAR9 = &VAR6->VAR9;
    VAR8 *const VAR10 = &VAR6->VAR10;
    int VAR11;
    if (VAR6->VAR12)
        goto VAR13;
    if (!VAR10->VAR14)
    {
        VAR11 = FUN2(VAR10, VAR15);
        if (VAR11)
        {
            FUN3(VAR2, VAR16, "");
            return VAR11;
        }
    }
    if (!VAR9->VAR14)
    {
        VAR11 = FUN2(VAR9, VAR15);
        if (VAR11)
        {
            FUN3(VAR2, VAR16, "");
            return VAR11;
        }
    }
VAR13:
    return FUN4(VAR9, VAR4);
}
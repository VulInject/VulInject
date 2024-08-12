static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR3 *VAR8;
    size_t VAR9;
    size_t VAR10;
    VAR11 *VAR12 = FUN2(VAR11, 1);
    VAR10 = FUN3(VAR2->VAR13);
    VAR9 = FUN4(VAR2->VAR14);
    VAR8 = FUN2(VAR3, FUN5(VAR9, VAR10));
    if (FUN6(VAR2->VAR14, (const VAR15 *)VAR4, VAR5, &VAR8, &VAR9, VAR7) < 0)
    {
        FUN7(VAR12);
        return -1;
    }
    VAR12->VAR13 = FUN8(VAR2->VAR13, VAR16, VAR8, FUN9(VAR9, VAR10), VAR7);
    if (!VAR12->VAR13)
    {
        FUN7(VAR12);
        return -1;
    }
    VAR2->private = VAR12;
    return 0;
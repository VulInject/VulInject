VAR1 *FUN1(const char *VAR2, const char *VAR3, void (*VAR4)(struct VAR1 *VAR5))
{
    const char *VAR6;
    VAR1 *VAR7;
    VAR8 *VAR9;
    if (FUN2(VAR3, "", &VAR6))
    {
        return FUN3(VAR6);
    }
    VAR9 = FUN4(VAR2, VAR3);
    if (!VAR9)
        return NULL;
    VAR7 = FUN5(VAR9, VAR4);
    if (VAR7 && FUN6(VAR9, "", 0))
    {
        FUN7(VAR7, VAR10);
    }
    return VAR7;
static bool FUN1(VAR1 *VAR2, const char *VAR3, bool VAR4, bool VAR5)
{
    VAR6 *VAR7;
    bool VAR8 = VAR4;
    if (VAR2 == NULL)
    {
        return VAR8;
    }
    VAR7 = FUN2(VAR2, VAR3);
    if (VAR7 == NULL)
    {
        const VAR9 *VAR10 = FUN3(VAR2->VAR11->VAR10, VAR3);
        if (VAR10 && VAR10->VAR12)
        {
            FUN4(VAR3, VAR10->VAR12, &VAR8, &VAR13);
        }
        return VAR8;
    }
    assert(VAR7->VAR10 && VAR7->VAR10->VAR14 == VAR15);
    VAR8 = VAR7->VAR16.VAR17;
    if (VAR5)
    {
        FUN5(VAR2, VAR3);
    }
    return VAR8;
}
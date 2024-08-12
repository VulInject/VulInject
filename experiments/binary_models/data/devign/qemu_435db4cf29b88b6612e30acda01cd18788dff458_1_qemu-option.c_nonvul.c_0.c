static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, uint64_t VAR5, bool VAR6)
{
    VAR7 *VAR8;
    uint64_t VAR9 = VAR5;
    if (VAR3 == NULL)
    {
        return VAR9;
    }
    VAR8 = FUN2(VAR3, VAR4);
    if (VAR8 == NULL)
    {
        const VAR10 *VAR11 = FUN3(VAR3->VAR12->VAR11, VAR4);
        if (VAR11 && VAR11->VAR13)
        {
            FUN4(VAR4, VAR11->VAR13, &VAR9, &VAR14);
        }
        return VAR9;
    }
    assert(VAR8->VAR11 && VAR8->VAR11->VAR15 == VAR16);
    VAR9 = VAR8->VAR17.VAR18;
    if (VAR6)
    {
        FUN5(VAR3, VAR4);
    }
    return VAR9;
}
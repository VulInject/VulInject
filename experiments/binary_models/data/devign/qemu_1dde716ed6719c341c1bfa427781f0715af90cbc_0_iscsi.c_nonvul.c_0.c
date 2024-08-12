FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR7;
    VAR10 *VAR11;
    VAR11 = FUN2(&VAR12, VAR2, VAR6, VAR7);
    VAR11->VAR9 = VAR9;
    VAR11->VAR4 = VAR4;
    VAR11->VAR3 = VAR3;
    VAR11->VAR13 = VAR14;
    if (FUN3(VAR11) != 0)
    {
        if (VAR11->VAR15)
        {
            FUN4(VAR11->VAR15);
        }
        FUN5(VAR11);
        return NULL;
    }
    FUN6(VAR9);
    return &VAR11->VAR16;
}
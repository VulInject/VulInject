int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    if (VAR4->VAR5 & VAR6 || !VAR4->VAR7)
        return 0;
    if (VAR8)
    {
        if ((*VAR8)(&VAR9, VAR10))
            return -1;
    }
    if (FUN2(&VAR11, 1))
    {
        FUN3(VAR2, VAR12, ""
                                      "",
               FUN4(&VAR11));
        if (!VAR8)
            FUN3(VAR2, VAR12, "");
        VAR13 = 1;
        FUN5(VAR4);
        return FUN6(VAR14);
    }
    FUN7(!VAR13);
    VAR13 = 1;
    return 0;
}
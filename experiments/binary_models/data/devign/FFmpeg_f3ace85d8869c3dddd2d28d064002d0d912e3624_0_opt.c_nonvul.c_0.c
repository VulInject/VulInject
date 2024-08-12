int FUN1(void *VAR1, VAR2 **VAR3, int VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR2 *VAR7 = NULL;
    int VAR8 = 0;
    if (!VAR3)
        return 0;
    while ((VAR6 = FUN2(*VAR3, "", VAR6, VAR9)))
    {
        VAR8 = FUN3(VAR1, VAR6->VAR10, VAR6->VAR11, VAR4);
        if (VAR8 == VAR12)
            VAR8 = FUN4(&VAR7, VAR6->VAR10, VAR6->VAR11, 0);
        if (VAR8 < 0)
        {
            FUN5(VAR1, VAR13, "", VAR6->VAR10, VAR6->VAR11);
            FUN6(&VAR7);
            return VAR8;
        }
        VAR8 = 0;
    }
    FUN6(VAR3);
    *VAR3 = VAR7;
    return VAR8;
}
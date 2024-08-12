static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    int VAR6;
    int VAR7 = 0;
    if (!VAR5->VAR8)
    {
        FUN2(VAR2, -1);
        return 1;
    }
    else
    {
        FUN2(VAR2, 0);
    }
    if (!VAR5->VAR9)
    {
        assert(FUN3());
        VAR6 = FUN4(VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
        VAR7 = FUN5(VAR2, VAR6, VAR10, VAR11);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    else if (VAR5->VAR12)
    {
        FUN6(VAR2, VAR5, VAR11);
    }
    else
    {
        VAR7 = FUN7(VAR2, VAR5, VAR11);
    }
    FUN2(VAR2, 0);
    FUN8(VAR2, 0);
    FUN8(VAR2, 0);
    return VAR7;
}
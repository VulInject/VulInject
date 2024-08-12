static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    int VAR6;
    FUN2(VAR2, 0);
    if (!VAR5->VAR7)
    {
        int VAR8;
        assert(FUN3());
        VAR6 = FUN4(VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
        VAR8 = FUN5(VAR2, VAR6, VAR9, -1);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        FUN6(VAR5);
    }
    else
    {
        FUN7(VAR2, VAR5, -1);
    }
    FUN2(VAR2, 0);
    FUN8(VAR2, 0);
    FUN8(VAR2, 0);
    return 0;
}
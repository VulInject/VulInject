int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    if (VAR2->VAR8 && VAR9 == VAR10)
    {
        FUN2(&VAR7, &VAR6);
        assert(VAR6 <= VAR5);
        FUN3(VAR2, VAR4, VAR6, &VAR6);
        return VAR7;
    }
    VAR7 = FUN3(VAR2, VAR4, VAR5, &VAR6);
    if (VAR2->VAR8 && VAR9 == VAR11)
    {
        FUN4(VAR7, VAR6);
    }
    if (VAR7 < 0)
    {
        return VAR7;
    }
    return VAR6;
}
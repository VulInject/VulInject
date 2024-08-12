static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    int VAR9;
    if (VAR6)
    {
        assert(VAR4->VAR10 == VAR11 || VAR4->VAR10 == VAR12);
        assert(VAR4->VAR13 == FUN3(VAR6->VAR14, VAR6->VAR15));
    }
    else
    {
        assert(VAR4->VAR10 != VAR11 && VAR4->VAR10 != VAR12);
    }
    VAR9 = FUN4(VAR2, VAR4, VAR4->VAR10 == VAR11 ? VAR6 : NULL);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    return FUN5(VAR8, VAR4, VAR4->VAR10 == VAR12 ? VAR6 : NULL);
}
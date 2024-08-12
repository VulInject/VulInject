static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, bool VAR5)
{
    VAR6 *VAR7;
    VAR1 *VAR8;
    VAR1 *VAR9;
    if (FUN2(&VAR3->VAR10))
    {
        return VAR3->VAR11;
    }
    VAR7 = FUN3(&VAR3->VAR10);
    VAR8 = VAR7->VAR12;
    assert(VAR8);
    if (FUN4(VAR8) == VAR13)
    {
        assert(VAR4);
        VAR9 = FUN5(FUN6(VAR8), VAR4);
        if (VAR7->VAR14 && VAR5 && VAR9)
        {
            bool VAR15 = FUN7(VAR7->VAR14, VAR4);
            assert(VAR15);
        }
    }
    else
    {
        assert(FUN4(VAR8) == VAR16);
        assert(!VAR4);
        VAR9 = FUN8(VAR7->VAR17);
        if (VAR5)
        {
            VAR7->VAR17 = FUN9(VAR7->VAR17);
        }
    }
    return VAR9;
}
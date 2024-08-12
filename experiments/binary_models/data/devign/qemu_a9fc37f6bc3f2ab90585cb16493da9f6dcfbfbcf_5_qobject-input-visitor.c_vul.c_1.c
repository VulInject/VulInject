static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, bool VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR1 *VAR10;
    VAR1 *VAR11;
    if (FUN2(&VAR3->VAR12))
    {
        assert(VAR3->VAR13);
        return VAR3->VAR13;
    }
    VAR9 = FUN3(&VAR3->VAR12);
    VAR10 = VAR9->VAR14;
    assert(VAR10);
    if (FUN4(VAR10) == VAR15)
    {
        assert(VAR4);
        VAR11 = FUN5(FUN6(VAR10), VAR4);
        if (VAR9->VAR16 && VAR5 && VAR11)
        {
            bool VAR17 = FUN7(VAR9->VAR16, VAR4);
            assert(VAR17);
        }
        if (!VAR11)
        {
            FUN8(VAR7, VAR18, VAR4);
        }
    }
    else
    {
        assert(FUN4(VAR10) == VAR19);
        assert(!VAR4);
        VAR11 = FUN9(VAR9->VAR20);
        assert(VAR11);
        if (VAR5)
        {
            VAR9->VAR20 = FUN10(VAR9->VAR20);
        }
    }
    return VAR11;
}
void FUN1(const int64_t VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(FUN3());
    int64_t VAR10 = FUN4(VAR1);
    VAR2 *VAR11 = NULL;
    if (VAR1 < 0)
    {
        FUN5(VAR3, "" VAR12, VAR1);
        return;
    }
    if (VAR10 >= VAR13)
    {
        FUN5(VAR3, "" VAR12 "" VAR12 "", VAR1, VAR10);
        return;
    }
    assert(VAR9->VAR14->VAR15[0].VAR5);
    VAR7 = FUN6(FUN7(VAR9->VAR14->VAR15[0].VAR5));
    VAR5 = FUN8(FUN9(VAR7), VAR10, &VAR11);
    if (VAR11)
    {
        FUN10(VAR3, VAR11);
        return;
    }
    FUN11(FUN12(VAR5));
}
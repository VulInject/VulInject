VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    assert(!FUN2(VAR4));
    for (VAR5 = VAR2; VAR5 && FUN3(VAR5->VAR4, VAR4) < 0; VAR5 = VAR5->VAR6)
    {
    }
    if (!VAR5 || FUN3(VAR5->VAR4, VAR4) > 0)
    {
        return FUN4(VAR2, VAR5, VAR4);
    }
    FUN5(VAR5->VAR4, VAR4);
    FUN6(VAR4);
    while (VAR5->VAR6 && FUN3(VAR5->VAR4, VAR5->VAR6->VAR4) == 0)
    {
        VAR1 *VAR7;
        FUN5(VAR5->VAR4, VAR5->VAR6->VAR4);
        FUN6(VAR5->VAR6->VAR4);
        VAR7 = FUN7(VAR2, VAR5->VAR6);
        assert(VAR7 == VAR2);
    }
    return VAR2;
}
void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR6;
    int VAR7;
    assert(VAR4->VAR8 == VAR9);
    assert(FUN2(&VAR6->VAR10) == VAR4);
    FUN3(VAR4, VAR11);
    FUN4(&VAR6->VAR10, VAR4, VAR10);
    VAR2->VAR12->VAR13->FUN5(VAR2->VAR12, VAR4);
    while (!FUN6(&VAR6->VAR10))
    {
        VAR4 = FUN2(&VAR6->VAR10);
        if (VAR4->VAR8 == VAR9)
        {
            break;
        }
        assert(VAR4->VAR8 == VAR14);
        VAR7 = FUN7(VAR4);
        if (VAR7 == VAR15)
        {
            FUN3(VAR4, VAR9);
            break;
        }
        VAR4->VAR16 = VAR7;
        FUN3(VAR4, VAR11);
        FUN4(&VAR6->VAR10, VAR4, VAR10);
        VAR2->VAR12->VAR13->FUN5(VAR2->VAR12, VAR4);
    }
}
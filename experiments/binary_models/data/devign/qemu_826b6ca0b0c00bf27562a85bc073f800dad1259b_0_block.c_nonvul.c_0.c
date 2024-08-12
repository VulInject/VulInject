void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    BlockDriverState VAR4;
    if (VAR2->VAR5[0] != '')
    {
        FUN2(&VAR6, VAR2, VAR7);
    }
    if (VAR3->VAR5[0] != '')
    {
        FUN2(&VAR6, VAR3, VAR7);
    }
    assert(VAR2->VAR8[0] == '');
    assert(FUN3(&VAR2->VAR9));
    assert(VAR2->VAR10 == NULL);
    assert(VAR2->VAR11 == NULL);
    assert(VAR2->VAR12 == false);
    assert(!FUN4(&VAR2->VAR13));
    VAR4 = *VAR2;
    *VAR2 = *VAR3;
    *VAR3 = VAR4;
    FUN5(&VAR4, VAR3);
    FUN5(VAR3, VAR2);
    FUN5(VAR2, &VAR4);
    assert(VAR2->VAR8[0] == '');
    assert(VAR2->VAR11 == NULL);
    assert(VAR2->VAR10 == NULL);
    assert(VAR2->VAR12 == false);
    assert(!FUN4(&VAR2->VAR13));
    if (VAR2->VAR5[0] != '')
    {
        FUN6(&VAR6, VAR2, VAR7);
    }
    if (VAR3->VAR5[0] != '')
    {
        FUN6(&VAR6, VAR3, VAR7);
    }
    FUN7(VAR2);
    FUN7(VAR3);
}
static void FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    assert(!VAR2->VAR4);
    assert(!VAR2->VAR5);
    if (VAR2->VAR6)
    {
        FUN2(VAR2);
        assert(FUN3(&VAR2->VAR7.VAR8));
        assert(FUN3(&VAR2->VAR9.VAR8));
        FUN4(&VAR10, VAR2, VAR11);
        FUN5(VAR2->VAR12);
        FUN6(&VAR2->VAR13);
        FUN7(VAR2);
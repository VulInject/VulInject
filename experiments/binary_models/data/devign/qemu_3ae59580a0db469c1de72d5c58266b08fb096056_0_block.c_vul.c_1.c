static void FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    assert(!VAR2->VAR4);
    assert(FUN2(VAR2));
    assert(!VAR2->VAR5);
    assert(FUN3(&VAR2->VAR6));
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2);
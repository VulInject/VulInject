static void FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    assert(FUN2(VAR2));
    assert(!VAR2->VAR4);
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2);
}
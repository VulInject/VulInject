static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    assert(FUN2(&VAR4->VAR5));
    assert(FUN2(&VAR4->VAR6));
}
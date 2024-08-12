void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    assert(!FUN2(&VAR3->VAR4));
    assert(!FUN2(&VAR2->VAR4));
    FUN3(VAR3);
    FUN4(VAR3, VAR2);
    FUN5(VAR2, VAR3);
    FUN6(VAR3);
    FUN6(VAR2);
}
void FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    FUN2(&VAR2->VAR4, FUN3(VAR2), VAR5, VAR6, VAR7, VAR2);
    VAR2->VAR3 = true;
}
void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    FUN2(FUN3(VAR4));
    assert(VAR2->VAR5 == NULL);
    FUN4(&VAR2->VAR6, VAR7, VAR8);
    if (!VAR2->VAR4)
    {
        VAR2->VAR4 = FUN5(VAR4);
    }
    FUN6(&VAR9, VAR2);
}
void FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    if (VAR2->VAR4[0] != '')
    {
        FUN2(&VAR5, VAR2, VAR6);
    }
    FUN3(VAR2);
    if (VAR2->VAR7 != NULL)
    {
        FUN1(VAR2->VAR7);
    }
    assert(VAR2 != VAR8);
    FUN4(VAR2);
}
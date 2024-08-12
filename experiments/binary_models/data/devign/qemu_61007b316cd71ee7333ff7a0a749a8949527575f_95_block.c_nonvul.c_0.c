void FUN1(VAR1 *VAR2, BlockErrorAction VAR3, bool VAR4, int VAR5)
{
    assert(VAR5 >= 0);
    if (VAR3 == VAR6)
    {
        FUN2(VAR2, VAR5);
        FUN3();
        FUN4(VAR2, VAR3, VAR4, VAR5);
        FUN5(VAR7);
    }
    else
    {
        FUN4(VAR2, VAR3, VAR4, VAR5);
    }
}
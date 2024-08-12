static bool FUN1(struct VAR1 *VAR2)
{
    assert(VAR2->VAR3 > 0);
    assert(VAR2->VAR4 > 0);
    if (FUN2(VAR2, VAR2->VAR5, VAR2->VAR6 & VAR2->VAR7))
    {
        if (FUN2(VAR2, VAR2->VAR8, VAR2->VAR9 & VAR2->VAR7))
        {
            return false
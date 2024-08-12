int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        return FUN1(VAR2->VAR3);
    }
    assert(VAR2->VAR4 != VAR5);
    return FUN2(VAR2->VAR4 & VAR6);
}
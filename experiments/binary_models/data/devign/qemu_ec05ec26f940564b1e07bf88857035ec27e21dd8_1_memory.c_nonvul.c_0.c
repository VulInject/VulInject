void *FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        return FUN1(VAR2->VAR3) + VAR2->VAR4;
    }
    assert(VAR2->VAR5 != VAR6);
    return FUN2(VAR2->VAR5 & VAR7);
}
bool FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    assert(VAR2);
    if (!VAR2->VAR5 && VAR2->VAR6.VAR7 & VAR8)
    {
        FUN2(VAR2);
    }
    if (VAR9 != VAR2->VAR6.VAR10)
    {
        if (VAR2->VAR11 > VAR12 - VAR2->VAR13[VAR14].VAR15)
        {
            return false;
        }
    }
    if (VAR2->VAR5 || VAR2->VAR6.VAR10 == VAR9)
    {
        FUN3(VAR2, VAR4, VAR2->VAR13, VAR2->VAR16 + VAR17);
        return true;
    }
    return FUN4(VAR2, VAR4);
}
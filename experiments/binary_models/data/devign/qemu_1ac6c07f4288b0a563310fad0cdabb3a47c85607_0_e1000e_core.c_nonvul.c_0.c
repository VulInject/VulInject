FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    static const uint32_t VAR5 = VAR6 | VAR7 | VAR8 | VAR9;
    if (FUN2(VAR2->VAR10))
    {
        return false;
    }
    VAR2->VAR11 |= *VAR4 & VAR5;
    *VAR4 &= ~VAR5;
    if (*VAR4 != 0)
    {
        return false;
    }
    FUN3(&VAR2->VAR12);
    if (!VAR2->VAR13.VAR14 && (VAR2->VAR15[VAR16] != 0))
    {
        FUN3(&VAR2->VAR13);
    }
    return true;
}
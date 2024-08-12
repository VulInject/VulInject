static bool FUN1(VAR1 *VAR2, uint64_t VAR3, size_t VAR4)
{
    uint64_t VAR5 = VAR4 >> VAR6;
    uint64_t VAR7;
    if (VAR5 > VAR8)
    {
        return false;
    }
    if (VAR3 & VAR2->VAR9)
    {
        return false;
    }
    if (VAR4 % VAR2->VAR10.VAR10.VAR11)
    {
        return false;
    }
    FUN2(VAR2->VAR12, &VAR7);
    if (VAR3 > VAR7 || VAR5 > VAR7 - VAR3)
    {
        return false;
    }
    return true;
}
static bool FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, unsigned VAR4, bool VAR5)
{
    if (VAR2->VAR6->VAR7.VAR8 && !VAR2->VAR6->VAR7.FUN2(VAR2->VAR9, VAR3, VAR4, VAR5))
    {
        return false;
    }
    if (!VAR2->VAR6->VAR7.VAR10 && (VAR3 & (VAR4 - 1)))
    {
        return false;
    }
    if (!VAR2->VAR6->VAR7.VAR11)
    {
        return true;
    }
    if (VAR4 > VAR2->VAR6->VAR7.VAR11 || VAR4 < VAR2->VAR6->VAR7.VAR12)
    {
        return false;
    }
    return true;
}
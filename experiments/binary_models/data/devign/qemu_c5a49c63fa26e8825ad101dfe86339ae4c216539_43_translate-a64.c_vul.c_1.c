static inline bool FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4)
{
    if (VAR2->VAR5.VAR6 || VAR2->VAR7 || (VAR2->VAR5.VAR8->VAR9 & VAR10))
    {
        return false;
    }
    if ((VAR2->VAR5.VAR8->VAR11 & VAR12) != (VAR4 & VAR12))
    {
        return false;
    }
    return true;
}
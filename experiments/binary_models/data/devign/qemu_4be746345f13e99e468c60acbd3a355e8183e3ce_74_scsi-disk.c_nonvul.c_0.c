static inline bool FUN1(VAR1 *VAR2)
{
    uint64_t VAR3;
    if (VAR2->VAR4.VAR5 != VAR6)
    {
        return false;
    }
    if (!FUN2(VAR2->VAR4.VAR7.VAR8))
    {
        return false;
    }
    FUN3(VAR2->VAR4.VAR7.VAR8, &VAR3);
    return VAR3 <= VAR9;
}
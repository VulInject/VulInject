static inline bool FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    if (((VAR3 & ~7ULL) / VAR4) & ~FUN2(VAR2))
    {
        return false;
    }
    return true;
}
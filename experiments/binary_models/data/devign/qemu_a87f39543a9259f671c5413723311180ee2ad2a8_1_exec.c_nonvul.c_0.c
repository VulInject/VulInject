static inline bool FUN1(VAR1 *VAR2, bool VAR3)
{
    if (FUN2(VAR2))
    {
        return !(VAR3 && VAR2->VAR4);
    }
    if (FUN3(VAR2))
    {
        return !VAR3;
    }
    return false;
}
static inline bool FUN1(VAR1 *VAR2)
{
    assert(!VAR2->VAR3);
    VAR2->VAR3 = true;
    if (!VAR2->VAR4)
    {
        return true;
    }
    FUN2(VAR2, 4, VAR5, FUN3(1, 0xe, false), VAR2->VAR4);
    return false;
}
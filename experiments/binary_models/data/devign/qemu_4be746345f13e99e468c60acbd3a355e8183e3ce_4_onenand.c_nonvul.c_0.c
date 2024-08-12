static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, void *VAR5)
{
    if (VAR2->VAR6)
    {
        return FUN2(VAR2->VAR6, VAR3, VAR5, VAR4) < 0;
    }
    else if (VAR3 + VAR4 > VAR2->VAR7)
    {
        return 1;
    }
    memcpy(VAR5, VAR2->VAR8 + (VAR3 << 9), VAR4 << 9);
    return 0;
}
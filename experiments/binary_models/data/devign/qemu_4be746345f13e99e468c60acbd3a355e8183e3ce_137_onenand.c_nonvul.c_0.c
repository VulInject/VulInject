static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, void *VAR5)
{
    uint8_t VAR6[512];
    if (VAR2->VAR7)
    {
        if (FUN2(VAR2->VAR7, VAR2->VAR8 + (VAR3 >> 5), VAR6, 1) < 0)
        {
            return 1;
        }
        memcpy(VAR5, VAR6 + ((VAR3 & 31) << 4), VAR4 << 4);
    }
    else if (VAR3 + VAR4 > VAR2->VAR8)
    {
        return 1;
    }
    else
    {
        memcpy(VAR5, VAR2->VAR9 + (VAR2->VAR8 << 9) + (VAR3 << 4), VAR4 << 4);
    }
    return 0;
}
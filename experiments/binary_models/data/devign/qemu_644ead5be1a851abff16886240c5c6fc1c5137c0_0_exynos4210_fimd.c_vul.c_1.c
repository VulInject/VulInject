static inline void FUN1(unsigned int VAR1, VAR2 *VAR3)
{
    int VAR4;
    uint64_t VAR5;
    uint64_t VAR6 = *VAR3;
    if (VAR1 & VAR7)
    {
        VAR5 = 0;
        for (VAR4 = 0; VAR4 < 64; VAR4++)
        {
            if (VAR6 & (1ULL << (64 - VAR4)))
            {
                VAR5 |= (1ULL << VAR4);
            }
        }
        VAR6 = VAR5;
    }
    if (VAR1 & VAR8)
    {
        VAR6 = FUN2(VAR6);
    }
    if (VAR1 & VAR9)
    {
        VAR6 = ((VAR6 & 0x000000000000FFFFULL) << 48) | ((VAR6 & 0x00000000FFFF0000ULL) << 16) | ((VAR6 & 0x0000FFFF00000000ULL) >> 16) | ((VAR6 & 0xFFFF000000000000ULL) >> 48);
    }
    if (VAR1 & VAR10)
    {
        VAR6 = ((VAR6 & 0x00000000FFFFFFFFULL) << 32) | ((VAR6 & 0xFFFFFFFF00000000ULL) >> 32);
    }
    *VAR3 = VAR6;
}
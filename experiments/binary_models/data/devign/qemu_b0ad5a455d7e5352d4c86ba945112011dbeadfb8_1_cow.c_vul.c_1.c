static inline int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    uint64_t VAR4 = sizeof(struct VAR5) + VAR3 / 8;
    uint8_t VAR6;
    if (FUN2(VAR2->VAR7, VAR4, &VAR6, sizeof(VAR6)) != sizeof(VAR6))
    {
        return -VAR8;
    }
    return !!(VAR6 & (1 << (VAR3 % 8)));
}
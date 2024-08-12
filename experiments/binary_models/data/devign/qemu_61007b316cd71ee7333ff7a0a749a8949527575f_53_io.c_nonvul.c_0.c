static inline bool FUN1(VAR1 *VAR2, int64_t VAR3, size_t VAR4)
{
    int64_t VAR5 = FUN2(VAR2);
    return !(VAR3 & (VAR5 - 1) || (VAR4 & (VAR5 - 1)));
}
bool FUN1(const VAR1 *VAR2, uint64_t VAR3)
{
    uint64_t VAR4 = VAR3 >> VAR2->VAR5;
    unsigned long VAR6 = 1UL << (VAR4 & (VAR7 - 1));
    return (VAR2->VAR8[VAR9 - 1][VAR4 >> VAR10] & VAR6) != 0;
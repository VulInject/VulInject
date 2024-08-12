static inline void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    if (VAR3 == (VAR2->VAR4 & (VAR5 | VAR6)) && (VAR2->VAR4 & ~VAR5) != VAR7 && (VAR2->VAR4 & ~VAR5) != VAR8)
    {
        VAR2->VAR4 |= VAR7;
        VAR2->VAR9 -= (unsigned long)VAR10;
    }
}
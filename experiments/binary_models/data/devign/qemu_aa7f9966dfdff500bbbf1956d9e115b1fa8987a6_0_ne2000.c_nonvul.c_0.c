static inline void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4)
{
    VAR3 &= ~1;
    if (VAR3 < 32 || (VAR3 >= VAR5 && VAR3 + sizeof(VAR6) <= VAR7))
    {
        FUN2(VAR2->VAR8 + VAR3, VAR4);
    }
}
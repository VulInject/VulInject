static inline VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR4 &= ~1;
    if (VAR4 < 32 || (VAR4 >= VAR5 && VAR4 + sizeof(VAR1) <= VAR6))
    {
        return FUN2(VAR3->VAR7 + VAR4);
    }
    else
    {
        return 0xffffffff;
    }
}
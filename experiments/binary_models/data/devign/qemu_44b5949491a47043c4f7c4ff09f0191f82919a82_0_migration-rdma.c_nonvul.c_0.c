static inline int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR7 *VAR9;
    if (VAR2->VAR10 < 0)
    {
        return 0;
    }
    if (VAR2->VAR11 < 0)
    {
        return 0;
    }
    VAR6 = &(VAR2->VAR12.VAR6[VAR2->VAR10]);
    VAR8 = VAR6->VAR13 + (VAR3 - VAR6->VAR3);
    VAR9 = FUN2(VAR6, VAR2->VAR11);
    if (VAR2->VAR14 == 0)
    {
        return 0;
    }
    if (VAR3 != (VAR2->VAR15 + VAR2->VAR14))
    {
        return 0;
    }
    if (VAR3 < VAR6->VAR3)
    {
        return 0;
    }
    if ((VAR3 + VAR4) > (VAR6->VAR3 + VAR6->VAR16))
    {
        return 0;
    }
    if ((VAR8 + VAR4) > VAR9)
    {
        return 0;
    }
    return 1;
}
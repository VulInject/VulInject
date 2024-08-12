static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    unsigned VAR6;
    if (VAR2->VAR7)
    {
        VAR5 <<= VAR2->VAR7;
        if (VAR2->VAR8 && FUN2(&VAR2->VAR9) >= VAR2->VAR7)
        {
            VAR5 |= FUN3(&VAR2->VAR9, VAR2->VAR7);
            *VAR4 = *VAR4 * 9 + (VAR5 & 0xffff) * 3 + ((unsigned)VAR5 >> 16);
        }
    }
    VAR6 = (VAR5 & VAR2->and) | VAR2->or ;
    VAR6 = ((VAR5 + VAR6) << VAR2->VAR10) - VAR6;
    if (VAR2->VAR11)
        VAR6 = FUN4(VAR6, VAR2->VAR12, VAR2->VAR13);
    return VAR6 << VAR2->VAR14;
}
static inline void copy(VAR1 *VAR2, int VAR3)
{
    register const VAR4 *VAR5 = VAR2->VAR6;
    register VAR4 *VAR7 = VAR2->VAR8;
    if (VAR3 > VAR2->VAR9 - VAR5)
    {
        VAR3 = FUN1(VAR2->VAR9 - VAR5, 0);
        VAR2->VAR10 |= VAR11;
    }
    if (VAR3 > VAR2->VAR12 - VAR7)
    {
        VAR3 = FUN1(VAR2->VAR12 - VAR7, 0);
        VAR2->VAR10 |= VAR13;
    }
    FUN2(VAR7, VAR5);
    VAR5 += 4;
    VAR7 += 4;
    VAR3 -= 4;
    if (VAR3 > 0)
        memcpy(VAR7, VAR5, VAR3);
    VAR2->VAR6 = VAR5 + VAR3;
    VAR2->VAR8 = VAR7 + VAR3;
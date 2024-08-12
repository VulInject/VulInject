static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    register const VAR5 *VAR6 = &VAR2->VAR7[-VAR3];
    register VAR5 *VAR8 = VAR2->VAR7;
    if (VAR6 < VAR2->VAR9 || VAR6 > VAR8)
    {
        VAR2->VAR10 |= VAR11;
        return;
    }
    if (VAR4 > VAR2->VAR12 - VAR8)
    {
        VAR4 = FUN2(VAR2->VAR12 - VAR8, 0);
        VAR2->VAR10 |= VAR13;
    }
    FUN3(VAR8, VAR3, VAR4);
    VAR2->VAR7 = VAR8 + VAR4;
}
static inline void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    ptrdiff_t VAR4 = VAR3 - VAR2;
    FUN2(VAR4 == FUN3(VAR4, 0, 26));
    *VAR2 = FUN4(*VAR2, 0, 26, VAR4);
}
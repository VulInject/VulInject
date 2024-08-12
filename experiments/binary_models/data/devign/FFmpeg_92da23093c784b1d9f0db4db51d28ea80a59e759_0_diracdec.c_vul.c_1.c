static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = FUN2(VAR2);
    const int VAR6 = FUN3(VAR5);
    if (VAR5)
        VAR5 = VAR6 * ((VAR6 * VAR5 * VAR3 + VAR4) >> 2);
    return VAR5;
}
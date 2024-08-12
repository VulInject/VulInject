static inline int FUN1(const VAR1 **VAR2, const VAR1 *VAR3)
{
    const VAR1 *VAR4;
    int VAR5;
    VAR4 = *VAR2;
    if ((VAR4 + 1) >= VAR3)
        return VAR6;
    VAR5 = FUN2(VAR4);
    VAR4 += 2;
    *VAR2 = VAR4;
    return VAR5;
}
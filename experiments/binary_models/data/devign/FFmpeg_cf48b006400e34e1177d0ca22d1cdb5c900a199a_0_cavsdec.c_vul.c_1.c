static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR3)
    {
        int VAR4 = FUN2(VAR2) << VAR3;
        return VAR4 + FUN3(VAR2, VAR3);
    }
    return FUN2(VAR2);
}
static inline void FUN1(VAR1 *VAR2, int VAR3, const int VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12 = VAR13[VAR3];
    FUN2(VAR2 + 0, (VAR12 >> 6), 3, VAR6, VAR8, VAR9);
    if (VAR4)
    {
        FUN2(VAR2 + 8, (VAR12 >> 4) & 3, 2, VAR6, VAR8, VAR10);
        FUN2(VAR2 + 1, (VAR12 >> 2) & 3, 2, VAR6, VAR8, VAR10);
    }
    else
    {
        FUN2(VAR2 + 1, (VAR12 >> 4) & 3, 2, VAR6, VAR8, VAR10);
        FUN2(VAR2 + 8, (VAR12 >> 2) & 3, 2, VAR6, VAR8, VAR10);
    }
    FUN2(VAR2 + 9, (VAR12 >> 0) & 3, 2, VAR6, VAR8, VAR11);
}
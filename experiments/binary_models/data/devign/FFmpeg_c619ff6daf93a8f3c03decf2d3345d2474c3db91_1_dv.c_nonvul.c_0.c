static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR4);
    while (VAR5 >= VAR6)
    {
        FUN3(VAR2, VAR6, FUN4(VAR4, VAR6));
        VAR5 -= VAR6;
    }
    if (VAR5 > 0)
    {
        FUN3(VAR2, VAR5, FUN4(VAR4, VAR5));
    }
}
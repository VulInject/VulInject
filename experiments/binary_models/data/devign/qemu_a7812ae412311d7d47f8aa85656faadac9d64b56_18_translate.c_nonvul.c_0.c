static inline void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    if (VAR3 == 4)
    {
        VAR5[0] = VAR6[VAR2->VAR7];
        VAR5[1] = VAR6[VAR2->VAR8];
    }
    else
    {
        VAR5[0] = FUN2();
        VAR5[1] = FUN2();
    }
}
static inline void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 != VAR2->VAR4)
    {
        FUN2(VAR5, VAR2->VAR3);
        VAR2->VAR4 = VAR2->VAR3;
    }
}
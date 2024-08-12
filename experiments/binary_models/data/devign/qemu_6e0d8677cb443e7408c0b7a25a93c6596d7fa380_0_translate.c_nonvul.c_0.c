static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    if (FUN2(VAR2))
    {
        FUN3(2, VAR4, VAR3);
    }
    else if (VAR2->VAR5)
    {
        FUN3(1, VAR4, VAR3);
    }
    else
    {
        FUN3(0, VAR4, VAR3);
    }
}
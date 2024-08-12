static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    if (FUN2(VAR5, 13))
    {
        FUN3(VAR2, VAR6 | FUN4(VAR3) | FUN5(VAR4) | FUN6(VAR5));
    }
    else
    {
        FUN7(VAR2, VAR7, VAR8, VAR5);
        FUN8(VAR2, VAR3, VAR4, VAR8, VAR6);
    }
}
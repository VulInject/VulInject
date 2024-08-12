static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, TCGArg VAR5, TCGArg VAR6, TCGArg VAR7, int VAR8)
{
    if (VAR8)
    {
        int VAR9 = FUN2(VAR7);
        FUN3(VAR9 >= 0);
        FUN4(VAR2, VAR3, VAR4, VAR5, VAR6, FUN5(VAR7, VAR9) | (VAR9 << 7));
    }
    else
    {
        FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, FUN7(0));
    }
}
static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, int VAR6)
{
    TCGv VAR7 = FUN2();
    FUN3(VAR8, VAR3, VAR4);
    FUN3(VAR7, VAR4, VAR5);
    if (VAR6)
    {
        FUN4(VAR8, VAR8, VAR7);
    }
    else
    {
        FUN5(VAR8, VAR8, VAR7);
    }
    FUN6(VAR7);
    if (FUN7(VAR2))
    {
        FUN8(VAR8, VAR8);
    }
    FUN9(VAR8, VAR8, VAR9 - 1);
    FUN10(VAR10, VAR10, VAR8);
}
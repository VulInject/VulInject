static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2();
    VAR8 *VAR10 = FUN2();
    FUN3(VAR11, VAR5, 0, VAR9);
    if (VAR6)
    {
        VAR8 *VAR12 = FUN2();
        FUN3(VAR13, VAR5, -1, VAR12);
        FUN3(VAR11, VAR4, VAR14, VAR9);
        FUN4(VAR12);
        FUN5(VAR3, VAR4, VAR5);
    }
    else
    {
        FUN6(VAR3, VAR4, VAR5);
    }
    if (VAR7)
    {
        FUN7(VAR15, 0);
    }
    FUN8(VAR10);
    FUN4(VAR9);
    if (VAR6)
    {
        FUN9(VAR3, VAR4, 63);
    }
    else
    {
        FUN10(VAR3, 0);
    }
    if (VAR7)
    {
        FUN7(VAR15, 1);
        FUN7(VAR16, 1);
    }
    FUN4(VAR10);
    if (FUN11(FUN12(VAR2->VAR17) != 0))
        FUN13(VAR2, VAR3);
}
static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, int VAR6, int VAR7, int VAR8)
{
    TCGv VAR9, VAR10;
    if ((!VAR7 && !VAR8) || (!FUN2(VAR3, VAR4) && !FUN2(VAR3, VAR5)))
    {
        VAR9 = VAR3;
    }
    else
    {
        VAR9 = FUN3();
    }
    if (VAR6)
    {
        VAR10 = FUN3();
        FUN4(VAR10, VAR11);
    }
    else
    {
        FUN5(VAR10);
    }
    if (VAR7)
    {
        FUN6(VAR11, 0);
    }
    if (VAR8)
    {
        FUN6(VAR12, 0);
    }
    FUN7(VAR9, VAR4, VAR5);
    if (VAR7)
    {
        FUN8(VAR2, VAR9, VAR4, 0);
    }
    if (VAR6)
    {
        FUN7(VAR9, VAR9, VAR10);
        FUN8(VAR2, VAR9, VAR10, 0);
        FUN9(VAR10);
    }
    if (VAR8)
    {
        FUN10(VAR2, VAR9, VAR4, VAR5, 0);
    }
    if (FUN11(FUN12(VAR2->VAR13) != 0))
        FUN13(VAR2, VAR9);
    if (!FUN2(VAR9, VAR3))
    {
        FUN4(VAR3, VAR9);
        FUN9(VAR9);
    }
}
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
    if (VAR6)
    {
        FUN7(VAR9, VAR4);
        FUN8(VAR9, VAR9, VAR5);
        FUN9(VAR2, VAR9, VAR5, 0);
        FUN8(VAR9, VAR9, VAR10);
        FUN9(VAR2, VAR9, VAR10, 0);
        FUN10(VAR10);
    }
    else
    {
        FUN11(VAR9, VAR5, VAR4);
        if (VAR7)
        {
            FUN9(VAR2, VAR9, VAR5, 1);
        }
    }
    if (VAR8)
    {
        FUN12(VAR2, VAR9, VAR4, VAR5, 1);
    }
    if (FUN13(FUN14(VAR2->VAR13) != 0))
        FUN15(VAR2, VAR9);
    if (!FUN2(VAR9, VAR3))
    {
        FUN4(VAR3, VAR9);
        FUN10(VAR9);
    }
}
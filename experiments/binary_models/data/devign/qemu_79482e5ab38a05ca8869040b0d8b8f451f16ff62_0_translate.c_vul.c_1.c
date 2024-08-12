static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, bool VAR6, bool VAR7, bool VAR8, bool VAR9)
{
    TCGv VAR10 = VAR3;
    if (((VAR7 && VAR6) || VAR8) && (FUN2(VAR3, VAR4) || FUN2(VAR3, VAR5)))
    {
        VAR10 = FUN3();
    }
    if (VAR7)
    {
        TCGv VAR11 = FUN4(0);
        if (VAR6)
        {
            FUN5(VAR10, VAR12, VAR4, VAR11, VAR12, VAR11);
            FUN5(VAR10, VAR12, VAR10, VAR12, VAR5, VAR11);
        }
        else
        {
            FUN5(VAR10, VAR12, VAR4, VAR11, VAR5, VAR11);
        }
        FUN6(VAR11);
    }
    else
    {
        FUN7(VAR10, VAR4, VAR5);
        if (VAR6)
        {
            FUN7(VAR10, VAR10, VAR12);
        }
    }
    if (VAR8)
    {
        FUN8(VAR2, VAR10, VAR4, VAR5, 0);
    }
    if (FUN9(VAR9))
    {
        FUN10(VAR2, VAR10);
    }
    if (!FUN2(VAR10, VAR3))
    {
        FUN11(VAR3, VAR10);
        FUN6(VAR10);
    }
}
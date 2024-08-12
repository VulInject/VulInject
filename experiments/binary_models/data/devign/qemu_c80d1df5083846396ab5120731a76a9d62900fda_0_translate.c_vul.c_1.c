static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, bool VAR6, bool VAR7, bool VAR8, bool VAR9)
{
    TCGv VAR10 = VAR3;
    if (VAR7 || VAR8)
    {
        VAR10 = FUN2();
    }
    if (VAR7)
    {
        if (FUN3(VAR2))
        {
            TCGv VAR11 = FUN2();
            TCGv VAR12 = FUN2();
            FUN4(VAR11, VAR4);
            if (VAR6)
            {
                FUN5(VAR10, VAR5, VAR13);
            }
            else
            {
                FUN6(VAR10, VAR5, 1);
            }
            FUN7(VAR12, VAR5, VAR11);
            FUN5(VAR10, VAR10, VAR11);
            FUN7(VAR13, VAR10, VAR12);
            FUN8(VAR12);
            FUN9(VAR13, VAR13, 32);
            FUN10(VAR13, VAR13, 1);
        }
        else if (VAR6)
        {
            TCGv VAR14, VAR11 = FUN2();
            FUN4(VAR11, VAR4);
            VAR14 = FUN11(0);
            FUN12(VAR10, VAR13, VAR5, VAR14, VAR13, VAR14);
            FUN12(VAR10, VAR13, VAR10, VAR13, VAR11, VAR14);
            FUN8(VAR14);
        }
        else
        {
            FUN13(VAR15, VAR13, VAR5, VAR4);
            FUN14(VAR10, VAR5, VAR4);
        }
    }
    else if (VAR6)
    {
        FUN14(VAR10, VAR5, VAR4);
        FUN5(VAR10, VAR10, VAR13);
        FUN15(VAR10, VAR10, 1);
    }
    else
    {
        FUN14(VAR10, VAR5, VAR4);
    }
    if (VAR8)
    {
        FUN16(VAR2, VAR10, VAR4, VAR5, 1);
    }
    if (FUN17(VAR9))
    {
        FUN18(VAR2, VAR10);
    }
    if (!FUN19(VAR10, VAR3))
    {
        FUN20(VAR3, VAR10);
        FUN8(VAR10);
    }
static inline void FUN1(VAR1 *VAR2, TCGv VAR3)
{
    if (VAR2->VAR4)
    {
        if (VAR2->VAR5)
        {
            TCGv VAR6;
            VAR6 = FUN2();
            FUN3(VAR6, VAR7);
            FUN4(VAR6, VAR6, VAR8);
            FUN5(VAR3, VAR3, VAR6);
            FUN6(VAR6);
        }
    }
    else
    {
        TCGv VAR9, VAR6;
        VAR9 = FUN2();
        VAR6 = FUN2();
        FUN3(VAR9, VAR7);
        FUN7(VAR6, VAR9);
        FUN4(VAR6, VAR6, VAR8);
        FUN4(VAR9, VAR9, VAR10);
        FUN8(VAR9, VAR9, 4);
        FUN9(VAR9, VAR9, VAR6);
        FUN5(VAR3, VAR3, VAR9);
        FUN6(VAR9);
        FUN6(VAR6);
    }
}
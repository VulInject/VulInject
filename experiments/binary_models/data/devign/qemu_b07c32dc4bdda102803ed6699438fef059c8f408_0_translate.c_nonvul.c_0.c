static inline void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, int VAR6, int VAR7)
{
    TCGv_i32 VAR8 = FUN2();
    TCGv_i32 VAR9 = FUN2();
    TCGv_i32 VAR10 = FUN2();
    TCGv_i32 VAR11 = FUN2();
    FUN3(VAR8, VAR4);
    FUN3(VAR9, VAR5);
    if (VAR6)
    {
        FUN4(VAR12, VAR10, VAR8, VAR13);
        FUN4(VAR12, VAR11, VAR9, -1);
        FUN5(VAR10, VAR10, VAR11);
        FUN4(VAR12, VAR11, VAR9, 0);
        FUN6(VAR10, VAR10, VAR11);
        FUN7(VAR11, 0);
        FUN8(VAR14, VAR9, VAR10, VAR11, VAR10, VAR9);
        FUN9(VAR11, VAR8, VAR9);
        FUN10(VAR3, VAR11);
    }
    else
    {
        FUN4(VAR12, VAR10, VAR9, 0);
        FUN7(VAR11, 0);
        FUN8(VAR14, VAR9, VAR10, VAR11, VAR10, VAR9);
        FUN11(VAR11, VAR8, VAR9);
        FUN10(VAR3, VAR11);
    }
    if (VAR7)
    {
        FUN10(VAR15, VAR10);
        FUN12(VAR16, VAR16, VAR15);
    }
    FUN13(VAR8);
    FUN13(VAR9);
    FUN13(VAR10);
    FUN13(VAR11);
    if (FUN14(FUN15(VAR2->VAR17) != 0))
        FUN16(VAR2, VAR3);
}
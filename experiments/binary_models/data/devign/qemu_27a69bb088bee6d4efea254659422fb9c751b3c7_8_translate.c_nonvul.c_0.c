static inline void FUN1(VAR1 *VAR2)
{
    if (FUN2(!VAR2->VAR3))
    {
        FUN3(VAR2, VAR4);
        return;
    }
    TCGv VAR5 = FUN4();
    TCGv VAR6 = FUN4();
    FUN5(VAR5, VAR7[FUN6(VAR2->VAR8)], 32);
    FUN7(VAR6, VAR7[FUN8(VAR2->VAR8)], 32);
    FUN9(VAR7[FUN10(VAR2->VAR8)], VAR5, VAR6);
    FUN11(VAR5);
    FUN11(VAR6);
    if (FUN10(VAR2->VAR8) == FUN8(VAR2->VAR8))
    {
        TCGv_i32 VAR9 = FUN12();
        FUN13(VAR9, VAR7[FUN8(VAR2->VAR8)]);
        FUN13(VAR7[FUN10(VAR2->VAR8)], VAR10[FUN6(VAR2->VAR8)]);
        FUN13(VAR10[FUN10(VAR2->VAR8)], VAR9);
        FUN14(VAR9);
    }
    else
    {
        FUN13(VAR7[FUN10(VAR2->VAR8)], VAR10[FUN6(VAR2->VAR8)]);
        FUN13(VAR10[FUN10(VAR2->VAR8)], VAR7[FUN8(VAR2->VAR8)]);
    }
}
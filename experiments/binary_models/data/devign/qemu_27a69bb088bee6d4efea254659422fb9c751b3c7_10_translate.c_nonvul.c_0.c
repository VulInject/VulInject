static inline void FUN1(VAR1 *VAR2)
{
    TCGv_i64 VAR3;
    TCGv_i64 VAR4;
    if (FUN2(!VAR2->VAR5))
    {
        FUN3(VAR2, VAR6);
        return;
    }
    FUN4(VAR2);
    VAR3 = FUN5();
    VAR4 = FUN5();
    FUN6(VAR4, FUN7(VAR2->VAR7));
    FUN8(VAR3, VAR8, FUN9(VAR9, VAR10));
    FUN10(VAR3, VAR3, VAR4);
    FUN11(VAR3, VAR8, FUN9(VAR9, VAR10));
    FUN12(FUN7(VAR2->VAR7), VAR3);
    FUN13(VAR3);
    FUN13(VAR4);
}
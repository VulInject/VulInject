static inline void FUN1(VAR1 *VAR2)
{
    TCGv_i64 VAR3, VAR4;
    if (FUN2(!VAR2->VAR5))
    {
        FUN3(VAR2, VAR6);
        return;
    }
    VAR3 = FUN4();
    VAR4 = FUN4();
    FUN5(VAR3, VAR7[FUN6(VAR2->VAR8)]);
    FUN5(VAR4, VAR7[FUN7(VAR2->VAR8)]);
    FUN8(VAR3, VAR7[FUN6(VAR2->VAR8)]);
    FUN8(VAR4, VAR7[FUN7(VAR2->VAR8)]);
    FUN9(VAR3, VAR3, VAR4);
    FUN10(FUN11(VAR2->VAR8), VAR3);
    FUN12(VAR3);
    FUN12(VAR4);
}
static inline void FUN1(TCGv_i32 VAR1, TCGv_i32 VAR2, TCGv_i32 VAR3)
{
    VAR4 *VAR5 = FUN2();
    VAR4 *VAR6 = FUN2();
    TCGv_i32 VAR7 = FUN3();
    FUN4(VAR7, VAR3, 0x3F);
    FUN5(VAR8, VAR7, 32, VAR5);
    FUN6(VAR1, VAR2, VAR7);
    FUN7(VAR6);
    FUN8(VAR5);
    FUN9(VAR1, 0);
    FUN8(VAR6);
    FUN10(VAR7);
}
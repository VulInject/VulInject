static inline void FUN1(TCGv VAR1, TCGv_i32 VAR2)
{
    TCGv VAR3 = FUN2();
    FUN3(VAR3, VAR2);
    FUN4(VAR1, VAR2);
    FUN5(VAR1, VAR1, VAR3);
    FUN6(VAR3, VAR2);
    FUN7(VAR1, VAR1, VAR3);
    FUN8(VAR3);
}
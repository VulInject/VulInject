static inline void FUN1(TCGv_i32 VAR1, TCGv_i32 VAR2)
{
    VAR3 *VAR4 = FUN2();
    VAR3 *VAR5 = FUN2();
    FUN3(VAR6, VAR2, 0, VAR4);
    FUN4(VAR1, VAR2);
    FUN5(VAR5);
    FUN6(VAR4);
    FUN7(VAR1, VAR2);
    FUN6(VAR5);
}
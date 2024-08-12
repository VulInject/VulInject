static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    TCGv_i32 VAR8 = FUN2();
    TCGv_i64 VAR9;
    VAR10 *VAR11 = FUN3();
    if (VAR6)
        VAR7 = VAR12;
    else
        VAR7 = VAR13;
    FUN4(VAR8, VAR14, 1 << FUN5(VAR5));
    FUN6(VAR7, VAR8, 0, VAR11);
    FUN7(VAR8);
    VAR9 = FUN8();
    FUN9(VAR2, VAR9, VAR3);
    FUN10(VAR2, VAR9, VAR4);
    FUN11(VAR9);
    FUN12(VAR11);
}
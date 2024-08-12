static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    TCGv_i32 VAR8 = FUN2();
    VAR9 *VAR10 = FUN3();
    VAR9 *VAR11 = FUN3();
    if (VAR6)
        VAR7 = VAR12;
    else
        VAR7 = VAR13;
    FUN4(VAR8, VAR14, 1 << FUN5(VAR5));
    FUN6(VAR7, VAR8, 0, VAR10);
    FUN7(VAR8, VAR3);
    FUN8(VAR8, VAR4);
    FUN9(VAR10);
    FUN4(VAR8, VAR14, 1 << FUN5(VAR5 + 1));
    FUN6(VAR7, VAR8, 0, VAR11);
    FUN10(VAR2, VAR8, VAR3);
    FUN11(VAR2, VAR8, VAR4);
    FUN12(VAR8);
    FUN9(VAR11);
}
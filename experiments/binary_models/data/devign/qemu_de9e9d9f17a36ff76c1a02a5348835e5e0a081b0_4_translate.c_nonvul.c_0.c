static inline void FUN1(TCGv VAR1, TCGv VAR2, TCGv VAR3, int VAR4)
{
    TCGv_i32 VAR5, VAR6;
    TCGv_i64 VAR7, VAR8;
    VAR5 = FUN2();
    VAR6 = FUN2();
    FUN3(VAR5, VAR2);
    FUN3(VAR6, VAR3);
    VAR7 = FUN4();
    VAR8 = FUN4();
    if (VAR4)
    {
        FUN5(VAR7, VAR6);
        FUN5(VAR8, VAR5);
    }
    else
    {
        FUN6(VAR7, VAR6);
        FUN6(VAR8, VAR5);
    }
    FUN7(VAR8, VAR7, VAR8);
    FUN8(VAR7, VAR8, 32);
    FUN9(VAR9, VAR7);
    FUN10(VAR7);
    FUN11(VAR9, VAR9, 0xffffffff);
    FUN9(VAR1, VAR8);
    FUN10(VAR8);
    FUN12(VAR5);
    FUN12(VAR6);
}
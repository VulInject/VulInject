static inline void FUN1(TCGv VAR1, TCGv VAR2, TCGv VAR3)
{
    int VAR4, VAR5;
    VAR4 = FUN2();
    VAR5 = FUN2();
    FUN3(VAR6, VAR2);
    FUN3(VAR7, VAR3);
    FUN4(VAR7);
    FUN5(VAR8, VAR6, VAR9, VAR4);
    FUN5(VAR8, VAR7, -1, VAR4);
    FUN6(VAR1, VAR9);
    FUN7(VAR5);
    FUN8(VAR4);
    FUN9(VAR1, VAR6, VAR7);
    FUN8(VAR5);
}
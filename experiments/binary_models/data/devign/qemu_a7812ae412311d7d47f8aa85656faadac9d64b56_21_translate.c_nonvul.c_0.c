static inline void FUN1(TCGv VAR1, TCGv VAR2)
{
    TCGv VAR3;
    VAR3 = FUN2();
    FUN3(VAR3, VAR2);
    FUN4(VAR1, VAR3, 16);
    FUN5(VAR3, VAR3, 16);
    FUN6(VAR1, VAR1, VAR3);
    FUN7(VAR3);
}
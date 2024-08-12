static inline void FUN1(TCGv VAR1, int VAR2)
{
    TCGv VAR3;
    VAR3 = FUN2();
    FUN3(VAR3, VAR4);
    FUN4(VAR3, VAR3, 1 << VAR2);
    if (VAR2)
        FUN5(VAR3, VAR3, VAR2);
    FUN6(VAR1, VAR1, VAR3);
    FUN7(VAR3);
}
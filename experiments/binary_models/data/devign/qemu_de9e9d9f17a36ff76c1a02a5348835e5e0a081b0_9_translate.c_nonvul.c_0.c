static inline void FUN1(TCGv VAR1, TCGv VAR2, unsigned int VAR3)
{
    TCGv VAR4 = FUN2();
    FUN3(VAR1, VAR2, VAR3);
    FUN4(VAR4, VAR2, VAR3);
    FUN5(VAR1, VAR4, VAR1);
    FUN6(VAR4);
}
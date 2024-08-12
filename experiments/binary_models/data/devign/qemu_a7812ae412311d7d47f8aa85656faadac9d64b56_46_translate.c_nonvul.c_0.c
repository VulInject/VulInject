static inline void FUN1(TCGv VAR1, TCGv VAR2)
{
    TCGv VAR3, VAR4;
    VAR3 = FUN2();
    VAR4 = FUN2();
    FUN3(VAR4, VAR2);
    FUN4(VAR3, VAR4, 8);
    FUN5(VAR1, VAR3, 0xff00ff00);
    FUN6(VAR3, VAR4, 8);
    FUN5(VAR3, VAR3, 0x00ff00ff);
    FUN7(VAR1, VAR1, VAR3);
    FUN8(VAR3);
    FUN8(VAR4);
}
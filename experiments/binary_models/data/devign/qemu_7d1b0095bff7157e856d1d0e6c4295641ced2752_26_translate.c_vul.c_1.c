static void FUN1(TCGv VAR1, TCGv VAR2)
{
    TCGv VAR3, VAR4;
    VAR3 = FUN2();
    VAR4 = FUN2();
    FUN3(VAR3, VAR1, 16);
    FUN4(VAR4, VAR2, 0xffff);
    FUN5(VAR3, VAR3, VAR4);
    FUN6(VAR2, VAR2, 16);
    FUN4(VAR4, VAR1, 0xffff0000);
    FUN5(VAR2, VAR2, VAR4);
    FUN7(VAR1, VAR3);
    FUN8(VAR4);
    FUN8(VAR3);
}
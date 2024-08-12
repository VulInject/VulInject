static void FUN1(TCGv VAR1, TCGv VAR2)
{
    TCGv VAR3;
    int VAR4;
    VAR4 = FUN2();
    VAR3 = FUN3();
    FUN4(VAR3, VAR5);
    FUN4(VAR6, VAR2);
    FUN5(VAR7, VAR3, 0, VAR4);
    FUN4(VAR6, VAR1);
    FUN6(VAR4);
    FUN7(VAR3);
}
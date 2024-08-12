static void FUN1(TCGv VAR1, int VAR2)
{
    TCGv VAR3 = FUN2();
    if (VAR2)
        FUN3(VAR1, VAR1, VAR2);
    FUN4(VAR1, VAR1);
    FUN5(VAR3, VAR1, 8);
    FUN6(VAR1, VAR1, VAR3);
    FUN5(VAR3, VAR1, 16);
    FUN6(VAR1, VAR1, VAR3);
    FUN7(VAR3);
}
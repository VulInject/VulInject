static void FUN1(TCGv VAR1)
{
    TCGv VAR2 = FUN2();
    FUN3(VAR2, VAR1, 16);
    FUN4(VAR1, VAR1, 16);
    FUN5(VAR1, VAR1, VAR2);
    FUN6(VAR2);
}
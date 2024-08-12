static void FUN1(TCGv VAR1)
{
    TCGv VAR2 = FUN2();
    FUN3(VAR2, VAR1, 31);
    FUN4(VAR2);
    FUN5(VAR2);
}
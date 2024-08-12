static void FUN1(TCGv_i64 VAR1)
{
    TCGv VAR2 = FUN2();
    FUN3(VAR2, VAR1);
    FUN4(VAR2);
    FUN5(VAR2);
}
static VAR1 FUN1(TCGv_i64 VAR2, TCGv VAR3)
{
    TCGv_i64 VAR4 = FUN2();
    FUN3(VAR4, VAR3);
    FUN4(VAR3);
    FUN5(VAR4, VAR4, 32);
    FUN6(VAR2, VAR4, VAR2);
    FUN7(VAR4);
    return VAR2;
}
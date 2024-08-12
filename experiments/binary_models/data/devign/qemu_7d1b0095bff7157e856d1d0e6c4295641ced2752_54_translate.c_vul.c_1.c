static VAR1 FUN1(TCGv VAR2, TCGv VAR3)
{
    TCGv_i64 VAR4 = FUN2();
    TCGv_i64 VAR5 = FUN2();
    FUN3(VAR4, VAR2);
    FUN4(VAR2);
    FUN3(VAR5, VAR3);
    FUN4(VAR3);
    FUN5(VAR4, VAR4, VAR5);
    FUN6(VAR5);
    return VAR4;
}
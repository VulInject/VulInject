static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    TCGv_i64 VAR5 = FUN2();
    FUN3(VAR5, VAR6, FUN4(VAR3, VAR4, VAR7));
    return VAR5;
}
void FUN1(TCGv_i64 VAR1, TCGv_ptr VAR2, tcg_target_long VAR3)
{
    FUN2(FUN3(VAR1), VAR2, VAR3);
    FUN4(FUN5(VAR1), FUN5(VAR1), 31);
}
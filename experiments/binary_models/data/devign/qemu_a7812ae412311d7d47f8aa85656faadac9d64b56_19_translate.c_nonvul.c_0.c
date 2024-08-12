static void FUN1(void)
{
    TCGv_i64 VAR1 = FUN2();
    TCGv_i64 VAR2 = FUN2();
    FUN3(VAR1, VAR3[0]);
    FUN3(VAR2, VAR3[1]);
    FUN4(VAR1, VAR1, VAR2);
    FUN5(VAR3[0], VAR1);
    FUN6(VAR1, VAR1, 32);
    FUN5(VAR3[1], VAR1);
}
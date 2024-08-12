static void FUN1(VAR1 *VAR2, TCGv_i64 VAR3, int VAR4, int VAR5)
{
    TCGv_i64 VAR6;
    TCGv VAR7;
    TCGv VAR8;
    VAR7 = FUN2(VAR2, VAR4);
    VAR8 = FUN2(VAR2, VAR5);
    VAR6 = FUN3();
    FUN4(VAR6, VAR7, VAR8);
    FUN5(VAR7);
    FUN5(VAR8);
    FUN6(VAR3, VAR3, VAR6);
    FUN7(VAR6);
}
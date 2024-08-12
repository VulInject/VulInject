static void FUN1(VAR1 *VAR2, int VAR3, TCGv_i64 VAR4, int VAR5)
{
    TCGv_i64 VAR6 = FUN2();
    TCGv_i64 VAR7;
    if (VAR5 < 4)
    {
        TCGMemOp VAR8 = VAR9 + VAR5;
        VAR7 = FUN3(0);
        FUN4(VAR6, VAR4, FUN5(VAR2), VAR8);
    }
    else
    {
        TCGv_i64 VAR10;
        VAR7 = FUN2();
        VAR10 = FUN2();
        FUN4(VAR6, VAR4, FUN5(VAR2), VAR11);
        FUN6(VAR10, VAR4, 8);
        FUN4(VAR7, VAR10, FUN5(VAR2), VAR11);
        FUN7(VAR10);
    }
    FUN8(VAR6, VAR12, FUN9(VAR2, VAR3, VAR13));
    FUN8(VAR7, VAR12, FUN10(VAR2, VAR3));
    FUN7(VAR6);
    FUN7(VAR7);
}
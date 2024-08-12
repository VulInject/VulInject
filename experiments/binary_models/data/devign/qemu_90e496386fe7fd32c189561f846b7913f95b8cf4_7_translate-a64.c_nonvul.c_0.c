static void FUN1(VAR1 *VAR2, int VAR3, TCGv_i64 VAR4, int VAR5)
{
    TCGv_i64 VAR6 = FUN2();
    FUN3(VAR6, VAR7, FUN4(VAR2, VAR3, VAR8));
    if (VAR5 < 4)
    {
        FUN5(VAR6, VAR4, FUN6(VAR2), VAR9 + VAR5);
    }
    else
    {
        TCGv_i64 VAR10 = FUN2();
        FUN5(VAR6, VAR4, FUN6(VAR2), VAR11);
        FUN7(VAR6, VAR4, FUN6(VAR2));
        FUN3(VAR6, VAR7, FUN8(VAR2, VAR3));
        FUN9(VAR10, VAR4, 8);
        FUN5(VAR6, VAR10, FUN6(VAR2), VAR11);
        FUN10(VAR10);
    }
    FUN10(VAR6);
}
static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5)
{
    TCGv VAR6 = FUN2();
    TCGv VAR7 = FUN2();
    FUN3(VAR3, VAR6, VAR4, VAR5);
    FUN4(VAR7, VAR3, VAR8 - 1);
    FUN5(VAR9, VAR6, VAR6, VAR7);
    FUN6(VAR7);
    FUN7(VAR10, VAR10, VAR6, FUN8(VAR11), 1);
    FUN9(VAR2, VAR6);
    FUN6(VAR6);
}
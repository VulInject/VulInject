static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5)
{
    TCGv VAR6 = FUN2(0);
    TCGv VAR7 = FUN3();
    TCGv VAR8 = FUN3();
    TCGv VAR9 = FUN3();
    FUN4(VAR8, VAR10, FUN5(VAR11));
    FUN6(VAR8, VAR8, 1);
    FUN7(VAR7, VAR8, VAR4, VAR6, VAR8, VAR6);
    FUN7(VAR7, VAR8, VAR7, VAR8, VAR5, VAR6);
    FUN8(VAR9, VAR4, VAR5);
    FUN8(VAR6, VAR7, VAR5);
    FUN9(VAR9, VAR6, VAR9);
    FUN10(VAR6);
    FUN11(VAR3, VAR7);
    FUN10(VAR7);
    FUN4(VAR9, VAR9, VAR12 - 1);
    FUN12(VAR10, VAR10, VAR8, FUN5(VAR11), 1);
    FUN12(VAR10, VAR10, VAR9, FUN5(VAR13), 1);
    FUN13(VAR2, VAR9, VAR8);
    FUN10(VAR9);
    FUN10(VAR8);
}
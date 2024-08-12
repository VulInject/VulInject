static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    TCGv VAR5;
    VAR4 = FUN2();
    VAR5 = FUN3();
    FUN4(VAR5, VAR6, VAR7);
    FUN5(VAR8, VAR5, 0, VAR4);
    FUN6(VAR2, 1, VAR2->VAR9 + 2);
    FUN7(VAR4);
    FUN4(VAR6, VAR6, ~VAR7);
    FUN8(VAR2);
}
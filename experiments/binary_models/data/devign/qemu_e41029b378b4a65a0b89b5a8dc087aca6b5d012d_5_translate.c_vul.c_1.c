static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3;
    TCGv_i32 VAR4, VAR5;
    int VAR6 = FUN2(VAR2->VAR7);
    FUN3(VAR2, VAR8);
    FUN4(VAR2, VAR2->VAR9 - 4);
    VAR3 = FUN5();
    FUN6(VAR2, VAR3);
    if (VAR6 == 0)
        VAR6 = 32;
    VAR4 = FUN7(VAR6);
    VAR5 = FUN7(FUN8(VAR2->VAR7));
    FUN9(VAR10, VAR3, VAR4, VAR5);
    FUN10(VAR3);
    FUN11(VAR4);
    FUN11(VAR5);
}
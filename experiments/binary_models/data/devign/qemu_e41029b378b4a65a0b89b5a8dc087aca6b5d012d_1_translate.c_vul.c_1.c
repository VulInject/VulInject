static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3;
    TCGv_i32 VAR4, VAR5;
    int VAR6 = FUN2(VAR2->VAR7);
    int VAR8 = FUN3(VAR2->VAR7);
    int VAR9 = FUN4(VAR2->VAR7);
    int VAR10;
    if (VAR6 == 0)
        VAR6 = 32;
    VAR10 = (VAR6 + 3) / 4;
    if (FUN5(FUN6(VAR8, VAR10, VAR9)))
    {
        FUN7(VAR2, VAR11);
        return;
    }
    FUN8(VAR2, VAR12);
    FUN9(VAR2, VAR2->VAR13 - 4);
    VAR3 = FUN10();
    FUN11(VAR2, VAR3);
    VAR4 = FUN12(VAR6);
    VAR5 = FUN12(VAR8);
    FUN13(VAR14, VAR3, VAR4, VAR5);
    FUN14(VAR3);
    FUN15(VAR4);
    FUN15(VAR5);
}
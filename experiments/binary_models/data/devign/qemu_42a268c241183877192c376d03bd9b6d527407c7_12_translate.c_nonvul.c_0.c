static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    TCGv VAR5 = FUN3();
    TCGv VAR6 = FUN3();
    FUN4(VAR6, VAR7[FUN5(VAR2->VAR8)], 0x1F);
    FUN6(VAR5, VAR7[FUN7(VAR2->VAR8)], VAR6);
    FUN8(VAR6, 32, VAR6);
    FUN9(VAR6, VAR7[FUN7(VAR2->VAR8)], VAR6);
    FUN10(VAR6, VAR5, VAR6);
    FUN11(VAR9, VAR6);
    FUN4(VAR6, VAR7[FUN5(VAR2->VAR8)], 0x20);
    FUN12(VAR7[FUN13(VAR2->VAR8)], VAR5);
    FUN14(VAR10, VAR6, 0, VAR4);
    FUN15(VAR7[FUN13(VAR2->VAR8)], 0);
    FUN16(VAR4);
    FUN17(VAR5);
    FUN17(VAR6);
    if (FUN18(FUN19(VAR2->VAR8) != 0))
        FUN20(VAR2, VAR7[FUN13(VAR2->VAR8)]);
}
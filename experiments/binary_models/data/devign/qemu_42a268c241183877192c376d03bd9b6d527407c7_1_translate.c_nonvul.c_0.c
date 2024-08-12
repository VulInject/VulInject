static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    uint32_t VAR6 = FUN2(VAR2->VAR7);
    uint32_t VAR8;
    TCGv_i32 VAR9;
    VAR4 = FUN3();
    VAR5 = FUN3();
    VAR8 = 0x08 >> (VAR6 & 0x03);
    VAR9 = FUN4();
    FUN5(VAR9, VAR10[VAR6 >> 2], VAR8);
    FUN6(VAR11, VAR9, 0, VAR4);
    if (FUN7(VAR2->VAR7) == 0)
        FUN8(VAR12[FUN9(VAR2->VAR7)], 0);
    else
        FUN10(VAR12[FUN9(VAR2->VAR7)], VAR12[FUN7(VAR2->VAR7)]);
    FUN11(VAR5);
    FUN12(VAR4);
    FUN10(VAR12[FUN9(VAR2->VAR7)], VAR12[FUN13(VAR2->VAR7)]);
    FUN12(VAR5);
    FUN14(VAR9);
}
static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    TCGv_i64 VAR6;
    TCGv_i32 VAR7;
    if (FUN2(!VAR2->VAR8))
    {
        FUN3(VAR2, VAR9);
        return;
    }
    VAR5 = FUN4(VAR2->VAR10);
    VAR3 = FUN5(VAR2->VAR10);
    if (FUN2(VAR5 & !(VAR2->VAR11 & VAR12)))
    {
        FUN6(VAR2, VAR13);
        return;
    }
    VAR4 = (8 * VAR5) + 7 - VAR3;
    FUN7(VAR2, VAR2->VAR14 - 4);
    FUN8();
    VAR6 = FUN9(((VAR15)FUN10(VAR2->VAR10)) << (4 * VAR4));
    VAR7 = FUN11(1 << VAR4);
    FUN12(VAR16, VAR6, VAR7);
    FUN13(VAR6);
    FUN14(VAR7);
    if (FUN2(FUN15(VAR2->VAR10) != 0))
    {
        FUN16(VAR17[1], VAR18);
        FUN17(VAR17[1], VAR17[1], VAR19);
    }
    FUN18(VAR16);
}
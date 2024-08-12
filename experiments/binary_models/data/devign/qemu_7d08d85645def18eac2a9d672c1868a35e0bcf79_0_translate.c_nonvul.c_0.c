static void FUN1(VAR1 *VAR2)
{
    TCGv_i32 VAR3;
    int VAR4, VAR5, VAR6;
    if (FUN2(!VAR2->VAR7))
    {
        FUN3(VAR2, VAR8);
        return;
    }
    VAR4 = FUN4(VAR2->VAR9);
    VAR5 = FUN5(VAR2->VAR9);
    VAR6 = FUN6(VAR2->VAR9);
    if (FUN2(VAR6 & !(VAR2->VAR10 & VAR11)))
    {
        FUN7(VAR2, VAR12);
        return;
    }
    FUN8(VAR2, VAR2->VAR13 - 4);
    FUN9();
    if (VAR5)
    {
        VAR3 = FUN10((VAR2->VAR10 & VAR11) ? 0xffff : 0xff);
    }
    else
    {
        VAR3 = FUN10(VAR4 << (VAR6 * 8));
    }
    FUN11(VAR14, VAR15[FUN12(VAR2->VAR9)], VAR3);
    FUN13(VAR3);
    if (FUN2(FUN14(VAR2->VAR9) != 0))
    {
        FUN15(VAR16[1], VAR17);
        FUN16(VAR16[1], VAR16[1], VAR18);
    }
    FUN17(VAR14);
}
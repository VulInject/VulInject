static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR8->VAR11;
    VAR12 *VAR13;
    const VAR14 *VAR15, *VAR16;
    FUN4(VAR10, FUN5(VAR2), true);
    VAR10->VAR17 = FUN6(VAR6);
    VAR13 = FUN7(VAR10, FUN5(VAR2), &VAR15, &VAR16);
    FUN8(VAR6, 0x3b0, VAR15, VAR10, "");
    if (VAR16)
    {
        FUN8(VAR6, 0x1ce, VAR16, VAR10, "");
    }
    FUN9(FUN6(VAR6), 0x000a0000, VAR13, 1);
    FUN10(VAR13);
    VAR10->VAR18 = FUN11(FUN12(VAR2), 0, VAR10->VAR19, VAR10);
    FUN13(VAR10, FUN5(VAR2), FUN6(VAR6));
    FUN14(VAR20);
}
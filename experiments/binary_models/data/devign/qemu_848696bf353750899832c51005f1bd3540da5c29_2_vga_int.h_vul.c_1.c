void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, bool VAR8)
{
    VAR5 *VAR9;
    const VAR10 *VAR11, *VAR12;
    VAR13 *VAR14 = FUN2(VAR13, 1);
    VAR13 *VAR15 = FUN2(VAR13, 1);
    FUN3(VAR16, VAR2);
    VAR2->VAR17 = 0;
    VAR2->VAR18 = VAR6;
    VAR9 = FUN4(VAR2, VAR4, &VAR11, &VAR12);
    FUN5(VAR6, VAR19 + 0x000a0000, VAR9, 1);
    FUN6(VAR9);
    if (VAR8)
    {
        FUN7(VAR14, VAR4, VAR11, VAR2, "");
        FUN8(VAR14);
        FUN9(VAR14, VAR7, 0x3b0);
    }
    if (VAR12)
    {
        FUN7(VAR15, VAR4, VAR12, VAR2, "");
        FUN9(VAR15, VAR7, 0x1ce);
    }
}
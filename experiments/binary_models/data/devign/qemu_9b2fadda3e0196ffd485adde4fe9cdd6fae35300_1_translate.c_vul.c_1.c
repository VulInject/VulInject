static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    if (VAR2->VAR5 & 0x00010000)
    {
        TCGv VAR6 = FUN4();
        FUN5(VAR6, VAR7[FUN6(VAR2->VAR5)], (1 << VAR8) | (1 << VAR9));
        FUN5(VAR10, VAR10, ~(VAR11)((1 << VAR8) | (1 << VAR9)));
        FUN7(VAR10, VAR10, VAR6);
        FUN8(VAR6);
    }
    else
    {
        TCGv VAR12 = FUN4();
        FUN9(VAR2, VAR2->VAR13);
        FUN10(VAR12, VAR10, VAR7[FUN6(VAR2->VAR5)], 0, 32);
        FUN11(VAR12, VAR7[FUN6(VAR2->VAR5)]);
        FUN12(VAR14, VAR12);
        FUN8(VAR12);
        FUN13(VAR2);
    }
}
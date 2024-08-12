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
        FUN9(VAR2, VAR2->VAR12);
        FUN10(VAR13, VAR7[FUN6(VAR2->VAR5)]);
        FUN11(VAR2);
    }
}
static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4();
    FUN5(VAR2, VAR4);
    FUN6(VAR6[FUN7(VAR2->VAR7)], VAR8, VAR4);
    FUN8(VAR4);
    if (FUN9(VAR2->VAR7))
    {
        VAR9 *VAR10 = FUN10();
        FUN11(VAR11[0], VAR12);
        FUN12(VAR13, VAR6[FUN7(VAR2->VAR7)], -1, VAR10);
        FUN13(VAR11[0], VAR11[0], 0x02);
        FUN14(VAR10);
    }
}
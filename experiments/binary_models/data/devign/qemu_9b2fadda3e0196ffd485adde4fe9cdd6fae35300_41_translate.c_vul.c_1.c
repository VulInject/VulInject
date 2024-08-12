static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    int VAR4 = FUN3(VAR2->VAR5);
    int VAR6 = FUN4(VAR2->VAR5);
    TCGv VAR7;
    if (FUN5(VAR2->VAR8))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR7 = FUN6();
    FUN7(VAR2, VAR7);
    FUN8(VAR7, VAR7, 28);
    FUN9(VAR7, VAR7, 0xF);
    FUN10(VAR9[VAR6], VAR10, VAR7);
    FUN11(VAR7);
    if (VAR4 != 0 && VAR4 != VAR6)
        FUN12(VAR9[VAR4], VAR9[VAR6]);
}
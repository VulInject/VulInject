static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, unsigned int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2();
    TCGv VAR9 = FUN3();
    TCGv VAR10 = FUN3();
    TCGv VAR11 = FUN3();
    VAR2->VAR12 = 0;
    FUN4(VAR2);
    FUN5(VAR9, VAR3);
    FUN5(VAR10, VAR4);
    FUN6(VAR11, VAR13[VAR14], VAR15);
    FUN7(VAR16, VAR11, 0, VAR8);
    if (VAR5 == 1)
    {
        FUN8(VAR10, VAR9, VAR6);
    }
    else if (VAR5 == 2)
    {
        FUN9(VAR10, VAR9, VAR6);
    }
    else
    {
        FUN10(VAR10, VAR9, VAR6);
    }
    FUN11(VAR8);
    FUN12(VAR11, VAR11, 1);
    FUN13(VAR13[VAR14], VAR13[VAR14], VAR11);
    FUN14(VAR11);
    FUN14(VAR10);
    FUN14(VAR9);
}
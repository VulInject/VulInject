static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    VAR5 *VAR6 = NULL;
    VAR4->VAR7 = FUN3(FUN4(VAR8));
    FUN5(FUN6(&VAR4->VAR7->VAR9), 1, "", &VAR6);
    if (VAR6 != NULL)
    {
        FUN7("", FUN8(VAR6));
        FUN9(1);
    }
    FUN10(FUN6(VAR4->VAR7), true, "", &VAR6);
    if (VAR6 != NULL)
    {
        FUN7("", FUN8(VAR6));
        FUN9(1);
    }
    FUN11(&VAR4->VAR10, NULL, "", VAR2->VAR11);
    FUN12(&VAR4->VAR10);
    FUN13(FUN14(), VAR12, &VAR4->VAR10);
    VAR13.VAR11 = VAR2->VAR11;
    VAR13.VAR14 = VAR2->VAR14;
    VAR13.VAR15 = VAR2->VAR15;
    FUN15(&VAR4->VAR7->VAR16, &VAR13);
}
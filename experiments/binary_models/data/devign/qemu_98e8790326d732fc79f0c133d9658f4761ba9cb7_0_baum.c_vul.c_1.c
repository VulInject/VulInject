static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11;
    VAR11 = FUN3(FUN4());
    VAR9->VAR12 = VAR11;
    VAR9->VAR13 = FUN5(VAR11, NULL, NULL);
    if (VAR9->VAR13 == -1)
    {
        FUN6(VAR7, "", FUN7(FUN8()));
        FUN9(VAR11);
        return;
    }
    VAR9->VAR14 = 0;
    VAR9->VAR15 = FUN10(VAR16, VAR17, VAR9);
    FUN11(VAR9->VAR13, VAR18, NULL, VAR9);
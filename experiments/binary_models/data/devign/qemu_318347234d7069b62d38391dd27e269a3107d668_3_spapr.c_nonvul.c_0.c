void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR5 *VAR12 = NULL;
    VAR13 *VAR14 = FUN2(VAR4);
    int VAR15 = FUN3();
    if (!FUN4(FUN5(VAR2), VAR14->VAR16, &VAR7))
    {
        FUN6(VAR6, "", VAR14->VAR16);
        return;
    }
    if (VAR7 == 0)
    {
        FUN6(VAR6, "");
        return;
    }
    VAR9 = FUN7(VAR17, VAR7 * VAR15);
    FUN8(VAR9);
    VAR11 = FUN9(VAR9);
    VAR11->FUN10(VAR9, VAR4, &VAR12);
    if (VAR12)
    {
        FUN11(VAR6, VAR12);
        return;
    }
    FUN12(VAR9);
}
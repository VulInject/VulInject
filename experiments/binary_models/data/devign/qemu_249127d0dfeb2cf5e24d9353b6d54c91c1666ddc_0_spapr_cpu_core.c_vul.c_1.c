static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    VAR6 *VAR7 = FUN2(FUN3());
    VAR8 *VAR9 = FUN4(VAR2);
    VAR10 *VAR11 = FUN5(VAR9);
    VAR1 *VAR12;
    VAR12 = FUN6(VAR7->VAR13);
    FUN7(FUN8(VAR11), "", VAR12, NULL);
    FUN9(VAR12, "", FUN8(VAR7), &VAR14);
    FUN10(VAR12, true, "", &VAR5);
    if (VAR5)
    {
        goto VAR15;
    }
    FUN10(VAR2, true, "", &VAR5);
    if (VAR5)
    {
        goto VAR15;
    }
    FUN11(VAR7, VAR11, &VAR5);
    if (VAR5)
    {
        goto VAR15;
    }
    FUN12(FUN13(VAR7), VAR11, FUN14(VAR12));
    return;
VAR15:
    FUN15(VAR12);
    FUN16(VAR4, VAR5);
}
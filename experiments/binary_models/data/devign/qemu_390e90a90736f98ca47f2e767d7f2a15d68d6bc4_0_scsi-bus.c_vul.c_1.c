VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6, bool VAR7, int VAR8, const char *VAR9, VAR10 **VAR11)
{
    const char *VAR12;
    char *VAR13;
    VAR14 *VAR15;
    VAR10 *VAR16 = NULL;
    VAR12 = FUN2(VAR5) ? "" : "";
    VAR15 = FUN3(&VAR3->VAR17, VAR12);
    VAR13 = FUN4("", VAR6);
    FUN5(FUN6(VAR3), VAR13, FUN6(VAR15), NULL);
    FUN7(VAR13);
    FUN8(VAR15, "", VAR6);
    if (VAR8 >= 0)
    {
        FUN9(FUN6(VAR15), VAR8, "", &VAR18);
    }
    if (FUN10(FUN6(VAR15), "", NULL))
    {
        FUN11(VAR15, "", VAR7);
    }
    if (VAR9 && FUN10(FUN6(VAR15), "", NULL))
    {
        FUN12(VAR15, "", VAR9);
    }
    FUN13(VAR15, "", VAR5, &VAR16);
    if (VAR16)
    {
        FUN14(VAR16);
        FUN15(VAR16);
        FUN16(VAR11, "");
        FUN17(FUN6(VAR15));
        return NULL;
    }
    FUN18(FUN6(VAR15), true, "", &VAR16);
    if (VAR16 != NULL)
    {
        FUN19(VAR11, VAR16);
        FUN17(FUN6(VAR15));
        return NULL;
    }
    return FUN20(VAR15);
}
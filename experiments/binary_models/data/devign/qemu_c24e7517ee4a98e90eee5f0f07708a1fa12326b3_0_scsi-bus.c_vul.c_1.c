VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6, bool VAR7, int VAR8, const char *VAR9, VAR10 **VAR11)
{
    const char *VAR12;
    VAR13 *VAR14;
    VAR10 *VAR15 = NULL;
    VAR12 = FUN2(VAR5) ? "" : "";
    VAR14 = FUN3(&VAR3->VAR16, VAR12);
    FUN4(VAR14, "", VAR6);
    if (VAR8 >= 0)
    {
        FUN5(VAR14, "", VAR8);
    }
    if (FUN6(FUN7(VAR14), "", NULL))
    {
        FUN8(VAR14, "", VAR7);
    }
    if (VAR9)
    {
        FUN9(VAR14, "", VAR9);
    }
    if (FUN10(VAR14, "", VAR5) < 0)
    {
        FUN11(VAR11, "");
        FUN12(VAR14);
        return NULL;
    }
    FUN13(FUN7(VAR14), true, "", &VAR15);
    if (VAR15 != NULL)
    {
        FUN14(VAR11, VAR15);
        FUN12(VAR14);
        return NULL;
    }
    return FUN15(VAR14);
}
int FUN1(VAR1 *VAR2, const char *VAR3, const char *typename, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    char *VAR10;
    int VAR11;
    VAR12 *VAR13 = FUN2(VAR2, VAR3, VAR5);
    VAR14 *VAR15;
    if (VAR13 == NULL)
    {
        return 0;
    }
    if (!FUN3(VAR13->VAR16, typename))
    {
        FUN4(VAR5, "", VAR3, FUN5(FUN6(VAR2)), typename);
        return 0;
    }
    VAR15 = VAR13->VAR17;
    VAR7 = FUN7(false);
    FUN8(VAR2, FUN9(VAR7), VAR3, VAR5);
    VAR10 = FUN10(VAR7);
    VAR9 = FUN11(VAR10);
    FUN12(VAR7);
    FUN13(FUN14(VAR9), &VAR11, VAR15->VAR18, NULL, VAR3, VAR5);
    FUN15(VAR10);
    FUN16(VAR9);
    return VAR11;
}
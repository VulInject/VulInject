int FUN1(VAR1 *VAR2, const char *VAR3, const char *typename, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    VAR7 *VAR8;
    VAR9 *VAR10;
    char *VAR11;
    int VAR12;
    VAR13 *VAR14 = FUN2(VAR2, VAR3, VAR5);
    VAR15 *VAR16;
    if (VAR14 == NULL)
    {
        return 0;
    }
    if (!FUN3(VAR14->VAR17, typename))
    {
        FUN4(VAR5, "", VAR3, FUN5(FUN6(VAR2)), typename);
        return 0;
    }
    VAR16 = VAR14->VAR18;
    VAR8 = FUN7(false);
    VAR10 = FUN8(VAR8);
    FUN9(VAR2, VAR10, VAR3, &VAR6);
    if (VAR6)
    {
        FUN10(VAR5, VAR6);
        FUN11(VAR10);
        return 0;
    }
    VAR11 = FUN12(VAR8);
    FUN11(VAR10);
    VAR10 = FUN13(VAR11);
    FUN14(VAR10, VAR3, &VAR12, VAR16->VAR19, VAR5);
    FUN15(VAR11);
    FUN11(VAR10);
    return VAR12;
}
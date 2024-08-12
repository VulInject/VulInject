int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *export, VAR5 *VAR6, const char *VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11 = FUN2(VAR2);
    int VAR12;
    FUN3("", export);
    FUN4(FUN5(VAR4), true, NULL);
    VAR12 = FUN6(FUN5(VAR4), export, &VAR11->VAR13, VAR6, VAR7, &VAR11->VAR14, &VAR11->VAR15, VAR9);
    if (VAR12 < 0)
    {
        FUN3("");
        return VAR12;
    }
    if (VAR11->VAR13 & VAR16)
    {
        VAR2->VAR17 = VAR18;
    }
    FUN7(&VAR11->VAR19);
    FUN7(&VAR11->VAR20);
    VAR11->VAR4 = VAR4;
    FUN8(FUN9(VAR11->VAR4));
    if (!VAR11->VAR14)
    {
        VAR11->VAR14 = FUN5(VAR4);
        FUN8(FUN9(VAR11->VAR14));
    }
    FUN4(FUN5(VAR4), false, NULL);
    FUN10(VAR2, FUN11(VAR2));
    FUN3("");
    return 0;
}
int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    char *VAR6 = FUN2(VAR7 + 1);
    int64_t VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR1 *VAR13;
    VAR4 *VAR14 = NULL;
    int VAR15;
    VAR8 = FUN3(VAR2);
    if (VAR8 < 0)
    {
        VAR15 = VAR8;
        FUN4(VAR5, -VAR8, "");
        goto VAR16;
    }
    VAR15 = FUN5(VAR6, VAR7 + 1);
    if (VAR15 < 0)
    {
        FUN4(VAR5, -VAR15, "");
        goto VAR16;
    }
    VAR10 = FUN6(VAR17.VAR18, NULL, 0, &VAR19);
    FUN7(VAR10, VAR20, VAR8, &VAR19);
    VAR15 = FUN8(&VAR17, VAR6, VAR10, &VAR14);
    FUN9(VAR10);
    if (VAR15 < 0)
    {
        FUN4(VAR5, -VAR15, ""
                                     "",
                         VAR6, FUN10(VAR14));
        FUN11(VAR14);
        goto VAR16;
    }
    VAR12 = FUN12();
    FUN13(VAR12, "", FUN14(""));
    FUN13(VAR12, "", FUN14(VAR6));
    VAR13 = FUN15();
    VAR15 = FUN16(&VAR13, NULL, NULL, VAR12, VAR3, &VAR17, &VAR14);
    if (VAR15 < 0)
    {
        FUN17(VAR5, VAR14);
        goto VAR16;
    }
    FUN18(VAR13, VAR2);
VAR16:
    FUN19(VAR6);
    return VAR15;
}
static VAR1 *FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    char *VAR8 = FUN2(VAR9 + 1);
    int64_t VAR10;
    VAR11 *VAR12 = NULL;
    VAR1 *VAR13 = NULL;
    VAR6 *VAR14 = NULL;
    int VAR15;
    VAR10 = FUN3(VAR2);
    if (VAR10 < 0)
    {
        FUN4(VAR7, -VAR10, "");
        goto VAR16;
    }
    VAR15 = FUN5(VAR8, VAR9 + 1);
    if (VAR15 < 0)
    {
        FUN4(VAR7, -VAR15, "");
        goto VAR16;
    }
    VAR12 = FUN6(VAR17.VAR18, NULL, 0, &VAR19);
    FUN7(VAR12, VAR20, VAR10, &VAR19);
    VAR15 = FUN8(&VAR17, VAR8, VAR12, VAR7);
    FUN9(VAR12);
    if (VAR15 < 0)
    {
        FUN10(VAR7, "", VAR8);
        goto VAR16;
    }
    FUN11(VAR5, "", "");
    FUN11(VAR5, "", VAR8);
    FUN11(VAR5, "", "");
    VAR13 = FUN12(NULL, NULL, VAR5, VAR3, VAR7);
    VAR5 = NULL;
    if (!VAR13)
    {
        goto VAR16;
    }
    FUN13(VAR13);
    FUN14(VAR13, VAR2, &VAR14);
    if (VAR14)
    {
        FUN15(VAR7, VAR14);
        VAR13 = NULL;
        goto VAR16;
    }
VAR16:
    FUN16(VAR5);
    FUN17(VAR8);
    return VAR13;
}
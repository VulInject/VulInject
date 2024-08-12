static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    int VAR15 = -VAR16;
    VAR17 *VAR18, *VAR19;
    VAR18 = FUN2(VAR5, NULL);
    FUN3(VAR18, &VAR19, "");
    FUN4(VAR18);
    if (!FUN5(VAR3, ""))
    {
        FUN6(VAR7, "", VAR3);
        VAR15 = -VAR16;
        goto VAR20;
    }
    VAR12 = FUN7(VAR21, VAR19, VAR7);
    if (!VAR12)
    {
        VAR15 = -VAR16;
        goto VAR20;
    }
    VAR9->VAR22 = VAR23;
    VAR14 = FUN8(VAR12, NULL, NULL, VAR2, VAR7);
    if (!VAR14)
    {
        VAR15 = -VAR16;
        goto VAR20;
    }
    VAR15 = FUN9(VAR2);
    if (VAR15 < 0)
    {
        FUN10(VAR7, -VAR15, "");
        goto VAR20;
    }
VAR20:
    FUN4(VAR19);
    FUN11(VAR14);
    FUN12(VAR12);
    return VAR15;
}
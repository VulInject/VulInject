static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = NULL;
    VAR4 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR6 *VAR14 = NULL;
    FUN2(VAR5, &VAR9, "");
    if (!FUN3(VAR9))
    {
        FUN4(VAR7, "");
        goto VAR15;
    }
    VAR11 = FUN5(VAR9, VAR7);
    if (!VAR11)
    {
        goto VAR15;
    }
    VAR13 = FUN6(VAR11);
    FUN7(VAR13, NULL, &VAR8, &VAR14);
    if (VAR14)
    {
        FUN8(VAR7, VAR14);
        goto VAR15;
    }
VAR15:
    FUN9(VAR9);
    FUN10(VAR11);
    FUN11(VAR13);
    return VAR8;
static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6 = NULL;
    VAR2 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR4 *VAR12 = NULL;
    FUN2(VAR3, &VAR7, "");
    if (!FUN3(VAR7))
    {
        FUN4(VAR5, "");
        goto VAR13;
    }
    VAR9 = FUN5(VAR7, VAR5);
    if (!VAR9)
    {
        goto VAR13;
    }
    VAR11 = FUN6(VAR9);
    FUN7(VAR11, NULL, &VAR6, &VAR12);
    if (VAR12)
    {
        FUN8(VAR5, VAR12);
        goto VAR13;
    }
VAR13:
    FUN9(VAR7);
    FUN10(VAR9);
    FUN11(VAR11);
    return VAR6;
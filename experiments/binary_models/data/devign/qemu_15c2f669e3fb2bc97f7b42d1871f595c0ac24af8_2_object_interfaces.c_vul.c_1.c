VAR1 *FUN1(const VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    char *VAR8 = NULL;
    char *VAR9 = NULL;
    VAR1 *VAR10 = NULL;
    VAR6 *VAR11 = NULL, *VAR12 = NULL;
    VAR2 *VAR13;
    VAR13 = FUN2(VAR3);
    FUN3(VAR5, NULL, NULL, 0, &VAR11);
    if (VAR11)
    {
        goto VAR14;
    }
    FUN4(VAR13, "");
    FUN5(VAR5, "", &VAR8, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    FUN4(VAR13, "");
    FUN5(VAR5, "", &VAR9, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
    VAR10 = FUN6(VAR8, VAR9, VAR13, VAR5, &VAR11);
    if (VAR11)
    {
        goto VAR15;
    }
VAR15:
    FUN7(VAR5, &VAR12);
    if (VAR12)
    {
        FUN8(&VAR11, VAR12);
        if (VAR10)
        {
            FUN9(VAR9, NULL);
        }
        goto VAR14;
    }
VAR14:
    FUN10(VAR13);
    FUN11(VAR9);
    FUN11(VAR8);
    if (VAR11)
    {
        FUN8(VAR7, VAR11);
        FUN12(VAR10);
        return NULL;
    }
    return VAR10;
}
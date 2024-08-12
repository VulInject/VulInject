VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR1 *VAR10;
    const char *VAR11 = FUN2(VAR3);
    char *VAR12 = FUN3(VAR3, "");
    if (!VAR12)
    {
        FUN4(VAR5, VAR13, "");
        return NULL;
    }
    if (!VAR11)
    {
        FUN4(VAR5, VAR13, "");
        FUN5(VAR12);
        return NULL;
    }
    FUN6(VAR3, NULL);
    VAR9 = FUN7(VAR3, NULL);
    VAR7 = FUN8(VAR3);
    VAR10 = FUN9(VAR12, VAR11, VAR9, VAR7, VAR5);
    FUN10(VAR7);
    FUN6(VAR3, (char *)VAR11);
    FUN5(VAR12);
    FUN11(VAR9);
    return VAR10;
}
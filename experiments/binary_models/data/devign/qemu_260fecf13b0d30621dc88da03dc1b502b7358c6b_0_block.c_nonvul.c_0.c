VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, const VAR8 *VAR9, bool VAR10, VAR11 **VAR12)
{
    VAR1 *VAR13 = NULL;
    VAR6 *VAR14;
    VAR3 *VAR15;
    int VAR16;
    char *VAR17;
    const char *VAR18;
    assert(VAR9 != NULL);
    VAR17 = FUN2("", VAR5);
    FUN3(VAR4, &VAR15, VAR17);
    FUN4(VAR17);
    VAR18 = FUN5(VAR4, VAR5);
    if (!VAR2 && !VAR18 && !FUN6(VAR15))
    {
        if (!VAR10)
        {
            FUN7(VAR12, ""%VAR19\"", VAR5);
        }
        FUN8(VAR15);
        goto VAR20;
    }
    VAR14 = NULL;
    VAR16 = FUN9(&VAR14, VAR2, VAR18, VAR15, 0, VAR7, VAR9, VAR12);
    if (VAR16 < 0)
    {
        goto VAR20;
    }
    VAR13 = FUN10(VAR7, VAR14, VAR5, VAR9);
VAR20:
    FUN11(VAR4, VAR5);
    return VAR13;
}
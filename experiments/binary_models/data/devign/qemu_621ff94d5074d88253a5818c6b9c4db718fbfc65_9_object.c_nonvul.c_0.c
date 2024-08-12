VAR1 *FUN1(const char *typename, VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, va_list VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR4 *VAR10 = NULL;
    VAR9 = FUN2(typename);
    if (!VAR9)
    {
        FUN3(VAR5, "", typename);
        return NULL;
    }
    if (FUN4(VAR9))
    {
        FUN3(VAR5, "", typename);
        return NULL;
    }
    VAR7 = FUN5(typename);
    if (FUN6(VAR7, &VAR10, VAR6) < 0)
    {
        goto VAR11;
    }
    FUN7(VAR2, VAR3, VAR7, &VAR10);
    if (VAR10)
    {
        goto VAR11;
    }
    if (FUN8(VAR7, VAR12))
    {
        FUN9(VAR7, &VAR10);
        if (VAR10)
        {
            FUN10(VAR7);
            goto VAR11;
        }
    }
    FUN11(FUN12(VAR7));
    return VAR7;
VAR11:
    FUN13(VAR5, VAR10);
    FUN11(VAR7);
    return NULL;
}
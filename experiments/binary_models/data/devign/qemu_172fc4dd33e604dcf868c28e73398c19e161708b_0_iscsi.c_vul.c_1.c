static struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4, int VAR5, int VAR6, void **VAR7, VAR8 **VAR9)
{
    int VAR10;
    struct VAR1 *VAR11 = NULL;
    VAR11 = FUN2(VAR3, VAR4, VAR5, VAR6, 64);
    if (VAR11 == NULL || VAR11->VAR12 != VAR13)
    {
        goto VAR14;
    }
    VAR10 = FUN3(VAR11);
    if (VAR10 > VAR11->VAR15.VAR16)
    {
        FUN4(VAR11);
        VAR11 = FUN2(VAR3, VAR4, VAR5, VAR6, VAR10);
        if (VAR11 == NULL || VAR11->VAR12 != VAR13)
        {
            goto VAR14;
        }
    }
    *VAR7 = FUN5(VAR11);
    if (*VAR7 == NULL)
    {
        FUN6(VAR9, "");
        goto VAR14;
    }
    return VAR11;
VAR14:
    if (!FUN7(VAR9))
    {
        FUN6(VAR9, "", FUN8(VAR3));
    }
    if (VAR11 != NULL)
    {
        FUN4(VAR11);
    }
    return NULL;
}
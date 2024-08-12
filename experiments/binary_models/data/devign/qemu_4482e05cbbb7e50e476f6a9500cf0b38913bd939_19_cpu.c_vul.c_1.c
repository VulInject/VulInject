const char *FUN1(const char *typename, const char *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 **VAR9;
    const char *VAR10;
    VAR9 = FUN2(VAR1, "", 2);
    VAR3 = FUN3(typename, VAR9[0]);
    if (VAR3 == NULL)
    {
        FUN4(VAR9);
        return NULL;
    }
    VAR10 = FUN5(VAR3);
    VAR5 = FUN6(VAR3);
    VAR5->FUN7(VAR10, VAR9[1], &VAR7);
    FUN4(VAR9);
    if (VAR7 != NULL)
    {
        FUN8(VAR7);
        return NULL;
    }
    return VAR10;
}
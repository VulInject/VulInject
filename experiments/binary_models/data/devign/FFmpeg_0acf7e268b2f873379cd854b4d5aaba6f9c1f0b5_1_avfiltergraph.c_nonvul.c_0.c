int FUN1(VAR1 **VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, void *VAR7, VAR8 *VAR9)
{
    int VAR10;
    *VAR2 = FUN2(VAR9, VAR4, VAR5);
    if (!*VAR2)
        return FUN3(VAR11);
    VAR10 = FUN4(*VAR2, VAR6);
    if (VAR10 < 0)
        goto VAR12;
    return 0;
VAR12:
    if (*VAR2)
        FUN5(*VAR2);
    *VAR2 = NULL;
    return VAR10;
}
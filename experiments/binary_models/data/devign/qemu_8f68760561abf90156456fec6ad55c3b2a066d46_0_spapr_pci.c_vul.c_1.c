static char *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char *VAR5 = NULL, *VAR6 = NULL, *VAR7 = NULL;
    VAR7 = FUN2(FUN3(VAR4), "", NULL);
    if (!VAR7)
    {
        goto VAR8;
    }
    VAR5 = FUN4("", VAR7);
    FUN5(VAR7);
    if (!VAR5 || !FUN6(VAR5, &VAR6, NULL, NULL))
    {
        goto VAR8;
    }
    FUN5(VAR5);
    VAR5 = FUN4("", VAR6);
    FUN5(VAR6);
    if (!VAR5 || !FUN6(VAR5, &VAR6, NULL, NULL))
    {
        goto VAR8;
    }
    return VAR6;
VAR8:
    FUN5(VAR5);
    return NULL;
}
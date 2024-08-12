static const VAR1 *FUN1(VAR2 *VAR3, const char **VAR4, VAR1 *VAR5)
{
    const char *VAR6;
    const VAR1 *VAR7;
    char VAR8[256];
    VAR6 = FUN2(*VAR4, VAR8, sizeof(VAR8));
    if (!VAR6)
        return NULL;
    VAR7 = FUN3(VAR5, VAR8);
    if (!VAR7)
    {
        FUN4(VAR3, "", (int)(VAR6 - *VAR4), *VAR4);
        return NULL;
    }
    while (FUN5(*VAR6))
    {
        VAR6++;
    }
    *VAR4 = VAR6;
    if (VAR7->VAR9 != NULL && *VAR6 != '')
    {
        return FUN1(VAR3, VAR4, VAR7->VAR9);
    }
    return VAR7;
}
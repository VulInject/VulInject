FUN1(VAR1 *VAR2, const char *VAR3, int (*VAR4)(VAR1 *, const char *))
{
    char *VAR5, *VAR6;
    char *VAR7 = NULL;
    assert(VAR4 != NULL);
    if ((VAR2 == NULL) || (VAR3 == NULL))
        return (VAR8);
    if ((VAR5 = strdup(VAR3)) == NULL)
        return (VAR9);
    VAR6 = FUN2(VAR5, "", &VAR7);
    while (VAR6 != NULL)
    {
        if ((*VAR4)(VAR2, VAR6) != 0)
        {
            free(VAR5);
            return (VAR9);
        }
        VAR6 = FUN2(NULL, "", &VAR7);
    }
    free(VAR5);
    return (0);
}
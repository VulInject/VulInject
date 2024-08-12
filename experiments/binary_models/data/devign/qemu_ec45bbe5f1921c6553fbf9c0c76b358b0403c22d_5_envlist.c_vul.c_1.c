FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    char **VAR7, **VAR8;
    VAR8 = VAR7 = malloc((VAR2->VAR9 + 1) * sizeof(char *));
    if (VAR7 == NULL)
        return (NULL);
    for (VAR6 = VAR2->VAR10.VAR11; VAR6 != NULL; VAR6 = VAR6->VAR12.VAR13)
    {
        *(VAR8++) = strdup(VAR6->VAR14);
    }
    *VAR8 = NULL;
    if (VAR4 != NULL)
        *VAR4 = VAR2->VAR9;
    return (VAR7);
}
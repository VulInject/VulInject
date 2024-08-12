FUN1(VAR1 *VAR2, const char *VAR3)
{
    struct VAR4 *VAR5 = NULL;
    const char *VAR6;
    size_t VAR7;
    if ((VAR2 == NULL) || (VAR3 == NULL))
        return (VAR8);
    if ((VAR6 = strchr(VAR3, '')) == NULL)
        return (VAR8);
    VAR7 = VAR6 - VAR3 + 1;
    for (VAR5 = VAR2->VAR9.VAR10; VAR5 != NULL; VAR5 = VAR5->VAR11.VAR12)
    {
        if (FUN2(VAR5->VAR13, VAR3, VAR7) == 0)
            break;
    }
    if (VAR5 != NULL)
    {
        FUN3(VAR5, VAR11);
        free((char *)VAR5->VAR13);
        free(VAR5);
    }
    else
    {
        VAR2->VAR14++;
    }
    if ((VAR5 = malloc(sizeof(*VAR5))) == NULL)
        return (VAR15);
    if ((VAR5->VAR13 = strdup(VAR3)) == NULL)
    {
        free(VAR5);
        return (VAR15);
    }
    FUN4(&VAR2->VAR9, VAR5, VAR11);
    return (0);
}
FUN1(VAR1 *VAR2, const char *VAR3)
{
    struct VAR4 *VAR5;
    size_t VAR6;
    if ((VAR2 == NULL) || (VAR3 == NULL))
        return (VAR7);
    if (strchr(VAR3, '') != NULL)
        return (VAR7);
    VAR6 = strlen(VAR3);
    for (VAR5 = VAR2->VAR8.VAR9; VAR5 != NULL; VAR5 = VAR5->VAR10.VAR11)
    {
        if (FUN2(VAR5->VAR12, VAR3, VAR6) == 0)
            break;
    }
    if (VAR5 != NULL)
    {
        FUN3(VAR5, VAR10);
        free((char *)VAR5->VAR12);
        free(VAR5);
        VAR2->VAR13--;
    }
    return (0);
}
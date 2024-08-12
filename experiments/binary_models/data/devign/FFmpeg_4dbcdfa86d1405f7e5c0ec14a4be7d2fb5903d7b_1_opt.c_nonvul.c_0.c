const char *FUN1(void *VAR1, const char *VAR2, const VAR3 **VAR4, char *VAR5, int VAR6)
{
    const VAR3 *VAR7 = FUN2(VAR1, VAR2, NULL, 0, 0);
    void *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    if (!VAR7)
        return NULL;
    if (VAR7->VAR13 != VAR14 && (!VAR5 || !VAR6))
        return NULL;
    VAR8 = ((VAR9 *)VAR1) + VAR7->VAR15;
    if (VAR4)
        *VAR4 = VAR7;
    switch (VAR7->VAR13)
    {
    case VAR16:
        snprintf(VAR5, VAR6, "", *(int *)VAR8);
        break;
    case VAR17:
        snprintf(VAR5, VAR6, "", *(int *)VAR8);
        break;
    case VAR18:
        snprintf(VAR5, VAR6, "" VAR19, *(VAR20 *)VAR8);
        break;
    case VAR21:
        snprintf(VAR5, VAR6, "", *(float *)VAR8);
        break;
    case VAR22:
        snprintf(VAR5, VAR6, "", *(double *)VAR8);
        break;
    case VAR23:
        snprintf(VAR5, VAR6, "", ((VAR24 *)VAR8)->VAR25, ((VAR24 *)VAR8)->VAR26);
        break;
    case VAR14:
        return *(void **)VAR8;
    case VAR27:
        VAR11 = *(int *)(((VAR9 *)VAR8) + sizeof(VAR9 *));
        if (VAR11 >= (VAR6 + 1) / 2)
            return NULL;
        VAR10 = *(VAR9 **)VAR8;
        for (VAR12 = 0; VAR12 < VAR11; VAR12++)
            snprintf(VAR5 + VAR12 * 2, 3, "", VAR10[VAR12]);
        break;
    default:
        return NULL;
    }
    return VAR5;
}
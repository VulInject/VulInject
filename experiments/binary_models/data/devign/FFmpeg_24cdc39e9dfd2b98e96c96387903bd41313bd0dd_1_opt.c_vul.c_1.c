const char *FUN1(void *VAR1, const char *VAR2, const VAR3 **VAR4, char *VAR5, int VAR6)
{
    const VAR3 *VAR7 = FUN2(VAR1, VAR2, NULL, 0, 0);
    void *VAR8;
    if (!VAR7 || VAR7->VAR9 <= 0)
        return NULL;
    if (VAR7->VAR10 != VAR11 && (!VAR5 || !VAR6))
        return NULL;
    VAR8 = ((VAR12 *)VAR1) + VAR7->VAR9;
    if (VAR4)
        *VAR4 = VAR7;
    if (VAR7->VAR10 == VAR11)
        return VAR8;
    switch (VAR7->VAR10)
    {
    case VAR13:
        snprintf(VAR5, VAR6, "", *(int *)VAR8);
        break;
    case VAR14:
        snprintf(VAR5, VAR6, "", *(int *)VAR8);
        break;
    case VAR15:
        snprintf(VAR5, VAR6, "" VAR16, *(VAR17 *)VAR8);
        break;
    case VAR18:
        snprintf(VAR5, VAR6, "", *(float *)VAR8);
        break;
    case VAR19:
        snprintf(VAR5, VAR6, "", *(double *)VAR8);
        break;
    case VAR20:
        snprintf(VAR5, VAR6, "", ((VAR21 *)VAR8)->VAR22, ((VAR21 *)VAR8)->VAR23);
        break;
    default:
        return NULL;
    }
    return VAR5;
}
static char *FUN1(const char *VAR1, struct VAR2 *VAR3, socklen_t VAR4)
{
    char *VAR5;
    char VAR6[VAR7];
    char VAR8[VAR9];
    int VAR10;
    size_t VAR11;
    if ((VAR10 = getnameinfo((struct VAR12 *)VAR3, VAR4, VAR6, sizeof(VAR6), VAR8, sizeof(VAR8), VAR13 | VAR14)) != 0)
    {
        FUN2("", VAR10, FUN3(VAR10));
        return NULL;
    }
    VAR11 = strlen(VAR1) + strlen(VAR6) + strlen(VAR8);
    VAR5 = FUN4(VAR11 + 1);
    snprintf(VAR5, VAR11, VAR1, VAR6, VAR8);
    VAR5[VAR11] = '';
    return VAR5;
}
static const char *FUN1(VAR1 *VAR2, const char *VAR3, char *VAR4)
{
    char *VAR5;
    char *VAR6 = strdup(VAR3);
    char *VAR7 = FUN2(VAR6);
    VAR5 = VAR6;
    *(VAR7 - 1) = '';
    snprintf(VAR4, VAR8, "", VAR2->VAR9, VAR5, VAR10, VAR7);
    free(VAR6);
    return VAR4;
}
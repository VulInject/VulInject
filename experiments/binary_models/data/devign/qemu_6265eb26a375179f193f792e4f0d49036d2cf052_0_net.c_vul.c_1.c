int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, const char *VAR4)
{
    char *VAR5 = strdup(VAR4);
    char *VAR6 = VAR5;
    char *VAR7;
    const char *VAR8;
    char *VAR9;
    if ((VAR9 = strchr(VAR5, '')))
        *VAR9 = '';
    if ((VAR7 = strchr(VAR4, '')))
    {
        *VAR7 = '';
        VAR7++;
    }
    if (FUN2(VAR2, VAR6) < 0)
        goto VAR10;
    VAR8 = VAR7;
    if (!VAR7 || *VAR7 == '')
        VAR8 = "";
    if (FUN2(VAR3, VAR8) < 0)
        goto VAR10;
    free(VAR5);
    return (0);
VAR10:
    free(VAR5);
    return -1;
}
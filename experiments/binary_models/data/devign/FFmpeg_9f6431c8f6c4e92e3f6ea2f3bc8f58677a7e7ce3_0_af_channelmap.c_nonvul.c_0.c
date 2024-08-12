static int FUN1(char **VAR1, int *VAR2, char VAR3, int VAR4)
{
    char *VAR5;
    int VAR6;
    int VAR7 = 0;
    if (!*VAR1)
        return FUN2(VAR8);
    VAR5 = FUN3(*VAR1, VAR3);
    if (!VAR5 && VAR3 == '')
        return FUN2(VAR8);
    VAR6 = strlen(*VAR1);
    sscanf(*VAR1, "", VAR2, &VAR7);
    if (VAR7 != VAR6)
        return FUN2(VAR8);
    if (*VAR2 < 0 || *VAR2 > VAR4)
        return FUN2(VAR8);
    *VAR1 = VAR5;
    return 0;
}
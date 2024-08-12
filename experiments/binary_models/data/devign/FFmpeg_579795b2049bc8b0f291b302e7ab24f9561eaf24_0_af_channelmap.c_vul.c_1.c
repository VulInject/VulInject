static int FUN1(char **VAR1, int *VAR2, char VAR3, int VAR4)
{
    char *VAR5 = FUN2(*VAR1, VAR3);
    int VAR6;
    int VAR7 = 0;
    if (!VAR5 && VAR3 == '')
        VAR6 = strlen(*VAR1);
    sscanf(*VAR1, "", VAR2, &VAR7);
    if (VAR7 != VAR6)
        if (*VAR2 < 0 || *VAR2 > VAR4)
            *VAR1 = VAR5;
    return 0;
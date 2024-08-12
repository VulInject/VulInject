char **FUN1(char *VAR1, int *VAR2)
{
    int VAR3 = 0;
    char *VAR4;
    char **VAR5 = calloc(sizeof(char *), 1);
    while (VAR5 && (VAR4 = FUN2(&VAR1, "")) != NULL)
    {
        if (!*VAR4)
        {
            continue;
        }
        VAR3++;
        VAR5 = realloc(VAR5, sizeof(*VAR5) * (VAR3 + 1));
        if (!VAR5)
        {
            VAR3 = 0;
            break;
        }
        VAR5[VAR3 - 1] = VAR4;
        VAR5[VAR3] = NULL;
    }
    *VAR2 = VAR3;
    return VAR5;
}
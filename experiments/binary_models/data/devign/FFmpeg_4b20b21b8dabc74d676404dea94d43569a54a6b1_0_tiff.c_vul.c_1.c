static char *FUN1(double *VAR1, int VAR2, const char *VAR3)
{
    int VAR4;
    char *VAR5, *VAR6;
    int VAR7 = 15 + strlen(VAR3);
    if (!VAR3)
        VAR3 = "";
    VAR5 = FUN2(VAR7 * VAR2);
    if (!VAR5)
        return NULL;
    VAR6 = VAR5;
    VAR5[0] = '';
    for (VAR4 = 0; VAR4 < VAR2; VAR4++)
    {
        unsigned VAR8 = snprintf(VAR5, VAR7, "", VAR1[VAR4], VAR3);
        if (VAR8 >= VAR7)
            return NULL;
        VAR5 += VAR8;
    }
    VAR6[strlen(VAR6) - strlen(VAR3)] = '';
    return VAR6;
}
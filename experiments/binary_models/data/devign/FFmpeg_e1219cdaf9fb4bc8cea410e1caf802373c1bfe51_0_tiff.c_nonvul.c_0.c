static char *FUN1(double *VAR1, int VAR2, const char *VAR3)
{
    int VAR4;
    char *VAR5, *VAR6;
    uint64_t VAR7;
    if (!VAR3)
        VAR3 = "";
    VAR7 = 15LL + strlen(VAR3);
    if (VAR2 >= (VAR8 - 1) / VAR7)
        return NULL;
    VAR5 = FUN2(VAR7 * VAR2 + 1);
    if (!VAR5)
        return NULL;
    VAR6 = VAR5;
    VAR5[0] = '';
    for (VAR4 = 0; VAR4 < VAR2; VAR4++)
    {
        unsigned VAR9 = snprintf(VAR5, VAR7, "", VAR1[VAR4], VAR3);
        if (VAR9 >= VAR7)
        {
            FUN3(VAR6);
            return NULL;
        }
        VAR5 += VAR9;
    }
    VAR6[strlen(VAR6) - strlen(VAR3)] = '';
    return VAR6;
}
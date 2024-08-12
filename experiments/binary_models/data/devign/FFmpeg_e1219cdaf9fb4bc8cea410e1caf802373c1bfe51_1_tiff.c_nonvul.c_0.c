static char *FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    int VAR5;
    char *VAR6, *VAR7;
    uint64_t VAR8;
    if (!VAR4)
        VAR4 = "";
    VAR8 = 7LL + strlen(VAR4);
    if (VAR3 >= (VAR9 - 1) / VAR8)
        return NULL;
    VAR6 = FUN2(VAR8 * VAR3 + 1);
    if (!VAR6)
        return NULL;
    VAR7 = VAR6;
    VAR6[0] = '';
    for (VAR5 = 0; VAR5 < VAR3; VAR5++)
    {
        unsigned VAR10 = snprintf(VAR6, VAR8, "", VAR2[VAR5], VAR4);
        if (VAR10 >= VAR8)
        {
            FUN3(VAR7);
            return NULL;
        }
        VAR6 += VAR10;
    }
    VAR7[strlen(VAR7) - strlen(VAR4)] = '';
    return VAR7;
}
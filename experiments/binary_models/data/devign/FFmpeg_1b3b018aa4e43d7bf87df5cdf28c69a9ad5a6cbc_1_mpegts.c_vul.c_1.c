static char *FUN1(const VAR1 **VAR2, const VAR1 *VAR3)
{
    int VAR4;
    const VAR1 *VAR5;
    char *VAR6;
    VAR5 = *VAR2;
    VAR4 = FUN2(&VAR5, VAR3);
    if (VAR4 < 0)
        return NULL;
    if ((VAR5 + VAR4) > VAR3)
        return NULL;
    VAR6 = FUN3(VAR4 + 1);
    if (!VAR6)
        return NULL;
    memcpy(VAR6, VAR5, VAR4);
    VAR6[VAR4] = '';
    VAR5 += VAR4;
    *VAR2 = VAR5;
    return VAR6;
}
void *FUN1(size_t VAR1)
{
    void *VAR2 = NULL;
    long VAR3;
    if (VAR1 > (VAR4 - 32))
        return NULL;
    VAR2 = malloc(VAR1 + VAR5);
    if (!VAR2)
        return VAR2;
    VAR3 = ((~(long)VAR2) & (VAR5 - 1)) + 1;
    VAR2 = (char *)VAR2 + VAR3;
    ((char *)VAR2)[-1] = VAR3;
    if (VAR1)
        if (FUN2(&VAR2, VAR5, VAR1))
            VAR2 = NULL;
    VAR2 = FUN3(VAR1, VAR5);
    VAR2 = memalign(VAR5, VAR1);
    VAR2 = memalign(VAR1, VAR5);
    VAR2 = malloc(VAR1);
    if (!VAR2 && !VAR1)
    {
        VAR1 = 1;
        VAR2 = FUN1(1);
    }
    if (VAR2)
        memset(VAR2, VAR6, VAR1);
    return VAR2;
}
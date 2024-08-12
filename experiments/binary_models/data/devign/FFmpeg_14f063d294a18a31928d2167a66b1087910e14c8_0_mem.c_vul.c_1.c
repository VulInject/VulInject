void *FUN1(size_t VAR1)
{
    void *VAR2 = NULL;
    long VAR3;
    if (VAR1 > (VAR4 - 32))
        return NULL;
    VAR2 = malloc(VAR1 + 32);
    if (!VAR2)
        return VAR2;
    VAR3 = ((-(long)VAR2 - 1) & 31) + 1;
    VAR2 = (char *)VAR2 + VAR3;
    ((char *)VAR2)[-1] = VAR3;
    if (FUN2(&VAR2, 32, VAR1))
        VAR2 = NULL;
    VAR2 = memalign(32, VAR1);
    VAR2 = malloc(VAR1);
    return VAR2;
}
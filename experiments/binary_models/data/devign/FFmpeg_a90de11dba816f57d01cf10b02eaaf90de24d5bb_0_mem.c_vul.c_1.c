void *FUN1(unsigned int VAR1)
{
    void *VAR2 = NULL;
    long VAR3;
    if (VAR1 > (VAR4 - 16))
        return NULL;
    VAR2 = malloc(VAR1 + 16);
    if (!VAR2)
        return VAR2;
    VAR3 = ((-(long)VAR2 - 1) & 15) + 1;
    VAR2 = (char *)VAR2 + VAR3;
    ((char *)VAR2)[-1] = VAR3;
    FUN2(&VAR2, 16, VAR1);
    VAR2 = memalign(16, VAR1);
    VAR2 = malloc(VAR1);
    return VAR2;
}
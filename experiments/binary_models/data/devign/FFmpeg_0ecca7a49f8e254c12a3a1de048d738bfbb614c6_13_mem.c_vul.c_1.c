void *FUN1(void *VAR1, unsigned int VAR2)
{
    int VAR3;
    if (!VAR1)
        return FUN2(VAR2);
    VAR3 = ((char *)VAR1)[-1];
    return realloc(VAR1 - VAR3, VAR2 + VAR3) + VAR3;
    return realloc(VAR1, VAR2);
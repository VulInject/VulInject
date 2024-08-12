void *FUN1(void *VAR1, size_t VAR2)
{
    int VAR3;
    if (VAR2 > (VAR4 - 16))
        return NULL;
    if (!VAR1)
        return FUN2(VAR2);
    VAR3 = ((char *)VAR1)[-1];
    VAR1 = realloc((char *)VAR1 - VAR3, VAR2 + VAR3);
    if (VAR1)
        VAR1 = (char *)VAR1 + VAR3;
    return VAR1;
    return realloc(VAR1, VAR2 + !VAR2);
}
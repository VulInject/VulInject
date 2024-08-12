void *FUN1(size_t VAR1)
{
    void *VAR2;
    VAR2 = FUN2(VAR1);
    if (!VAR2)
        return NULL;
    memset(VAR2, 0, VAR1);
    return VAR2;
}
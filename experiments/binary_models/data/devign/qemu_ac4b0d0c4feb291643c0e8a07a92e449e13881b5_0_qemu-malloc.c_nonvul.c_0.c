char *FUN1(const char *VAR1)
{
    char *VAR2;
    size_t VAR3 = strlen(VAR1);
    VAR2 = FUN2(VAR3 + 1);
    if (!VAR2)
        return NULL;
    memcpy(VAR2, VAR1, VAR3 + 1);
    return VAR2;
}
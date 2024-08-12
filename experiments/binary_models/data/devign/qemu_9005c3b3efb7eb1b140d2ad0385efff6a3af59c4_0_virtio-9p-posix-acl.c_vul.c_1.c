static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, char *VAR5, void *VAR6, size_t VAR7)
{
    ssize_t VAR8 = sizeof(VAR9);
    if (!VAR6)
    {
        return VAR8;
    }
    if (VAR7 < VAR8)
    {
        VAR10 = VAR11;
        return -1;
    }
    memcpy(VAR6, VAR12, VAR8);
    return 0;
}
static int FUN1(const char *VAR1, VAR2 *VAR3, int *VAR4)
{
    int64_t VAR5;
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    if (sscanf(VAR1, "", &VAR6, &VAR7, &VAR8, &VAR9, &VAR10, &VAR11, &VAR12, &VAR13) == 8)
    {
        VAR5 = (VAR10 * 3600 + VAR11 * 60 + VAR12) * 100 + VAR13;
        *VAR3 = (VAR6 * 3600 + VAR7 * 60 + VAR8) * 100 + VAR9;
        *VAR4 = VAR5 - *VAR3;
        return 0;
    }
    return -1;
}
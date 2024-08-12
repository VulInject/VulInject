static int FUN1(VAR1 *VAR2, const void *VAR3, size_t VAR4, int *VAR5, size_t VAR6)
{
    size_t VAR7 = 0;
    while (VAR7 < VAR4)
    {
        ssize_t VAR8 = 0;
        struct iovec VAR9 = {.VAR10 = (char *)VAR3 + VAR7, .VAR11 = VAR4 - VAR7};
        VAR8 = FUN2(VAR2, &VAR9, 1, VAR5, VAR6, NULL);
        if (VAR8 == VAR12)
        {
            if (VAR7)
            {
                return VAR7;
            }
            VAR13 = VAR14;
            return -1;
        }
        else if (VAR8 < 0)
        {
            VAR13 = VAR15;
            return -1;
        }
        VAR7 += VAR8;
    }
    return VAR7;
}
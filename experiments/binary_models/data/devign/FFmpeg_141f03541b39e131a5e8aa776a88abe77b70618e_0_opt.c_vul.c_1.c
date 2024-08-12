int FUN1(void *VAR1, const char *VAR2, const char *VAR3, const char *VAR4)
{
    int VAR5, VAR6 = 0;
    while (*VAR2)
    {
        if ((VAR5 = FUN2(VAR1, &VAR2, VAR3, VAR4)) < 0)
            return VAR5;
        VAR6++;
        if (*VAR2)
            VAR2++;
    }
    return VAR6;
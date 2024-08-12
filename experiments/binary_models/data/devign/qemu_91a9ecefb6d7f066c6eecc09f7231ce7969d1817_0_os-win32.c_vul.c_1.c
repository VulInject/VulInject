int setenv(const char *VAR1, const char *VAR2, int VAR3)
{
    int VAR4 = 0;
    if (VAR3 || !getenv(VAR1))
    {
        size_t VAR5 = strlen(VAR1) + strlen(VAR2) + 2;
        char *VAR6 = FUN1(VAR5);
        snprintf(VAR6, VAR5, "", VAR1, VAR2);
        VAR4 = FUN2(VAR6);
    }
    return VAR4;
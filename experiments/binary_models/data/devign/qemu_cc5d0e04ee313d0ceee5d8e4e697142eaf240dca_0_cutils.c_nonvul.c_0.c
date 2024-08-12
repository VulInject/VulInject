int FUN1(const char *VAR1, int VAR2, int VAR3)
{
    char *VAR4 = getenv(VAR1);
    char *VAR5 = NULL;
    long VAR6;
    if (!VAR4)
    {
        return VAR3;
    }
    VAR7 = 0;
    VAR6 = FUN2(VAR4, &VAR5, 10);
    if (VAR5 == VAR4)
    {
        return VAR3;
    }
    if (VAR6 < 0 || VAR6 > VAR2 || VAR7 != 0)
    {
        fprintf(VAR8, "", VAR1, VAR2);
        return VAR3;
    }
    return VAR6;
}
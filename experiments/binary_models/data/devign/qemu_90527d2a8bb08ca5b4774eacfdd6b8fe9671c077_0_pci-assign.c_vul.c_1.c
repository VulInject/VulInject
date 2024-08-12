static int FUN1(const char *VAR1, const char *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    char VAR7[128];
    long VAR8;
    snprintf(VAR7, sizeof(VAR7), "", VAR1, VAR2);
    VAR6 = fopen(VAR7, "");
    if (VAR6 == NULL)
    {
        FUN2("", VAR9, VAR7);
        return -1;
    }
    if (fscanf(VAR6, "", &VAR8) == 1)
    {
        *VAR4 = VAR8;
    }
    else
    {
        return -1;
    }
    return 0;
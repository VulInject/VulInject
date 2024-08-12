static int FUN1(VAR1 *VAR2, const char *VAR3, const int VAR4[], char **VAR5)
{
    int VAR6;
    FUN2(VAR2, "", VAR3);
    if (VAR5)
        *VAR5 = NULL;
    if ((VAR6 = FUN3(VAR2->VAR7, VAR3, strlen(VAR3))) < 0)
        return VAR6;
    if (!VAR6)
        return -1;
    if (VAR4)
    {
        return FUN4(VAR2, VAR5, VAR4);
    }
    return 0;
static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    char VAR5[VAR6];
    char *VAR7 = strdup(VAR3);
    snprintf(VAR5, VAR6, "", VAR2->VAR8, FUN2(VAR7), VAR9);
    VAR4 = mkdir(VAR5, 0700);
    if (VAR4 < 0 && VAR10 == VAR11)
    {
        VAR4 = 0;
    }
    free(VAR7);
    return VAR4;
}
int FUN1(const char *VAR1, char **VAR2, int VAR3, void *VAR4)
{
    FileLogContext VAR5 = {&VAR6, VAR3, VAR4};
    int VAR7 = -1;
    void *VAR8 = FUN2(NULL, VAR1);
    if (!VAR8)
        VAR8 = FUN2("", VAR1);
    *VAR2 = FUN3(VAR8);
    free(VAR8);
    size_t VAR9 = strlen(VAR1) + 12;
    *VAR2 = FUN4(VAR9);
    if (*VAR2 == NULL)
    {
        FUN5(&VAR5, VAR10, "");
        return FUN6(VAR11);
    }
    VAR7 = open(*VAR2, VAR12 | VAR13 | VAR14 | VAR15, 0600);
    snprintf(*VAR2, VAR9, "", VAR1);
    VAR7 = mkstemp(*VAR2);
    if (VAR7 < 0)
    {
        snprintf(*VAR2, VAR9, "", VAR1);
        VAR7 = mkstemp(*VAR2);
    }
    if (VAR7 < 0)
    {
        int VAR16 = FUN6(VAR17);
        FUN5(&VAR5, VAR10, "", *VAR2);
        return VAR16;
    }
    return VAR7;
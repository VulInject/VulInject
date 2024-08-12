int FUN1(const char *VAR1, char **VAR2)
{
    int VAR3 = -1;
    *VAR2 = FUN2("", VAR1);
    size_t VAR4 = strlen(VAR1) + 12;
    *VAR2 = FUN3(VAR4);
    if (!(*VAR2))
    {
        FUN4(NULL, VAR5, "");
        return -1;
    }
    VAR3 = FUN5(*VAR2, VAR6 | VAR7 | VAR8, 0444);
    snprintf(*VAR2, VAR4, "", VAR1);
    VAR3 = mkstemp(*VAR2);
    if (VAR3 < 0)
    {
        snprintf(*VAR2, VAR4, "", VAR1);
        VAR3 = mkstemp(*VAR2);
    }
    if (VAR3 < 0)
    {
        FUN4(NULL, VAR5, "", *VAR2);
        return -1;
    }
    return VAR3;
}
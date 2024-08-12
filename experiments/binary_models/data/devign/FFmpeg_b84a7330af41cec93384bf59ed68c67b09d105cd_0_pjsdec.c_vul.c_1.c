static VAR1 FUN1(char **VAR2, int *VAR3)
{
    int64_t VAR4, VAR5;
    if (sscanf(*VAR2, "" VAR6 "" VAR6, &VAR4, &VAR5) == 2)
    {
        *VAR2 += strcspn(*VAR2, """) + 1;
        *VAR3 = VAR5 - VAR4;
        return VAR4;
    }
    return VAR7;
}
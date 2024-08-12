static VAR1 FUN1(const char *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    if (sscanf(VAR2, "", &VAR3, &VAR4, &VAR5, &VAR6) == 4)
        return (VAR3 * 3600 + VAR4 * 60 + VAR5) * 1000 + VAR6;
    if (sscanf(VAR2, "", &VAR4, &VAR5, &VAR6) == 3)
        return (VAR4 * 60 + VAR5) * 1000 + VAR6;
    return VAR7;
}
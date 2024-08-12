static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    char VAR5[VAR6];
    uint32_t VAR7;
    const char *VAR8, *VAR9;
    size_t VAR10;
    VAR11 *VAR12 = VAR3->VAR13;
    if (FUN2(VAR3->VAR14, VAR12->VAR15, VAR5, VAR6) != VAR6)
    {
        return 0;
    }
    if (VAR4)
    {
        VAR9 = "";
        VAR10 = sizeof("");
    }
    else
    {
        VAR9 = "";
        VAR10 = sizeof("");
    }
    VAR8 = strstr(VAR5, VAR9);
    if (VAR8 != NULL)
    {
        VAR8 += VAR10;
        sscanf(VAR8, "", &VAR7);
    }
    return VAR7;
}
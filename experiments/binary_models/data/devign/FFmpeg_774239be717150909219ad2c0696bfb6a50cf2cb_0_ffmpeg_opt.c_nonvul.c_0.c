static int FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6 = -1;
    char VAR7[1000];
    const char *VAR8[3] = {
        getenv(""),
        getenv(""),
        VAR9,
    };
    for (VAR5 = 0; VAR5 < FUN2(VAR8) && VAR6 < 0; VAR5++)
    {
        if (!VAR8[VAR5])
            continue;
        if (VAR2)
        {
            snprintf(VAR7, sizeof(VAR7), "", VAR8[VAR5], VAR5 != 1 ? "" : "", VAR2, VAR1);
            VAR6 = FUN3(VAR4, VAR7, VAR10, &VAR11, NULL);
        }
        if (VAR6 < 0)
        {
            snprintf(VAR7, sizeof(VAR7), "", VAR8[VAR5], VAR5 != 1 ? "" : "", VAR1);
            VAR6 = FUN3(VAR4, VAR7, VAR10, &VAR11, NULL);
        }
    }
    return VAR6;
}
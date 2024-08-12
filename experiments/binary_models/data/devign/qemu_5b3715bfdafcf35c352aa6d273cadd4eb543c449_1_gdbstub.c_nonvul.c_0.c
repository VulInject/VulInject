const char *FUN1(VAR1 *VAR2, const char *VAR3, const char **VAR4)
{
    extern const char *const VAR5[][2];
    size_t VAR6;
    int VAR7;
    const char *VAR8;
    static char VAR9[1024];
    VAR6 = 0;
    while (VAR3[VAR6] && VAR3[VAR6] != '')
        VAR6++;
    *VAR4 = VAR3 + VAR6;
    VAR8 = NULL;
    if (FUN2(VAR3, "", VAR6) == 0)
    {
        if (!VAR9[0])
        {
            VAR10 *VAR11;
            snprintf(VAR9, sizeof(VAR9), ""1.0\""
                                                     ""VAR12-VAR13.VAR14\""
                                                     ""
                                                     ""%VAR15\"",
                     VAR16);
            for (VAR11 = VAR2->VAR17; VAR11; VAR11 = VAR11->VAR18)
            {
                strcat(VAR9, """);
                strcat(VAR9, VAR11->VAR19);
                strcat(VAR9, ""/>");
            }
            strcat(VAR9, "");
        }
        return VAR9;
    }
    for (VAR7 = 0;; VAR7++)
    {
        VAR8 = VAR5[VAR7][0];
        if (!VAR8 || (FUN2(VAR8, VAR3, VAR6) == 0 && strlen(VAR8) == VAR6))
            break;
    }
    return VAR8 ? VAR5[VAR7][1] : NULL;
}
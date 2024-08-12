static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    uint32_t VAR8 = 0, VAR9 = 0;
    char VAR10[32];
    static int VAR11;
    while (*VAR4 && *VAR4 != '')
    {
        const char *VAR12;
        char *VAR13;
        if (FUN2(VAR4, "", &VAR12))
        {
            VAR8 = FUN3(VAR12, &VAR13, 16);
            if (VAR13 == VAR12 || (*VAR13 && *VAR13 != '' && *VAR13 != ''))
            {
                FUN4("", VAR12);
                return NULL;
            }
            VAR4 = VAR13;
        }
        else if (FUN2(VAR4, "", &VAR12))
        {
            VAR9 = FUN3(VAR12, &VAR13, 16);
            if (VAR13 == VAR12 || (*VAR13 && *VAR13 != '' && *VAR13 != ''))
            {
                FUN4("", VAR12);
                return NULL;
            }
            VAR4 = VAR13;
        }
        else
        {
            FUN4("", VAR4);
            return NULL;
        }
        while (*VAR4 == '')
            VAR4++;
    }
    if (!*VAR4)
    {
        FUN4("");
        return NULL;
    }
    VAR4++;
    snprintf(VAR10, sizeof(VAR10), "", VAR11++);
    VAR7 = FUN5(VAR10, VAR4, NULL);
    if (!VAR7)
        return NULL;
    VAR5 = FUN6(VAR3, "");
    FUN7(&VAR5->VAR14, "", VAR7);
    if (VAR8)
        FUN8(&VAR5->VAR14, "", VAR8);
    if (VAR9)
        FUN8(&VAR5->VAR14, "", VAR9);
    FUN9(&VAR5->VAR14);
    return VAR5;
}
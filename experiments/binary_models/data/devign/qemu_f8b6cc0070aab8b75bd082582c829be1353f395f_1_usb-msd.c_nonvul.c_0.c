static VAR1 *FUN1(const char *VAR2)
{
    static int VAR3 = 0;
    char VAR4[8];
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR1 *VAR9;
    int VAR10;
    const char *VAR11;
    char VAR12[32];
    snprintf(VAR4, sizeof(VAR4), "", VAR3++);
    VAR6 = FUN2(&VAR13, VAR4, 0);
    VAR11 = strchr(VAR2, '');
    if (VAR11++)
    {
        const char *VAR14;
        if (FUN3(VAR2, "", &VAR14))
        {
            int VAR15 = FUN4(VAR11 - VAR14, sizeof(VAR12));
            FUN5(VAR12, VAR15, VAR14);
            FUN6(VAR6, "", VAR12);
        }
        else if (*VAR2 != '')
        {
            FUN7("", VAR2);
            return NULL;
        }
        VAR2 = VAR11;
    }
    if (!*VAR2)
    {
        FUN7("");
        return NULL;
    }
    FUN6(VAR6, "", VAR2);
    FUN6(VAR6, "", "");
    VAR8 = FUN8(VAR6, 0, &VAR10);
    if (!VAR8)
    {
        FUN9(VAR6);
        return NULL;
    }
    VAR9 = FUN10(NULL, "");
    if (!VAR9)
    {
        return NULL;
    }
    FUN11(&VAR9->VAR16, "", VAR8->VAR17);
    if (FUN12(&VAR9->VAR16) < 0)
        return NULL;
    return VAR9;
}
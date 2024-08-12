static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    VAR8 *VAR9;
    int VAR10;
    char VAR11[128];
    if (VAR5 != NULL)
        FUN2(VAR11, sizeof(VAR11), VAR5);
    else
        VAR11[0] = '';
    FUN3(VAR10 = FUN4(VAR11, sizeof(VAR11)));
    if (VAR10 < 0)
        return -1;
    if (!VAR6 || !strcmp(VAR6, ""))
        VAR6 = "";
    if (VAR6[0] != '')
    {
        if (FUN5(VAR6, VAR11, VAR10))
            return -1;
    }
    VAR9 = FUN6(VAR2, VAR3, VAR4, VAR10);
    if (!VAR9)
        return -1;
    snprintf(VAR9->VAR12->VAR13, sizeof(VAR9->VAR12->VAR13), "", VAR11, VAR6, VAR7);
    if (VAR7 && strcmp(VAR7, ""))
    {
        snprintf(VAR9->VAR7, sizeof(VAR9->VAR7), "", VAR7);
        snprintf(VAR9->VAR14, sizeof(VAR9->VAR14), "", VAR11);
    }
    return 0;
}
static int FUN1(VAR1 **VAR2, VAR3 *VAR4, int VAR5, const char *VAR6, const char *VAR7, void *VAR8)
{
    VAR9 *VAR10;
    char VAR11[30];
    char *VAR12 = NULL;
    int VAR13;
    snprintf(VAR11, sizeof(VAR11), "", VAR6, VAR5);
    VAR10 = FUN2(VAR6);
    if (!VAR10)
    {
        FUN3(VAR8, VAR14, "", VAR6);
        return FUN4(VAR15);
    }
    *VAR2 = FUN5(VAR4, VAR10, VAR11);
    if (!*VAR2)
    {
        FUN3(VAR8, VAR14, "", VAR6);
        return FUN4(VAR16);
    }
    if (!strcmp(VAR6, "") && VAR7 && !strstr(VAR7, "") && VAR4->VAR17)
    {
        VAR12 = FUN6("", VAR7, VAR4->VAR17);
        if (!VAR12)
            return FUN4(VAR16);
        VAR7 = VAR12;
    }
    VAR13 = FUN7(*VAR2, VAR7);
    if (VAR13 < 0)
    {
        FUN3(VAR8, VAR14, "", VAR6);
        if (VAR7)
            FUN3(VAR8, VAR14, "", VAR7);
        FUN3(VAR8, VAR14, "");
    }
    FUN8(VAR12);
    return VAR13;
}
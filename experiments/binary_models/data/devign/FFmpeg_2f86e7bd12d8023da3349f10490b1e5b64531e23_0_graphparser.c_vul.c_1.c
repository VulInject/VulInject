static int FUN1(VAR1 **VAR2, VAR3 *VAR4, int VAR5, const char *VAR6, const char *VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11;
    char VAR12[30];
    char VAR13[256];
    int VAR14;
    snprintf(VAR12, sizeof(VAR12), "", VAR5, VAR6);
    VAR11 = FUN2(VAR6);
    if (!VAR11)
    {
        FUN3(VAR9, VAR15, "", VAR6);
        return FUN4(VAR16);
    }
    VAR14 = FUN5(VAR2, VAR11, VAR12);
    if (!*VAR2)
    {
        FUN3(VAR9, VAR15, "", VAR6);
        return VAR14;
    }
    if ((VAR14 = FUN6(VAR4, *VAR2)) < 0)
    {
        FUN7(*VAR2);
        return VAR14;
    }
    if (!strcmp(VAR6, "") && !strstr(VAR7, ""))
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR7, VAR4->VAR17);
        VAR7 = VAR13;
    }
    if ((VAR14 = FUN8(*VAR2, VAR7, NULL)) < 0)
    {
        FUN3(VAR9, VAR15, "", VAR6, VAR7);
        return VAR14;
    }
    return 0;
}
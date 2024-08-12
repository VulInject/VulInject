static VAR1 *FUN1(VAR2 *VAR3, int VAR4, const char *VAR5, const char *VAR6, VAR7 *VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    char VAR12[30];
    snprintf(VAR12, sizeof(VAR12), "", VAR4);
    VAR11 = FUN2(VAR5);
    if (!VAR11)
    {
        FUN3(VAR8, VAR13, "", VAR5);
        return NULL;
    }
    VAR9 = FUN4(VAR11, VAR12);
    if (!VAR9)
    {
        FUN3(VAR8, VAR13, "", VAR5);
        return NULL;
    }
    if (FUN5(VAR3, VAR9) < 0)
        return NULL;
    if (FUN6(VAR9, VAR6, NULL))
    {
        FUN3(VAR8, VAR13, "", VAR5, VAR6);
        return NULL;
    }
    return VAR9;
}
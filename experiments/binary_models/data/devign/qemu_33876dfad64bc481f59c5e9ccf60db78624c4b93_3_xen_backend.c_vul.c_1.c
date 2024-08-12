static int FUN1(const char *VAR1, int VAR2, struct VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    char VAR7[VAR8], VAR9[VAR8];
    char **VAR10 = NULL, *VAR11;
    unsigned int VAR12, VAR13;
    VAR11 = FUN2(VAR14, 0);
    snprintf(VAR9, sizeof(VAR9), "", VAR1, VAR2, VAR4);
    snprintf(VAR7, sizeof(VAR7), "", VAR11, VAR1, VAR2);
    free(VAR11);
    if (!FUN3(VAR14, VAR7, VAR9))
    {
        FUN4(NULL, 0, "", VAR7);
        return -1;
    }
    VAR10 = FUN5(VAR14, 0, VAR7, &VAR12);
    if (!VAR10)
    {
        return 0;
    }
    for (VAR13 = 0; VAR13 < VAR12; VAR13++)
    {
        VAR6 = FUN6(VAR1, VAR2, FUN7(VAR10[VAR13]), VAR4);
        if (VAR6 == NULL)
        {
            continue;
        }
        FUN8(VAR6);
    }
    free(VAR10);
    return 0;
}
static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    unsigned int VAR5, VAR6, VAR7;
    char VAR8[80], *VAR9 = NULL;
    char **VAR10 = NULL;
    snprintf(VAR8, sizeof(VAR8), "", VAR11);
    VAR10 = FUN2(VAR2->VAR12, 0, VAR8, &VAR6);
    if (VAR10 == NULL)
        return;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR4 = FUN3(sizeof(VAR3));
        VAR4->VAR13 = FUN4(VAR10[VAR7], NULL, 16);
        snprintf(VAR8, sizeof(VAR8), "", VAR11, VAR10[VAR7]);
        VAR9 = FUN5(VAR2->VAR12, 0, VAR8, &VAR5);
        if (VAR9 == NULL)
        {
            free(VAR4);
            continue;
        }
        VAR4->VAR14 = FUN4(VAR9, NULL, 16);
        free(VAR9);
        snprintf(VAR8, sizeof(VAR8), "", VAR11, VAR10[VAR7]);
        VAR9 = FUN5(VAR2->VAR12, 0, VAR8, &VAR5);
        if (VAR9 == NULL)
        {
            free(VAR4);
            continue;
        }
        VAR4->VAR15 = FUN4(VAR9, NULL, 16);
        free(VAR9);
        snprintf(VAR8, sizeof(VAR8), "", VAR11, VAR10[VAR7]);
        VAR4->VAR16 = FUN5(VAR2->VAR12, 0, VAR8, &VAR5);
        FUN6(&VAR2->VAR4, VAR4, VAR17);
    }
    free(VAR10);
}
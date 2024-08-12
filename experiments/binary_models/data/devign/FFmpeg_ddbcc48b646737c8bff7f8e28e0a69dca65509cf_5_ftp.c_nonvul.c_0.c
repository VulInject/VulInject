static int FUN1(VAR1 *VAR2)
{
    const char *VAR3 = NULL, *VAR4 = NULL;
    char *VAR5 = NULL, VAR6[VAR7], VAR8[VAR9];
    int VAR10;
    const int VAR11[] = {331, 230, 500, 530, 0};
    const int VAR12[] = {230, 503, 530, 0};
    FUN2(VAR8, VAR2->VAR8, sizeof(VAR8));
    VAR3 = FUN3(VAR8, "", &VAR5);
    VAR4 = FUN3(VAR5, "", &VAR5);
    if (!VAR3)
    {
        VAR3 = "";
        VAR4 = VAR2->VAR13 ? VAR2->VAR13 : "";
    }
    snprintf(VAR6, sizeof(VAR6), "", VAR3);
    VAR10 = FUN4(VAR2, VAR6, VAR11, NULL);
    if (VAR10 == 331)
    {
        if (VAR4)
        {
            snprintf(VAR6, sizeof(VAR6), "", VAR4);
            VAR10 = FUN4(VAR2, VAR6, VAR12, NULL);
        }
        else
            return FUN5(VAR14);
    }
    if (VAR10 != 230)
        return FUN5(VAR14);
    return 0;
}
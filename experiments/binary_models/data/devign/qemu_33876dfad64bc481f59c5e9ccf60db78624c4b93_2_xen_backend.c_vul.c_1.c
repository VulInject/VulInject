static void FUN1(char *VAR1, char *VAR2, int VAR3, struct VAR4 *VAR5)
{
    struct VAR6 *VAR7;
    char VAR8[VAR9], *VAR10, *VAR11;
    unsigned int VAR12, VAR13;
    VAR10 = FUN2(VAR14, 0);
    VAR12 = snprintf(VAR8, sizeof(VAR8), "", VAR10, VAR2, VAR3);
    free(VAR10);
    if (FUN3(VAR8, VAR1, VAR12) != 0)
    {
        return;
    }
    if (sscanf(VAR1 + VAR12, "", &VAR13, VAR8) != 2)
    {
        strcpy(VAR8, "");
        if (sscanf(VAR1 + VAR12, "", &VAR13) != 1)
        {
            VAR13 = -1;
        }
    }
    if (VAR13 == -1)
    {
        return;
    }
    VAR7 = FUN4(VAR2, VAR3, VAR13, VAR5);
    if (VAR7 != NULL)
    {
        VAR11 = FUN5(VAR14, 0, VAR7->VAR15, &VAR12);
        if (VAR11 == NULL)
        {
            FUN6(VAR3, VAR13);
        }
        else
        {
            free(VAR11);
            FUN7(VAR7, VAR8);
            FUN8(VAR7);
        }
    }
}
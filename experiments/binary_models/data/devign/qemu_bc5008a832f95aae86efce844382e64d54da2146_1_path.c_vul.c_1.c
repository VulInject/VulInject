void FUN1(const char *VAR1)
{
    char VAR2[VAR3];
    if (VAR1[0] == '' || !strcmp(VAR1, ""))
        return;
    if (VAR1[0] != '')
    {
        char *VAR4 = FUN2(NULL, 0);
        size_t VAR5 = sizeof(VAR2);
        if (!VAR4)
            FUN3();
        FUN4(VAR2, sizeof(VAR2), VAR4);
        FUN5(VAR2, VAR5, "");
        FUN5(VAR2, VAR5, VAR1);
        free(VAR4);
    }
    else
        FUN4(VAR2, sizeof(VAR2), VAR1 + 1);
    VAR6 = FUN6("", NULL, VAR2);
    VAR6 = FUN7(VAR6);
    if (VAR6->VAR7 == 0)
    {
        FUN8(VAR6->VAR8);
        free(VAR6->VAR9);
        free(VAR6);
        VAR6 = NULL;
    }
    else
    {
        FUN9(VAR6, VAR6);
    }
}
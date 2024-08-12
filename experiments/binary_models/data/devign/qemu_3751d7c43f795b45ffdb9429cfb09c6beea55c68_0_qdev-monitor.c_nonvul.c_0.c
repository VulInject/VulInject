int FUN1(const char *VAR1)
{
    char VAR2[64], VAR3[64];
    VAR4 *VAR5;
    int VAR6, VAR7;
    VAR6 = sscanf(VAR1, "", VAR2, VAR3, &VAR7);
    if (VAR6 == 2 && VAR1[VAR7] == '')
    {
        VAR5 = FUN2(&VAR8, NULL, 0, &VAR9);
        FUN3(VAR5, "", VAR2, &VAR9);
        FUN3(VAR5, "", VAR3, &VAR9);
        FUN3(VAR5, "", VAR1 + VAR7 + 1, &VAR9);
        return 0;
    }
    VAR5 = FUN4(&VAR8, VAR1, false);
    if (!VAR5)
    {
        return -1;
    }
    return 0;
}
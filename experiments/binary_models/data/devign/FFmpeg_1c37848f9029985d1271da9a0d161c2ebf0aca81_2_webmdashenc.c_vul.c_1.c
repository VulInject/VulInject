static int FUN1(char *VAR1, char **VAR2, char **VAR3, char **VAR4)
{
    char *VAR5 = NULL;
    char *VAR6 = NULL;
    char *VAR7 = NULL;
    char *VAR8 = FUN2(VAR1);
    if (!VAR8)
        return FUN3(VAR9);
    VAR7 = FUN4(VAR8, "");
    while (VAR7)
    {
        VAR5 = VAR7 + 1;
        VAR7 = FUN4(VAR7 + 1, "");
    }
    if (!VAR5)
        return -1;
    VAR6 = FUN4(VAR5, "");
    if (!VAR6)
        return -1;
    *(VAR5 - 1) = 0;
    if (VAR2)
    {
        *VAR2 = FUN5(VAR6 - VAR5 + 1);
        if (!(*VAR2))
            return FUN3(VAR9);
        FUN6(*VAR2, VAR5, VAR6 - VAR5 + 1);
    }
    if (VAR3)
    {
        *VAR3 = FUN7("", VAR8);
        if (!(*VAR3))
            return FUN3(VAR9);
    }
    if (VAR4)
    {
        *VAR4 = FUN7("", VAR8);
        if (!(*VAR4))
            return FUN3(VAR9);
    }
    FUN8(VAR8);
    return 0;
}
static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4, VAR5;
    char VAR6[256], VAR7[256];
    const char *VAR8 = FUN2(VAR3, "");
    if (VAR8 == NULL)
    {
        fprintf(VAR9, "");
        return NULL;
    }
    snprintf(VAR6, 256, "", VAR8);
    snprintf(VAR7, 256, "", VAR8);
    FUN3(VAR4 = open(VAR6, VAR10 | VAR11));
    FUN3(VAR5 = open(VAR7, VAR10 | VAR11));
    if (VAR4 < 0 || VAR5 < 0)
    {
        if (VAR4 >= 0)
            close(VAR4);
        if (VAR5 >= 0)
            close(VAR5);
        FUN3(VAR4 = VAR5 = open(VAR8, VAR10 | VAR11));
        if (VAR4 < 0)
            return NULL;
    }
    return FUN4(VAR4, VAR5);
}
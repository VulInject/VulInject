static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4, VAR5;
    char VAR6[256], VAR7[256];
    const char *VAR8 = VAR3->VAR9;
    if (VAR8 == NULL)
    {
        fprintf(VAR10, "");
        return NULL;
    }
    snprintf(VAR6, 256, "", VAR8);
    snprintf(VAR7, 256, "", VAR8);
    FUN2(VAR4 = FUN3(VAR6, VAR11 | VAR12));
    FUN2(VAR5 = FUN3(VAR7, VAR11 | VAR12));
    if (VAR4 < 0 || VAR5 < 0)
    {
        if (VAR4 >= 0)
            close(VAR4);
        if (VAR5 >= 0)
            close(VAR5);
        FUN2(VAR4 = VAR5 = FUN3(VAR8, VAR11 | VAR12));
        if (VAR4 < 0)
        {
            return NULL;
        }
    }
    return FUN4(VAR4, VAR5);
}
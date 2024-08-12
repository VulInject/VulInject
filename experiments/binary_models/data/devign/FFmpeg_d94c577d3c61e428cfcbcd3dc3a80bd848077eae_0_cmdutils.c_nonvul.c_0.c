int FUN1(const char *VAR1, char **VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = fopen(VAR1, "");
    if (!VAR7)
    {
        FUN2(NULL, VAR8, "", VAR1, strerror(VAR9));
        return FUN3(VAR9);
    }
    FUN4(VAR7, 0, VAR10);
    *VAR4 = FUN5(VAR7);
    FUN4(VAR7, 0, VAR11);
    *VAR2 = FUN6(*VAR4 + 1);
    if (!*VAR2)
    {
        FUN2(NULL, VAR8, "");
        fclose(VAR7);
        return FUN3(VAR12);
    }
    VAR5 = fread(*VAR2, 1, *VAR4, VAR7);
    if (VAR5 < *VAR4)
    {
        FUN7(*VAR2);
        if (FUN8(VAR7))
        {
            FUN2(NULL, VAR8, "", VAR1, strerror(VAR9));
            VAR5 = FUN3(VAR9);
        }
        else
            VAR5 = VAR13;
    }
    else
    {
        VAR5 = 0;
        (*VAR2)[*VAR4++] = '';
    }
    fclose(VAR7);
    return VAR5;
}
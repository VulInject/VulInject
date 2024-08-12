static void FUN1(const char *VAR1)
{
    int VAR2 = 0, VAR3 = 0;
    double VAR4 = 0;
    const char *VAR5;
    char *VAR6;
    VAR5 = strchr(VAR1, '');
    if (VAR5)
    {
        VAR2 = FUN2(VAR1, &VAR6, 10);
        if (VAR6 == VAR5)
            VAR3 = FUN2(VAR6 + 1, &VAR6, 10);
        if (VAR2 > 0 && VAR3 > 0)
            VAR4 = (double)VAR2 / (double)VAR3;
    }
    else
        VAR4 = FUN3(VAR1, NULL);
    if (!VAR4)
    {
        fprintf(VAR7, "");
        FUN4(1);
    }
    VAR8 = VAR4;
    VAR2 = VAR9 ? strlen(VAR9) : 0;
    VAR9 = FUN5(VAR9, VAR2 + 100);
    snprintf(VAR9 + VAR2, VAR2 + 100, "", VAR2 ? '' : '', VAR4);
}
static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    const char *VAR5;
    const char *VAR6;
    VAR3 *VAR7 = NULL;
    int VAR8;
    FUN2(VAR2, "", VAR9, &VAR4);
    VAR5 = VAR4;
    while (VAR5 != NULL && *VAR5 != '')
    {
        VAR5 = strchr(VAR5, '');
        if (!VAR5)
            break;
        VAR5 = VAR5 + 1;
        while (FUN3(*VAR5))
            VAR5++;
        if (!FUN4(VAR5, "", &VAR5))
        {
            VAR6 = strchr(VAR5, '');
            if (VAR6)
                VAR8 = VAR6 - VAR5 - 1;
            else
                VAR8 = strlen(VAR5);
            VAR7 = FUN5(VAR5, VAR8);
            break;
        }
    }
    FUN6(&VAR4);
    return VAR7;
}
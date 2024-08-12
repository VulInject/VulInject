int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    const char *VAR8;
    FUN2(""
           ""
           ""
           "");
    VAR8 = "";
    for (;;)
    {
        int VAR9 = 0;
        int VAR10 = 0;
        const char *VAR11 = NULL;
        const char *VAR12 = NULL;
        while ((VAR7 = FUN3(VAR7)))
        {
            if ((!VAR11 || strcmp(VAR7->VAR11, VAR11) < 0) && strcmp(VAR7->VAR11, VAR8) > 0)
            {
                VAR11 = VAR7->VAR11;
                VAR12 = VAR7->VAR12;
                VAR10 = 1;
            }
        }
        while ((VAR5 = FUN4(VAR5)))
        {
            if ((!VAR11 || strcmp(VAR5->VAR11, VAR11) < 0) && strcmp(VAR5->VAR11, VAR8) > 0)
            {
                VAR11 = VAR5->VAR11;
                VAR12 = VAR5->VAR12;
                VAR10 = 0;
            }
            if (VAR11 && strcmp(VAR5->VAR11, VAR11) == 0)
                VAR9 = 1;
        }
        if (!VAR11)
            break;
        VAR8 = VAR11;
        FUN2("", VAR9 ? "" : "", VAR10 ? "" : "", VAR11, VAR12 ? VAR12 : "");
    }
    return 0;
}
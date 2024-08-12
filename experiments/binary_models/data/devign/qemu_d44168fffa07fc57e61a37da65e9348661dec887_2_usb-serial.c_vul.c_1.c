static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    uint32_t VAR6 = 0, VAR7 = 0;
    char VAR8[32];
    static int VAR9;
    while (*VAR2 && *VAR2 != '')
    {
        const char *VAR10;
        char *VAR11;
        if (FUN2(VAR2, "", &VAR10))
        {
            VAR6 = FUN3(VAR10, &VAR11, 16);
            if (VAR11 == VAR10 || (*VAR11 && *VAR11 != '' && *VAR11 != ''))
            {
                FUN4("", VAR10);
                VAR2 = VAR11;
            }
            else if (FUN2(VAR2, "", &VAR10))
            {
                VAR7 = FUN3(VAR10, &VAR11, 16);
                if (VAR11 == VAR10 || (*VAR11 && *VAR11 != '' && *VAR11 != ''))
                {
                    FUN4("", VAR10);
                    VAR2 = VAR11;
                }
                else
                {
                    FUN4("", VAR2);
                    while (*VAR2 == '')
                        VAR2++;
                    if (!*VAR2)
                    {
                        FUN4("");
                        VAR2++;
                        snprintf(VAR8, sizeof(VAR8), "", VAR9++);
                        VAR5 = FUN5(VAR8, VAR2, NULL);
                        if (!VAR5)
                            VAR3 = FUN6(NULL, "");
                        FUN7(&VAR3->VAR12, "", VAR5);
                        if (VAR6)
                            FUN8(&VAR3->VAR12, "", VAR6);
                        if (VAR7)
                            FUN8(&VAR3->VAR12, "", VAR7);
                        FUN9(&VAR3->VAR12);
                        return VAR3;
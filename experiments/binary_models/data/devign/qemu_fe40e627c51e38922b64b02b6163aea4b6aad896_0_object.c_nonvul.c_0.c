static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR1 **VAR9 = VAR5;
    bool VAR10 = false;
    const char *VAR11;
    char *VAR12;
    VAR11 = FUN2(VAR2, VAR6, NULL);
    FUN3(VAR4, &VAR12, VAR6, VAR8);
    if (*VAR9)
    {
        FUN4(*VAR9);
    }
    if (strcmp(VAR12, "") != 0)
    {
        VAR1 *VAR13;
        VAR13 = FUN5(VAR12, &VAR10);
        if (VAR13)
        {
            VAR14 *VAR15;
            VAR15 = FUN6(&VAR11[5]);
            VAR15[strlen(VAR15) - 2] = 0;
            if (FUN7(VAR13, VAR15))
            {
                FUN8(VAR13);
                *VAR9 = VAR13;
            }
            else
            {
                FUN9(VAR8, VAR16, VAR6, VAR11);
            }
            FUN10(VAR15);
        }
        else
        {
            FUN9(VAR8, VAR17, VAR12);
        }
    }
    else
    {
        *VAR9 = NULL;
    }
    FUN10(VAR12);
}
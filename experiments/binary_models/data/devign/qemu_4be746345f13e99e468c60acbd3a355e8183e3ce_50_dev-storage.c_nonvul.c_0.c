static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    static int VAR5 = 0;
    char VAR6[8];
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR1 *VAR11;
    const char *VAR12;
    char VAR13[32];
    do
    {
        snprintf(VAR6, sizeof(VAR6), "", VAR5++);
        VAR8 = FUN2(FUN3(""), VAR6, 1, NULL);
    } while (!VAR8);
    VAR12 = strchr(VAR4, '');
    if (VAR12++)
    {
        const char *VAR14;
        if (FUN4(VAR4, "", &VAR14))
        {
            int VAR15 = FUN5(VAR12 - VAR14, sizeof(VAR13));
            FUN6(VAR13, VAR15, VAR14);
            FUN7(VAR8, "", VAR13);
        }
        else if (*VAR4 != '')
        {
            FUN8("", VAR4);
            return NULL;
        }
        VAR4 = VAR12;
    }
    if (!*VAR4)
    {
        FUN8("");
        return NULL;
    }
    FUN7(VAR8, "", VAR4);
    FUN7(VAR8, "", "");
    VAR10 = FUN9(VAR8, 0);
    if (!VAR10)
    {
        FUN10(VAR8);
        return NULL;
    }
    VAR11 = FUN11(VAR3, "");
    if (!VAR11)
    {
        return NULL;
    }
    if (FUN12(&VAR11->VAR16, "", FUN13(VAR10)) < 0)
    {
        FUN14(FUN15(VAR11));
        return NULL;
    }
    if (FUN16(&VAR11->VAR16) < 0)
        return NULL;
    return VAR11;
}
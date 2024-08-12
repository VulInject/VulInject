static int FUN1(VAR1 *VAR2, char **VAR3, const char *VAR4, const char *VAR5)
{
    int VAR6 = 0;
    char *VAR7, *VAR8, *VAR9 = FUN2(VAR2->VAR3), *VAR10 = VAR9;
    if (!VAR9)
        return FUN3(VAR11);
    *VAR3 = NULL;
    while ((VAR8 = FUN4(VAR9, "", &VAR7)))
    {
        int VAR12 = 0;
        char *VAR13, *VAR14, *VAR15 = NULL, *VAR16 = NULL, *VAR17 = NULL;
        VAR9 = NULL;
        while ((VAR13 = FUN4(VAR8, "", &VAR14)))
        {
            VAR8 = NULL;
            if (!FUN5("", VAR13, 5))
            {
                VAR16 = FUN2(&VAR13[5]);
            }
            else if (!FUN5("", VAR13, 7))
            {
                VAR15 = FUN2(&VAR13[7]);
            }
            else if (!FUN5("", VAR13, 6) || !FUN5("", VAR13, 7) || !FUN5("", VAR13, 7) || !FUN5("", VAR13, 7))
            {
            }
            else
            {
                FUN6(VAR17);
                VAR17 = FUN2(VAR13);
            }
        }
        if (!VAR15 || !VAR16 || !VAR17)
        {
            FUN7(VAR2, VAR18, "");
            goto VAR19;
        }
        if (FUN5(VAR4, VAR16, strlen(VAR16)))
            goto VAR19;
        VAR12 = strlen(VAR5) - strlen(VAR15);
        if (VAR12 < 0)
            goto VAR19;
        if (FUN8(&VAR5[VAR12], VAR15))
            goto VAR19;
        if (!*VAR3)
        {
            if (!(*VAR3 = FUN2(VAR17)))
            {
                VAR6 = FUN3(VAR20);
                goto VAR19;
            }
        }
        else
        {
            char *VAR21 = *VAR3;
            size_t VAR22 = strlen(VAR17) + strlen(*VAR3) + 3;
            if (!(*VAR3 = FUN9(VAR22)))
            {
                VAR6 = FUN3(VAR20);
                goto VAR19;
            }
            snprintf(*VAR3, VAR22, "", VAR21, VAR17);
            FUN6(VAR21);
        }
    VAR19:
        FUN6(VAR17);
        if (VAR6 < 0)
        {
            if (*VAR3)
                FUN10(VAR3);
            FUN6(VAR10);
            return VAR6;
        }
    }
    FUN6(VAR10);
    return 0;
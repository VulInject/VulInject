static void FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    const char *VAR6;
    char *VAR7, *VAR8, *VAR9;
    char *VAR10;
    size_t VAR11;
    if (!FUN2(VAR1, "", &VAR6))
    {
        FUN3(VAR5, "");
        return;
    }
    VAR11 = strlen(VAR6) + 1;
    VAR8 = FUN4(VAR6);
    VAR9 = FUN5(VAR11);
    VAR7 = VAR8;
    VAR10 = FUN6(VAR7, '', &VAR7);
    if (!VAR7)
    {
        FUN3(VAR5, "");
        goto VAR12;
    }
    FUN7(VAR10);
    FUN8(VAR3, "", FUN9(VAR10));
    if (strchr(VAR7, ''))
    {
        VAR10 = FUN6(VAR7, '', &VAR7);
        FUN7(VAR10);
        FUN8(VAR3, "", FUN9(VAR10));
        VAR10 = FUN6(VAR7, '', &VAR7);
        FUN7(VAR10);
        FUN8(VAR3, "", FUN9(VAR10));
    }
    else
    {
        VAR10 = FUN6(VAR7, '', &VAR7);
        FUN7(VAR10);
        FUN8(VAR3, "", FUN9(VAR10));
    }
    if (!VAR7)
    {
        goto VAR12;
    }
    VAR10 = FUN6(VAR7, '', &VAR7);
    VAR7 = VAR10;
    while (VAR7)
    {
        char *VAR13, *VAR14;
        VAR13 = FUN6(VAR7, '', &VAR7);
        if (!VAR7)
        {
            FUN3(VAR5, "", VAR13);
            break;
        }
        FUN7(VAR13);
        VAR14 = FUN6(VAR7, '', &VAR7);
        FUN7(VAR14);
        if (!strcmp(VAR13, ""))
        {
            FUN8(VAR3, "", FUN9(VAR14));
        }
        else if (!strcmp(VAR13, ""))
        {
            FUN8(VAR3, "", FUN9(VAR14));
        }
        else
        {
            char *VAR15 = FUN5(VAR11);
            if (VAR9[0])
            {
                snprintf(VAR15, VAR11, "", VAR13, VAR14);
                FUN10(VAR9, VAR11, VAR15);
            }
            else
            {
                snprintf(VAR9, VAR11, "", VAR13, VAR14);
            }
            FUN11(VAR15);
        }
    }
    if (VAR9[0])
    {
        FUN8(VAR3, "", FUN9(VAR9));
    }
VAR12:
    FUN11(VAR8);
    FUN11(VAR9);
    return;
}
void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    const char *VAR5;
    char *VAR6 = NULL;
    VAR5 = FUN2(VAR2, "");
    if (!VAR5)
    {
        if (FUN2(VAR2, "") != NULL)
        {
            FUN3(VAR4, "");
        }
        return;
    }
    VAR7 = FUN4(VAR2, "", true);
    if (VAR7)
    {
        VAR8 = FUN5(VAR9, VAR10, NULL);
    }
    VAR11 = FUN4(VAR2, "", false);
    if (VAR11 && !VAR7)
    {
        FUN3(VAR4, "");
    }
    if (strcmp(VAR5, "") != 0)
    {
        VAR12 = 0;
        VAR13 = FUN6(VAR5, &VAR6, 0);
        if (VAR12 != 0 || *VAR6 != '' || !strlen(VAR5))
        {
            FUN3(VAR4, "");
        }
        VAR14 = 1;
        return;
    }
    else if (VAR11)
    {
        FUN3(VAR4, "");
    }
    else if (!VAR7)
    {
        FUN3(VAR4, "");
    }
    VAR14 = 2;
    VAR13 = 3;
    VAR15 = FUN7(VAR9, VAR16, NULL);
    FUN8(VAR15, FUN9(VAR9) + 1000);
    VAR17 = FUN5(VAR18, VAR19, NULL);
    FUN8(VAR17, FUN10(VAR18) + FUN11() / 10);
}
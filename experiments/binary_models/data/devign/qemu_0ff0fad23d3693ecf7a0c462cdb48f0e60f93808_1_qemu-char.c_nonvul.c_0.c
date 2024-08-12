static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    OVERLAPPED VAR9;
    int VAR10;
    DWORD VAR11;
    char *VAR12;
    VAR7->VAR13 = VAR14;
    VAR7->VAR15 = FUN2(NULL, VAR14, VAR16, NULL);
    if (!VAR7->VAR15)
    {
        FUN3(VAR5, "");
        goto VAR17;
    }
    VAR7->VAR18 = FUN2(NULL, VAR14, VAR16, NULL);
    if (!VAR7->VAR18)
    {
        FUN3(VAR5, "");
        goto VAR17;
    }
    VAR12 = FUN4("", VAR3);
    VAR7->VAR19 = FUN5(VAR12, VAR20 | VAR21, VAR22 | VAR23 | VAR24, VAR25, VAR26, VAR27, VAR28, NULL);
    FUN6(VAR12);
    if (VAR7->VAR19 == VAR29)
    {
        FUN3(VAR5, "", FUN7());
        VAR7->VAR19 = NULL;
        goto VAR17;
    }
    FUN8(&VAR9, sizeof(VAR9));
    VAR9.VAR30 = FUN2(NULL, VAR14, VAR16, NULL);
    VAR10 = FUN9(VAR7->VAR19, &VAR9);
    if (VAR10)
    {
        FUN3(VAR5, "");
        goto VAR17;
    }
    VAR10 = FUN10(VAR7->VAR19, &VAR9, &VAR11, VAR14);
    if (!VAR10)
    {
        FUN3(VAR5, "");
        if (VAR9.VAR30)
        {
            FUN11(VAR9.VAR30);
            VAR9.VAR30 = NULL;
        }
        goto VAR17;
    }
    if (VAR9.VAR30)
    {
        FUN11(VAR9.VAR30);
        VAR9.VAR30 = NULL;
    }
    FUN12(VAR31, VAR2);
    return 0;
VAR17:
    FUN13(VAR2);
    return -1;
}
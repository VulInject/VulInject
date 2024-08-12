void FUN1(const char *VAR1)
{
    int VAR2;
    char VAR3[256], *VAR4;
    const char *VAR5;
    struct in_addr VAR6;
    int VAR7, VAR8;
    if (!VAR9)
    {
        VAR9 = 1;
        FUN2(VAR10, VAR11);
    }
    VAR5 = VAR1;
    if (FUN3(VAR3, sizeof(VAR3), &VAR5, '') < 0)
        goto VAR12;
    if (!strcmp(VAR3, ""))
    {
        VAR2 = 0;
    }
    else if (!strcmp(VAR3, ""))
    {
        VAR2 = 1;
    }
    else
    {
        goto VAR12;
    }
    if (FUN3(VAR3, sizeof(VAR3), &VAR5, '') < 0)
        goto VAR12;
    VAR7 = FUN4(VAR3, &VAR4, 0);
    if (VAR4 == VAR3)
        goto VAR12;
    if (FUN3(VAR3, sizeof(VAR3), &VAR5, '') < 0)
        goto VAR12;
    if (VAR3[0] == '')
    {
        FUN5(VAR3, sizeof(VAR3), "");
    }
    if (!FUN6(VAR3, &VAR6))
        goto VAR12;
    VAR8 = FUN4(VAR5, &VAR4, 0);
    if (VAR4 == VAR5)
        goto VAR12;
    if (FUN7(VAR2, VAR7, VAR6, VAR8) < 0)
    {
        fprintf(VAR13, "");
        FUN8(1);
    }
    return;
VAR12:
    fprintf(VAR13, "");
    FUN8(1);
}
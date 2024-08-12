static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    struct in_addr VAR5 = {.VAR6 = VAR7};
    struct in_addr VAR8 = {.VAR6 = 0};
    int VAR9, VAR10;
    const char *VAR11;
    char VAR12[256];
    int VAR13;
    char *VAR14;
    VAR11 = VAR3;
    if (!VAR11 || FUN2(VAR12, sizeof(VAR12), &VAR11, '') < 0)
    {
        goto VAR15;
    }
    if (!strcmp(VAR12, "") || VAR12[0] == '')
    {
        VAR13 = 0;
    }
    else if (!strcmp(VAR12, ""))
    {
        VAR13 = 1;
    }
    else
    {
        goto VAR15;
    }
    if (!VAR4)
    {
        if (FUN2(VAR12, sizeof(VAR12), &VAR11, '') < 0)
        {
            goto VAR15;
        }
        if (VAR12[0] != '' && !FUN3(VAR12, &VAR5))
        {
            goto VAR15;
        }
    }
    if (FUN2(VAR12, sizeof(VAR12), &VAR11, VAR4 ? '' : '') < 0)
    {
        goto VAR15;
    }
    VAR9 = FUN4(VAR12, &VAR14, 0);
    if (*VAR14 != '' || VAR9 < 0 || VAR9 > 65535)
    {
        goto VAR15;
    }
    if (FUN2(VAR12, sizeof(VAR12), &VAR11, '') < 0)
    {
        goto VAR15;
    }
    if (VAR12[0] != '' && !FUN3(VAR12, &VAR8))
    {
        goto VAR15;
    }
    VAR10 = FUN4(VAR11, &VAR14, 0);
    if (*VAR14 != '' || VAR10 < 1 || VAR10 > 65535)
    {
        goto VAR15;
    }
    if (FUN5(VAR2->VAR16, VAR13, VAR5, VAR9, VAR8, VAR10) < 0)
    {
        FUN6("", VAR3);
        return -1;
    }
    return 0;
VAR15:
    FUN6("", VAR3);
    return -1;
}
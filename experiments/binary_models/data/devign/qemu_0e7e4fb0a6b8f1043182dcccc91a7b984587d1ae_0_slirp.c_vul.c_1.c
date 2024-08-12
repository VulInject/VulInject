static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 **VAR6)
{
    struct in_addr VAR7 = {.VAR8 = VAR9};
    struct in_addr VAR10 = {.VAR8 = 0};
    int VAR11, VAR12;
    const char *VAR13;
    char VAR14[256];
    int VAR15;
    char *VAR16;
    VAR13 = VAR3;
    if (!VAR13 || FUN2(VAR14, sizeof(VAR14), &VAR13, '') < 0)
    {
        goto VAR17;
    }
    if (!strcmp(VAR14, "") || VAR14[0] == '')
    {
        VAR15 = 0;
    }
    else if (!strcmp(VAR14, ""))
    {
        VAR15 = 1;
    }
    else
    {
        goto VAR17;
    }
    if (!VAR4)
    {
        if (FUN2(VAR14, sizeof(VAR14), &VAR13, '') < 0)
        {
            goto VAR17;
        }
        if (VAR14[0] != '' && !FUN3(VAR14, &VAR7))
        {
            goto VAR17;
        }
    }
    if (FUN2(VAR14, sizeof(VAR14), &VAR13, VAR4 ? '' : '') < 0)
    {
        goto VAR17;
    }
    VAR11 = FUN4(VAR14, &VAR16, 0);
    if (*VAR16 != '' || VAR11 < 0 || VAR11 > 65535)
    {
        goto VAR17;
    }
    if (FUN2(VAR14, sizeof(VAR14), &VAR13, '') < 0)
    {
        goto VAR17;
    }
    if (VAR14[0] != '' && !FUN3(VAR14, &VAR10))
    {
        goto VAR17;
    }
    VAR12 = FUN4(VAR13, &VAR16, 0);
    if (*VAR16 != '' || VAR12 < 1 || VAR12 > 65535)
    {
        goto VAR17;
    }
    if (FUN5(VAR2->VAR18, VAR15, VAR7, VAR11, VAR10, VAR12) < 0)
    {
        FUN6(VAR6, "", VAR3);
        return -1;
    }
    return 0;
VAR17:
    FUN6(VAR6, "", VAR3);
    return -1;
}
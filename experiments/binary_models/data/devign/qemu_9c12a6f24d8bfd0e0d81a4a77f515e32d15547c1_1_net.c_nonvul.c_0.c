void FUN1(VAR1 *VAR2, const char *VAR3)
{
    struct in_addr VAR4 = {.VAR5 = VAR6};
    int VAR7;
    char VAR8[256] = "";
    const char *VAR9 = VAR3;
    int VAR10 = 0;
    int VAR11;
    if (!VAR12)
    {
        FUN2(VAR2, "");
        return;
    }
    if (!VAR3 || !VAR3[0])
        goto VAR13;
    FUN3(VAR8, sizeof(VAR8), &VAR9, '');
    if (!strcmp(VAR8, "") || VAR8[0] == '')
    {
        VAR10 = 0;
    }
    else if (!strcmp(VAR8, ""))
    {
        VAR10 = 1;
    }
    else
    {
        goto VAR13;
    }
    if (FUN3(VAR8, sizeof(VAR8), &VAR9, '') < 0)
    {
        goto VAR13;
    }
    if (VAR8[0] != '' && !FUN4(VAR8, &VAR4))
    {
        goto VAR13;
    }
    VAR7 = FUN5(VAR9);
    VAR11 = FUN6(VAR10, VAR4, VAR7);
    FUN2(VAR2, "", VAR3, VAR11 ? "" : "");
    return;
VAR13:
    FUN2(VAR2, "");
}
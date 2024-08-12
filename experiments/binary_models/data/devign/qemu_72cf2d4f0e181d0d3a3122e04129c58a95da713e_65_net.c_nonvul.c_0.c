void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    struct in_addr VAR5 = {.VAR6 = VAR7};
    int VAR8;
    char VAR9[256] = "";
    const char *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14 = 0;
    int VAR15;
    const char *VAR16 = FUN2(VAR4, "");
    const char *VAR17 = FUN3(VAR4, "");
    const char *VAR18 = FUN3(VAR4, "");
    if (VAR17)
    {
        VAR13 = FUN4(VAR2, VAR16, VAR17);
        VAR10 = VAR18;
    }
    else
    {
        VAR13 = FUN4(VAR2, NULL, NULL);
        VAR10 = VAR16;
    }
    if (!VAR13)
    {
        return;
    }
    if (!VAR10 || !VAR10[0])
        goto VAR19;
    VAR11 = VAR10;
    FUN5(VAR9, sizeof(VAR9), &VAR11, '');
    if (!strcmp(VAR9, "") || VAR9[0] == '')
    {
        VAR14 = 0;
    }
    else if (!strcmp(VAR9, ""))
    {
        VAR14 = 1;
    }
    else
    {
        goto VAR19;
    }
    if (FUN5(VAR9, sizeof(VAR9), &VAR11, '') < 0)
    {
        goto VAR19;
    }
    if (VAR9[0] != '' && !FUN6(VAR9, &VAR5))
    {
        goto VAR19;
    }
    VAR8 = FUN7(VAR11);
    VAR15 = FUN8(FUN9(&VAR20)->VAR21, VAR14, VAR5, VAR8);
    FUN10(VAR2, "", VAR10, VAR15 ? "" : "");
    return;
VAR19:
    FUN10(VAR2, "");
}
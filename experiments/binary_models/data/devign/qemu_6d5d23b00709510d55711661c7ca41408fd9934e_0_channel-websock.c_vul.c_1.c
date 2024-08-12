static void FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5)
{
    QIOChannelWebsockHTTPHeader VAR6[32];
    size_t VAR7 = FUN2(VAR6);
    const char *VAR8 = NULL, *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL, *VAR12 = NULL, *VAR13 = NULL;
    VAR7 = FUN3(VAR2, VAR3, VAR6, VAR7, VAR5);
    if (!VAR7)
    {
        return;
    }
    VAR8 = FUN4(VAR6, VAR7, VAR14);
    if (!VAR8)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    VAR9 = FUN4(VAR6, VAR7, VAR16);
    if (!VAR9)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    VAR10 = FUN4(VAR6, VAR7, VAR17);
    if (!VAR10)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    VAR11 = FUN4(VAR6, VAR7, VAR18);
    if (!VAR11)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    VAR12 = FUN4(VAR6, VAR7, VAR19);
    if (!VAR12)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    VAR13 = FUN4(VAR6, VAR7, VAR20);
    if (!VAR13)
    {
        FUN5(VAR5, "");
        goto VAR15;
    }
    if (!FUN6(VAR8, VAR21))
    {
        FUN5(VAR5, "", VAR21, VAR8);
        goto VAR15;
    }
    if (!FUN7(VAR9, VAR22))
    {
        FUN5(VAR5, "", VAR22, VAR9);
        goto VAR15;
    }
    if (strlen(VAR10) != VAR23)
    {
        FUN5(VAR5, "", strlen(VAR10), VAR23);
        goto VAR15;
    }
    if (FUN8(VAR12, VAR24) != 0)
    {
        FUN5(VAR5, "", VAR12);
        goto VAR15;
    }
    if (FUN8(VAR13, VAR25) != 0)
    {
        FUN5(VAR5, "", VAR13);
        goto VAR15;
    }
    FUN9(VAR2, VAR10, VAR5);
    return;
VAR15:
    FUN10(VAR2, VAR26);
}
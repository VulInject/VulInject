int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    struct addrinfo VAR5, *VAR6 = NULL, *VAR7 = NULL;
    const char *VAR8;
    const char *VAR9;
    int VAR10 = -1, VAR11;
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR12 = VAR13 | VAR14;
    VAR5.VAR15 = VAR16;
    VAR5.VAR17 = VAR18;
    VAR8 = FUN2(VAR2, "");
    VAR9 = FUN2(VAR2, "");
    if (VAR8 == NULL || strlen(VAR8) == 0)
    {
        VAR8 = "";
    }
    if (VAR9 == NULL || strlen(VAR9) == 0)
    {
        FUN3(VAR4, "");
        return -1;
    }
    if (FUN4(VAR2, "", 0))
        VAR5.VAR15 = VAR19;
    if (FUN4(VAR2, "", 0))
        VAR5.VAR15 = VAR20;
    if (0 != (VAR11 = getaddrinfo(VAR8, VAR9, &VAR5, &VAR6)))
    {
        FUN3(VAR4, "", VAR8, VAR9, FUN5(VAR11));
        return -1;
    }
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR12 = VAR21;
    VAR5.VAR15 = VAR6->VAR15;
    VAR5.VAR17 = VAR18;
    VAR8 = FUN2(VAR2, "");
    VAR9 = FUN2(VAR2, "");
    if (VAR8 == NULL || strlen(VAR8) == 0)
    {
        VAR8 = NULL;
    }
    if (!VAR9 || strlen(VAR9) == 0)
        VAR9 = "";
    if (0 != (VAR11 = getaddrinfo(VAR8, VAR9, &VAR5, &VAR7)))
    {
        FUN3(VAR4, "", VAR8, VAR9, FUN5(VAR11));
        goto VAR22;
    }
    VAR10 = FUN6(VAR6->VAR15, VAR6->VAR17, VAR6->VAR23);
    if (VAR10 < 0)
    {
        FUN7(VAR4, VAR24, "");
        goto VAR22;
    }
    FUN8(VAR10);
    if (FUN9(VAR10, VAR7->VAR25, VAR7->VAR26) < 0)
    {
        FUN7(VAR4, VAR24, "");
        goto VAR22;
    }
    if (connect(VAR10, VAR6->VAR25, VAR6->VAR26) < 0)
    {
        FUN7(VAR4, VAR24, "");
        goto VAR22;
    }
    FUN10(VAR7);
    FUN10(VAR6);
    return VAR10;
VAR22:
    if (-1 != VAR10)
        FUN11(VAR10);
    if (VAR7)
        FUN10(VAR7);
    if (VAR6)
        FUN10(VAR6);
    return -1;
}
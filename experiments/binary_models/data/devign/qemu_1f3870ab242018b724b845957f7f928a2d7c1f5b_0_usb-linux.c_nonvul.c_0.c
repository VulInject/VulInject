VAR1 *FUN1(const char *VAR2)
{
    int VAR3 = -1, VAR4;
    VAR5 *VAR6 = NULL;
    struct usbdevfs_connectinfo VAR7;
    char VAR8[1024];
    int VAR9, VAR10;
    char VAR11[VAR12];
    if (FUN2(&VAR9, &VAR10, VAR11, sizeof(VAR11), VAR2) < 0)
        return NULL;
    VAR6 = FUN3(sizeof(VAR5));
    if (!VAR6)
        goto VAR13;
    VAR6->VAR14 = FUN4(VAR15, VAR16, (void *)VAR6);
    if (!VAR6->VAR14)
        goto VAR13;
    FUN5("", VAR2);
    snprintf(VAR8, sizeof(VAR8), VAR17 "", VAR9, VAR10);
    VAR3 = open(VAR8, VAR18 | VAR19);
    if (VAR3 < 0)
    {
        FUN6(VAR8);
        goto VAR13;
    }
    VAR6->VAR20 = read(VAR3, VAR6->VAR21, sizeof(VAR6->VAR21));
    if (VAR6->VAR20 <= 0)
    {
        FUN6("");
        goto VAR13;
    }
    {
        int VAR22;
        FUN5("");
        for (VAR22 = 0; VAR22 < VAR6->VAR20; VAR22++)
            FUN5("", VAR6->VAR21[VAR22]);
        FUN5("");
    }
    VAR6->VAR3 = VAR3;
    VAR6->VAR23 = 1;
    if (!FUN7(VAR6, -1))
        goto VAR13;
    VAR4 = FUN8(VAR3, VAR24, &VAR7);
    if (VAR4 < 0)
    {
        FUN6("");
        goto VAR13;
    }
    FUN5("", VAR9, VAR10);
    VAR4 = FUN9(VAR6);
    if (VAR4)
        goto VAR13;
    if (VAR7.VAR25)
        VAR6->VAR6.VAR26 = VAR27;
    else
        VAR6->VAR6.VAR26 = VAR28;
    VAR6->VAR6.VAR29 = VAR30;
    VAR6->VAR6.VAR31 = VAR32;
    VAR6->VAR6.VAR33 = VAR34;
    VAR6->VAR6.VAR35 = VAR36;
    VAR6->VAR6.VAR37 = VAR38;
    if (VAR11[0] == '')
        snprintf(VAR6->VAR6.VAR2, sizeof(VAR6->VAR6.VAR2), "", VAR2);
    else
        FUN10(VAR6->VAR6.VAR2, sizeof(VAR6->VAR6.VAR2), VAR11);
    FUN11(&VAR39.VAR40);
    VAR39.VAR41 = VAR42;
    VAR39.VAR43 = VAR44;
    VAR39.VAR45 = 0;
    VAR4 = FUN12(VAR46, &VAR39, NULL);
    if (VAR4 < 0)
    {
        FUN6("");
        goto VAR13;
    }
    if (FUN13(VAR6->VAR47) < 0)
    {
        FUN6("");
        goto VAR13;
    }
    FUN14(VAR6->VAR47[0], VAR48, VAR19 | VAR49);
    FUN14(VAR6->VAR47[1], VAR48, VAR19);
    FUN15(VAR6->VAR47[0], VAR50, NULL, VAR6);
    FUN16(VAR6->VAR14, FUN17(VAR15) + 1000);
    VAR6->VAR51 = 0;
    return (VAR1 *)VAR6;
VAR13:
    if (VAR6)
    {
        if (VAR6->VAR14)
            FUN18(VAR6->VAR14);
        FUN19(VAR6);
    }
    close(VAR3);
    return NULL;
}
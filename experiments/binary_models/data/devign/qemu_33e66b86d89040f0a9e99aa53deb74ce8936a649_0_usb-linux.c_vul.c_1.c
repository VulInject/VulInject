static VAR1 *FUN1(int VAR2, int VAR3, const char *VAR4)
{
    int VAR5 = -1, VAR6;
    VAR1 *VAR7 = NULL;
    VAR8 *VAR9;
    struct usbdevfs_connectinfo VAR10;
    char VAR11[1024];
    FUN2("", VAR2, VAR3);
    if (!VAR12)
    {
        FUN3("");
        goto VAR13;
    }
    snprintf(VAR11, sizeof(VAR11), "", VAR12, VAR2, VAR3);
    VAR5 = open(VAR11, VAR14 | VAR15);
    if (VAR5 < 0)
    {
        FUN3(VAR11);
        goto VAR13;
    }
    FUN4("", VAR11);
    VAR7 = FUN5(NULL, "");
    VAR9 = FUN6(VAR8, VAR9, VAR7);
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR5 = VAR5;
    VAR9->VAR16 = read(VAR5, VAR9->VAR17, sizeof(VAR9->VAR17));
    if (VAR9->VAR16 <= 0)
    {
        FUN3("");
        goto VAR13;
    }
    {
        int VAR18;
        FUN2("");
        for (VAR18 = 0; VAR18 < VAR9->VAR16; VAR18++)
            FUN2("", VAR9->VAR17[VAR18]);
        FUN2("");
    }
    if (!FUN7(VAR9, -1))
        goto VAR13;
    VAR6 = FUN8(VAR5, VAR19, &VAR10);
    if (VAR6 < 0)
    {
        FUN3("");
        goto VAR13;
    }
    FUN2("", VAR2, VAR3);
    VAR6 = FUN9(VAR9);
    if (VAR6)
        goto VAR13;
    if (VAR10.VAR20)
        VAR9->VAR9.VAR21 = VAR22;
    else
        VAR9->VAR9.VAR21 = VAR23;
    if (!VAR4 || VAR4[0] == '')
        snprintf(VAR9->VAR9.VAR24, sizeof(VAR9->VAR9.VAR24), "", VAR2, VAR3);
    else
        FUN10(VAR9->VAR9.VAR24, sizeof(VAR9->VAR9.VAR24), VAR4);
    FUN11(VAR9->VAR5, NULL, VAR25, VAR9);
    FUN12(VAR9);
    FUN13(&VAR7->VAR26);
    return (VAR1 *)VAR9;
VAR13:
    if (VAR7)
        FUN14(&VAR7->VAR26);
    if (VAR5 != -1)
        close(VAR5);
    return NULL;
}
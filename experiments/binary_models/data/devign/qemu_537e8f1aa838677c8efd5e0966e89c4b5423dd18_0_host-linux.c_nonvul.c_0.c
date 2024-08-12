static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const char *VAR5, const char *VAR6, int VAR7)
{
    int VAR8 = -1, VAR9;
    FUN2(VAR3, VAR4);
    if (VAR2->VAR8 != -1)
    {
        goto VAR10;
    }
    VAR8 = FUN3(VAR3, VAR4);
    if (VAR8 < 0)
    {
        goto VAR10;
    }
    FUN4("", VAR11);
    VAR2->VAR3 = VAR3;
    VAR2->VAR4 = VAR4;
    strcpy(VAR2->VAR5, VAR5);
    VAR2->VAR8 = VAR8;
    VAR2->VAR12 = read(VAR8, VAR2->VAR13, sizeof(VAR2->VAR13));
    if (VAR2->VAR12 <= 0)
    {
        FUN5("");
        goto VAR10;
    }
    {
        int VAR14;
        FUN6("");
        for (VAR14 = 0; VAR14 < VAR2->VAR12; VAR14++)
        {
            FUN6("", VAR2->VAR13[VAR14]);
        }
        FUN6("");
    }
    if (!FUN7(VAR2, 0))
    {
        goto VAR10;
    }
    FUN8(&VAR2->VAR2);
    FUN9(VAR2);
    if (VAR7 == -1)
    {
        struct usbdevfs_connectinfo VAR15;
        VAR9 = FUN10(VAR8, VAR16, &VAR15);
        if (VAR9 < 0)
        {
            FUN5("");
            goto VAR10;
        }
        if (VAR15.VAR17)
        {
            VAR7 = VAR18;
        }
        else
        {
            VAR7 = VAR19;
        }
    }
    VAR2->VAR2.VAR7 = VAR7;
    VAR2->VAR2.VAR20 = (1 << VAR7);
    if (VAR2->VAR2.VAR7 == VAR19 && FUN11(VAR2))
    {
        VAR2->VAR2.VAR20 |= VAR21;
    }
    FUN12(VAR3, VAR4);
    if (!VAR6 || VAR6[0] == '')
    {
        snprintf(VAR2->VAR2.VAR22, sizeof(VAR2->VAR2.VAR22), "", VAR3, VAR4);
    }
    else
    {
        FUN13(VAR2->VAR2.VAR22, sizeof(VAR2->VAR2.VAR22), VAR6);
    }
    VAR9 = FUN14(&VAR2->VAR2);
    if (VAR9)
    {
        goto VAR10;
    }
    FUN15(VAR2->VAR8, NULL, VAR23, VAR2);
    return 0;
VAR10:
    FUN16(VAR3, VAR4);
    if (VAR2->VAR8 != -1)
    {
        close(VAR2->VAR8);
        VAR2->VAR8 = -1;
    }
    return -1;
}